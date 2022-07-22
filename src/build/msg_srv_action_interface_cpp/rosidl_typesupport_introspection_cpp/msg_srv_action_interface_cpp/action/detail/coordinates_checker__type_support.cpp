// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from msg_srv_action_interface_cpp:action/CoordinatesChecker.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace msg_srv_action_interface_cpp
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void CoordinatesChecker_Goal_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal(_init);
}

void CoordinatesChecker_Goal_fini_function(void * message_memory)
{
  auto typed_message = static_cast<msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal *>(message_memory);
  typed_message->~CoordinatesChecker_Goal();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CoordinatesChecker_Goal_message_member_array[2] = {
  {
    "coordinate_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal, coordinate_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "coordinate_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal, coordinate_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CoordinatesChecker_Goal_message_members = {
  "msg_srv_action_interface_cpp::action",  // message namespace
  "CoordinatesChecker_Goal",  // message name
  2,  // number of fields
  sizeof(msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal),
  CoordinatesChecker_Goal_message_member_array,  // message members
  CoordinatesChecker_Goal_init_function,  // function to initialize message memory (memory has to be allocated)
  CoordinatesChecker_Goal_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CoordinatesChecker_Goal_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CoordinatesChecker_Goal_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace msg_srv_action_interface_cpp


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal>()
{
  return &::msg_srv_action_interface_cpp::action::rosidl_typesupport_introspection_cpp::CoordinatesChecker_Goal_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg_srv_action_interface_cpp, action, CoordinatesChecker_Goal)() {
  return &::msg_srv_action_interface_cpp::action::rosidl_typesupport_introspection_cpp::CoordinatesChecker_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace msg_srv_action_interface_cpp
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void CoordinatesChecker_Result_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) msg_srv_action_interface_cpp::action::CoordinatesChecker_Result(_init);
}

void CoordinatesChecker_Result_fini_function(void * message_memory)
{
  auto typed_message = static_cast<msg_srv_action_interface_cpp::action::CoordinatesChecker_Result *>(message_memory);
  typed_message->~CoordinatesChecker_Result();
}

size_t size_function__CoordinatesChecker_Result__all_position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CoordinatesChecker_Result__all_position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__CoordinatesChecker_Result__all_position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__CoordinatesChecker_Result__all_position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CoordinatesChecker_Result_message_member_array[3] = {
  {
    "all_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp::action::CoordinatesChecker_Result, all_position),  // bytes offset in struct
    nullptr,  // default value
    size_function__CoordinatesChecker_Result__all_position,  // size() function pointer
    get_const_function__CoordinatesChecker_Result__all_position,  // get_const(index) function pointer
    get_function__CoordinatesChecker_Result__all_position,  // get(index) function pointer
    resize_function__CoordinatesChecker_Result__all_position  // resize(index) function pointer
  },
  {
    "coordinate_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp::action::CoordinatesChecker_Result, coordinate_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "coordinate_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp::action::CoordinatesChecker_Result, coordinate_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CoordinatesChecker_Result_message_members = {
  "msg_srv_action_interface_cpp::action",  // message namespace
  "CoordinatesChecker_Result",  // message name
  3,  // number of fields
  sizeof(msg_srv_action_interface_cpp::action::CoordinatesChecker_Result),
  CoordinatesChecker_Result_message_member_array,  // message members
  CoordinatesChecker_Result_init_function,  // function to initialize message memory (memory has to be allocated)
  CoordinatesChecker_Result_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CoordinatesChecker_Result_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CoordinatesChecker_Result_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace msg_srv_action_interface_cpp


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_cpp::action::CoordinatesChecker_Result>()
{
  return &::msg_srv_action_interface_cpp::action::rosidl_typesupport_introspection_cpp::CoordinatesChecker_Result_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg_srv_action_interface_cpp, action, CoordinatesChecker_Result)() {
  return &::msg_srv_action_interface_cpp::action::rosidl_typesupport_introspection_cpp::CoordinatesChecker_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace msg_srv_action_interface_cpp
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void CoordinatesChecker_Feedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback(_init);
}

void CoordinatesChecker_Feedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback *>(message_memory);
  typed_message->~CoordinatesChecker_Feedback();
}

size_t size_function__CoordinatesChecker_Feedback__position(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__CoordinatesChecker_Feedback__position(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__CoordinatesChecker_Feedback__position(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void resize_function__CoordinatesChecker_Feedback__position(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CoordinatesChecker_Feedback_message_member_array[1] = {
  {
    "position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback, position),  // bytes offset in struct
    nullptr,  // default value
    size_function__CoordinatesChecker_Feedback__position,  // size() function pointer
    get_const_function__CoordinatesChecker_Feedback__position,  // get_const(index) function pointer
    get_function__CoordinatesChecker_Feedback__position,  // get(index) function pointer
    resize_function__CoordinatesChecker_Feedback__position  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CoordinatesChecker_Feedback_message_members = {
  "msg_srv_action_interface_cpp::action",  // message namespace
  "CoordinatesChecker_Feedback",  // message name
  1,  // number of fields
  sizeof(msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback),
  CoordinatesChecker_Feedback_message_member_array,  // message members
  CoordinatesChecker_Feedback_init_function,  // function to initialize message memory (memory has to be allocated)
  CoordinatesChecker_Feedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CoordinatesChecker_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CoordinatesChecker_Feedback_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace msg_srv_action_interface_cpp


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback>()
{
  return &::msg_srv_action_interface_cpp::action::rosidl_typesupport_introspection_cpp::CoordinatesChecker_Feedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg_srv_action_interface_cpp, action, CoordinatesChecker_Feedback)() {
  return &::msg_srv_action_interface_cpp::action::rosidl_typesupport_introspection_cpp::CoordinatesChecker_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace msg_srv_action_interface_cpp
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void CoordinatesChecker_SendGoal_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request(_init);
}

void CoordinatesChecker_SendGoal_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request *>(message_memory);
  typed_message->~CoordinatesChecker_SendGoal_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CoordinatesChecker_SendGoal_Request_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "goal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request, goal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CoordinatesChecker_SendGoal_Request_message_members = {
  "msg_srv_action_interface_cpp::action",  // message namespace
  "CoordinatesChecker_SendGoal_Request",  // message name
  2,  // number of fields
  sizeof(msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request),
  CoordinatesChecker_SendGoal_Request_message_member_array,  // message members
  CoordinatesChecker_SendGoal_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CoordinatesChecker_SendGoal_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CoordinatesChecker_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CoordinatesChecker_SendGoal_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace msg_srv_action_interface_cpp


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request>()
{
  return &::msg_srv_action_interface_cpp::action::rosidl_typesupport_introspection_cpp::CoordinatesChecker_SendGoal_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg_srv_action_interface_cpp, action, CoordinatesChecker_SendGoal_Request)() {
  return &::msg_srv_action_interface_cpp::action::rosidl_typesupport_introspection_cpp::CoordinatesChecker_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace msg_srv_action_interface_cpp
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void CoordinatesChecker_SendGoal_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response(_init);
}

void CoordinatesChecker_SendGoal_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response *>(message_memory);
  typed_message->~CoordinatesChecker_SendGoal_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CoordinatesChecker_SendGoal_Response_message_member_array[2] = {
  {
    "accepted",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response, accepted),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response, stamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CoordinatesChecker_SendGoal_Response_message_members = {
  "msg_srv_action_interface_cpp::action",  // message namespace
  "CoordinatesChecker_SendGoal_Response",  // message name
  2,  // number of fields
  sizeof(msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response),
  CoordinatesChecker_SendGoal_Response_message_member_array,  // message members
  CoordinatesChecker_SendGoal_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CoordinatesChecker_SendGoal_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CoordinatesChecker_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CoordinatesChecker_SendGoal_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace msg_srv_action_interface_cpp


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response>()
{
  return &::msg_srv_action_interface_cpp::action::rosidl_typesupport_introspection_cpp::CoordinatesChecker_SendGoal_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg_srv_action_interface_cpp, action, CoordinatesChecker_SendGoal_Response)() {
  return &::msg_srv_action_interface_cpp::action::rosidl_typesupport_introspection_cpp::CoordinatesChecker_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace msg_srv_action_interface_cpp
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers CoordinatesChecker_SendGoal_service_members = {
  "msg_srv_action_interface_cpp::action",  // service namespace
  "CoordinatesChecker_SendGoal",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t CoordinatesChecker_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CoordinatesChecker_SendGoal_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace msg_srv_action_interface_cpp


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::msg_srv_action_interface_cpp::action::rosidl_typesupport_introspection_cpp::CoordinatesChecker_SendGoal_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg_srv_action_interface_cpp, action, CoordinatesChecker_SendGoal)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace msg_srv_action_interface_cpp
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void CoordinatesChecker_GetResult_Request_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request(_init);
}

void CoordinatesChecker_GetResult_Request_fini_function(void * message_memory)
{
  auto typed_message = static_cast<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request *>(message_memory);
  typed_message->~CoordinatesChecker_GetResult_Request();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CoordinatesChecker_GetResult_Request_message_member_array[1] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CoordinatesChecker_GetResult_Request_message_members = {
  "msg_srv_action_interface_cpp::action",  // message namespace
  "CoordinatesChecker_GetResult_Request",  // message name
  1,  // number of fields
  sizeof(msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request),
  CoordinatesChecker_GetResult_Request_message_member_array,  // message members
  CoordinatesChecker_GetResult_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  CoordinatesChecker_GetResult_Request_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CoordinatesChecker_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CoordinatesChecker_GetResult_Request_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace msg_srv_action_interface_cpp


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request>()
{
  return &::msg_srv_action_interface_cpp::action::rosidl_typesupport_introspection_cpp::CoordinatesChecker_GetResult_Request_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg_srv_action_interface_cpp, action, CoordinatesChecker_GetResult_Request)() {
  return &::msg_srv_action_interface_cpp::action::rosidl_typesupport_introspection_cpp::CoordinatesChecker_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace msg_srv_action_interface_cpp
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void CoordinatesChecker_GetResult_Response_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response(_init);
}

void CoordinatesChecker_GetResult_Response_fini_function(void * message_memory)
{
  auto typed_message = static_cast<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response *>(message_memory);
  typed_message->~CoordinatesChecker_GetResult_Response();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CoordinatesChecker_GetResult_Response_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<msg_srv_action_interface_cpp::action::CoordinatesChecker_Result>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response, result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CoordinatesChecker_GetResult_Response_message_members = {
  "msg_srv_action_interface_cpp::action",  // message namespace
  "CoordinatesChecker_GetResult_Response",  // message name
  2,  // number of fields
  sizeof(msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response),
  CoordinatesChecker_GetResult_Response_message_member_array,  // message members
  CoordinatesChecker_GetResult_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  CoordinatesChecker_GetResult_Response_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CoordinatesChecker_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CoordinatesChecker_GetResult_Response_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace msg_srv_action_interface_cpp


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response>()
{
  return &::msg_srv_action_interface_cpp::action::rosidl_typesupport_introspection_cpp::CoordinatesChecker_GetResult_Response_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg_srv_action_interface_cpp, action, CoordinatesChecker_GetResult_Response)() {
  return &::msg_srv_action_interface_cpp::action::rosidl_typesupport_introspection_cpp::CoordinatesChecker_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/service_type_support_decl.hpp"

namespace msg_srv_action_interface_cpp
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

// this is intentionally not const to allow initialization later to prevent an initialization race
static ::rosidl_typesupport_introspection_cpp::ServiceMembers CoordinatesChecker_GetResult_service_members = {
  "msg_srv_action_interface_cpp::action",  // service namespace
  "CoordinatesChecker_GetResult",  // service name
  // these two fields are initialized below on the first access
  // see get_service_type_support_handle<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult>()
  nullptr,  // request message
  nullptr  // response message
};

static const rosidl_service_type_support_t CoordinatesChecker_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CoordinatesChecker_GetResult_service_members,
  get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace msg_srv_action_interface_cpp


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult>()
{
  // get a handle to the value to be returned
  auto service_type_support =
    &::msg_srv_action_interface_cpp::action::rosidl_typesupport_introspection_cpp::CoordinatesChecker_GetResult_service_type_support_handle;
  // get a non-const and properly typed version of the data void *
  auto service_members = const_cast<::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
    static_cast<const ::rosidl_typesupport_introspection_cpp::ServiceMembers *>(
      service_type_support->data));
  // make sure that both the request_members_ and the response_members_ are initialized
  // if they are not, initialize them
  if (
    service_members->request_members_ == nullptr ||
    service_members->response_members_ == nullptr)
  {
    // initialize the request_members_ with the static function from the external library
    service_members->request_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request
      >()->data
      );
    // initialize the response_members_ with the static function from the external library
    service_members->response_members_ = static_cast<
      const ::rosidl_typesupport_introspection_cpp::MessageMembers *
      >(
      ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<
        ::msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response
      >()->data
      );
  }
  // finally return the properly initialized service_type_support handle
  return service_type_support;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg_srv_action_interface_cpp, action, CoordinatesChecker_GetResult)() {
  return ::rosidl_typesupport_introspection_cpp::get_service_type_support_handle<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "array"
// already included above
// #include "cstddef"
// already included above
// #include "string"
// already included above
// #include "vector"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/field_types.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace msg_srv_action_interface_cpp
{

namespace action
{

namespace rosidl_typesupport_introspection_cpp
{

void CoordinatesChecker_FeedbackMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage(_init);
}

void CoordinatesChecker_FeedbackMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage *>(message_memory);
  typed_message->~CoordinatesChecker_FeedbackMessage();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CoordinatesChecker_FeedbackMessage_message_member_array[2] = {
  {
    "goal_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<unique_identifier_msgs::msg::UUID>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage, goal_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "feedback",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage, feedback),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CoordinatesChecker_FeedbackMessage_message_members = {
  "msg_srv_action_interface_cpp::action",  // message namespace
  "CoordinatesChecker_FeedbackMessage",  // message name
  2,  // number of fields
  sizeof(msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage),
  CoordinatesChecker_FeedbackMessage_message_member_array,  // message members
  CoordinatesChecker_FeedbackMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  CoordinatesChecker_FeedbackMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CoordinatesChecker_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CoordinatesChecker_FeedbackMessage_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace action

}  // namespace msg_srv_action_interface_cpp


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage>()
{
  return &::msg_srv_action_interface_cpp::action::rosidl_typesupport_introspection_cpp::CoordinatesChecker_FeedbackMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, msg_srv_action_interface_cpp, action, CoordinatesChecker_FeedbackMessage)() {
  return &::msg_srv_action_interface_cpp::action::rosidl_typesupport_introspection_cpp::CoordinatesChecker_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
