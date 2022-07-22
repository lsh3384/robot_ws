// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from msg_srv_action_interface_cpp:msg/Coordinates.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_CPP__MSG__DETAIL__COORDINATES__TRAITS_HPP_
#define MSG_SRV_ACTION_INTERFACE_CPP__MSG__DETAIL__COORDINATES__TRAITS_HPP_

#include "msg_srv_action_interface_cpp/msg/detail/coordinates__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<msg_srv_action_interface_cpp::msg::Coordinates>()
{
  return "msg_srv_action_interface_cpp::msg::Coordinates";
}

template<>
inline const char * name<msg_srv_action_interface_cpp::msg::Coordinates>()
{
  return "msg_srv_action_interface_cpp/msg/Coordinates";
}

template<>
struct has_fixed_size<msg_srv_action_interface_cpp::msg::Coordinates>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<msg_srv_action_interface_cpp::msg::Coordinates>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<msg_srv_action_interface_cpp::msg::Coordinates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MSG_SRV_ACTION_INTERFACE_CPP__MSG__DETAIL__COORDINATES__TRAITS_HPP_
