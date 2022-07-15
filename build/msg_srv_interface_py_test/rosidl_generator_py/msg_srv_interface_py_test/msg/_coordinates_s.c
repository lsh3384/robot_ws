// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from msg_srv_interface_py_test:msg/Coordinates.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "msg_srv_interface_py_test/msg/detail/coordinates__struct.h"
#include "msg_srv_interface_py_test/msg/detail/coordinates__functions.h"

ROSIDL_GENERATOR_C_IMPORT
bool builtin_interfaces__msg__time__convert_from_py(PyObject * _pymsg, void * _ros_message);
ROSIDL_GENERATOR_C_IMPORT
PyObject * builtin_interfaces__msg__time__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool msg_srv_interface_py_test__msg__coordinates__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[55];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("msg_srv_interface_py_test.msg._coordinates.Coordinates", full_classname_dest, 54) == 0);
  }
  msg_srv_interface_py_test__msg__Coordinates * ros_message = _ros_message;
  {  // stamp
    PyObject * field = PyObject_GetAttrString(_pymsg, "stamp");
    if (!field) {
      return false;
    }
    if (!builtin_interfaces__msg__time__convert_from_py(field, &ros_message->stamp)) {
      Py_DECREF(field);
      return false;
    }
    Py_DECREF(field);
  }
  {  // coordinate_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "coordinate_x");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->coordinate_x = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }
  {  // coordinate_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "coordinate_y");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->coordinate_y = (int8_t)PyLong_AsLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * msg_srv_interface_py_test__msg__coordinates__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Coordinates */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("msg_srv_interface_py_test.msg._coordinates");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Coordinates");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  msg_srv_interface_py_test__msg__Coordinates * ros_message = (msg_srv_interface_py_test__msg__Coordinates *)raw_ros_message;
  {  // stamp
    PyObject * field = NULL;
    field = builtin_interfaces__msg__time__convert_to_py(&ros_message->stamp);
    if (!field) {
      return NULL;
    }
    {
      int rc = PyObject_SetAttrString(_pymessage, "stamp", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coordinate_x
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->coordinate_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "coordinate_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // coordinate_y
    PyObject * field = NULL;
    field = PyLong_FromLong(ros_message->coordinate_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "coordinate_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
