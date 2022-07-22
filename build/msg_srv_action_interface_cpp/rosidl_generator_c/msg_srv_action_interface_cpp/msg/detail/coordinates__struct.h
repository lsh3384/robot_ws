// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_srv_action_interface_cpp:msg/Coordinates.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_CPP__MSG__DETAIL__COORDINATES__STRUCT_H_
#define MSG_SRV_ACTION_INTERFACE_CPP__MSG__DETAIL__COORDINATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in msg/Coordinates in the package msg_srv_action_interface_cpp.
typedef struct msg_srv_action_interface_cpp__msg__Coordinates
{
  builtin_interfaces__msg__Time stamp;
  int16_t coordinate_x;
  int16_t coordinate_y;
} msg_srv_action_interface_cpp__msg__Coordinates;

// Struct for a sequence of msg_srv_action_interface_cpp__msg__Coordinates.
typedef struct msg_srv_action_interface_cpp__msg__Coordinates__Sequence
{
  msg_srv_action_interface_cpp__msg__Coordinates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_cpp__msg__Coordinates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_SRV_ACTION_INTERFACE_CPP__MSG__DETAIL__COORDINATES__STRUCT_H_
