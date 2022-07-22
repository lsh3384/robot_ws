import time

import rclpy
from msg_srv_interface_py_test.msg import Coordinates
from msg_srv_interface_py_test.srv import Conversion
from msg_srv_action_interface_py_test.action import CoordinatesChecker
from rclpy.action import ActionServer
from rclpy.callback_groups import ReentrantCallbackGroup
from rclpy.node import Node
from rclpy.qos import QoSDurabilityPolicy
from rclpy.qos import QoSHistoryPolicy
from rclpy.qos import QoSProfile
from rclpy.qos import QoSReliabilityPolicy

from rclpy.executors import MultiThreadedExecutor


class Manager(Node):

    def __init__(self):
        super().__init__('manager')
        self.coordinate_x = 0
        self.coordinate_y = 0
        self.cm = 0.0
        self.inch = 0.0
        self.str_position = ''

        self.callback_group = ReentrantCallbackGroup()

        self.declare_parameter('qos_depth', 10)
        qos_depth = self.get_parameter('qos_depth').value

        QOS_RKL10V = QoSProfile(
            reliability=QoSReliabilityPolicy.RELIABLE,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=qos_depth,
            durability=QoSDurabilityPolicy.VOLATILE)

        self.coordinate_subscriber = self.create_subscription(
            Coordinates,
            'position',
            self.get_coordinates,
            QOS_RKL10V,
            callback_group=self.callback_group)

        self.conversion_service_server = self.create_service(
            Conversion,
            'converter',
            self.get_inch,
            callback_group=self.callback_group)

        self.coordinate_action_server = ActionServer(
            self,
            CoordinatesChecker,
            'coordinates_checker',
            self.execute_coordinates_checker,
            callback_group=self.callback_group)


    def get_coordinates(self, msg):
        self.coordinate_x = msg.coordinate_x
        self.coordinate_y = msg.coordinate_y
        self.get_logger().info('Timestamp of the message: {0}'.format(msg.stamp))
        self.get_logger().info('Subscribed coordinates_x: {0}'.format(self.coordinate_x))
        self.get_logger().info('Subscribed coordinates_y: {0}'.format(self.coordinate_y))

    def get_inch(self, request, response):
        self.cm = request.cm
        self.inch = self.cm / 2.54
        response.inch = self.inch
        return response

    def execute_coordinates_checker(self, goal_handle):
        self.get_logger().info('Execute arithmetic_checker action!')
        feedback_msg = CoordinatesChecker.Feedback()
        feedback_msg.position = []
        cur_coordinate_x = 0
        cur_coordinate_y = 0

        goal_coordinate_x = goal_handle.request.coordinate_x
        goal_coordinate_y = goal_handle.request.coordinate_y
        self.get_logger().info('goal_coordinates: ({0},{1})'.format(goal_coordinate_x, goal_coordinate_y))
        while (cur_coordinate_x < goal_coordinate_x) or (cur_coordinate_y < goal_coordinate_y):
            if cur_coordinate_x < goal_coordinate_x:
                cur_coordinate_x += 1
                self.get_logger().info('cur_coordinate_x: {0}'.format(cur_coordinate_x))
            if cur_coordinate_y < goal_coordinate_y:
                cur_coordinate_y += 1
                self.get_logger().info('cur_coordinate_y: {0}'.format(cur_coordinate_y))

            self.str_position = str(cur_coordinate_x) + ',' + str(cur_coordinate_y)
            feedback_msg.position.append(self.str_position)
            self.get_logger().info('Feedback: {0}'.format(feedback_msg.position))
            goal_handle.publish_feedback(feedback_msg)
            time.sleep(1)
        goal_handle.succeed()
        result = CoordinatesChecker.Result()
        result.all_position = feedback_msg.position
        result.coordinate_x = cur_coordinate_x
        result.coordinate_y = cur_coordinate_y
        return result

def main(args=None):
    rclpy.init(args=args)
    try:
        manager = Manager()
        executor = MultiThreadedExecutor(num_threads=2)
        executor.add_node(manager)
        try:
            executor.spin()
        except KeyboardInterrupt:
            manager.get_logger().info('Keyboard Interrupt (SIGINT)')
        finally:
            executor.shutdown()
            manager.conversion_service_server.destroy()
            manager.destroy_node()
    finally:
        rclpy.shutdown()


if __name__ == '__main__':
    main()
