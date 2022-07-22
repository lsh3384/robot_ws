#ifndef ARITHMETIC__OPERATOR_HPP_
#define ARITHMETIC__OPERATOR_HPP_

#include <chrono>
#include <memory>
#include <string>
#include <utility>
#include <random>

#include "rclcpp/rclcpp.hpp"
#include "msg_srv_action_interface_cpp/srv/conversion.hpp"


class Converter : public rclcpp::Node
{
public:
  using Conversion = msg_srv_action_interface_cpp::srv::Conversion;

  explicit Converter(float cm, const rclcpp::NodeOptions & node_options = rclcpp::NodeOptions());
  virtual ~Converter();

  void send_request();

private:
  rclcpp::Client<Conversion>::SharedPtr converter_service_client_;

  float cm_;
};
#endif  // ARITHMETIC__OPERATOR_HPP_
