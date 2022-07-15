// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from msg_srv_action_interface_py_test:action/CoordinatesChecker.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_PY_TEST__ACTION__DETAIL__COORDINATES_CHECKER__STRUCT_H_
#define MSG_SRV_ACTION_INTERFACE_PY_TEST__ACTION__DETAIL__COORDINATES_CHECKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'goal_coordinates'
#include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/CoordinatesChecker in the package msg_srv_action_interface_py_test.
typedef struct msg_srv_action_interface_py_test__action__CoordinatesChecker_Goal
{
  rosidl_runtime_c__int16__Sequence goal_coordinates;
} msg_srv_action_interface_py_test__action__CoordinatesChecker_Goal;

// Struct for a sequence of msg_srv_action_interface_py_test__action__CoordinatesChecker_Goal.
typedef struct msg_srv_action_interface_py_test__action__CoordinatesChecker_Goal__Sequence
{
  msg_srv_action_interface_py_test__action__CoordinatesChecker_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_py_test__action__CoordinatesChecker_Goal__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'all_position'
#include "rosidl_runtime_c/string.h"
// Member 'current_coordinates'
// already included above
// #include "rosidl_runtime_c/primitives_sequence.h"

// Struct defined in action/CoordinatesChecker in the package msg_srv_action_interface_py_test.
typedef struct msg_srv_action_interface_py_test__action__CoordinatesChecker_Result
{
  rosidl_runtime_c__String__Sequence all_position;
  rosidl_runtime_c__int16__Sequence current_coordinates;
} msg_srv_action_interface_py_test__action__CoordinatesChecker_Result;

// Struct for a sequence of msg_srv_action_interface_py_test__action__CoordinatesChecker_Result.
typedef struct msg_srv_action_interface_py_test__action__CoordinatesChecker_Result__Sequence
{
  msg_srv_action_interface_py_test__action__CoordinatesChecker_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_py_test__action__CoordinatesChecker_Result__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'position'
// already included above
// #include "rosidl_runtime_c/string.h"

// Struct defined in action/CoordinatesChecker in the package msg_srv_action_interface_py_test.
typedef struct msg_srv_action_interface_py_test__action__CoordinatesChecker_Feedback
{
  rosidl_runtime_c__String__Sequence position;
} msg_srv_action_interface_py_test__action__CoordinatesChecker_Feedback;

// Struct for a sequence of msg_srv_action_interface_py_test__action__CoordinatesChecker_Feedback.
typedef struct msg_srv_action_interface_py_test__action__CoordinatesChecker_Feedback__Sequence
{
  msg_srv_action_interface_py_test__action__CoordinatesChecker_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_py_test__action__CoordinatesChecker_Feedback__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "msg_srv_action_interface_py_test/action/detail/coordinates_checker__struct.h"

// Struct defined in action/CoordinatesChecker in the package msg_srv_action_interface_py_test.
typedef struct msg_srv_action_interface_py_test__action__CoordinatesChecker_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  msg_srv_action_interface_py_test__action__CoordinatesChecker_Goal goal;
} msg_srv_action_interface_py_test__action__CoordinatesChecker_SendGoal_Request;

// Struct for a sequence of msg_srv_action_interface_py_test__action__CoordinatesChecker_SendGoal_Request.
typedef struct msg_srv_action_interface_py_test__action__CoordinatesChecker_SendGoal_Request__Sequence
{
  msg_srv_action_interface_py_test__action__CoordinatesChecker_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_py_test__action__CoordinatesChecker_SendGoal_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

// Struct defined in action/CoordinatesChecker in the package msg_srv_action_interface_py_test.
typedef struct msg_srv_action_interface_py_test__action__CoordinatesChecker_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} msg_srv_action_interface_py_test__action__CoordinatesChecker_SendGoal_Response;

// Struct for a sequence of msg_srv_action_interface_py_test__action__CoordinatesChecker_SendGoal_Response.
typedef struct msg_srv_action_interface_py_test__action__CoordinatesChecker_SendGoal_Response__Sequence
{
  msg_srv_action_interface_py_test__action__CoordinatesChecker_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_py_test__action__CoordinatesChecker_SendGoal_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

// Struct defined in action/CoordinatesChecker in the package msg_srv_action_interface_py_test.
typedef struct msg_srv_action_interface_py_test__action__CoordinatesChecker_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} msg_srv_action_interface_py_test__action__CoordinatesChecker_GetResult_Request;

// Struct for a sequence of msg_srv_action_interface_py_test__action__CoordinatesChecker_GetResult_Request.
typedef struct msg_srv_action_interface_py_test__action__CoordinatesChecker_GetResult_Request__Sequence
{
  msg_srv_action_interface_py_test__action__CoordinatesChecker_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_py_test__action__CoordinatesChecker_GetResult_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "msg_srv_action_interface_py_test/action/detail/coordinates_checker__struct.h"

// Struct defined in action/CoordinatesChecker in the package msg_srv_action_interface_py_test.
typedef struct msg_srv_action_interface_py_test__action__CoordinatesChecker_GetResult_Response
{
  int8_t status;
  msg_srv_action_interface_py_test__action__CoordinatesChecker_Result result;
} msg_srv_action_interface_py_test__action__CoordinatesChecker_GetResult_Response;

// Struct for a sequence of msg_srv_action_interface_py_test__action__CoordinatesChecker_GetResult_Response.
typedef struct msg_srv_action_interface_py_test__action__CoordinatesChecker_GetResult_Response__Sequence
{
  msg_srv_action_interface_py_test__action__CoordinatesChecker_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_py_test__action__CoordinatesChecker_GetResult_Response__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "msg_srv_action_interface_py_test/action/detail/coordinates_checker__struct.h"

// Struct defined in action/CoordinatesChecker in the package msg_srv_action_interface_py_test.
typedef struct msg_srv_action_interface_py_test__action__CoordinatesChecker_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  msg_srv_action_interface_py_test__action__CoordinatesChecker_Feedback feedback;
} msg_srv_action_interface_py_test__action__CoordinatesChecker_FeedbackMessage;

// Struct for a sequence of msg_srv_action_interface_py_test__action__CoordinatesChecker_FeedbackMessage.
typedef struct msg_srv_action_interface_py_test__action__CoordinatesChecker_FeedbackMessage__Sequence
{
  msg_srv_action_interface_py_test__action__CoordinatesChecker_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} msg_srv_action_interface_py_test__action__CoordinatesChecker_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MSG_SRV_ACTION_INTERFACE_PY_TEST__ACTION__DETAIL__COORDINATES_CHECKER__STRUCT_H_
