// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from msg_interface_py_test:msg/Coordinates.idl
// generated code does not contain a copyright notice
#include "msg_interface_py_test/msg/detail/coordinates__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
msg_interface_py_test__msg__Coordinates__init(msg_interface_py_test__msg__Coordinates * msg)
{
  if (!msg) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    msg_interface_py_test__msg__Coordinates__fini(msg);
    return false;
  }
  // coordinate_x
  // coordinate_y
  return true;
}

void
msg_interface_py_test__msg__Coordinates__fini(msg_interface_py_test__msg__Coordinates * msg)
{
  if (!msg) {
    return;
  }
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
  // coordinate_x
  // coordinate_y
}

msg_interface_py_test__msg__Coordinates *
msg_interface_py_test__msg__Coordinates__create()
{
  msg_interface_py_test__msg__Coordinates * msg = (msg_interface_py_test__msg__Coordinates *)malloc(sizeof(msg_interface_py_test__msg__Coordinates));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(msg_interface_py_test__msg__Coordinates));
  bool success = msg_interface_py_test__msg__Coordinates__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
msg_interface_py_test__msg__Coordinates__destroy(msg_interface_py_test__msg__Coordinates * msg)
{
  if (msg) {
    msg_interface_py_test__msg__Coordinates__fini(msg);
  }
  free(msg);
}


bool
msg_interface_py_test__msg__Coordinates__Sequence__init(msg_interface_py_test__msg__Coordinates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  msg_interface_py_test__msg__Coordinates * data = NULL;
  if (size) {
    data = (msg_interface_py_test__msg__Coordinates *)calloc(size, sizeof(msg_interface_py_test__msg__Coordinates));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = msg_interface_py_test__msg__Coordinates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        msg_interface_py_test__msg__Coordinates__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
msg_interface_py_test__msg__Coordinates__Sequence__fini(msg_interface_py_test__msg__Coordinates__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      msg_interface_py_test__msg__Coordinates__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

msg_interface_py_test__msg__Coordinates__Sequence *
msg_interface_py_test__msg__Coordinates__Sequence__create(size_t size)
{
  msg_interface_py_test__msg__Coordinates__Sequence * array = (msg_interface_py_test__msg__Coordinates__Sequence *)malloc(sizeof(msg_interface_py_test__msg__Coordinates__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = msg_interface_py_test__msg__Coordinates__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
msg_interface_py_test__msg__Coordinates__Sequence__destroy(msg_interface_py_test__msg__Coordinates__Sequence * array)
{
  if (array) {
    msg_interface_py_test__msg__Coordinates__Sequence__fini(array);
  }
  free(array);
}
