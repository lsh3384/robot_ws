################################################################################
# Set minimum required version of cmake, project name and compile options
################################################################################
cmake_minimum_required(VERSION 3.5)
project(test_lee_rclcpp)

if(NOT CMAKE_C_STANDARD)
  set(CMAKE_C_STANDARD 99)
endif()
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

################################################################################
# Find and load build settings from external packages
################################################################################
find_package(ament_cmake REQUIRED)
find_package(msg_srv_action_interface_cpp REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)

include_directories(include)

add_executable(position src/coordinates/position.cpp)
ament_target_dependencies(position
  msg_srv_action_interface_cpp
  rclcpp
)

add_executable(manager src/coordinates/manager.cpp)
ament_target_dependencies(manager
  msg_srv_action_interface_cpp
  rclcpp
  rclcpp_action
)

add_executable(converter src/conversion/converter.cpp)
ament_target_dependencies(converter
  msg_srv_action_interface_cpp
  rclcpp
)

add_executable(checker src/check/checker.cpp)
ament_target_dependencies(checker
  msg_srv_action_interface_cpp
  rclcpp
  rclcpp_action
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  ament_lint_auto_find_test_dependencies()

  find_package(ament_cmake_gtest REQUIRED)
  add_subdirectory(test)
endif()

install(TARGETS
  position
  manager
  converter
  checker
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY launch param
  DESTINATION share/${PROJECT_NAME}
)

################################################################################
# Find and load build settings from external packages
################################################################################
ament_package()
