// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from msg_srv_action_interface_cpp:srv/Conversion.idl
// generated code does not contain a copyright notice
#include "msg_srv_action_interface_cpp/srv/detail/conversion__rosidl_typesupport_fastrtps_cpp.hpp"
#include "msg_srv_action_interface_cpp/srv/detail/conversion__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: cm
  cdr << ros_message.cm;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_cpp
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msg_srv_action_interface_cpp::srv::Conversion_Request & ros_message)
{
  // Member: cm
  cdr >> ros_message.cm;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_cpp
get_serialized_size(
  const msg_srv_action_interface_cpp::srv::Conversion_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: cm
  {
    size_t item_size = sizeof(ros_message.cm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_cpp
max_serialized_size_Conversion_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: cm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Conversion_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_cpp::srv::Conversion_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Conversion_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_srv_action_interface_cpp::srv::Conversion_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Conversion_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_cpp::srv::Conversion_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Conversion_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Conversion_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _Conversion_Request__callbacks = {
  "msg_srv_action_interface_cpp::srv",
  "Conversion_Request",
  _Conversion_Request__cdr_serialize,
  _Conversion_Request__cdr_deserialize,
  _Conversion_Request__get_serialized_size,
  _Conversion_Request__max_serialized_size
};

static rosidl_message_type_support_t _Conversion_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Conversion_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace msg_srv_action_interface_cpp

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_msg_srv_action_interface_cpp
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_cpp::srv::Conversion_Request>()
{
  return &msg_srv_action_interface_cpp::srv::typesupport_fastrtps_cpp::_Conversion_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_srv_action_interface_cpp, srv, Conversion_Request)() {
  return &msg_srv_action_interface_cpp::srv::typesupport_fastrtps_cpp::_Conversion_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: inch
  cdr << ros_message.inch;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_cpp
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  msg_srv_action_interface_cpp::srv::Conversion_Response & ros_message)
{
  // Member: inch
  cdr >> ros_message.inch;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_cpp
get_serialized_size(
  const msg_srv_action_interface_cpp::srv::Conversion_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: inch
  {
    size_t item_size = sizeof(ros_message.inch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_msg_srv_action_interface_cpp
max_serialized_size_Conversion_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: inch
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _Conversion_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_cpp::srv::Conversion_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Conversion_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<msg_srv_action_interface_cpp::srv::Conversion_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Conversion_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const msg_srv_action_interface_cpp::srv::Conversion_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Conversion_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_Conversion_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _Conversion_Response__callbacks = {
  "msg_srv_action_interface_cpp::srv",
  "Conversion_Response",
  _Conversion_Response__cdr_serialize,
  _Conversion_Response__cdr_deserialize,
  _Conversion_Response__get_serialized_size,
  _Conversion_Response__max_serialized_size
};

static rosidl_message_type_support_t _Conversion_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Conversion_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace msg_srv_action_interface_cpp

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_msg_srv_action_interface_cpp
const rosidl_message_type_support_t *
get_message_type_support_handle<msg_srv_action_interface_cpp::srv::Conversion_Response>()
{
  return &msg_srv_action_interface_cpp::srv::typesupport_fastrtps_cpp::_Conversion_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_srv_action_interface_cpp, srv, Conversion_Response)() {
  return &msg_srv_action_interface_cpp::srv::typesupport_fastrtps_cpp::_Conversion_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace msg_srv_action_interface_cpp
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _Conversion__callbacks = {
  "msg_srv_action_interface_cpp::srv",
  "Conversion",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_srv_action_interface_cpp, srv, Conversion_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_srv_action_interface_cpp, srv, Conversion_Response)(),
};

static rosidl_service_type_support_t _Conversion__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Conversion__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace msg_srv_action_interface_cpp

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_msg_srv_action_interface_cpp
const rosidl_service_type_support_t *
get_service_type_support_handle<msg_srv_action_interface_cpp::srv::Conversion>()
{
  return &msg_srv_action_interface_cpp::srv::typesupport_fastrtps_cpp::_Conversion__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, msg_srv_action_interface_cpp, srv, Conversion)() {
  return &msg_srv_action_interface_cpp::srv::typesupport_fastrtps_cpp::_Conversion__handle;
}

#ifdef __cplusplus
}
#endif
