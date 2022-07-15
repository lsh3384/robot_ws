// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg_interface_py_test:msg/Coordinates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg_interface_py_test/msg/detail/coordinates__rosidl_typesupport_introspection_c.h"
#include "msg_interface_py_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg_interface_py_test/msg/detail/coordinates__functions.h"
#include "msg_interface_py_test/msg/detail/coordinates__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Coordinates__rosidl_typesupport_introspection_c__Coordinates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_interface_py_test__msg__Coordinates__init(message_memory);
}

void Coordinates__rosidl_typesupport_introspection_c__Coordinates_fini_function(void * message_memory)
{
  msg_interface_py_test__msg__Coordinates__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Coordinates__rosidl_typesupport_introspection_c__Coordinates_message_member_array[3] = {
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_interface_py_test__msg__Coordinates, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coordinate_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_interface_py_test__msg__Coordinates, coordinate_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coordinate_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_interface_py_test__msg__Coordinates, coordinate_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Coordinates__rosidl_typesupport_introspection_c__Coordinates_message_members = {
  "msg_interface_py_test__msg",  // message namespace
  "Coordinates",  // message name
  3,  // number of fields
  sizeof(msg_interface_py_test__msg__Coordinates),
  Coordinates__rosidl_typesupport_introspection_c__Coordinates_message_member_array,  // message members
  Coordinates__rosidl_typesupport_introspection_c__Coordinates_init_function,  // function to initialize message memory (memory has to be allocated)
  Coordinates__rosidl_typesupport_introspection_c__Coordinates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Coordinates__rosidl_typesupport_introspection_c__Coordinates_message_type_support_handle = {
  0,
  &Coordinates__rosidl_typesupport_introspection_c__Coordinates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_interface_py_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_interface_py_test, msg, Coordinates)() {
  Coordinates__rosidl_typesupport_introspection_c__Coordinates_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!Coordinates__rosidl_typesupport_introspection_c__Coordinates_message_type_support_handle.typesupport_identifier) {
    Coordinates__rosidl_typesupport_introspection_c__Coordinates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Coordinates__rosidl_typesupport_introspection_c__Coordinates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
