// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from msg_srv_action_interface_cpp:action/CoordinatesChecker.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__rosidl_typesupport_introspection_c.h"
#include "msg_srv_action_interface_cpp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__functions.h"
#include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void CoordinatesChecker_Goal__rosidl_typesupport_introspection_c__CoordinatesChecker_Goal_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_srv_action_interface_cpp__action__CoordinatesChecker_Goal__init(message_memory);
}

void CoordinatesChecker_Goal__rosidl_typesupport_introspection_c__CoordinatesChecker_Goal_fini_function(void * message_memory)
{
  msg_srv_action_interface_cpp__action__CoordinatesChecker_Goal__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CoordinatesChecker_Goal__rosidl_typesupport_introspection_c__CoordinatesChecker_Goal_message_member_array[2] = {
  {
    "coordinate_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp__action__CoordinatesChecker_Goal, coordinate_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coordinate_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp__action__CoordinatesChecker_Goal, coordinate_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CoordinatesChecker_Goal__rosidl_typesupport_introspection_c__CoordinatesChecker_Goal_message_members = {
  "msg_srv_action_interface_cpp__action",  // message namespace
  "CoordinatesChecker_Goal",  // message name
  2,  // number of fields
  sizeof(msg_srv_action_interface_cpp__action__CoordinatesChecker_Goal),
  CoordinatesChecker_Goal__rosidl_typesupport_introspection_c__CoordinatesChecker_Goal_message_member_array,  // message members
  CoordinatesChecker_Goal__rosidl_typesupport_introspection_c__CoordinatesChecker_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  CoordinatesChecker_Goal__rosidl_typesupport_introspection_c__CoordinatesChecker_Goal_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CoordinatesChecker_Goal__rosidl_typesupport_introspection_c__CoordinatesChecker_Goal_message_type_support_handle = {
  0,
  &CoordinatesChecker_Goal__rosidl_typesupport_introspection_c__CoordinatesChecker_Goal_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_srv_action_interface_cpp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_Goal)() {
  if (!CoordinatesChecker_Goal__rosidl_typesupport_introspection_c__CoordinatesChecker_Goal_message_type_support_handle.typesupport_identifier) {
    CoordinatesChecker_Goal__rosidl_typesupport_introspection_c__CoordinatesChecker_Goal_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CoordinatesChecker_Goal__rosidl_typesupport_introspection_c__CoordinatesChecker_Goal_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_srv_action_interface_cpp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__functions.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.h"


// Include directives for member types
// Member `all_position`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CoordinatesChecker_Result__rosidl_typesupport_introspection_c__CoordinatesChecker_Result_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_srv_action_interface_cpp__action__CoordinatesChecker_Result__init(message_memory);
}

void CoordinatesChecker_Result__rosidl_typesupport_introspection_c__CoordinatesChecker_Result_fini_function(void * message_memory)
{
  msg_srv_action_interface_cpp__action__CoordinatesChecker_Result__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CoordinatesChecker_Result__rosidl_typesupport_introspection_c__CoordinatesChecker_Result_message_member_array[3] = {
  {
    "all_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp__action__CoordinatesChecker_Result, all_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coordinate_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp__action__CoordinatesChecker_Result, coordinate_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "coordinate_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp__action__CoordinatesChecker_Result, coordinate_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CoordinatesChecker_Result__rosidl_typesupport_introspection_c__CoordinatesChecker_Result_message_members = {
  "msg_srv_action_interface_cpp__action",  // message namespace
  "CoordinatesChecker_Result",  // message name
  3,  // number of fields
  sizeof(msg_srv_action_interface_cpp__action__CoordinatesChecker_Result),
  CoordinatesChecker_Result__rosidl_typesupport_introspection_c__CoordinatesChecker_Result_message_member_array,  // message members
  CoordinatesChecker_Result__rosidl_typesupport_introspection_c__CoordinatesChecker_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  CoordinatesChecker_Result__rosidl_typesupport_introspection_c__CoordinatesChecker_Result_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CoordinatesChecker_Result__rosidl_typesupport_introspection_c__CoordinatesChecker_Result_message_type_support_handle = {
  0,
  &CoordinatesChecker_Result__rosidl_typesupport_introspection_c__CoordinatesChecker_Result_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_srv_action_interface_cpp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_Result)() {
  if (!CoordinatesChecker_Result__rosidl_typesupport_introspection_c__CoordinatesChecker_Result_message_type_support_handle.typesupport_identifier) {
    CoordinatesChecker_Result__rosidl_typesupport_introspection_c__CoordinatesChecker_Result_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CoordinatesChecker_Result__rosidl_typesupport_introspection_c__CoordinatesChecker_Result_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_srv_action_interface_cpp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__functions.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.h"


// Include directives for member types
// Member `position`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CoordinatesChecker_Feedback__rosidl_typesupport_introspection_c__CoordinatesChecker_Feedback_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_srv_action_interface_cpp__action__CoordinatesChecker_Feedback__init(message_memory);
}

void CoordinatesChecker_Feedback__rosidl_typesupport_introspection_c__CoordinatesChecker_Feedback_fini_function(void * message_memory)
{
  msg_srv_action_interface_cpp__action__CoordinatesChecker_Feedback__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CoordinatesChecker_Feedback__rosidl_typesupport_introspection_c__CoordinatesChecker_Feedback_message_member_array[1] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp__action__CoordinatesChecker_Feedback, position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CoordinatesChecker_Feedback__rosidl_typesupport_introspection_c__CoordinatesChecker_Feedback_message_members = {
  "msg_srv_action_interface_cpp__action",  // message namespace
  "CoordinatesChecker_Feedback",  // message name
  1,  // number of fields
  sizeof(msg_srv_action_interface_cpp__action__CoordinatesChecker_Feedback),
  CoordinatesChecker_Feedback__rosidl_typesupport_introspection_c__CoordinatesChecker_Feedback_message_member_array,  // message members
  CoordinatesChecker_Feedback__rosidl_typesupport_introspection_c__CoordinatesChecker_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  CoordinatesChecker_Feedback__rosidl_typesupport_introspection_c__CoordinatesChecker_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CoordinatesChecker_Feedback__rosidl_typesupport_introspection_c__CoordinatesChecker_Feedback_message_type_support_handle = {
  0,
  &CoordinatesChecker_Feedback__rosidl_typesupport_introspection_c__CoordinatesChecker_Feedback_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_srv_action_interface_cpp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_Feedback)() {
  if (!CoordinatesChecker_Feedback__rosidl_typesupport_introspection_c__CoordinatesChecker_Feedback_message_type_support_handle.typesupport_identifier) {
    CoordinatesChecker_Feedback__rosidl_typesupport_introspection_c__CoordinatesChecker_Feedback_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CoordinatesChecker_Feedback__rosidl_typesupport_introspection_c__CoordinatesChecker_Feedback_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_srv_action_interface_cpp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__functions.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.h"


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `goal`
#include "msg_srv_action_interface_cpp/action/coordinates_checker.h"
// Member `goal`
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CoordinatesChecker_SendGoal_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_srv_action_interface_cpp__action__CoordinatesChecker_SendGoal_Request__init(message_memory);
}

void CoordinatesChecker_SendGoal_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Request_fini_function(void * message_memory)
{
  msg_srv_action_interface_cpp__action__CoordinatesChecker_SendGoal_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CoordinatesChecker_SendGoal_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp__action__CoordinatesChecker_SendGoal_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp__action__CoordinatesChecker_SendGoal_Request, goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CoordinatesChecker_SendGoal_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Request_message_members = {
  "msg_srv_action_interface_cpp__action",  // message namespace
  "CoordinatesChecker_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(msg_srv_action_interface_cpp__action__CoordinatesChecker_SendGoal_Request),
  CoordinatesChecker_SendGoal_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Request_message_member_array,  // message members
  CoordinatesChecker_SendGoal_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CoordinatesChecker_SendGoal_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CoordinatesChecker_SendGoal_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Request_message_type_support_handle = {
  0,
  &CoordinatesChecker_SendGoal_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_srv_action_interface_cpp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_SendGoal_Request)() {
  CoordinatesChecker_SendGoal_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  CoordinatesChecker_SendGoal_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Request_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_Goal)();
  if (!CoordinatesChecker_SendGoal_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Request_message_type_support_handle.typesupport_identifier) {
    CoordinatesChecker_SendGoal_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CoordinatesChecker_SendGoal_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_srv_action_interface_cpp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__functions.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.h"


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/time.h"
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CoordinatesChecker_SendGoal_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_srv_action_interface_cpp__action__CoordinatesChecker_SendGoal_Response__init(message_memory);
}

void CoordinatesChecker_SendGoal_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Response_fini_function(void * message_memory)
{
  msg_srv_action_interface_cpp__action__CoordinatesChecker_SendGoal_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CoordinatesChecker_SendGoal_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp__action__CoordinatesChecker_SendGoal_Response, accepted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp__action__CoordinatesChecker_SendGoal_Response, stamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CoordinatesChecker_SendGoal_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Response_message_members = {
  "msg_srv_action_interface_cpp__action",  // message namespace
  "CoordinatesChecker_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(msg_srv_action_interface_cpp__action__CoordinatesChecker_SendGoal_Response),
  CoordinatesChecker_SendGoal_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Response_message_member_array,  // message members
  CoordinatesChecker_SendGoal_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CoordinatesChecker_SendGoal_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CoordinatesChecker_SendGoal_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Response_message_type_support_handle = {
  0,
  &CoordinatesChecker_SendGoal_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_srv_action_interface_cpp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_SendGoal_Response)() {
  CoordinatesChecker_SendGoal_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!CoordinatesChecker_SendGoal_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Response_message_type_support_handle.typesupport_identifier) {
    CoordinatesChecker_SendGoal_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CoordinatesChecker_SendGoal_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msg_srv_action_interface_cpp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers msg_srv_action_interface_cpp__action__detail__coordinates_checker__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_service_members = {
  "msg_srv_action_interface_cpp__action",  // service namespace
  "CoordinatesChecker_SendGoal",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // msg_srv_action_interface_cpp__action__detail__coordinates_checker__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Request_message_type_support_handle,
  NULL  // response message
  // msg_srv_action_interface_cpp__action__detail__coordinates_checker__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_Response_message_type_support_handle
};

static rosidl_service_type_support_t msg_srv_action_interface_cpp__action__detail__coordinates_checker__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_service_type_support_handle = {
  0,
  &msg_srv_action_interface_cpp__action__detail__coordinates_checker__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_SendGoal_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_SendGoal_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_srv_action_interface_cpp
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_SendGoal)() {
  if (!msg_srv_action_interface_cpp__action__detail__coordinates_checker__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_service_type_support_handle.typesupport_identifier) {
    msg_srv_action_interface_cpp__action__detail__coordinates_checker__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)msg_srv_action_interface_cpp__action__detail__coordinates_checker__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_SendGoal_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_SendGoal_Response)()->data;
  }

  return &msg_srv_action_interface_cpp__action__detail__coordinates_checker__rosidl_typesupport_introspection_c__CoordinatesChecker_SendGoal_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_srv_action_interface_cpp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__functions.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CoordinatesChecker_GetResult_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_srv_action_interface_cpp__action__CoordinatesChecker_GetResult_Request__init(message_memory);
}

void CoordinatesChecker_GetResult_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Request_fini_function(void * message_memory)
{
  msg_srv_action_interface_cpp__action__CoordinatesChecker_GetResult_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CoordinatesChecker_GetResult_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp__action__CoordinatesChecker_GetResult_Request, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CoordinatesChecker_GetResult_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Request_message_members = {
  "msg_srv_action_interface_cpp__action",  // message namespace
  "CoordinatesChecker_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(msg_srv_action_interface_cpp__action__CoordinatesChecker_GetResult_Request),
  CoordinatesChecker_GetResult_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Request_message_member_array,  // message members
  CoordinatesChecker_GetResult_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CoordinatesChecker_GetResult_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CoordinatesChecker_GetResult_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Request_message_type_support_handle = {
  0,
  &CoordinatesChecker_GetResult_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_srv_action_interface_cpp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_GetResult_Request)() {
  CoordinatesChecker_GetResult_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Request_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  if (!CoordinatesChecker_GetResult_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Request_message_type_support_handle.typesupport_identifier) {
    CoordinatesChecker_GetResult_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CoordinatesChecker_GetResult_Request__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_srv_action_interface_cpp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__functions.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.h"


// Include directives for member types
// Member `result`
// already included above
// #include "msg_srv_action_interface_cpp/action/coordinates_checker.h"
// Member `result`
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CoordinatesChecker_GetResult_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_srv_action_interface_cpp__action__CoordinatesChecker_GetResult_Response__init(message_memory);
}

void CoordinatesChecker_GetResult_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Response_fini_function(void * message_memory)
{
  msg_srv_action_interface_cpp__action__CoordinatesChecker_GetResult_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CoordinatesChecker_GetResult_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp__action__CoordinatesChecker_GetResult_Response, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp__action__CoordinatesChecker_GetResult_Response, result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CoordinatesChecker_GetResult_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Response_message_members = {
  "msg_srv_action_interface_cpp__action",  // message namespace
  "CoordinatesChecker_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(msg_srv_action_interface_cpp__action__CoordinatesChecker_GetResult_Response),
  CoordinatesChecker_GetResult_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Response_message_member_array,  // message members
  CoordinatesChecker_GetResult_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CoordinatesChecker_GetResult_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CoordinatesChecker_GetResult_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Response_message_type_support_handle = {
  0,
  &CoordinatesChecker_GetResult_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_srv_action_interface_cpp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_GetResult_Response)() {
  CoordinatesChecker_GetResult_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Response_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_Result)();
  if (!CoordinatesChecker_GetResult_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Response_message_type_support_handle.typesupport_identifier) {
    CoordinatesChecker_GetResult_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CoordinatesChecker_GetResult_Response__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "msg_srv_action_interface_cpp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers msg_srv_action_interface_cpp__action__detail__coordinates_checker__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_service_members = {
  "msg_srv_action_interface_cpp__action",  // service namespace
  "CoordinatesChecker_GetResult",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // msg_srv_action_interface_cpp__action__detail__coordinates_checker__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Request_message_type_support_handle,
  NULL  // response message
  // msg_srv_action_interface_cpp__action__detail__coordinates_checker__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_Response_message_type_support_handle
};

static rosidl_service_type_support_t msg_srv_action_interface_cpp__action__detail__coordinates_checker__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_service_type_support_handle = {
  0,
  &msg_srv_action_interface_cpp__action__detail__coordinates_checker__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_GetResult_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_GetResult_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_srv_action_interface_cpp
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_GetResult)() {
  if (!msg_srv_action_interface_cpp__action__detail__coordinates_checker__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_service_type_support_handle.typesupport_identifier) {
    msg_srv_action_interface_cpp__action__detail__coordinates_checker__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)msg_srv_action_interface_cpp__action__detail__coordinates_checker__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_GetResult_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_GetResult_Response)()->data;
  }

  return &msg_srv_action_interface_cpp__action__detail__coordinates_checker__rosidl_typesupport_introspection_c__CoordinatesChecker_GetResult_service_type_support_handle;
}

// already included above
// #include <stddef.h>
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__rosidl_typesupport_introspection_c.h"
// already included above
// #include "msg_srv_action_interface_cpp/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__functions.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.h"


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/uuid.h"
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__rosidl_typesupport_introspection_c.h"
// Member `feedback`
// already included above
// #include "msg_srv_action_interface_cpp/action/coordinates_checker.h"
// Member `feedback`
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CoordinatesChecker_FeedbackMessage__rosidl_typesupport_introspection_c__CoordinatesChecker_FeedbackMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  msg_srv_action_interface_cpp__action__CoordinatesChecker_FeedbackMessage__init(message_memory);
}

void CoordinatesChecker_FeedbackMessage__rosidl_typesupport_introspection_c__CoordinatesChecker_FeedbackMessage_fini_function(void * message_memory)
{
  msg_srv_action_interface_cpp__action__CoordinatesChecker_FeedbackMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CoordinatesChecker_FeedbackMessage__rosidl_typesupport_introspection_c__CoordinatesChecker_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp__action__CoordinatesChecker_FeedbackMessage, goal_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "feedback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp__action__CoordinatesChecker_FeedbackMessage, feedback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CoordinatesChecker_FeedbackMessage__rosidl_typesupport_introspection_c__CoordinatesChecker_FeedbackMessage_message_members = {
  "msg_srv_action_interface_cpp__action",  // message namespace
  "CoordinatesChecker_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(msg_srv_action_interface_cpp__action__CoordinatesChecker_FeedbackMessage),
  CoordinatesChecker_FeedbackMessage__rosidl_typesupport_introspection_c__CoordinatesChecker_FeedbackMessage_message_member_array,  // message members
  CoordinatesChecker_FeedbackMessage__rosidl_typesupport_introspection_c__CoordinatesChecker_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  CoordinatesChecker_FeedbackMessage__rosidl_typesupport_introspection_c__CoordinatesChecker_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CoordinatesChecker_FeedbackMessage__rosidl_typesupport_introspection_c__CoordinatesChecker_FeedbackMessage_message_type_support_handle = {
  0,
  &CoordinatesChecker_FeedbackMessage__rosidl_typesupport_introspection_c__CoordinatesChecker_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_msg_srv_action_interface_cpp
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_FeedbackMessage)() {
  CoordinatesChecker_FeedbackMessage__rosidl_typesupport_introspection_c__CoordinatesChecker_FeedbackMessage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, unique_identifier_msgs, msg, UUID)();
  CoordinatesChecker_FeedbackMessage__rosidl_typesupport_introspection_c__CoordinatesChecker_FeedbackMessage_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, msg_srv_action_interface_cpp, action, CoordinatesChecker_Feedback)();
  if (!CoordinatesChecker_FeedbackMessage__rosidl_typesupport_introspection_c__CoordinatesChecker_FeedbackMessage_message_type_support_handle.typesupport_identifier) {
    CoordinatesChecker_FeedbackMessage__rosidl_typesupport_introspection_c__CoordinatesChecker_FeedbackMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CoordinatesChecker_FeedbackMessage__rosidl_typesupport_introspection_c__CoordinatesChecker_FeedbackMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
