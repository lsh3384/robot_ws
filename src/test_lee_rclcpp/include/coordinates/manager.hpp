#ifndef MANAGER__MANAGER_HPP_
#define MANAGER__MANAGER_HPP_

#include <memory>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include <stdexcept>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"

#include "msg_srv_action_interface_cpp/msg/coordinates.hpp"
#include "msg_srv_action_interface_cpp/srv/conversion.hpp"
#include "msg_srv_action_interface_cpp/action/coordinates_checker.hpp"


class Manager : public rclcpp::Node
{
public:
  using Coordinates = msg_srv_action_interface_cpp::msg::Coordinates;
  using Conversion = msg_srv_action_interface_cpp::srv::Conversion;
  using CoordinatesChecker = msg_srv_action_interface_cpp::action::CoordinatesChecker;
  using GoalHandleCoordinatesChecker = rclcpp_action::ServerGoalHandle<CoordinatesChecker>;

  explicit Manager(const rclcpp::NodeOptions & node_options = rclcpp::NodeOptions());
  virtual ~Manager();

private:
  rclcpp::Subscription<Coordinates>::SharedPtr
    coordinates_subscriber_;

  rclcpp::Service<Conversion>::SharedPtr
    converter_server_;

  rclcpp_action::Server<CoordinatesChecker>::SharedPtr
    coordinates_action_server_;

  // 서브스크라이버 변수
  int16_t coordinate_x_;
  int16_t coordinate_y_;

  // 서비스 서버 변수
  float cm_;
  float inch_;

  // 액션 서버 변수
  std::string all_position;
  int16_t action_coordinate_x_;
  int16_t action_coordinate_y_;

  int16_t cur_coordinate_x_;
  int16_t cur_coordinate_y_;

  std::string cur_x;
  std::string cur_y;

  // 액션 콜백함수
  rclcpp_action::GoalResponse handle_goal(
    const rclcpp_action::GoalUUID & uuid,
    std::shared_ptr<const CoordinatesChecker::Goal> goal);
  rclcpp_action::CancelResponse handle_cancel(
    const std::shared_ptr<GoalHandleCoordinatesChecker> goal_handle);
  void execute_checker(const std::shared_ptr<GoalHandleCoordinatesChecker> goal_handle);
};
#endif  // CALCULATOR__CALCULATOR_HPP_
