// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg_srv_action_interface_py_test:msg/Coordinates.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_PY_TEST__MSG__DETAIL__COORDINATES__STRUCT_HPP_
#define MSG_SRV_ACTION_INTERFACE_PY_TEST__MSG__DETAIL__COORDINATES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__msg_srv_action_interface_py_test__msg__Coordinates __attribute__((deprecated))
#else
# define DEPRECATED__msg_srv_action_interface_py_test__msg__Coordinates __declspec(deprecated)
#endif

namespace msg_srv_action_interface_py_test
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Coordinates_
{
  using Type = Coordinates_<ContainerAllocator>;

  explicit Coordinates_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->coordinate_x = 0;
      this->coordinate_y = 0;
    }
  }

  explicit Coordinates_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : stamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->coordinate_x = 0;
      this->coordinate_y = 0;
    }
  }

  // field types and members
  using _stamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _stamp_type stamp;
  using _coordinate_x_type =
    int8_t;
  _coordinate_x_type coordinate_x;
  using _coordinate_y_type =
    int8_t;
  _coordinate_y_type coordinate_y;

  // setters for named parameter idiom
  Type & set__stamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->stamp = _arg;
    return *this;
  }
  Type & set__coordinate_x(
    const int8_t & _arg)
  {
    this->coordinate_x = _arg;
    return *this;
  }
  Type & set__coordinate_y(
    const int8_t & _arg)
  {
    this->coordinate_y = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_srv_action_interface_py_test::msg::Coordinates_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_srv_action_interface_py_test::msg::Coordinates_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_srv_action_interface_py_test::msg::Coordinates_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_srv_action_interface_py_test::msg::Coordinates_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_py_test::msg::Coordinates_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_py_test::msg::Coordinates_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_py_test::msg::Coordinates_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_py_test::msg::Coordinates_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_srv_action_interface_py_test::msg::Coordinates_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_srv_action_interface_py_test::msg::Coordinates_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_srv_action_interface_py_test__msg__Coordinates
    std::shared_ptr<msg_srv_action_interface_py_test::msg::Coordinates_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_srv_action_interface_py_test__msg__Coordinates
    std::shared_ptr<msg_srv_action_interface_py_test::msg::Coordinates_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Coordinates_ & other) const
  {
    if (this->stamp != other.stamp) {
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
  bool operator!=(const Coordinates_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Coordinates_

// alias to use template instance with default allocator
using Coordinates =
  msg_srv_action_interface_py_test::msg::Coordinates_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace msg_srv_action_interface_py_test

#endif  // MSG_SRV_ACTION_INTERFACE_PY_TEST__MSG__DETAIL__COORDINATES__STRUCT_HPP_
