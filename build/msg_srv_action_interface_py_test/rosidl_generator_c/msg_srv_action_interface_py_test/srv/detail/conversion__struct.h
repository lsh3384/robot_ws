// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_srv_action_interface_py_test:srv/Conversion.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_PY_TEST__SRV__DETAIL__CONVERSION__STRUCT_H_
#define MSG_SRV_ACTION_INTERFACE_PY_TEST__SRV__DETAIL__CONVERSION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/Conversion in the package msg_srv_action_interface_py_test.
typedef struct msg_srv_action_interface_py_test__srv__Conversion_Request
{
  float cm;
} msg_srv_action_interface_py_test__srv__Conversion_Request;

// Struct for a sequence of msg_srv_action_interface_py_test__srv__Conversion_Request.
typedef struct msg_srv_action_interface_py_test__srv__Conversion_Request__Sequence
{
  msg_srv_action_interface_py_test__srv__Conversion_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_py_test__srv__Conversion_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/Conversion in the package msg_srv_action_interface_py_test.
typedef struct msg_srv_action_interface_py_test__srv__Conversion_Response
{
  float inch;
} msg_srv_action_interface_py_test__srv__Conversion_Response;

// Struct for a sequence of msg_srv_action_interface_py_test__srv__Conversion_Response.
typedef struct msg_srv_action_interface_py_test__srv__Conversion_Response__Sequence
{
  msg_srv_action_interface_py_test__srv__Conversion_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_py_test__srv__Conversion_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_SRV_ACTION_INTERFACE_PY_TEST__SRV__DETAIL__CONVERSION__STRUCT_H_
