// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from msg_srv_interface_py_test:msg/Coordinates.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_INTERFACE_PY_TEST__MSG__DETAIL__COORDINATES__FUNCTIONS_H_
#define MSG_SRV_INTERFACE_PY_TEST__MSG__DETAIL__COORDINATES__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "msg_srv_interface_py_test/msg/rosidl_generator_c__visibility_control.h"

#include "msg_srv_interface_py_test/msg/detail/coordinates__struct.h"

/// Initialize msg/Coordinates message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_srv_interface_py_test__msg__Coordinates
 * )) before or use
 * msg_srv_interface_py_test__msg__Coordinates__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
bool
msg_srv_interface_py_test__msg__Coordinates__init(msg_srv_interface_py_test__msg__Coordinates * msg);

/// Finalize msg/Coordinates message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
void
msg_srv_interface_py_test__msg__Coordinates__fini(msg_srv_interface_py_test__msg__Coordinates * msg);

/// Create msg/Coordinates message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_srv_interface_py_test__msg__Coordinates__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
msg_srv_interface_py_test__msg__Coordinates *
msg_srv_interface_py_test__msg__Coordinates__create();

/// Destroy msg/Coordinates message.
/**
 * It calls
 * msg_srv_interface_py_test__msg__Coordinates__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
void
msg_srv_interface_py_test__msg__Coordinates__destroy(msg_srv_interface_py_test__msg__Coordinates * msg);


/// Initialize array of msg/Coordinates messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_srv_interface_py_test__msg__Coordinates__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
bool
msg_srv_interface_py_test__msg__Coordinates__Sequence__init(msg_srv_interface_py_test__msg__Coordinates__Sequence * array, size_t size);

/// Finalize array of msg/Coordinates messages.
/**
 * It calls
 * msg_srv_interface_py_test__msg__Coordinates__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
void
msg_srv_interface_py_test__msg__Coordinates__Sequence__fini(msg_srv_interface_py_test__msg__Coordinates__Sequence * array);

/// Create array of msg/Coordinates messages.
/**
 * It allocates the memory for the array and calls
 * msg_srv_interface_py_test__msg__Coordinates__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
msg_srv_interface_py_test__msg__Coordinates__Sequence *
msg_srv_interface_py_test__msg__Coordinates__Sequence__create(size_t size);

/// Destroy array of msg/Coordinates messages.
/**
 * It calls
 * msg_srv_interface_py_test__msg__Coordinates__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
void
msg_srv_interface_py_test__msg__Coordinates__Sequence__destroy(msg_srv_interface_py_test__msg__Coordinates__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MSG_SRV_INTERFACE_PY_TEST__MSG__DETAIL__COORDINATES__FUNCTIONS_H_
