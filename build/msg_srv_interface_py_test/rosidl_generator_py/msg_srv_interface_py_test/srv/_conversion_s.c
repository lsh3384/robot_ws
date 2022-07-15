// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from msg_srv_interface_py_test:srv/Conversion.idl
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
#include "msg_srv_interface_py_test/srv/detail/conversion__struct.h"
#include "msg_srv_interface_py_test/srv/detail/conversion__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool msg_srv_interface_py_test__srv__conversion__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[61];
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
    assert(strncmp("msg_srv_interface_py_test.srv._conversion.Conversion_Request", full_classname_dest, 60) == 0);
  }
  msg_srv_interface_py_test__srv__Conversion_Request * ros_message = _ros_message;
  {  // cm
    PyObject * field = PyObject_GetAttrString(_pymsg, "cm");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->cm = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * msg_srv_interface_py_test__srv__conversion__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Conversion_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("msg_srv_interface_py_test.srv._conversion");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Conversion_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  msg_srv_interface_py_test__srv__Conversion_Request * ros_message = (msg_srv_interface_py_test__srv__Conversion_Request *)raw_ros_message;
  {  // cm
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->cm);
    {
      int rc = PyObject_SetAttrString(_pymessage, "cm", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "msg_srv_interface_py_test/srv/detail/conversion__struct.h"
// already included above
// #include "msg_srv_interface_py_test/srv/detail/conversion__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool msg_srv_interface_py_test__srv__conversion__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[62];
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
    assert(strncmp("msg_srv_interface_py_test.srv._conversion.Conversion_Response", full_classname_dest, 61) == 0);
  }
  msg_srv_interface_py_test__srv__Conversion_Response * ros_message = _ros_message;
  {  // inch
    PyObject * field = PyObject_GetAttrString(_pymsg, "inch");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->inch = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * msg_srv_interface_py_test__srv__conversion__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Conversion_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("msg_srv_interface_py_test.srv._conversion");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Conversion_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  msg_srv_interface_py_test__srv__Conversion_Response * ros_message = (msg_srv_interface_py_test__srv__Conversion_Response *)raw_ros_message;
  {  // inch
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->inch);
    {
      int rc = PyObject_SetAttrString(_pymessage, "inch", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
