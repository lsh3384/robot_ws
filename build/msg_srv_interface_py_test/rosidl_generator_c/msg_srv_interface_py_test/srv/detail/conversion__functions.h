// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from msg_srv_interface_py_test:srv/Conversion.idl
// generated code does not contain a copyright notice

#ifndef MSG_SRV_INTERFACE_PY_TEST__SRV__DETAIL__CONVERSION__FUNCTIONS_H_
#define MSG_SRV_INTERFACE_PY_TEST__SRV__DETAIL__CONVERSION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "msg_srv_interface_py_test/msg/rosidl_generator_c__visibility_control.h"

#include "msg_srv_interface_py_test/srv/detail/conversion__struct.h"

/// Initialize srv/Conversion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_srv_interface_py_test__srv__Conversion_Request
 * )) before or use
 * msg_srv_interface_py_test__srv__Conversion_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
bool
msg_srv_interface_py_test__srv__Conversion_Request__init(msg_srv_interface_py_test__srv__Conversion_Request * msg);

/// Finalize srv/Conversion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
void
msg_srv_interface_py_test__srv__Conversion_Request__fini(msg_srv_interface_py_test__srv__Conversion_Request * msg);

/// Create srv/Conversion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_srv_interface_py_test__srv__Conversion_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
msg_srv_interface_py_test__srv__Conversion_Request *
msg_srv_interface_py_test__srv__Conversion_Request__create();

/// Destroy srv/Conversion message.
/**
 * It calls
 * msg_srv_interface_py_test__srv__Conversion_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
void
msg_srv_interface_py_test__srv__Conversion_Request__destroy(msg_srv_interface_py_test__srv__Conversion_Request * msg);


/// Initialize array of srv/Conversion messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_srv_interface_py_test__srv__Conversion_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
bool
msg_srv_interface_py_test__srv__Conversion_Request__Sequence__init(msg_srv_interface_py_test__srv__Conversion_Request__Sequence * array, size_t size);

/// Finalize array of srv/Conversion messages.
/**
 * It calls
 * msg_srv_interface_py_test__srv__Conversion_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
void
msg_srv_interface_py_test__srv__Conversion_Request__Sequence__fini(msg_srv_interface_py_test__srv__Conversion_Request__Sequence * array);

/// Create array of srv/Conversion messages.
/**
 * It allocates the memory for the array and calls
 * msg_srv_interface_py_test__srv__Conversion_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
msg_srv_interface_py_test__srv__Conversion_Request__Sequence *
msg_srv_interface_py_test__srv__Conversion_Request__Sequence__create(size_t size);

/// Destroy array of srv/Conversion messages.
/**
 * It calls
 * msg_srv_interface_py_test__srv__Conversion_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
void
msg_srv_interface_py_test__srv__Conversion_Request__Sequence__destroy(msg_srv_interface_py_test__srv__Conversion_Request__Sequence * array);

/// Initialize srv/Conversion message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * msg_srv_interface_py_test__srv__Conversion_Response
 * )) before or use
 * msg_srv_interface_py_test__srv__Conversion_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
bool
msg_srv_interface_py_test__srv__Conversion_Response__init(msg_srv_interface_py_test__srv__Conversion_Response * msg);

/// Finalize srv/Conversion message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
void
msg_srv_interface_py_test__srv__Conversion_Response__fini(msg_srv_interface_py_test__srv__Conversion_Response * msg);

/// Create srv/Conversion message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * msg_srv_interface_py_test__srv__Conversion_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
msg_srv_interface_py_test__srv__Conversion_Response *
msg_srv_interface_py_test__srv__Conversion_Response__create();

/// Destroy srv/Conversion message.
/**
 * It calls
 * msg_srv_interface_py_test__srv__Conversion_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
void
msg_srv_interface_py_test__srv__Conversion_Response__destroy(msg_srv_interface_py_test__srv__Conversion_Response * msg);


/// Initialize array of srv/Conversion messages.
/**
 * It allocates the memory for the number of elements and calls
 * msg_srv_interface_py_test__srv__Conversion_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
bool
msg_srv_interface_py_test__srv__Conversion_Response__Sequence__init(msg_srv_interface_py_test__srv__Conversion_Response__Sequence * array, size_t size);

/// Finalize array of srv/Conversion messages.
/**
 * It calls
 * msg_srv_interface_py_test__srv__Conversion_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
void
msg_srv_interface_py_test__srv__Conversion_Response__Sequence__fini(msg_srv_interface_py_test__srv__Conversion_Response__Sequence * array);

/// Create array of srv/Conversion messages.
/**
 * It allocates the memory for the array and calls
 * msg_srv_interface_py_test__srv__Conversion_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
msg_srv_interface_py_test__srv__Conversion_Response__Sequence *
msg_srv_interface_py_test__srv__Conversion_Response__Sequence__create(size_t size);

/// Destroy array of srv/Conversion messages.
/**
 * It calls
 * msg_srv_interface_py_test__srv__Conversion_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_msg_srv_interface_py_test
void
msg_srv_interface_py_test__srv__Conversion_Response__Sequence__destroy(msg_srv_interface_py_test__srv__Conversion_Response__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // MSG_SRV_INTERFACE_PY_TEST__SRV__DETAIL__CONVERSION__FUNCTIONS_H_
