import os

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    param_dir = LaunchConfiguration(
        'param_dir',
        default=os.path.join(
            get_package_share_directory('test_lee_rclcpp'),
            'param',
            'position_config.yaml'))

    return LaunchDescription([
        DeclareLaunchArgument(
            'param_dir',
            default_value=param_dir,
            description='Full path of parameter file'),

        Node(
            package='test_lee_rclcpp',
            executable='position',
            name='position',
            parameters=[param_dir],
            output='screen'),

        Node(
            package='test_lee_rclcpp',
            executable='manager',
            name='manager',
            parameters=[param_dir],
            output='screen'),

        Node(
            package='test_lee_rclcpp',
            executable='converter',
            name='converter',
            parameters=[param_dir],
            output='screen'),

        Node(
            package='test_lee_rclcpp',
            executable='checker',
            name='checker',
            parameters=[param_dir],
            output='screen'),
    ])
