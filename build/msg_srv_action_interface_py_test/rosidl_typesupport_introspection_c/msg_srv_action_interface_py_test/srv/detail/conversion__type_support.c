// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg_srv_action_interface_py_test:srv/Conversion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg_srv_action_interface_py_test/srv/detail/conversion__rosidl_typesupport_introspection_c.h"
#include "msg_srv_action_interface_py_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg_srv_action_interface_py_test/srv/detail/conversion__functions.h"
#include "msg_srv_action_interface_py_test/srv/detail/conversion__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Conversion_Request__rosidl_typesupport_introspection_c__Conversion_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_srv_action_interface_py_test__srv__Conversion_Request__init(message_memory);
}

void Conversion_Request__rosidl_typesupport_introspection_c__Conversion_Request_fini_function(void * message_memory)
{
  msg_srv_action_interface_py_test__srv__Conversion_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Conversion_Request__rosidl_typesupport_introspection_c__Conversion_Request_message_member_array[1] = {
  {
    "cm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_py_test__srv__Conversion_Request, cm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Conversion_Request__rosidl_typesupport_introspection_c__Conversion_Request_message_members = {
  "msg_srv_action_interface_py_test__srv",  // message namespace
  "Conversion_Request",  // message name
  1,  // number of fields
  sizeof(msg_srv_action_interface_py_test__srv__Conversion_Request),
  Conversion_Request__rosidl_typesupport_introspection_c__Conversion_Request_message_member_array,  // message members
  Conversion_Request__rosidl_typesupport_introspection_c__Conversion_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  Conversion_Request__rosidl_typesupport_introspection_c__Conversion_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Conversion_Request__rosidl_typesupport_introspection_c__Conversion_Request_message_type_support_handle = {
  0,
  &Conversion_Request__rosidl_typesupport_introspection_c__Conversion_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_srv_action_interface_py_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_py_test, srv, Conversion_Request)() {
  if (!Conversion_Request__rosidl_typesupport_introspection_c__Conversion_Request_message_type_support_handle.typesupport_identifier) {
    Conversion_Request__rosidl_typesupport_introspection_c__Conversion_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Conversion_Request__rosidl_typesupport_introspection_c__Conversion_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_srv_action_interface_py_test/srv/detail/conversion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_srv_action_interface_py_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_srv_action_interface_py_test/srv/detail/conversion__functions.h"
// already included above
// #include "msg_srv_action_interface_py_test/srv/detail/conversion__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void Conversion_Response__rosidl_typesupport_introspection_c__Conversion_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_srv_action_interface_py_test__srv__Conversion_Response__init(message_memory);
}

void Conversion_Response__rosidl_typesupport_introspection_c__Conversion_Response_fini_function(void * message_memory)
{
  msg_srv_action_interface_py_test__srv__Conversion_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Conversion_Response__rosidl_typesupport_introspection_c__Conversion_Response_message_member_array[1] = {
  {
    "inch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_py_test__srv__Conversion_Response, inch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Conversion_Response__rosidl_typesupport_introspection_c__Conversion_Response_message_members = {
  "msg_srv_action_interface_py_test__srv",  // message namespace
  "Conversion_Response",  // message name
  1,  // number of fields
  sizeof(msg_srv_action_interface_py_test__srv__Conversion_Response),
  Conversion_Response__rosidl_typesupport_introspection_c__Conversion_Response_message_member_array,  // message members
  Conversion_Response__rosidl_typesupport_introspection_c__Conversion_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  Conversion_Response__rosidl_typesupport_introspection_c__Conversion_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Conversion_Response__rosidl_typesupport_introspection_c__Conversion_Response_message_type_support_handle = {
  0,
  &Conversion_Response__rosidl_typesupport_introspection_c__Conversion_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_srv_action_interface_py_test
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_py_test, srv, Conversion_Response)() {
  if (!Conversion_Response__rosidl_typesupport_introspection_c__Conversion_Response_message_type_support_handle.typesupport_identifier) {
    Conversion_Response__rosidl_typesupport_introspection_c__Conversion_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Conversion_Response__rosidl_typesupport_introspection_c__Conversion_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msg_srv_action_interface_py_test/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "msg_srv_action_interface_py_test/srv/detail/conversion__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers msg_srv_action_interface_py_test__srv__detail__conversion__rosidl_typesupport_introspection_c__Conversion_service_members = {
  "msg_srv_action_interface_py_test__srv",  // service namespace
  "Conversion",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // msg_srv_action_interface_py_test__srv__detail__conversion__rosidl_typesupport_introspection_c__Conversion_Request_message_type_support_handle,
  NULL  // response message
  // msg_srv_action_interface_py_test__srv__detail__conversion__rosidl_typesupport_introspection_c__Conversion_Response_message_type_support_handle
};

static rosidl_service_type_support_t msg_srv_action_interface_py_test__srv__detail__conversion__rosidl_typesupport_introspection_c__Conversion_service_type_support_handle = {
  0,
  &msg_srv_action_interface_py_test__srv__detail__conversion__rosidl_typesupport_introspection_c__Conversion_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_py_test, srv, Conversion_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_py_test, srv, Conversion_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_srv_action_interface_py_test
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_py_test, srv, Conversion)() {
  if (!msg_srv_action_interface_py_test__srv__detail__conversion__rosidl_typesupport_introspection_c__Conversion_service_type_support_handle.typesupport_identifier) {
    msg_srv_action_interface_py_test__srv__detail__conversion__rosidl_typesupport_introspection_c__Conversion_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)msg_srv_action_interface_py_test__srv__detail__conversion__rosidl_typesupport_introspection_c__Conversion_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_py_test, srv, Conversion_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_py_test, srv, Conversion_Response)()->data;
  }

  return &msg_srv_action_interface_py_test__srv__detail__conversion__rosidl_typesupport_introspection_c__Conversion_service_type_support_handle;
}
