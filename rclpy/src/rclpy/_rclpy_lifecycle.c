#include <Python.h>
#include "rclpy_common/common.h"



#include <stdio.h>
/// Create an action client.
/**
 */
static PyObject *
rclpy_lifecycle_create(PyObject * Py_UNUSED(self), PyObject * args)
{
	printf("WOOHOO!\n");
  PyObject * pynode;
  PyObject * pyaction_type;
  PyObject * pyaction_name;
  PyObject * pygoal_service_qos;
  PyObject * pyresult_service_qos;
  PyObject * pycancel_service_qos;
  PyObject * pyfeedback_topic_qos;
  PyObject * pystatus_topic_qos;
}

/// Define the public methods of this module
static PyMethodDef rclpy_lifecycle_methods[] = {
  {
    "rclpy_lifecycle_create", rclpy_lifecycle_create, METH_VARARGS,
    "Create a rclpy_lifecycle entity."
  },

  {NULL, NULL, 0, NULL}  /* sentinel */
};

PyDoc_STRVAR(rclpy_lifecycle__doc__,
  "ROS 2 Python Managed Node library.");

/// Define the Python module
static struct PyModuleDef _rclpy_lifecycle_module = {
  PyModuleDef_HEAD_INIT,
  "_rclpy_lifecycle",
  rclpy_lifecycle__doc__,
  -1,   /* -1 means that the module keeps state in global variables */
  rclpy_lifecycle_methods,
  NULL,
  NULL,
  NULL,
  NULL
};

/// Init function of this module
PyMODINIT_FUNC PyInit__rclpy_lifecycle(void)
{
  return PyModule_Create(&_rclpy_lifecycle_module);
}
