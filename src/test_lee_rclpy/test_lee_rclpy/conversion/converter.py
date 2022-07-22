import random
from msg_srv_action_interface_py_test.srv import Conversion
import rclpy
from rclpy.node import Node


class Converter(Node):

    def __init__(self):
        super().__init__('converter')

        self.conversion_service_client = self.create_client(
            Conversion,
            'converter')

        while not self.conversion_service_client.wait_for_service(timeout_sec=0.1):
            self.get_logger().warning('converter service is not available.')

    def send_request(self):
        service_request = Conversion.Request()
        service_request.cm = random.randint(1, 4) * 1.0
        futures = self.conversion_service_client.call_async(service_request)
        return futures


def main(args=None):
    rclpy.init(args=args)
    converter = Converter()
    future = converter.send_request()
    user_trigger = True
    try:
        while rclpy.ok():
            if user_trigger is True:
                rclpy.spin_once(converter)
                if future.done():
                    try:
                        service_response = future.result()
                    except Exception as e:  # noqa: B902
                        converter.get_logger().warn('Service call failed: {}'.format(str(e)))
                    else:
                        converter.get_logger().info(
                            'Result: {}'.format(service_response.inch))
                        user_trigger = False
            else:
                input('Press Enter for next service call.')
                future = converter.send_request()
                user_trigger = True

    except KeyboardInterrupt:
        converter.get_logger().info('Keyboard Interrupt (SIGINT)')

    converter.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
