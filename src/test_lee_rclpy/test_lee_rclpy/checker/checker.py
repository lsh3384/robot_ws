from action_msgs.msg import GoalStatus
from msg_srv_action_interface_py_test.action import CoordinatesChecker
from rclpy.action import ActionClient
from rclpy.node import Node


class Checker(Node):

    def __init__(self):
        super().__init__('checker')
        self.coordinates_action_client = ActionClient(
          self,
          CoordinatesChecker,
          'coordinates_checker')

    def send_goal_coordinates(self, goal_coordinate_x, goal_coordinate_y):
        # 연결 설정
        wait_count = 1
        while not self.coordinates_action_client.wait_for_server(timeout_sec=0.1):
            if wait_count > 3:
                self.get_logger().warning('Coordinates action server is not available.')
                return False
            wait_count += 1

        # 목표 인터페이스 가져와서 값 세팅
        goal_msg = CoordinatesChecker.Goal()
        goal_msg.coordinate_x = (int)(goal_coordinate_x)
        goal_msg.coordinate_y = (int)(goal_coordinate_y)
        self.send_goal_future = self.coordinates_action_client.send_goal_async(
            goal_msg,
            feedback_callback=self.get_coordinate_action_feedback)
        self.send_goal_future.add_done_callback(self.get_coordinate_action_goal)
        return True

    def get_coordinate_action_goal(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().warning('Action goal rejected.')
            return
        self.get_logger().info('Action goal accepted.')
        self.action_result_future = goal_handle.get_result_async()
        self.action_result_future.add_done_callback(self.get_coordinate_action_result)

    def get_coordinate_action_feedback(self, feedback_msg):
        action_feedback = feedback_msg.feedback.position
        self.get_logger().info('Action feedback: {0}'.format(action_feedback))

    def get_coordinate_action_result(self, future):
        action_status = future.result().status
        action_result = future.result().result
        if action_status == GoalStatus.STATUS_SUCCEEDED:
            self.get_logger().info('Action succeeded!')
            self.get_logger().info(
                'Action result(all position): {0}'.format(action_result.all_position))
            self.get_logger().info(
                'Action result(coordinate_x): {0}'.format(action_result.coordinate_x))
            self.get_logger().info(
                'Action result(coordinate_y): {0}'.format(action_result.coordinate_y))
        else:
            self.get_logger().warning(
                'Action failed with status: {0}'.format(action_status))


import argparse
import sys

import rclpy


def main(argv=sys.argv[1:]):
    parser = argparse.ArgumentParser(formatter_class=argparse.ArgumentDefaultsHelpFormatter)
    parser.add_argument(
        '-x',
        '--goal_coordinate_x',
        type=int,
        default=50,
        help='Target goal value of coordinate_x')
    parser.add_argument(
        '-y',
        '--goal_coordinate_y',
        type=int,
        default=50,
        help='Target goal value of coordinate_y')
    parser.add_argument(
        'argv', nargs=argparse.REMAINDER,
        help='Pass arbitrary arguments to the executable')
    args = parser.parse_args()

    rclpy.init(args=args.argv)
    try:
        checker = Checker()
        checker.send_goal_coordinates(args.goal_coordinate_x, args.goal_coordinate_y)
        try:
            rclpy.spin(checker)
        except KeyboardInterrupt:
            checker.get_logger().info('Keyboard Interrupt (SIGINT)')
        finally:
            checker.coordinates_action_client.destroy()
            checker.destroy_node()
    finally:
        rclpy.shutdown()


if __name__ == '__main__':
    main()
