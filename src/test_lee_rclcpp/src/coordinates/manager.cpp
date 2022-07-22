#include <memory>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
#include <stdexcept>

#include "coordinates/manager.hpp"

Manager::Manager(const rclcpp::NodeOptions & node_options)
: Node("manager", node_options),
  coordinate_x_(0),
  coordinate_y_(0),
  all_position("")
{
  RCLCPP_INFO(this->get_logger(), "Run manager!!!");

  this->declare_parameter("qos_depth", 10);
  int8_t qos_depth = 0;
  this->get_parameter("qos_depth", qos_depth);

  const auto QOS_RKL10V =
    rclcpp::QoS(rclcpp::KeepLast(qos_depth)).reliable().durability_volatile();


  // 서브스크라이버
  coordinates_subscriber_ = this->create_subscription<Coordinates>(
    "position",
    QOS_RKL10V,
    [this](const Coordinates::SharedPtr msg) -> void
    {
      coordinate_x_ = msg->coordinate_x;
      coordinate_y_ = msg->coordinate_y;

      RCLCPP_INFO(
        this->get_logger(),
        "Timestamp of the message: sec %ld nanosec %ld",
        msg->stamp.sec,
        msg->stamp.nanosec);
      RCLCPP_INFO(this->get_logger(), "!!!Subscribed coordinates!!!");
      RCLCPP_INFO(this->get_logger(), "Subscribed coordinate x: %d", coordinate_x_);
      RCLCPP_INFO(this->get_logger(), "Subscribed coordinate y: %d", coordinate_y_);
    }
  );

  // 서비스 서버
  auto convert_cm_to_inch =
    [this](
    const std::shared_ptr<Conversion::Request> request,
    std::shared_ptr<Conversion::Response> response) -> void
    {
      cm_ = request->cm;
      inch_ = cm_ / 2.54;
      response->inch = inch_;

      std::ostringstream oss;
      oss << std::to_string(cm_) << '-' <<
        std::to_string(inch_) << std::endl;

      RCLCPP_INFO(this->get_logger(), "%f", inch_);
    };

  converter_server_ =
    create_service<Conversion>("converter", convert_cm_to_inch);

  // 액션 서버
  using namespace std::placeholders;
  coordinates_action_server_ = rclcpp_action::create_server<CoordinatesChecker>(
    this->get_node_base_interface(),
    this->get_node_clock_interface(),
    this->get_node_logging_interface(),
    this->get_node_waitables_interface(),
    "coordinates_checker",
    std::bind(&Manager::handle_goal, this, _1, _2),
    std::bind(&Manager::handle_cancel, this, _1),
    std::bind(&Manager::execute_checker, this, _1)
  );
}

Manager::~Manager()
{
}


rclcpp_action::GoalResponse Manager::handle_goal(
  const rclcpp_action::GoalUUID & uuid,
  std::shared_ptr<const CoordinatesChecker::Goal> goal)
{
  (void)uuid;
  (void)goal;
  return rclcpp_action::GoalResponse::ACCEPT_AND_EXECUTE;
}

rclcpp_action::CancelResponse Manager::handle_cancel(
  const std::shared_ptr<GoalHandleCoordinatesChecker> goal_handle)
{
  RCLCPP_INFO(this->get_logger(), "Received request to cancel goal");
  (void)goal_handle;
  return rclcpp_action::CancelResponse::ACCEPT;
}

void Manager::execute_checker(const std::shared_ptr<GoalHandleCoordinatesChecker> goal_handle)
{
  RCLCPP_INFO(this->get_logger(), "Execute coordinates_checker action!");
  rclcpp::Rate loop_rate(1);

  auto feedback_msg = std::make_shared<CoordinatesChecker::Feedback>();
  int16_t goal_coordinate_x = goal_handle->get_goal()->coordinate_x;
  int16_t goal_coordinate_y = goal_handle->get_goal()->coordinate_y;

  while (((cur_coordinate_x_ < goal_coordinate_x) || (cur_coordinate_y_ < goal_coordinate_y) )&& rclcpp::ok()) {
    if ((cur_coordinate_x_ < goal_coordinate_x)) {
      cur_coordinate_x_ += 1;
    }

    if ((cur_coordinate_y_ < goal_coordinate_y)) {
      cur_coordinate_y_ += 1;
    }

    cur_x = std::to_string(cur_coordinate_x_);
    cur_y = std::to_string(cur_coordinate_y_);
    all_position = cur_x + ',' + cur_y;
    feedback_msg->position.push_back(all_position);
    if (all_position.empty()) {
      RCLCPP_WARN(this->get_logger(), "Please check your formula");
      break;
    }
    RCLCPP_INFO(this->get_logger(), "Feedback: ");
    for (const auto & position : feedback_msg->position) {
      RCLCPP_INFO(this->get_logger(), "\t%s", position.c_str());
    }
    goal_handle->publish_feedback(feedback_msg);
    loop_rate.sleep();
  }

  if (rclcpp::ok()) {
    auto result = std::make_shared<CoordinatesChecker::Result>();
    result->all_position = feedback_msg->position;
    result->coordinate_x = cur_coordinate_x_;
    result->coordinate_y = cur_coordinate_y_;
    goal_handle->succeed(result);
  }
}


#include <cstdio>
#include "rclcpp/rclcpp.hpp"
#include "rcutils/cmdline_parser.h"


void print_help()
{
  printf("ROS2 Personal Project 'test_lee_rclcpp':\n");
  printf("manager [-h]\n");
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

  auto manager = std::make_shared<Manager>();

  rclcpp::spin(manager);

  rclcpp::shutdown();

  return 0;
}
