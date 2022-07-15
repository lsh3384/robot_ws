// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from msg_srv_action_interface_py_test:srv/Conversion.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_PY_TEST__SRV__DETAIL__CONVERSION__STRUCT_HPP_
#define MSG_SRV_ACTION_INTERFACE_PY_TEST__SRV__DETAIL__CONVERSION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__msg_srv_action_interface_py_test__srv__Conversion_Request __attribute__((deprecated))
#else
# define DEPRECATED__msg_srv_action_interface_py_test__srv__Conversion_Request __declspec(deprecated)
#endif

namespace msg_srv_action_interface_py_test
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Conversion_Request_
{
  using Type = Conversion_Request_<ContainerAllocator>;

  explicit Conversion_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cm = 0.0f;
    }
  }

  explicit Conversion_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->cm = 0.0f;
    }
  }

  // field types and members
  using _cm_type =
    float;
  _cm_type cm;

  // setters for named parameter idiom
  Type & set__cm(
    const float & _arg)
  {
    this->cm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_srv_action_interface_py_test::srv::Conversion_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_srv_action_interface_py_test::srv::Conversion_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_srv_action_interface_py_test::srv::Conversion_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_srv_action_interface_py_test::srv::Conversion_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_py_test::srv::Conversion_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_py_test::srv::Conversion_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_py_test::srv::Conversion_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_py_test::srv::Conversion_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_srv_action_interface_py_test::srv::Conversion_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_srv_action_interface_py_test::srv::Conversion_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_srv_action_interface_py_test__srv__Conversion_Request
    std::shared_ptr<msg_srv_action_interface_py_test::srv::Conversion_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_srv_action_interface_py_test__srv__Conversion_Request
    std::shared_ptr<msg_srv_action_interface_py_test::srv::Conversion_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Conversion_Request_ & other) const
  {
    if (this->cm != other.cm) {
      return false;
    }
    return true;
  }
  bool operator!=(const Conversion_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Conversion_Request_

// alias to use template instance with default allocator
using Conversion_Request =
  msg_srv_action_interface_py_test::srv::Conversion_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msg_srv_action_interface_py_test


#ifndef _WIN32
# define DEPRECATED__msg_srv_action_interface_py_test__srv__Conversion_Response __attribute__((deprecated))
#else
# define DEPRECATED__msg_srv_action_interface_py_test__srv__Conversion_Response __declspec(deprecated)
#endif

namespace msg_srv_action_interface_py_test
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Conversion_Response_
{
  using Type = Conversion_Response_<ContainerAllocator>;

  explicit Conversion_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->inch = 0.0f;
    }
  }

  explicit Conversion_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->inch = 0.0f;
    }
  }

  // field types and members
  using _inch_type =
    float;
  _inch_type inch;

  // setters for named parameter idiom
  Type & set__inch(
    const float & _arg)
  {
    this->inch = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    msg_srv_action_interface_py_test::srv::Conversion_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const msg_srv_action_interface_py_test::srv::Conversion_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<msg_srv_action_interface_py_test::srv::Conversion_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<msg_srv_action_interface_py_test::srv::Conversion_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_py_test::srv::Conversion_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_py_test::srv::Conversion_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      msg_srv_action_interface_py_test::srv::Conversion_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<msg_srv_action_interface_py_test::srv::Conversion_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<msg_srv_action_interface_py_test::srv::Conversion_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<msg_srv_action_interface_py_test::srv::Conversion_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__msg_srv_action_interface_py_test__srv__Conversion_Response
    std::shared_ptr<msg_srv_action_interface_py_test::srv::Conversion_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__msg_srv_action_interface_py_test__srv__Conversion_Response
    std::shared_ptr<msg_srv_action_interface_py_test::srv::Conversion_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Conversion_Response_ & other) const
  {
    if (this->inch != other.inch) {
      return false;
    }
    return true;
  }
  bool operator!=(const Conversion_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Conversion_Response_

// alias to use template instance with default allocator
using Conversion_Response =
  msg_srv_action_interface_py_test::srv::Conversion_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace msg_srv_action_interface_py_test

namespace msg_srv_action_interface_py_test
{

namespace srv
{

struct Conversion
{
  using Request = msg_srv_action_interface_py_test::srv::Conversion_Request;
  using Response = msg_srv_action_interface_py_test::srv::Conversion_Response;
};

}  // namespace srv

}  // namespace msg_srv_action_interface_py_test

#endif  // MSG_SRV_ACTION_INTERFACE_PY_TEST__SRV__DETAIL__CONVERSION__STRUCT_HPP_
