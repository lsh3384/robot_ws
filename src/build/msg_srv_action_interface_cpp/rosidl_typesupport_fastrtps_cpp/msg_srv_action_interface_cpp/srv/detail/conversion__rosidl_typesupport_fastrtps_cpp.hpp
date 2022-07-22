// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from msg_srv_action_interface_cpp:srv/Conversion.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_CPP__SRV__DETAIL__CONVERSION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MSG_SRV_ACTION_INTERFACE_CPP__SRV__DETAIL__CONVERSION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "msg_srv_action_interface_cpp/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "msg_srv_action_interface_cpp/srv/detail/conversion__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace msg_srv_action_interface_cpp
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_cpp
cdr_serialize(
  const msg_srv_action_interface_cpp::srv::Conversion_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_cpp
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msg_srv_action_interface_cpp::srv::Conversion_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_cpp
get_serialized_size(
  const msg_srv_action_interface_cpp::srv::Conversion_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_cpp
max_serialized_size_Conversion_Request(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace msg_srv_action_interface_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_cpp
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_srv_action_interface_cpp, srv, Conversion_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "msg_srv_action_interface_cpp/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "msg_srv_action_interface_cpp/srv/detail/conversion__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace msg_srv_action_interface_cpp
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_cpp
cdr_serialize(
  const msg_srv_action_interface_cpp::srv::Conversion_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_cpp
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msg_srv_action_interface_cpp::srv::Conversion_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_cpp
get_serialized_size(
  const msg_srv_action_interface_cpp::srv::Conversion_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_cpp
max_serialized_size_Conversion_Response(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace msg_srv_action_interface_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_cpp
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_srv_action_interface_cpp, srv, Conversion_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "msg_srv_action_interface_cpp/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_cpp
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_srv_action_interface_cpp, srv, Conversion)();

#ifdef __cplusplus
}
#endif

#endif  // MSG_SRV_ACTION_INTERFACE_CPP__SRV__DETAIL__CONVERSION__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
