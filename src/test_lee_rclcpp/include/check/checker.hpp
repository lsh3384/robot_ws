#ifndef CHECKER__CHECKER_HPP_
#define CHECKER__CHECKER_HPP_

#include <memory>
#include <string>
#include <utility>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include "msg_srv_action_interface_cpp/action/coordinates_checker.hpp"


class Checker : public rclcpp::Node
{
public:
  using CoordinatesChecker = msg_srv_action_interface_cpp::action::CoordinatesChecker;
  using GoalHandleCoordinatesChecker = rclcpp_action::ClientGoalHandle<CoordinatesChecker>;

  explicit Checker(
    int16_t goal_coordinate_x,
    int16_t goal_coordinate_y,
    const rclcpp::NodeOptions & node_options = rclcpp::NodeOptions());
  virtual ~Checker();

private:
  void send_goal_coordinates(int16_t goal_coordinate_x, int16_t goal_coordinate_y);

  void get_coordinates_action_goal(
    std::shared_future<rclcpp_action::ClientGoalHandle<CoordinatesChecker>::SharedPtr> future);

  void get_coordinates_action_feedback(
    GoalHandleCoordinatesChecker::SharedPtr,
    const std::shared_ptr<const CoordinatesChecker::Feedback> feedback);

  void get_coordinates_action_result(
    const GoalHandleCoordinatesChecker::WrappedResult & result);

  rclcpp_action::Client<CoordinatesChecker>::SharedPtr coordinates_action_client_;
};
#endif  // CHECKER__CHECKER_HPP_
