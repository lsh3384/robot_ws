#include <memory>
#include <cstdio>
#include <memory>
#include <string>
#include <utility>

#include "check/checker.hpp"
#include "rclcpp/rclcpp.hpp"
#include "rcutils/cmdline_parser.h"



Checker::Checker(int16_t goal_coordinate_x, int16_t goal_coordinate_y, const rclcpp::NodeOptions & node_options)
: Node("checker", node_options)
{
  coordinates_action_client_ = rclcpp_action::create_client<CoordinatesChecker>(
    this->get_node_base_interface(),
    this->get_node_graph_interface(),
    this->get_node_logging_interface(),
    this->get_node_waitables_interface(),
    "coordinates_checker");

  send_goal_coordinates(goal_coordinate_x, goal_coordinate_y);
}

Checker::~Checker()
{
}

void Checker::send_goal_coordinates(int16_t goal_coordinate_x, int16_t goal_coordinate_y)
{
  using namespace std::placeholders;

  if (!this->coordinates_action_client_) {
    RCLCPP_WARN(this->get_logger(), "Action client not initialized");
  }

  if (!this->coordinates_action_client_->wait_for_action_server(std::chrono::seconds(10))) {
    RCLCPP_WARN(this->get_logger(), "Coordinates action server is not available.");
    return;
  }

  // goal 메시지 설정
  auto goal_msg = CoordinatesChecker::Goal();
  goal_msg.coordinate_x = goal_coordinate_x;
  goal_msg.coordinate_y = goal_coordinate_y;

  auto send_goal_options = rclcpp_action::Client<CoordinatesChecker>::SendGoalOptions();
  send_goal_options.goal_response_callback =
    std::bind(&Checker::get_coordinates_action_goal, this, _1);
  send_goal_options.feedback_callback =
    std::bind(&Checker::get_coordinates_action_feedback, this, _1, _2);
  send_goal_options.result_callback =
    std::bind(&Checker::get_coordinates_action_result, this, _1);

  // goal메시지 보내는 곳
  this->coordinates_action_client_->async_send_goal(goal_msg, send_goal_options);
}

void Checker::get_coordinates_action_goal(
  std::shared_future<GoalHandleCoordinatesChecker::SharedPtr> future)
{
  auto goal_handle = future.get();
  if (!goal_handle) {
    RCLCPP_WARN(this->get_logger(), "Action goal rejected.");
  } else {
    RCLCPP_INFO(this->get_logger(), "Action goal accepted.");
  }
}

void Checker::get_coordinates_action_feedback(
  GoalHandleCoordinatesChecker::SharedPtr,
  const std::shared_ptr<const CoordinatesChecker::Feedback> feedback)
{
  RCLCPP_INFO(this->get_logger(), "Action feedback: ");
  for (const auto & position : feedback->position) {
    RCLCPP_INFO(this->get_logger(), "\t%s ", position.c_str());
  }
}

void Checker::get_coordinates_action_result(
  const GoalHandleCoordinatesChecker::WrappedResult & result)
{
  switch (result.code) {
    case rclcpp_action::ResultCode::SUCCEEDED:
      RCLCPP_INFO(this->get_logger(), "Action succeeded!");
      RCLCPP_INFO(this->get_logger(), "Action result(all_position): ");
      for (const auto & all_position : result.result->all_position) {
        RCLCPP_INFO(this->get_logger(), "\t%s ", all_position.c_str());
      }
      RCLCPP_INFO(this->get_logger(), "Action result(coordinate_x): ");
      RCLCPP_INFO(this->get_logger(), "\t%d ", result.result->coordinate_x);
      RCLCPP_INFO(this->get_logger(), "Action result(coordinate_y): ");
      RCLCPP_INFO(this->get_logger(), "\t%d ", result.result->coordinate_y);
      break;
    case rclcpp_action::ResultCode::ABORTED:
      RCLCPP_WARN(this->get_logger(), "The action was aborted");
      return;
    case rclcpp_action::ResultCode::CANCELED:
      RCLCPP_WARN(this->get_logger(), "The action was canceled");
      return;
    default:
      RCLCPP_ERROR(this->get_logger(), "Unknown result code");
      return;
  }
  rclcpp::shutdown();
}

void print_help()
{
  printf("For Checker node:\n");
  printf("node_name [-h]\n");
  printf("Options:\n");
  printf("\t-h Help           : Print this help function.\n");
}

int main(int argc, char * argv[])
{
  if (rcutils_cli_option_exist(argv, argv + argc, "-h")) {
    print_help();
    return 0;
  }

  rclcpp::init(argc, argv);

  int16_t goal_coordinate_x = 10;
  int16_t goal_coordinate_y = 10;
  char * cli_option = rcutils_cli_get_option(argv, argv + argc, "-x");
  if (nullptr != cli_option) {
    goal_coordinate_x = std::stoi(cli_option);
  }
  printf("goal_coordinate_x : %d\n", goal_coordinate_x);

  cli_option = rcutils_cli_get_option(argv, argv + argc, "-y");
  if (nullptr != cli_option) {
    goal_coordinate_y = std::stoi(cli_option);
  }
  printf("goal_coordinate_y : %d\n", goal_coordinate_y);

  auto checker = std::make_shared<Checker>(goal_coordinate_x, goal_coordinate_y);

  rclcpp::spin(checker);

  rclcpp::shutdown();

  return 0;
}
