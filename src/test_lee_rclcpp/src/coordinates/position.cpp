#include <cstdio>
#include <memory>
#include <string>
#include <utility>
#include <random>

#include "rclcpp/rclcpp.hpp"
#include "rcutils/cmdline_parser.h"

#include "coordinates/position.hpp"

using namespace std::chrono_literals;

Position::Position(const rclcpp::NodeOptions & node_options)
: Node("position", node_options),
  min_random_num_(0.0),
  max_random_num_(0.0)
{
  this->declare_parameter("qos_depth", 10);
  int8_t qos_depth = this->get_parameter("qos_depth").get_value<int8_t>();
  this->declare_parameter("min_random_num", 0.0);
  min_random_num_ = this->get_parameter("min_random_num").get_value<float>();
  this->declare_parameter("max_random_num", 9.0);
  max_random_num_ = this->get_parameter("max_random_num").get_value<float>();
  this->update_parameter();

  const auto QOS_RKL10V =
    rclcpp::QoS(rclcpp::KeepLast(qos_depth)).reliable().durability_volatile();

  coordinates_publisher_ =
    this->create_publisher<Coordinates>("position", QOS_RKL10V);

  timer_ =
    this->create_wall_timer(1s, std::bind(&Position::publish_random_coordinates, this));
}

Position::~Position()
{
}

void Position::publish_random_coordinates()
{
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_real_distribution<float> distribution(min_random_num_, max_random_num_ );

  msg_srv_action_interface_cpp::msg::Coordinates msg;
  msg.stamp = this->now();
  msg.coordinate_x = distribution(gen);
  msg.coordinate_y = distribution(gen);
  coordinates_publisher_->publish(msg);
  RCLCPP_INFO(this->get_logger(), "Coordinates!!");
  RCLCPP_INFO(this->get_logger(), "Published coordinate_x: %d", msg.coordinate_x);
  RCLCPP_INFO(this->get_logger(), "Published coordinate_y: %d", msg.coordinate_y);
}

void Position::update_parameter()
{
  parameters_client_ = std::make_shared<rclcpp::AsyncParametersClient>(this);
  while (!parameters_client_->wait_for_service(1s)) {
    if (!rclcpp::ok()) {
      RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for the service. Exiting.");
      return;
    }
    RCLCPP_INFO(this->get_logger(), "service not available, waiting again...");
  }

  auto param_event_callback =
    [this](const rcl_interfaces::msg::ParameterEvent::SharedPtr event) -> void
    {
      for (auto & changed_parameter : event->changed_parameters) {
        if (changed_parameter.name == "min_random_num") {
          auto value = rclcpp::Parameter::from_parameter_msg(changed_parameter).as_double();
          min_random_num_ = value;
        } else if (changed_parameter.name == "max_random_num") {
          auto value = rclcpp::Parameter::from_parameter_msg(changed_parameter).as_double();
          max_random_num_ = value;
        }
      }
    };

  parameter_event_sub_ = parameters_client_->on_parameter_event(param_event_callback);
}

void print_help()
{
  printf("For argument node:\n");
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

  auto position = std::make_shared<Position>();

  rclcpp::spin(position);

  rclcpp::shutdown();

  return 0;
}
