/* Generated code for Python module 'dbus.lowlevel'
 * created by Nuitka version 0.6.9rc5
 *
 * This code is in part copyright 2020 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_dbus$lowlevel" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dbus$lowlevel;
PyDictObject *moduledict_dbus$lowlevel;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain___spec__;
static PyObject *const_str_plain_PendingCall;
static PyObject *const_str_plain_MESSAGE_TYPE_ERROR;
static PyObject *const_str_plain_Message;
extern PyObject *const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED;
static PyObject *const_str_plain_HANDLER_RESULT_HANDLED;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_8f7c3d65be88d740545c0ec6a6afa505;
static PyObject *const_tuple_491d884195767fc6bbf76933ebfa602c_tuple;
extern PyObject *const_str_plain__dbus_bindings;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_ErrorMessage;
static PyObject *const_str_plain_MESSAGE_TYPE_METHOD_RETURN;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_afdcdbdc0b31ee1d41f080da9a68df5a;
extern PyObject *const_str_plain_MethodCallMessage;
extern PyObject *const_str_plain_origin;
static PyObject *const_str_plain_MESSAGE_TYPE_INVALID;
extern PyObject *const_str_plain_MethodReturnMessage;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_MESSAGE_TYPE_SIGNAL;
extern PyObject *const_str_plain_has_location;
extern PyObject *const_str_plain_SignalMessage;
static PyObject *const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_MESSAGE_TYPE_METHOD_CALL;
static PyObject *const_str_digest_2f4aa86d174835c9a81cd9bd73211826;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    const_str_plain_PendingCall = UNSTREAM_STRING_ASCII(&constant_bin[ 45457 ], 11, 1);
    const_str_plain_MESSAGE_TYPE_ERROR = UNSTREAM_STRING_ASCII(&constant_bin[ 46681 ], 18, 1);
    const_str_plain_Message = UNSTREAM_STRING_ASCII(&constant_bin[ 2356 ], 7, 1);
    const_str_plain_HANDLER_RESULT_HANDLED = UNSTREAM_STRING_ASCII(&constant_bin[ 46699 ], 22, 1);
    const_str_digest_8f7c3d65be88d740545c0ec6a6afa505 = UNSTREAM_STRING_ASCII(&constant_bin[ 46721 ], 22, 0);
    const_tuple_491d884195767fc6bbf76933ebfa602c_tuple = PyTuple_New(13);
    PyTuple_SET_ITEM(const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 0, const_str_plain_ErrorMessage); Py_INCREF(const_str_plain_ErrorMessage);
    PyTuple_SET_ITEM(const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 1, const_str_plain_HANDLER_RESULT_HANDLED); Py_INCREF(const_str_plain_HANDLER_RESULT_HANDLED);
    PyTuple_SET_ITEM(const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 2, const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED); Py_INCREF(const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED);
    PyTuple_SET_ITEM(const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 3, const_str_plain_MESSAGE_TYPE_ERROR); Py_INCREF(const_str_plain_MESSAGE_TYPE_ERROR);
    const_str_plain_MESSAGE_TYPE_INVALID = UNSTREAM_STRING_ASCII(&constant_bin[ 46743 ], 20, 1);
    PyTuple_SET_ITEM(const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 4, const_str_plain_MESSAGE_TYPE_INVALID); Py_INCREF(const_str_plain_MESSAGE_TYPE_INVALID);
    const_str_plain_MESSAGE_TYPE_METHOD_CALL = UNSTREAM_STRING_ASCII(&constant_bin[ 46763 ], 24, 1);
    PyTuple_SET_ITEM(const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 5, const_str_plain_MESSAGE_TYPE_METHOD_CALL); Py_INCREF(const_str_plain_MESSAGE_TYPE_METHOD_CALL);
    const_str_plain_MESSAGE_TYPE_METHOD_RETURN = UNSTREAM_STRING_ASCII(&constant_bin[ 46787 ], 26, 1);
    PyTuple_SET_ITEM(const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 6, const_str_plain_MESSAGE_TYPE_METHOD_RETURN); Py_INCREF(const_str_plain_MESSAGE_TYPE_METHOD_RETURN);
    const_str_plain_MESSAGE_TYPE_SIGNAL = UNSTREAM_STRING_ASCII(&constant_bin[ 46813 ], 19, 1);
    PyTuple_SET_ITEM(const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 7, const_str_plain_MESSAGE_TYPE_SIGNAL); Py_INCREF(const_str_plain_MESSAGE_TYPE_SIGNAL);
    PyTuple_SET_ITEM(const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 8, const_str_plain_Message); Py_INCREF(const_str_plain_Message);
    PyTuple_SET_ITEM(const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 9, const_str_plain_MethodCallMessage); Py_INCREF(const_str_plain_MethodCallMessage);
    PyTuple_SET_ITEM(const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 10, const_str_plain_MethodReturnMessage); Py_INCREF(const_str_plain_MethodReturnMessage);
    PyTuple_SET_ITEM(const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 11, const_str_plain_PendingCall); Py_INCREF(const_str_plain_PendingCall);
    PyTuple_SET_ITEM(const_tuple_491d884195767fc6bbf76933ebfa602c_tuple, 12, const_str_plain_SignalMessage); Py_INCREF(const_str_plain_SignalMessage);
    const_str_digest_afdcdbdc0b31ee1d41f080da9a68df5a = UNSTREAM_STRING_ASCII(&constant_bin[ 46832 ], 29, 0);
    const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple = PyTuple_New(13);
    PyTuple_SET_ITEM(const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 0, const_str_plain_PendingCall); Py_INCREF(const_str_plain_PendingCall);
    PyTuple_SET_ITEM(const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 1, const_str_plain_Message); Py_INCREF(const_str_plain_Message);
    PyTuple_SET_ITEM(const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 2, const_str_plain_MethodCallMessage); Py_INCREF(const_str_plain_MethodCallMessage);
    PyTuple_SET_ITEM(const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 3, const_str_plain_MethodReturnMessage); Py_INCREF(const_str_plain_MethodReturnMessage);
    PyTuple_SET_ITEM(const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 4, const_str_plain_ErrorMessage); Py_INCREF(const_str_plain_ErrorMessage);
    PyTuple_SET_ITEM(const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 5, const_str_plain_SignalMessage); Py_INCREF(const_str_plain_SignalMessage);
    PyTuple_SET_ITEM(const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 6, const_str_plain_HANDLER_RESULT_HANDLED); Py_INCREF(const_str_plain_HANDLER_RESULT_HANDLED);
    PyTuple_SET_ITEM(const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 7, const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED); Py_INCREF(const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED);
    PyTuple_SET_ITEM(const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 8, const_str_plain_MESSAGE_TYPE_INVALID); Py_INCREF(const_str_plain_MESSAGE_TYPE_INVALID);
    PyTuple_SET_ITEM(const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 9, const_str_plain_MESSAGE_TYPE_METHOD_CALL); Py_INCREF(const_str_plain_MESSAGE_TYPE_METHOD_CALL);
    PyTuple_SET_ITEM(const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 10, const_str_plain_MESSAGE_TYPE_METHOD_RETURN); Py_INCREF(const_str_plain_MESSAGE_TYPE_METHOD_RETURN);
    PyTuple_SET_ITEM(const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 11, const_str_plain_MESSAGE_TYPE_ERROR); Py_INCREF(const_str_plain_MESSAGE_TYPE_ERROR);
    PyTuple_SET_ITEM(const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple, 12, const_str_plain_MESSAGE_TYPE_SIGNAL); Py_INCREF(const_str_plain_MESSAGE_TYPE_SIGNAL);
    const_str_digest_2f4aa86d174835c9a81cd9bd73211826 = UNSTREAM_STRING_ASCII(&constant_bin[ 46861 ], 51, 0);

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_dbus$lowlevel(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_371e32796231d93af8b9422b94aca4e4;

static void createModuleCodeObjects(void) {
    module_filename_obj = const_str_digest_2f4aa86d174835c9a81cd9bd73211826;
    codeobj_371e32796231d93af8b9422b94aca4e4 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, const_str_digest_8f7c3d65be88d740545c0ec6a6afa505, const_tuple_empty, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;
extern PyObject *const_str_empty;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill

function_impl_code functable_dbus$lowlevel[] = {

    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_dbus$lowlevel;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_dbus$lowlevel) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    // TODO: More stuff needed for Python3, best to re-order arguments of MAKE_CODEOBJECT.
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_dbus$lowlevel[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_dbus$lowlevel,
        doc,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_dbus$lowlevel(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_dbus$lowlevel = module;

#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if (_init_done) {
        return module_dbus$lowlevel;
    } else {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // May have to activate constants blob.
#if defined(_NUITKA_CONSTANTS_FROM_RESOURCE)
    loadConstantsResource();
#endif

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("dbus.lowlevel: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("dbus.lowlevel: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("dbus.lowlevel: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initdbus$lowlevel\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_dbus$lowlevel = MODULE_DICT(module_dbus$lowlevel);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    {
        PyObject *function_tables = PyObject_GetAttrString((PyObject *)builtin_module, "compiled_function_tables");
        if (function_tables == NULL) {
            DROP_ERROR_OCCURRED();
            function_tables = PyDict_New();
        }
        PyObject_SetAttrString((PyObject *)builtin_module, "compiled_function_tables", function_tables);
        PyObject *funcs = PyTuple_New(2);
        PyTuple_SET_ITEM(funcs, 0, PyCFunction_New(&_method_def_reduce_compiled_function, NULL));
        PyTuple_SET_ITEM(funcs, 1, PyCFunction_New(&_method_def_create_compiled_function, NULL));
        PyDict_SetItemString(function_tables, module_full_name, funcs);
    }
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_dbus$lowlevel,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_dbus$lowlevel,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_dbus$lowlevel,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_dbus$lowlevel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_dbus$lowlevel,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_dbus$lowlevel);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_dbus$lowlevel);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT(spec_value);

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_371e32796231d93af8b9422b94aca4e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_afdcdbdc0b31ee1d41f080da9a68df5a;
        UPDATE_STRING_DICT0(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_2f4aa86d174835c9a81cd9bd73211826;
        UPDATE_STRING_DICT0(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_371e32796231d93af8b9422b94aca4e4 = MAKE_MODULE_FRAME(codeobj_371e32796231d93af8b9422b94aca4e4, module_dbus$lowlevel);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_371e32796231d93af8b9422b94aca4e4);
    assert(Py_REFCNT(frame_371e32796231d93af8b9422b94aca4e4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_1;
        tmp_assattr_name_1 = const_str_digest_2f4aa86d174835c9a81cd9bd73211826;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___spec__);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
        }

        CHECK_OBJECT(tmp_mvar_value_1);
        tmp_assattr_target_1 = tmp_mvar_value_1;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, const_str_plain_origin, tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_2;
        tmp_assattr_name_2 = Py_True;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___spec__);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE(dict_builtin, (Nuitka_StringObject *)const_str_plain___spec__);
        }

        CHECK_OBJECT(tmp_mvar_value_2);
        tmp_assattr_target_2 = tmp_mvar_value_2;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, const_str_plain_has_location, tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_tuple_0cc064e892ddbf5073e588da27fc9d13_tuple;
        UPDATE_STRING_DICT0(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain__dbus_bindings;
        tmp_globals_name_1 = (PyObject *)moduledict_dbus$lowlevel;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_491d884195767fc6bbf76933ebfa602c_tuple;
        tmp_level_name_1 = const_int_0;
        frame_371e32796231d93af8b9422b94aca4e4->m_frame.f_lineno = 34;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_dbus$lowlevel,
                const_str_plain_ErrorMessage,
                const_int_0
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, const_str_plain_ErrorMessage);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_ErrorMessage, tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_dbus$lowlevel,
                const_str_plain_HANDLER_RESULT_HANDLED,
                const_int_0
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, const_str_plain_HANDLER_RESULT_HANDLED);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_HANDLER_RESULT_HANDLED, tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_dbus$lowlevel,
                const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED,
                const_int_0
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_HANDLER_RESULT_NOT_YET_HANDLED, tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_dbus$lowlevel,
                const_str_plain_MESSAGE_TYPE_ERROR,
                const_int_0
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, const_str_plain_MESSAGE_TYPE_ERROR);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_MESSAGE_TYPE_ERROR, tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_dbus$lowlevel,
                const_str_plain_MESSAGE_TYPE_INVALID,
                const_int_0
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, const_str_plain_MESSAGE_TYPE_INVALID);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_MESSAGE_TYPE_INVALID, tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_dbus$lowlevel,
                const_str_plain_MESSAGE_TYPE_METHOD_CALL,
                const_int_0
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, const_str_plain_MESSAGE_TYPE_METHOD_CALL);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_MESSAGE_TYPE_METHOD_CALL, tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_dbus$lowlevel,
                const_str_plain_MESSAGE_TYPE_METHOD_RETURN,
                const_int_0
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_7, const_str_plain_MESSAGE_TYPE_METHOD_RETURN);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_MESSAGE_TYPE_METHOD_RETURN, tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_8 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_dbus$lowlevel,
                const_str_plain_MESSAGE_TYPE_SIGNAL,
                const_int_0
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_8, const_str_plain_MESSAGE_TYPE_SIGNAL);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_MESSAGE_TYPE_SIGNAL, tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_9 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_dbus$lowlevel,
                const_str_plain_Message,
                const_int_0
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_9, const_str_plain_Message);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_Message, tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_10 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_dbus$lowlevel,
                const_str_plain_MethodCallMessage,
                const_int_0
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_10, const_str_plain_MethodCallMessage);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_MethodCallMessage, tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_11 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_dbus$lowlevel,
                const_str_plain_MethodReturnMessage,
                const_int_0
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_11, const_str_plain_MethodReturnMessage);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_MethodReturnMessage, tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_12 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_dbus$lowlevel,
                const_str_plain_PendingCall,
                const_int_0
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_12, const_str_plain_PendingCall);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_PendingCall, tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_13 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_dbus$lowlevel,
                const_str_plain_SignalMessage,
                const_int_0
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_13, const_str_plain_SignalMessage);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dbus$lowlevel, (Nuitka_StringObject *)const_str_plain_SignalMessage, tmp_assign_source_18);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_371e32796231d93af8b9422b94aca4e4);
#endif
    popFrameStack();

    assertFrameObject(frame_371e32796231d93af8b9422b94aca4e4);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_371e32796231d93af8b9422b94aca4e4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_371e32796231d93af8b9422b94aca4e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_371e32796231d93af8b9422b94aca4e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_371e32796231d93af8b9422b94aca4e4, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;


    return module_dbus$lowlevel;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}