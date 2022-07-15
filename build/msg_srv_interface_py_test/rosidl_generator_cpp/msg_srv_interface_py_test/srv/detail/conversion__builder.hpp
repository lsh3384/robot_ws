// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_srv_interface_py_test:srv/Conversion.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_INTERFACE_PY_TEST__SRV__DETAIL__CONVERSION__BUILDER_HPP_
#define MSG_SRV_INTERFACE_PY_TEST__SRV__DETAIL__CONVERSION__BUILDER_HPP_

#include "msg_srv_interface_py_test/srv/detail/conversion__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace msg_srv_interface_py_test
{

namespace srv
{

namespace builder
{

class Init_Conversion_Request_cm
{
public:
  Init_Conversion_Request_cm()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_srv_interface_py_test::srv::Conversion_Request cm(::msg_srv_interface_py_test::srv::Conversion_Request::_cm_type arg)
  {
    msg_.cm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_interface_py_test::srv::Conversion_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_interface_py_test::srv::Conversion_Request>()
{
  return msg_srv_interface_py_test::srv::builder::Init_Conversion_Request_cm();
}

}  // namespace msg_srv_interface_py_test


namespace msg_srv_interface_py_test
{

namespace srv
{

namespace builder
{

class Init_Conversion_Response_inch
{
public:
  Init_Conversion_Response_inch()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_srv_interface_py_test::srv::Conversion_Response inch(::msg_srv_interface_py_test::srv::Conversion_Response::_inch_type arg)
  {
    msg_.inch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_interface_py_test::srv::Conversion_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_interface_py_test::srv::Conversion_Response>()
{
  return msg_srv_interface_py_test::srv::builder::Init_Conversion_Response_inch();
}

}  // namespace msg_srv_interface_py_test

#endif  // MSG_SRV_INTERFACE_PY_TEST__SRV__DETAIL__CONVERSION__BUILDER_HPP_
