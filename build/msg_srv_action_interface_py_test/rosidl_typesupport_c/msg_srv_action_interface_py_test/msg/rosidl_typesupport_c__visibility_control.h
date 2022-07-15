// generated from
// rosidl_typesupport_c/resource/rosidl_typesupport_c__visibility_control.h.in
// generated code does not contain a copyright notice

#ifndef MSG_SRV_ACTION_INTERFACE_PY_TEST__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_
#define MSG_SRV_ACTION_INTERFACE_PY_TEST__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_

#ifdef __cplusplus
extern "C"
{
#endif

// This logic was borrowed (then namespaced) from the examples on the gcc wiki:
//     https://gcc.gnu.org/wiki/Visibility

#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define ROSIDL_TYPESUPPORT_C_EXPORT_msg_srv_action_interface_py_test __attribute__ ((dllexport))
    #define ROSIDL_TYPESUPPORT_C_IMPORT_msg_srv_action_interface_py_test __attribute__ ((dllimport))
  #else
    #define ROSIDL_TYPESUPPORT_C_EXPORT_msg_srv_action_interface_py_test __declspec(dllexport)
    #define ROSIDL_TYPESUPPORT_C_IMPORT_msg_srv_action_interface_py_test __declspec(dllimport)
  #endif
  #ifdef ROSIDL_TYPESUPPORT_C_BUILDING_DLL_msg_srv_action_interface_py_test
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_msg_srv_action_interface_py_test ROSIDL_TYPESUPPORT_C_EXPORT_msg_srv_action_interface_py_test
  #else
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_msg_srv_action_interface_py_test ROSIDL_TYPESUPPORT_C_IMPORT_msg_srv_action_interface_py_test
  #endif
#else
  #define ROSIDL_TYPESUPPORT_C_EXPORT_msg_srv_action_interface_py_test __attribute__ ((visibility("default")))
  #define ROSIDL_TYPESUPPORT_C_IMPORT_msg_srv_action_interface_py_test
  #if __GNUC__ >= 4
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_msg_srv_action_interface_py_test __attribute__ ((visibility("default")))
  #else
    #define ROSIDL_TYPESUPPORT_C_PUBLIC_msg_srv_action_interface_py_test
  #endif
#endif

#ifdef __cplusplus
}
#endif

#endif  // MSG_SRV_ACTION_INTERFACE_PY_TEST__MSG__ROSIDL_TYPESUPPORT_C__VISIBILITY_CONTROL_H_
