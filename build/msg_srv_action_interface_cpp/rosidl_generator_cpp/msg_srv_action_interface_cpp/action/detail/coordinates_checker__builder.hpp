// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from msg_srv_action_interface_cpp:action/CoordinatesChecker.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_CPP__ACTION__DETAIL__COORDINATES_CHECKER__BUILDER_HPP_
#define MSG_SRV_ACTION_INTERFACE_CPP__ACTION__DETAIL__COORDINATES_CHECKER__BUILDER_HPP_

#include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace msg_srv_action_interface_cpp
{

namespace action
{

namespace builder
{

class Init_CoordinatesChecker_Goal_coordinate_y
{
public:
  explicit Init_CoordinatesChecker_Goal_coordinate_y(::msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal & msg)
  : msg_(msg)
  {}
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal coordinate_y(::msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal::_coordinate_y_type arg)
  {
    msg_.coordinate_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal msg_;
};

class Init_CoordinatesChecker_Goal_coordinate_x
{
public:
  Init_CoordinatesChecker_Goal_coordinate_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CoordinatesChecker_Goal_coordinate_y coordinate_x(::msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal::_coordinate_x_type arg)
  {
    msg_.coordinate_x = std::move(arg);
    return Init_CoordinatesChecker_Goal_coordinate_y(msg_);
  }

private:
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal>()
{
  return msg_srv_action_interface_cpp::action::builder::Init_CoordinatesChecker_Goal_coordinate_x();
}

}  // namespace msg_srv_action_interface_cpp


namespace msg_srv_action_interface_cpp
{

namespace action
{

namespace builder
{

class Init_CoordinatesChecker_Result_coordinate_y
{
public:
  explicit Init_CoordinatesChecker_Result_coordinate_y(::msg_srv_action_interface_cpp::action::CoordinatesChecker_Result & msg)
  : msg_(msg)
  {}
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_Result coordinate_y(::msg_srv_action_interface_cpp::action::CoordinatesChecker_Result::_coordinate_y_type arg)
  {
    msg_.coordinate_y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_Result msg_;
};

class Init_CoordinatesChecker_Result_coordinate_x
{
public:
  explicit Init_CoordinatesChecker_Result_coordinate_x(::msg_srv_action_interface_cpp::action::CoordinatesChecker_Result & msg)
  : msg_(msg)
  {}
  Init_CoordinatesChecker_Result_coordinate_y coordinate_x(::msg_srv_action_interface_cpp::action::CoordinatesChecker_Result::_coordinate_x_type arg)
  {
    msg_.coordinate_x = std::move(arg);
    return Init_CoordinatesChecker_Result_coordinate_y(msg_);
  }

private:
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_Result msg_;
};

class Init_CoordinatesChecker_Result_all_position
{
public:
  Init_CoordinatesChecker_Result_all_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CoordinatesChecker_Result_coordinate_x all_position(::msg_srv_action_interface_cpp::action::CoordinatesChecker_Result::_all_position_type arg)
  {
    msg_.all_position = std::move(arg);
    return Init_CoordinatesChecker_Result_coordinate_x(msg_);
  }

private:
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_action_interface_cpp::action::CoordinatesChecker_Result>()
{
  return msg_srv_action_interface_cpp::action::builder::Init_CoordinatesChecker_Result_all_position();
}

}  // namespace msg_srv_action_interface_cpp


namespace msg_srv_action_interface_cpp
{

namespace action
{

namespace builder
{

class Init_CoordinatesChecker_Feedback_position
{
public:
  Init_CoordinatesChecker_Feedback_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback position(::msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback::_position_type arg)
  {
    msg_.position = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback>()
{
  return msg_srv_action_interface_cpp::action::builder::Init_CoordinatesChecker_Feedback_position();
}

}  // namespace msg_srv_action_interface_cpp


namespace msg_srv_action_interface_cpp
{

namespace action
{

namespace builder
{

class Init_CoordinatesChecker_SendGoal_Request_goal
{
public:
  explicit Init_CoordinatesChecker_SendGoal_Request_goal(::msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request goal(::msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request msg_;
};

class Init_CoordinatesChecker_SendGoal_Request_goal_id
{
public:
  Init_CoordinatesChecker_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CoordinatesChecker_SendGoal_Request_goal goal_id(::msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CoordinatesChecker_SendGoal_Request_goal(msg_);
  }

private:
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request>()
{
  return msg_srv_action_interface_cpp::action::builder::Init_CoordinatesChecker_SendGoal_Request_goal_id();
}

}  // namespace msg_srv_action_interface_cpp


namespace msg_srv_action_interface_cpp
{

namespace action
{

namespace builder
{

class Init_CoordinatesChecker_SendGoal_Response_stamp
{
public:
  explicit Init_CoordinatesChecker_SendGoal_Response_stamp(::msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response stamp(::msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response msg_;
};

class Init_CoordinatesChecker_SendGoal_Response_accepted
{
public:
  Init_CoordinatesChecker_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CoordinatesChecker_SendGoal_Response_stamp accepted(::msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_CoordinatesChecker_SendGoal_Response_stamp(msg_);
  }

private:
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response>()
{
  return msg_srv_action_interface_cpp::action::builder::Init_CoordinatesChecker_SendGoal_Response_accepted();
}

}  // namespace msg_srv_action_interface_cpp


namespace msg_srv_action_interface_cpp
{

namespace action
{

namespace builder
{

class Init_CoordinatesChecker_GetResult_Request_goal_id
{
public:
  Init_CoordinatesChecker_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request goal_id(::msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request>()
{
  return msg_srv_action_interface_cpp::action::builder::Init_CoordinatesChecker_GetResult_Request_goal_id();
}

}  // namespace msg_srv_action_interface_cpp


namespace msg_srv_action_interface_cpp
{

namespace action
{

namespace builder
{

class Init_CoordinatesChecker_GetResult_Response_result
{
public:
  explicit Init_CoordinatesChecker_GetResult_Response_result(::msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response result(::msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response msg_;
};

class Init_CoordinatesChecker_GetResult_Response_status
{
public:
  Init_CoordinatesChecker_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CoordinatesChecker_GetResult_Response_result status(::msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_CoordinatesChecker_GetResult_Response_result(msg_);
  }

private:
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response>()
{
  return msg_srv_action_interface_cpp::action::builder::Init_CoordinatesChecker_GetResult_Response_status();
}

}  // namespace msg_srv_action_interface_cpp


namespace msg_srv_action_interface_cpp
{

namespace action
{

namespace builder
{

class Init_CoordinatesChecker_FeedbackMessage_feedback
{
public:
  explicit Init_CoordinatesChecker_FeedbackMessage_feedback(::msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage feedback(::msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage msg_;
};

class Init_CoordinatesChecker_FeedbackMessage_goal_id
{
public:
  Init_CoordinatesChecker_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CoordinatesChecker_FeedbackMessage_feedback goal_id(::msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_CoordinatesChecker_FeedbackMessage_feedback(msg_);
  }

private:
  ::msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage>()
{
  return msg_srv_action_interface_cpp::action::builder::Init_CoordinatesChecker_FeedbackMessage_goal_id();
}

}  // namespace msg_srv_action_interface_cpp

#endif  // MSG_SRV_ACTION_INTERFACE_CPP__ACTION__DETAIL__COORDINATES_CHECKER__BUILDER_HPP_
