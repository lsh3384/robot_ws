// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg_srv_action_interface_cpp:action/CoordinatesChecker.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_CPP__ACTION__DETAIL__COORDINATES_CHECKER__STRUCT_HPP_
#define MSG_SRV_ACTION_INTERFACE_CPP__ACTION__DETAIL__COORDINATES_CHECKER__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_Goal __attribute__((deprecated))
#else
# define DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_Goal __declspec(deprecated)
#endif

namespace msg_srv_action_interface_cpp
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CoordinatesChecker_Goal_
{
  using Type = CoordinatesChecker_Goal_<ContainerAllocator>;

  explicit CoordinatesChecker_Goal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->coordinate_x = 0;
      this->coordinate_y = 0;
    }
  }

  explicit CoordinatesChecker_Goal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->coordinate_x = 0;
      this->coordinate_y = 0;
    }
  }

  // field types and members
  using _coordinate_x_type =
    int16_t;
  _coordinate_x_type coordinate_x;
  using _coordinate_y_type =
    int16_t;
  _coordinate_y_type coordinate_y;

  // setters for named parameter idiom
  Type & set__coordinate_x(
    const int16_t & _arg)
  {
    this->coordinate_x = _arg;
    return *this;
  }
  Type & set__coordinate_y(
    const int16_t & _arg)
  {
    this->coordinate_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_Goal
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_Goal
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CoordinatesChecker_Goal_ & other) const
  {
    if (this->coordinate_x != other.coordinate_x) {
      return false;
    }
    if (this->coordinate_y != other.coordinate_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const CoordinatesChecker_Goal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CoordinatesChecker_Goal_

// alias to use template instance with default allocator
using CoordinatesChecker_Goal =
  msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace msg_srv_action_interface_cpp


#ifndef _WIN32
# define DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_Result __attribute__((deprecated))
#else
# define DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_Result __declspec(deprecated)
#endif

namespace msg_srv_action_interface_cpp
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CoordinatesChecker_Result_
{
  using Type = CoordinatesChecker_Result_<ContainerAllocator>;

  explicit CoordinatesChecker_Result_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->coordinate_x = 0;
      this->coordinate_y = 0;
    }
  }

  explicit CoordinatesChecker_Result_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->coordinate_x = 0;
      this->coordinate_y = 0;
    }
  }

  // field types and members
  using _all_position_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _all_position_type all_position;
  using _coordinate_x_type =
    int16_t;
  _coordinate_x_type coordinate_x;
  using _coordinate_y_type =
    int16_t;
  _coordinate_y_type coordinate_y;

  // setters for named parameter idiom
  Type & set__all_position(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->all_position = _arg;
    return *this;
  }
  Type & set__coordinate_x(
    const int16_t & _arg)
  {
    this->coordinate_x = _arg;
    return *this;
  }
  Type & set__coordinate_y(
    const int16_t & _arg)
  {
    this->coordinate_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_srv_action_interface_cpp::action::CoordinatesChecker_Result_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_srv_action_interface_cpp::action::CoordinatesChecker_Result_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Result_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Result_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_cpp::action::CoordinatesChecker_Result_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Result_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_cpp::action::CoordinatesChecker_Result_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Result_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Result_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Result_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_Result
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Result_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_Result
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Result_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CoordinatesChecker_Result_ & other) const
  {
    if (this->all_position != other.all_position) {
      return false;
    }
    if (this->coordinate_x != other.coordinate_x) {
      return false;
    }
    if (this->coordinate_y != other.coordinate_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const CoordinatesChecker_Result_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CoordinatesChecker_Result_

// alias to use template instance with default allocator
using CoordinatesChecker_Result =
  msg_srv_action_interface_cpp::action::CoordinatesChecker_Result_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace msg_srv_action_interface_cpp


#ifndef _WIN32
# define DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_Feedback __attribute__((deprecated))
#else
# define DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_Feedback __declspec(deprecated)
#endif

namespace msg_srv_action_interface_cpp
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CoordinatesChecker_Feedback_
{
  using Type = CoordinatesChecker_Feedback_<ContainerAllocator>;

  explicit CoordinatesChecker_Feedback_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CoordinatesChecker_Feedback_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _position_type =
    std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other>;
  _position_type position;

  // setters for named parameter idiom
  Type & set__position(
    const std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>, typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>>::other> & _arg)
  {
    this->position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_Feedback
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_Feedback
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CoordinatesChecker_Feedback_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    return true;
  }
  bool operator!=(const CoordinatesChecker_Feedback_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CoordinatesChecker_Feedback_

// alias to use template instance with default allocator
using CoordinatesChecker_Feedback =
  msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace msg_srv_action_interface_cpp


// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'goal'
#include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_SendGoal_Request __attribute__((deprecated))
#else
# define DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_SendGoal_Request __declspec(deprecated)
#endif

namespace msg_srv_action_interface_cpp
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CoordinatesChecker_SendGoal_Request_
{
  using Type = CoordinatesChecker_SendGoal_Request_<ContainerAllocator>;

  explicit CoordinatesChecker_SendGoal_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit CoordinatesChecker_SendGoal_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _goal_type =
    msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__goal(
    const msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_SendGoal_Request
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_SendGoal_Request
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CoordinatesChecker_SendGoal_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const CoordinatesChecker_SendGoal_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CoordinatesChecker_SendGoal_Request_

// alias to use template instance with default allocator
using CoordinatesChecker_SendGoal_Request =
  msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace msg_srv_action_interface_cpp


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_SendGoal_Response __attribute__((deprecated))
#else
# define DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_SendGoal_Response __declspec(deprecated)
#endif

namespace msg_srv_action_interface_cpp
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CoordinatesChecker_SendGoal_Response_
{
  using Type = CoordinatesChecker_SendGoal_Response_<ContainerAllocator>;

  explicit CoordinatesChecker_SendGoal_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  explicit CoordinatesChecker_SendGoal_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->accepted = false;
    }
  }

  // field types and members
  using _accepted_type =
    bool;
  _accepted_type accepted;
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;

  // setters for named parameter idiom
  Type & set__accepted(
    const bool & _arg)
  {
    this->accepted = _arg;
    return *this;
  }
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_SendGoal_Response
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_SendGoal_Response
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CoordinatesChecker_SendGoal_Response_ & other) const
  {
    if (this->accepted != other.accepted) {
      return false;
    }
    if (this->stamp != other.stamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const CoordinatesChecker_SendGoal_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CoordinatesChecker_SendGoal_Response_

// alias to use template instance with default allocator
using CoordinatesChecker_SendGoal_Response =
  msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace msg_srv_action_interface_cpp

namespace msg_srv_action_interface_cpp
{

namespace action
{

struct CoordinatesChecker_SendGoal
{
  using Request = msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Request;
  using Response = msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal_Response;
};

}  // namespace action

}  // namespace msg_srv_action_interface_cpp


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_GetResult_Request __attribute__((deprecated))
#else
# define DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_GetResult_Request __declspec(deprecated)
#endif

namespace msg_srv_action_interface_cpp
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CoordinatesChecker_GetResult_Request_
{
  using Type = CoordinatesChecker_GetResult_Request_<ContainerAllocator>;

  explicit CoordinatesChecker_GetResult_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init)
  {
    (void)_init;
  }

  explicit CoordinatesChecker_GetResult_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_GetResult_Request
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_GetResult_Request
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CoordinatesChecker_GetResult_Request_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const CoordinatesChecker_GetResult_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CoordinatesChecker_GetResult_Request_

// alias to use template instance with default allocator
using CoordinatesChecker_GetResult_Request =
  msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace msg_srv_action_interface_cpp


// Include directives for member types
// Member 'result'
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_GetResult_Response __attribute__((deprecated))
#else
# define DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_GetResult_Response __declspec(deprecated)
#endif

namespace msg_srv_action_interface_cpp
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CoordinatesChecker_GetResult_Response_
{
  using Type = CoordinatesChecker_GetResult_Response_<ContainerAllocator>;

  explicit CoordinatesChecker_GetResult_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  explicit CoordinatesChecker_GetResult_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : result(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = 0;
    }
  }

  // field types and members
  using _status_type =
    int8_t;
  _status_type status;
  using _result_type =
    msg_srv_action_interface_cpp::action::CoordinatesChecker_Result_<ContainerAllocator>;
  _result_type result;

  // setters for named parameter idiom
  Type & set__status(
    const int8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__result(
    const msg_srv_action_interface_cpp::action::CoordinatesChecker_Result_<ContainerAllocator> & _arg)
  {
    this->result = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_GetResult_Response
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_GetResult_Response
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CoordinatesChecker_GetResult_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    if (this->result != other.result) {
      return false;
    }
    return true;
  }
  bool operator!=(const CoordinatesChecker_GetResult_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CoordinatesChecker_GetResult_Response_

// alias to use template instance with default allocator
using CoordinatesChecker_GetResult_Response =
  msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace msg_srv_action_interface_cpp

namespace msg_srv_action_interface_cpp
{

namespace action
{

struct CoordinatesChecker_GetResult
{
  using Request = msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Request;
  using Response = msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult_Response;
};

}  // namespace action

}  // namespace msg_srv_action_interface_cpp


// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'feedback'
// already included above
// #include "msg_srv_action_interface_cpp/action/detail/coordinates_checker__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_FeedbackMessage __attribute__((deprecated))
#else
# define DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_FeedbackMessage __declspec(deprecated)
#endif

namespace msg_srv_action_interface_cpp
{

namespace action
{

// message struct
template<class ContainerAllocator>
struct CoordinatesChecker_FeedbackMessage_
{
  using Type = CoordinatesChecker_FeedbackMessage_<ContainerAllocator>;

  explicit CoordinatesChecker_FeedbackMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_init),
    feedback(_init)
  {
    (void)_init;
  }

  explicit CoordinatesChecker_FeedbackMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : goal_id(_alloc, _init),
    feedback(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _goal_id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_id_type goal_id;
  using _feedback_type =
    msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback_<ContainerAllocator>;
  _feedback_type feedback;

  // setters for named parameter idiom
  Type & set__goal_id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_id = _arg;
    return *this;
  }
  Type & set__feedback(
    const msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback_<ContainerAllocator> & _arg)
  {
    this->feedback = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_FeedbackMessage
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_srv_action_interface_cpp__action__CoordinatesChecker_FeedbackMessage
    std::shared_ptr<msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CoordinatesChecker_FeedbackMessage_ & other) const
  {
    if (this->goal_id != other.goal_id) {
      return false;
    }
    if (this->feedback != other.feedback) {
      return false;
    }
    return true;
  }
  bool operator!=(const CoordinatesChecker_FeedbackMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CoordinatesChecker_FeedbackMessage_

// alias to use template instance with default allocator
using CoordinatesChecker_FeedbackMessage =
  msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage_<std::allocator<void>>;

// constant definitions

}  // namespace action

}  // namespace msg_srv_action_interface_cpp

#include "action_msgs/srv/cancel_goal.hpp"
#include "action_msgs/msg/goal_info.hpp"
#include "action_msgs/msg/goal_status_array.hpp"

namespace msg_srv_action_interface_cpp
{

namespace action
{

struct CoordinatesChecker
{
  /// The goal message defined in the action definition.
  using Goal = msg_srv_action_interface_cpp::action::CoordinatesChecker_Goal;
  /// The result message defined in the action definition.
  using Result = msg_srv_action_interface_cpp::action::CoordinatesChecker_Result;
  /// The feedback message defined in the action definition.
  using Feedback = msg_srv_action_interface_cpp::action::CoordinatesChecker_Feedback;

  struct Impl
  {
    /// The send_goal service using a wrapped version of the goal message as a request.
    using SendGoalService = msg_srv_action_interface_cpp::action::CoordinatesChecker_SendGoal;
    /// The get_result service using a wrapped version of the result message as a response.
    using GetResultService = msg_srv_action_interface_cpp::action::CoordinatesChecker_GetResult;
    /// The feedback message with generic fields which wraps the feedback message.
    using FeedbackMessage = msg_srv_action_interface_cpp::action::CoordinatesChecker_FeedbackMessage;

    /// The generic service to cancel a goal.
    using CancelGoalService = action_msgs::srv::CancelGoal;
    /// The generic message for the status of a goal.
    using GoalStatusMessage = action_msgs::msg::GoalStatusArray;
  };
};

typedef struct CoordinatesChecker CoordinatesChecker;

}  // namespace action

}  // namespace msg_srv_action_interface_cpp

#endif  // MSG_SRV_ACTION_INTERFACE_CPP__ACTION__DETAIL__COORDINATES_CHECKER__STRUCT_HPP_
