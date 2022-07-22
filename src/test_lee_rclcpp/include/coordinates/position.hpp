#ifndef POSITION_HPP_
#define POSITION_HPP_

#include <chrono>
#include <memory>
#include <string>
#include <utility>

#include "rclcpp/rclcpp.hpp"

#include "msg_srv_action_interface_cpp/msg/coordinates.hpp"


class Position : public rclcpp::Node
{
public:
  using Coordinates = msg_srv_action_interface_cpp::msg::Coordinates;

  explicit Position(const rclcpp::NodeOptions & node_options = rclcpp::NodeOptions());
  virtual ~Position();

private:
  void publish_random_coordinates();
  void update_parameter();

  int16_t min_random_num_;
  int16_t max_random_num_;

  rclcpp::Publisher<Coordinates>::SharedPtr coordinates_publisher_;
  rclcpp::TimerBase::SharedPtr timer_;
  rclcpp::Subscription<rcl_interfaces::msg::ParameterEvent>::SharedPtr parameter_event_sub_;
  rclcpp::AsyncParametersClient::SharedPtr parameters_client_;
};
#endif  // ARITHMETIC__ARGUMENT_HPP_
