// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_srv_interface_py_test:msg/Coordinates.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_INTERFACE_PY_TEST__MSG__DETAIL__COORDINATES__BUILDER_HPP_
#define MSG_SRV_INTERFACE_PY_TEST__MSG__DETAIL__COORDINATES__BUILDER_HPP_

#include "msg_srv_interface_py_test/msg/detail/coordinates__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace msg_srv_interface_py_test
{

namespace msg
{

namespace builder
{

class Init_Coordinates_coordinate_y
{
public:
  explicit Init_Coordinates_coordinate_y(::msg_srv_interface_py_test::msg::Coordinates & msg)
  : msg_(msg)
  {}
  ::msg_srv_interface_py_test::msg::Coordinates coordinate_y(::msg_srv_interface_py_test::msg::Coordinates::_coordinate_y_type arg)
  {
    msg_.coordinate_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_interface_py_test::msg::Coordinates msg_;
};

class Init_Coordinates_coordinate_x
{
public:
  explicit Init_Coordinates_coordinate_x(::msg_srv_interface_py_test::msg::Coordinates & msg)
  : msg_(msg)
  {}
  Init_Coordinates_coordinate_y coordinate_x(::msg_srv_interface_py_test::msg::Coordinates::_coordinate_x_type arg)
  {
    msg_.coordinate_x = std::move(arg);
    return Init_Coordinates_coordinate_y(msg_);
  }

private:
  ::msg_srv_interface_py_test::msg::Coordinates msg_;
};

class Init_Coordinates_stamp
{
public:
  Init_Coordinates_stamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Coordinates_coordinate_x stamp(::msg_srv_interface_py_test::msg::Coordinates::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return Init_Coordinates_coordinate_x(msg_);
  }

private:
  ::msg_srv_interface_py_test::msg::Coordinates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_interface_py_test::msg::Coordinates>()
{
  return msg_srv_interface_py_test::msg::builder::Init_Coordinates_stamp();
}

}  // namespace msg_srv_interface_py_test

#endif  // MSG_SRV_INTERFACE_PY_TEST__MSG__DETAIL__COORDINATES__BUILDER_HPP_
