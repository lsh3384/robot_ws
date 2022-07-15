// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from msg_interface_py_test:msg/Coordinates.idl
// generated code does not contain a copyright notice

#ifndef MSG_INTERFACE_PY_TEST__MSG__DETAIL__COORDINATES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define MSG_INTERFACE_PY_TEST__MSG__DETAIL__COORDINATES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "msg_interface_py_test/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "msg_interface_py_test/msg/detail/coordinates__struct.hpp"

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

namespace msg_interface_py_test
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_interface_py_test
cdr_serialize(
  const msg_interface_py_test::msg::Coordinates & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_interface_py_test
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msg_interface_py_test::msg::Coordinates & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_interface_py_test
get_serialized_size(
  const msg_interface_py_test::msg::Coordinates & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_interface_py_test
max_serialized_size_Coordinates(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace msg_interface_py_test

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_interface_py_test
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_interface_py_test, msg, Coordinates)();

#ifdef __cplusplus
}
#endif

#endif  // MSG_INTERFACE_PY_TEST__MSG__DETAIL__COORDINATES__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
