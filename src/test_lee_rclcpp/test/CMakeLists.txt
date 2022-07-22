ament_add_gtest(test_manager
  test_manager.cpp
  ../src/coordinates/manager.cpp)
ament_target_dependencies(test_manager
  msg_srv_action_interface_cpp
  rclcpp
  rclcpp_action)
