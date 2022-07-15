
import random

from msg_srv_interface_py_test.msg import Coordinates
from rcl_interfaces.msg import SetParametersResult
import rclpy
from rclpy.node import Node
from rclpy.parameter import  Parameter
from rclpy.qos import QoSDurabilityPolicy
from rclpy.qos import QoSHistoryPolicy
from rclpy.qos import QoSProfile
from rclpy.qos import QoSReliabilityPolicy


class Position(Node):

    def __init__(self):
        super().__init__('position')
        self.declare_parameter('qos_depth', 10)
        qos_depth = self.get_parameter('qos_depth').value
        self.declare_parameter('min_random_num', 10)
        self.min_random_num = self.get_parameter('min_random_num').value
        self.declare_parameter('max_random_num', 20)
        self.max_random_num = self.get_parameter('max_random_num').value
        self.add_on_set_parameters_callback(self.update_parameter)

        QOS_RKL10V = QoSProfile(
            reliability=QoSReliabilityPolicy.RELIABLE,
            history=QoSHistoryPolicy.KEEP_LAST,
            depth=qos_depth,
            durability=QoSDurabilityPolicy.VOLATILE)

        self.coordinate_publisher = self.create_publisher(
            Coordinates,
            'position',
            QOS_RKL10V)

        self.timer = self.create_timer(1.0, self.publish_random_coordinates)

    def publish_random_coordinates(self):
        msg = Coordinates()
        msg.stamp = self.get_clock().now().to_msg()
        msg.coordinate_x = int(random.randint(self.min_random_num, self.max_random_num))
        msg.coordinate_y = int(random.randint(self.min_random_num, self.max_random_num))
        self.coordinate_publisher.publish(msg)
        self.get_logger().info('Published time: {0}'.format(msg.stamp))
        self.get_logger().info('Published coordinates_x: {0}'.format(msg.coordinate_x))
        self.get_logger().info('Published coordinates_y: {0}'.format(msg.coordinate_y))

    def update_parameter(self, params):
        for param in params:
            if param.name == 'min_random_num' and param.type_ == Parameter.Type.INTEGER:
                self.min_random_num = param.value
            elif param.name == 'max_random_num' and param.type_ == Parameter.Type.INTEGER:
                self.max_random_num = param.value
        return SetParametersResult(successful=True)


def main(args=None):
    rclpy.init(args=args)
    try:
        position = Position()
        try:
            rclpy.spin(position)
        except KeyboardInterrupt:
            position.get_logger().info('Keyboard Interrupt (SIGINT)')
        finally:
            position.destroy_node()
    finally:
        rclpy.shutdown()


if __name__ == '__main__':
    main()
