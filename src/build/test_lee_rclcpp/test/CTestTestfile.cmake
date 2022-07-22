# CMake generated Testfile for 
# Source directory: /home/lee/robot_ws/src/test_lee_rclcpp/test
# Build directory: /home/lee/robot_ws/src/build/test_lee_rclcpp/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_manager "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/home/lee/robot_ws/src/build/test_lee_rclcpp/test_results/test_lee_rclcpp/test_manager.gtest.xml" "--package-name" "test_lee_rclcpp" "--output-file" "/home/lee/robot_ws/src/build/test_lee_rclcpp/ament_cmake_gtest/test_manager.txt" "--command" "/home/lee/robot_ws/src/build/test_lee_rclcpp/test/test_manager" "--gtest_output=xml:/home/lee/robot_ws/src/build/test_lee_rclcpp/test_results/test_lee_rclcpp/test_manager.gtest.xml")
set_tests_properties(test_manager PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/lee/robot_ws/src/build/test_lee_rclcpp/test/test_manager" TIMEOUT "60" WORKING_DIRECTORY "/home/lee/robot_ws/src/build/test_lee_rclcpp/test" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/lee/robot_ws/src/test_lee_rclcpp/test/CMakeLists.txt;1;ament_add_gtest;/home/lee/robot_ws/src/test_lee_rclcpp/test/CMakeLists.txt;0;")
subdirs("../gtest")
