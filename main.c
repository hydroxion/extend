
# include <Python.h>

static PyObject * hey ( PyObject * self ) {
    return Py_BuildValue ( "s", "Hello, World !" );
}

static char docstring [] = "Hey - Says Hello.";

static PyMethodDef module_methods [] = {
    { "hey", (PyCFunction) hey, METH_NOARGS, docstring },
    { NULL, NULL, 0, NULL }
};

PyMODINIT_FUNC initmodule ( void ) {
    Py_InitModule ( "module", module_methods );
}
