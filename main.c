
/*
    Já inclui algumas libs padrões : stdio, stdlib ...
//
    Contém Objetos, Funções, Tipos, Macros ...
*/

# include <Python.h>


static PyObject * hey ( PyObject * self ) {

    return Py_BuildValue ( "s", "Hello, World !" );

}

static char docstring [] = "Hey - Says Hello.";

// Define a função como sendo pública

static PyMethodDef module_methods [] = {
    { "hey", (PyCFunction) hey, METH_NOARGS, docstring },
    { NULL, NULL, 0, NULL }
};

// Define o inicializador do modulo, em Python 3 fica
//
// PyMODINIT_FUNC PyInit_Module ( void )

PyMODINIT_FUNC initmodule ( void ) {

    Py_InitModule ( "module", module_methods );

}
