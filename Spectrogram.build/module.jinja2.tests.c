/* Generated code for Python module 'jinja2.tests'
 * created by Nuitka version 1.5.6
 *
 * This code is in part copyright 2022 Kay Hayen.
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

/* The "module_jinja2$tests" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_jinja2$tests;
PyDictObject *moduledict_jinja2$tests;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[135];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[135];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("jinja2.tests"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 135; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_jinja2$tests(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 135; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9c2379c66ab17e78d53575a17a65da91;
static PyCodeObject *codeobj_b67f427c701d4a6f3d699af0ec3466b5;
static PyCodeObject *codeobj_96b55904f6fd0f84725a6e3c95ac2559;
static PyCodeObject *codeobj_0f4c3df9a7b13326e3944a74e845e166;
static PyCodeObject *codeobj_a50286862976ffff2a9927f08282dbdf;
static PyCodeObject *codeobj_7ffa72c1175d685a00d728d2f97f023e;
static PyCodeObject *codeobj_b46bc3de3f2ae0a2d02a36a8bb2b601d;
static PyCodeObject *codeobj_bcf6e5bdd40d24898b488e4eb218de77;
static PyCodeObject *codeobj_2859e680204b8aa2d3fbdc5f21b4d6bc;
static PyCodeObject *codeobj_8b0d3a2f1acf6e3d73bf49dcc99a1190;
static PyCodeObject *codeobj_2a3d57fa9522db56ed444b9c1a160ee6;
static PyCodeObject *codeobj_96377b9e6bd4f1b518ec8aff51fdfa78;
static PyCodeObject *codeobj_7c24182d1b0b07426c71518b99957bd2;
static PyCodeObject *codeobj_cf01944de5f2a8c00b989fedcf40d3d6;
static PyCodeObject *codeobj_dc0dd92bb7b1f3668179496e88726c63;
static PyCodeObject *codeobj_2fda4e582f0cba3c8b4031518b6075cb;
static PyCodeObject *codeobj_2d98beb6a6fac287db1114b71bef5023;
static PyCodeObject *codeobj_bea10edd1a65b0a8514d69921894bc5c;
static PyCodeObject *codeobj_9a448429eb0f31b5e224e4e27c661f02;
static PyCodeObject *codeobj_656d1cf5ff55f1f2301b8b630cda6c92;
static PyCodeObject *codeobj_01bf5d54d85cb1b89ac6b7eec6f532ac;
static PyCodeObject *codeobj_11a940bd4a2e374b643007e38f034d66;
static PyCodeObject *codeobj_d0d6911fbb9e8cd501bf842cb8cd79aa;
static PyCodeObject *codeobj_1685ce9f3893160462df500e052eae9e;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[38]; CHECK_OBJECT(module_filename_obj);
    codeobj_9c2379c66ab17e78d53575a17a65da91 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[128], mod_consts[128], NULL, NULL, 0, 0, 0);
    codeobj_b67f427c701d4a6f3d699af0ec3466b5 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[69], mod_consts[69], mod_consts[129], NULL, 1, 0, 0);
    codeobj_96b55904f6fd0f84725a6e3c95ac2559 = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[129], NULL, 1, 0, 0);
    codeobj_0f4c3df9a7b13326e3944a74e845e166 = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], mod_consts[59], mod_consts[130], NULL, 2, 0, 0);
    codeobj_a50286862976ffff2a9927f08282dbdf = MAKE_CODE_OBJECT(module_filename_obj, 202, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[84], mod_consts[84], mod_consts[129], NULL, 1, 0, 0);
    codeobj_7ffa72c1175d685a00d728d2f97f023e = MAKE_CODE_OBJECT(module_filename_obj, 19, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], mod_consts[57], mod_consts[129], NULL, 1, 0, 0);
    codeobj_b46bc3de3f2ae0a2d02a36a8bb2b601d = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[129], NULL, 1, 0, 0);
    codeobj_bcf6e5bdd40d24898b488e4eb218de77 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[66], mod_consts[131], NULL, 2, 0, 0);
    codeobj_2859e680204b8aa2d3fbdc5f21b4d6bc = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[129], NULL, 1, 0, 0);
    codeobj_8b0d3a2f1acf6e3d73bf49dcc99a1190 = MAKE_CODE_OBJECT(module_filename_obj, 207, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[132], NULL, 2, 0, 0);
    codeobj_2a3d57fa9522db56ed444b9c1a160ee6 = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[129], NULL, 1, 0, 0);
    codeobj_96377b9e6bd4f1b518ec8aff51fdfa78 = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[129], NULL, 1, 0, 0);
    codeobj_7c24182d1b0b07426c71518b99957bd2 = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[75], mod_consts[75], mod_consts[129], NULL, 1, 0, 0);
    codeobj_cf01944de5f2a8c00b989fedcf40d3d6 = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[129], NULL, 1, 0, 0);
    codeobj_dc0dd92bb7b1f3668179496e88726c63 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[68], mod_consts[68], mod_consts[129], NULL, 1, 0, 0);
    codeobj_2fda4e582f0cba3c8b4031518b6075cb = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[129], NULL, 1, 0, 0);
    codeobj_2d98beb6a6fac287db1114b71bef5023 = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[56], mod_consts[129], NULL, 1, 0, 0);
    codeobj_bea10edd1a65b0a8514d69921894bc5c = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[133], NULL, 2, 0, 0);
    codeobj_9a448429eb0f31b5e224e4e27c661f02 = MAKE_CODE_OBJECT(module_filename_obj, 166, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[80], mod_consts[80], mod_consts[129], NULL, 1, 0, 0);
    codeobj_656d1cf5ff55f1f2301b8b630cda6c92 = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[129], NULL, 1, 0, 0);
    codeobj_01bf5d54d85cb1b89ac6b7eec6f532ac = MAKE_CODE_OBJECT(module_filename_obj, 70, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[131], NULL, 2, 0, 0);
    codeobj_11a940bd4a2e374b643007e38f034d66 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[129], NULL, 1, 0, 0);
    codeobj_d0d6911fbb9e8cd501bf842cb8cd79aa = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], mod_consts[64], mod_consts[129], NULL, 1, 0, 0);
    codeobj_1685ce9f3893160462df500e052eae9e = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[129], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__10_test_false(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__11_test_true(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__12_test_integer(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__13_test_float(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__14_test_lower(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__15_test_upper(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__16_test_string(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__17_test_mapping(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__18_test_number(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__19_test_sequence(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__1_test_odd(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__20_test_sameas(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__21_test_iterable(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__22_test_escaped(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__23_test_in(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__2_test_even(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__3_test_divisibleby(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__4_test_defined(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__5_test_undefined(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__6_test_filter(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__7_test_test(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__8_test_none(PyObject *annotations);


static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__9_test_boolean(PyObject *annotations);


// The module function definitions.
static PyObject *impl_jinja2$tests$$$function__1_test_odd(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_2d98beb6a6fac287db1114b71bef5023;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2d98beb6a6fac287db1114b71bef5023 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2d98beb6a6fac287db1114b71bef5023)) {
        Py_XDECREF(cache_frame_2d98beb6a6fac287db1114b71bef5023);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2d98beb6a6fac287db1114b71bef5023 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2d98beb6a6fac287db1114b71bef5023 = MAKE_FUNCTION_FRAME(codeobj_2d98beb6a6fac287db1114b71bef5023, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2d98beb6a6fac287db1114b71bef5023->m_type_description == NULL);
    frame_2d98beb6a6fac287db1114b71bef5023 = cache_frame_2d98beb6a6fac287db1114b71bef5023;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2d98beb6a6fac287db1114b71bef5023);
    assert(Py_REFCNT(frame_2d98beb6a6fac287db1114b71bef5023) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_mod_expr_left_1 = par_value;
        tmp_mod_expr_right_1 = mod_consts[0];
        tmp_cmp_expr_left_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[1];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2d98beb6a6fac287db1114b71bef5023, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2d98beb6a6fac287db1114b71bef5023->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2d98beb6a6fac287db1114b71bef5023, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2d98beb6a6fac287db1114b71bef5023,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_2d98beb6a6fac287db1114b71bef5023 == cache_frame_2d98beb6a6fac287db1114b71bef5023) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2d98beb6a6fac287db1114b71bef5023);
        cache_frame_2d98beb6a6fac287db1114b71bef5023 = NULL;
    }

    assertFrameObject(frame_2d98beb6a6fac287db1114b71bef5023);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__2_test_even(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_7ffa72c1175d685a00d728d2f97f023e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7ffa72c1175d685a00d728d2f97f023e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7ffa72c1175d685a00d728d2f97f023e)) {
        Py_XDECREF(cache_frame_7ffa72c1175d685a00d728d2f97f023e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ffa72c1175d685a00d728d2f97f023e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ffa72c1175d685a00d728d2f97f023e = MAKE_FUNCTION_FRAME(codeobj_7ffa72c1175d685a00d728d2f97f023e, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7ffa72c1175d685a00d728d2f97f023e->m_type_description == NULL);
    frame_7ffa72c1175d685a00d728d2f97f023e = cache_frame_7ffa72c1175d685a00d728d2f97f023e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7ffa72c1175d685a00d728d2f97f023e);
    assert(Py_REFCNT(frame_7ffa72c1175d685a00d728d2f97f023e) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_mod_expr_left_1 = par_value;
        tmp_mod_expr_right_1 = mod_consts[0];
        tmp_cmp_expr_left_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7ffa72c1175d685a00d728d2f97f023e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ffa72c1175d685a00d728d2f97f023e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ffa72c1175d685a00d728d2f97f023e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ffa72c1175d685a00d728d2f97f023e,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_7ffa72c1175d685a00d728d2f97f023e == cache_frame_7ffa72c1175d685a00d728d2f97f023e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7ffa72c1175d685a00d728d2f97f023e);
        cache_frame_7ffa72c1175d685a00d728d2f97f023e = NULL;
    }

    assertFrameObject(frame_7ffa72c1175d685a00d728d2f97f023e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__3_test_divisibleby(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_num = python_pars[1];
    struct Nuitka_FrameObject *frame_0f4c3df9a7b13326e3944a74e845e166;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0f4c3df9a7b13326e3944a74e845e166 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0f4c3df9a7b13326e3944a74e845e166)) {
        Py_XDECREF(cache_frame_0f4c3df9a7b13326e3944a74e845e166);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0f4c3df9a7b13326e3944a74e845e166 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0f4c3df9a7b13326e3944a74e845e166 = MAKE_FUNCTION_FRAME(codeobj_0f4c3df9a7b13326e3944a74e845e166, module_jinja2$tests, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0f4c3df9a7b13326e3944a74e845e166->m_type_description == NULL);
    frame_0f4c3df9a7b13326e3944a74e845e166 = cache_frame_0f4c3df9a7b13326e3944a74e845e166;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0f4c3df9a7b13326e3944a74e845e166);
    assert(Py_REFCNT(frame_0f4c3df9a7b13326e3944a74e845e166) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_mod_expr_left_1 = par_value;
        CHECK_OBJECT(par_num);
        tmp_mod_expr_right_1 = par_num;
        tmp_cmp_expr_left_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0f4c3df9a7b13326e3944a74e845e166, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0f4c3df9a7b13326e3944a74e845e166->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0f4c3df9a7b13326e3944a74e845e166, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0f4c3df9a7b13326e3944a74e845e166,
        type_description_1,
        par_value,
        par_num
    );


    // Release cached frame if used for exception.
    if (frame_0f4c3df9a7b13326e3944a74e845e166 == cache_frame_0f4c3df9a7b13326e3944a74e845e166) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0f4c3df9a7b13326e3944a74e845e166);
        cache_frame_0f4c3df9a7b13326e3944a74e845e166 = NULL;
    }

    assertFrameObject(frame_0f4c3df9a7b13326e3944a74e845e166);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_num);
    Py_DECREF(par_num);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_num);
    Py_DECREF(par_num);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__4_test_defined(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_96b55904f6fd0f84725a6e3c95ac2559;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_96b55904f6fd0f84725a6e3c95ac2559 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_96b55904f6fd0f84725a6e3c95ac2559)) {
        Py_XDECREF(cache_frame_96b55904f6fd0f84725a6e3c95ac2559);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96b55904f6fd0f84725a6e3c95ac2559 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96b55904f6fd0f84725a6e3c95ac2559 = MAKE_FUNCTION_FRAME(codeobj_96b55904f6fd0f84725a6e3c95ac2559, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_96b55904f6fd0f84725a6e3c95ac2559->m_type_description == NULL);
    frame_96b55904f6fd0f84725a6e3c95ac2559 = cache_frame_96b55904f6fd0f84725a6e3c95ac2559;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_96b55904f6fd0f84725a6e3c95ac2559);
    assert(Py_REFCNT(frame_96b55904f6fd0f84725a6e3c95ac2559) == 2);

    // Framed code:
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_96b55904f6fd0f84725a6e3c95ac2559, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96b55904f6fd0f84725a6e3c95ac2559->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96b55904f6fd0f84725a6e3c95ac2559, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96b55904f6fd0f84725a6e3c95ac2559,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_96b55904f6fd0f84725a6e3c95ac2559 == cache_frame_96b55904f6fd0f84725a6e3c95ac2559) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_96b55904f6fd0f84725a6e3c95ac2559);
        cache_frame_96b55904f6fd0f84725a6e3c95ac2559 = NULL;
    }

    assertFrameObject(frame_96b55904f6fd0f84725a6e3c95ac2559);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__5_test_undefined(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_d0d6911fbb9e8cd501bf842cb8cd79aa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d0d6911fbb9e8cd501bf842cb8cd79aa = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d0d6911fbb9e8cd501bf842cb8cd79aa)) {
        Py_XDECREF(cache_frame_d0d6911fbb9e8cd501bf842cb8cd79aa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d0d6911fbb9e8cd501bf842cb8cd79aa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d0d6911fbb9e8cd501bf842cb8cd79aa = MAKE_FUNCTION_FRAME(codeobj_d0d6911fbb9e8cd501bf842cb8cd79aa, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d0d6911fbb9e8cd501bf842cb8cd79aa->m_type_description == NULL);
    frame_d0d6911fbb9e8cd501bf842cb8cd79aa = cache_frame_d0d6911fbb9e8cd501bf842cb8cd79aa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d0d6911fbb9e8cd501bf842cb8cd79aa);
    assert(Py_REFCNT(frame_d0d6911fbb9e8cd501bf842cb8cd79aa) == 2);

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d0d6911fbb9e8cd501bf842cb8cd79aa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0d6911fbb9e8cd501bf842cb8cd79aa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0d6911fbb9e8cd501bf842cb8cd79aa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d0d6911fbb9e8cd501bf842cb8cd79aa,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_d0d6911fbb9e8cd501bf842cb8cd79aa == cache_frame_d0d6911fbb9e8cd501bf842cb8cd79aa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d0d6911fbb9e8cd501bf842cb8cd79aa);
        cache_frame_d0d6911fbb9e8cd501bf842cb8cd79aa = NULL;
    }

    assertFrameObject(frame_d0d6911fbb9e8cd501bf842cb8cd79aa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__6_test_filter(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_env = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_bcf6e5bdd40d24898b488e4eb218de77;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_bcf6e5bdd40d24898b488e4eb218de77 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bcf6e5bdd40d24898b488e4eb218de77)) {
        Py_XDECREF(cache_frame_bcf6e5bdd40d24898b488e4eb218de77);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bcf6e5bdd40d24898b488e4eb218de77 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bcf6e5bdd40d24898b488e4eb218de77 = MAKE_FUNCTION_FRAME(codeobj_bcf6e5bdd40d24898b488e4eb218de77, module_jinja2$tests, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bcf6e5bdd40d24898b488e4eb218de77->m_type_description == NULL);
    frame_bcf6e5bdd40d24898b488e4eb218de77 = cache_frame_bcf6e5bdd40d24898b488e4eb218de77;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bcf6e5bdd40d24898b488e4eb218de77);
    assert(Py_REFCNT(frame_bcf6e5bdd40d24898b488e4eb218de77) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        CHECK_OBJECT(par_env);
        tmp_expression_value_1 = par_env;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[9]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bcf6e5bdd40d24898b488e4eb218de77, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bcf6e5bdd40d24898b488e4eb218de77->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bcf6e5bdd40d24898b488e4eb218de77, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bcf6e5bdd40d24898b488e4eb218de77,
        type_description_1,
        par_env,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_bcf6e5bdd40d24898b488e4eb218de77 == cache_frame_bcf6e5bdd40d24898b488e4eb218de77) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bcf6e5bdd40d24898b488e4eb218de77);
        cache_frame_bcf6e5bdd40d24898b488e4eb218de77 = NULL;
    }

    assertFrameObject(frame_bcf6e5bdd40d24898b488e4eb218de77);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_env);
    Py_DECREF(par_env);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_env);
    Py_DECREF(par_env);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__7_test_test(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_env = python_pars[0];
    PyObject *par_value = python_pars[1];
    struct Nuitka_FrameObject *frame_01bf5d54d85cb1b89ac6b7eec6f532ac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_01bf5d54d85cb1b89ac6b7eec6f532ac = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_01bf5d54d85cb1b89ac6b7eec6f532ac)) {
        Py_XDECREF(cache_frame_01bf5d54d85cb1b89ac6b7eec6f532ac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_01bf5d54d85cb1b89ac6b7eec6f532ac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_01bf5d54d85cb1b89ac6b7eec6f532ac = MAKE_FUNCTION_FRAME(codeobj_01bf5d54d85cb1b89ac6b7eec6f532ac, module_jinja2$tests, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_01bf5d54d85cb1b89ac6b7eec6f532ac->m_type_description == NULL);
    frame_01bf5d54d85cb1b89ac6b7eec6f532ac = cache_frame_01bf5d54d85cb1b89ac6b7eec6f532ac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_01bf5d54d85cb1b89ac6b7eec6f532ac);
    assert(Py_REFCNT(frame_01bf5d54d85cb1b89ac6b7eec6f532ac) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        CHECK_OBJECT(par_env);
        tmp_expression_value_1 = par_env;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_01bf5d54d85cb1b89ac6b7eec6f532ac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_01bf5d54d85cb1b89ac6b7eec6f532ac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_01bf5d54d85cb1b89ac6b7eec6f532ac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_01bf5d54d85cb1b89ac6b7eec6f532ac,
        type_description_1,
        par_env,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_01bf5d54d85cb1b89ac6b7eec6f532ac == cache_frame_01bf5d54d85cb1b89ac6b7eec6f532ac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_01bf5d54d85cb1b89ac6b7eec6f532ac);
        cache_frame_01bf5d54d85cb1b89ac6b7eec6f532ac = NULL;
    }

    assertFrameObject(frame_01bf5d54d85cb1b89ac6b7eec6f532ac);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_env);
    Py_DECREF(par_env);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_env);
    Py_DECREF(par_env);
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__8_test_none(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_return_value = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__9_test_boolean(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_True;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_2 = par_value;
        tmp_cmp_expr_right_2 = Py_False;
        tmp_or_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? Py_True : Py_False;
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
        Py_INCREF(tmp_return_value);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__10_test_false(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_False;
        tmp_return_value = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__11_test_true(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_True;
        tmp_return_value = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__12_test_integer(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_2a3d57fa9522db56ed444b9c1a160ee6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2a3d57fa9522db56ed444b9c1a160ee6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2a3d57fa9522db56ed444b9c1a160ee6)) {
        Py_XDECREF(cache_frame_2a3d57fa9522db56ed444b9c1a160ee6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2a3d57fa9522db56ed444b9c1a160ee6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2a3d57fa9522db56ed444b9c1a160ee6 = MAKE_FUNCTION_FRAME(codeobj_2a3d57fa9522db56ed444b9c1a160ee6, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2a3d57fa9522db56ed444b9c1a160ee6->m_type_description == NULL);
    frame_2a3d57fa9522db56ed444b9c1a160ee6 = cache_frame_2a3d57fa9522db56ed444b9c1a160ee6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2a3d57fa9522db56ed444b9c1a160ee6);
    assert(Py_REFCNT(frame_2a3d57fa9522db56ed444b9c1a160ee6) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyLong_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        tmp_cmp_expr_right_1 = Py_True;
        tmp_and_left_value_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_2 = par_value;
        tmp_cmp_expr_right_2 = Py_False;
        tmp_and_right_value_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? Py_True : Py_False;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2a3d57fa9522db56ed444b9c1a160ee6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2a3d57fa9522db56ed444b9c1a160ee6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2a3d57fa9522db56ed444b9c1a160ee6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2a3d57fa9522db56ed444b9c1a160ee6,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_2a3d57fa9522db56ed444b9c1a160ee6 == cache_frame_2a3d57fa9522db56ed444b9c1a160ee6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2a3d57fa9522db56ed444b9c1a160ee6);
        cache_frame_2a3d57fa9522db56ed444b9c1a160ee6 = NULL;
    }

    assertFrameObject(frame_2a3d57fa9522db56ed444b9c1a160ee6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__13_test_float(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_2859e680204b8aa2d3fbdc5f21b4d6bc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2859e680204b8aa2d3fbdc5f21b4d6bc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2859e680204b8aa2d3fbdc5f21b4d6bc)) {
        Py_XDECREF(cache_frame_2859e680204b8aa2d3fbdc5f21b4d6bc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2859e680204b8aa2d3fbdc5f21b4d6bc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2859e680204b8aa2d3fbdc5f21b4d6bc = MAKE_FUNCTION_FRAME(codeobj_2859e680204b8aa2d3fbdc5f21b4d6bc, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2859e680204b8aa2d3fbdc5f21b4d6bc->m_type_description == NULL);
    frame_2859e680204b8aa2d3fbdc5f21b4d6bc = cache_frame_2859e680204b8aa2d3fbdc5f21b4d6bc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2859e680204b8aa2d3fbdc5f21b4d6bc);
    assert(Py_REFCNT(frame_2859e680204b8aa2d3fbdc5f21b4d6bc) == 2);

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyFloat_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2859e680204b8aa2d3fbdc5f21b4d6bc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2859e680204b8aa2d3fbdc5f21b4d6bc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2859e680204b8aa2d3fbdc5f21b4d6bc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2859e680204b8aa2d3fbdc5f21b4d6bc,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_2859e680204b8aa2d3fbdc5f21b4d6bc == cache_frame_2859e680204b8aa2d3fbdc5f21b4d6bc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2859e680204b8aa2d3fbdc5f21b4d6bc);
        cache_frame_2859e680204b8aa2d3fbdc5f21b4d6bc = NULL;
    }

    assertFrameObject(frame_2859e680204b8aa2d3fbdc5f21b4d6bc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__14_test_lower(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_7c24182d1b0b07426c71518b99957bd2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7c24182d1b0b07426c71518b99957bd2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7c24182d1b0b07426c71518b99957bd2)) {
        Py_XDECREF(cache_frame_7c24182d1b0b07426c71518b99957bd2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7c24182d1b0b07426c71518b99957bd2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7c24182d1b0b07426c71518b99957bd2 = MAKE_FUNCTION_FRAME(codeobj_7c24182d1b0b07426c71518b99957bd2, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7c24182d1b0b07426c71518b99957bd2->m_type_description == NULL);
    frame_7c24182d1b0b07426c71518b99957bd2 = cache_frame_7c24182d1b0b07426c71518b99957bd2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7c24182d1b0b07426c71518b99957bd2);
    assert(Py_REFCNT(frame_7c24182d1b0b07426c71518b99957bd2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_value);
        tmp_unicode_arg_1 = par_value;
        tmp_expression_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7c24182d1b0b07426c71518b99957bd2->m_frame.f_lineno = 140;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7c24182d1b0b07426c71518b99957bd2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7c24182d1b0b07426c71518b99957bd2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c24182d1b0b07426c71518b99957bd2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7c24182d1b0b07426c71518b99957bd2,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_7c24182d1b0b07426c71518b99957bd2 == cache_frame_7c24182d1b0b07426c71518b99957bd2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7c24182d1b0b07426c71518b99957bd2);
        cache_frame_7c24182d1b0b07426c71518b99957bd2 = NULL;
    }

    assertFrameObject(frame_7c24182d1b0b07426c71518b99957bd2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__15_test_upper(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_1685ce9f3893160462df500e052eae9e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1685ce9f3893160462df500e052eae9e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1685ce9f3893160462df500e052eae9e)) {
        Py_XDECREF(cache_frame_1685ce9f3893160462df500e052eae9e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1685ce9f3893160462df500e052eae9e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1685ce9f3893160462df500e052eae9e = MAKE_FUNCTION_FRAME(codeobj_1685ce9f3893160462df500e052eae9e, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1685ce9f3893160462df500e052eae9e->m_type_description == NULL);
    frame_1685ce9f3893160462df500e052eae9e = cache_frame_1685ce9f3893160462df500e052eae9e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1685ce9f3893160462df500e052eae9e);
    assert(Py_REFCNT(frame_1685ce9f3893160462df500e052eae9e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_value);
        tmp_unicode_arg_1 = par_value;
        tmp_expression_value_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[21]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1685ce9f3893160462df500e052eae9e->m_frame.f_lineno = 145;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1685ce9f3893160462df500e052eae9e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1685ce9f3893160462df500e052eae9e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1685ce9f3893160462df500e052eae9e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1685ce9f3893160462df500e052eae9e,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_1685ce9f3893160462df500e052eae9e == cache_frame_1685ce9f3893160462df500e052eae9e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1685ce9f3893160462df500e052eae9e);
        cache_frame_1685ce9f3893160462df500e052eae9e = NULL;
    }

    assertFrameObject(frame_1685ce9f3893160462df500e052eae9e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__16_test_string(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_656d1cf5ff55f1f2301b8b630cda6c92;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_656d1cf5ff55f1f2301b8b630cda6c92 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_656d1cf5ff55f1f2301b8b630cda6c92)) {
        Py_XDECREF(cache_frame_656d1cf5ff55f1f2301b8b630cda6c92);

#if _DEBUG_REFCOUNTS
        if (cache_frame_656d1cf5ff55f1f2301b8b630cda6c92 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_656d1cf5ff55f1f2301b8b630cda6c92 = MAKE_FUNCTION_FRAME(codeobj_656d1cf5ff55f1f2301b8b630cda6c92, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_656d1cf5ff55f1f2301b8b630cda6c92->m_type_description == NULL);
    frame_656d1cf5ff55f1f2301b8b630cda6c92 = cache_frame_656d1cf5ff55f1f2301b8b630cda6c92;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_656d1cf5ff55f1f2301b8b630cda6c92);
    assert(Py_REFCNT(frame_656d1cf5ff55f1f2301b8b630cda6c92) == 2);

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_656d1cf5ff55f1f2301b8b630cda6c92, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_656d1cf5ff55f1f2301b8b630cda6c92->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_656d1cf5ff55f1f2301b8b630cda6c92, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_656d1cf5ff55f1f2301b8b630cda6c92,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_656d1cf5ff55f1f2301b8b630cda6c92 == cache_frame_656d1cf5ff55f1f2301b8b630cda6c92) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_656d1cf5ff55f1f2301b8b630cda6c92);
        cache_frame_656d1cf5ff55f1f2301b8b630cda6c92 = NULL;
    }

    assertFrameObject(frame_656d1cf5ff55f1f2301b8b630cda6c92);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__17_test_mapping(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_cf01944de5f2a8c00b989fedcf40d3d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_cf01944de5f2a8c00b989fedcf40d3d6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cf01944de5f2a8c00b989fedcf40d3d6)) {
        Py_XDECREF(cache_frame_cf01944de5f2a8c00b989fedcf40d3d6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cf01944de5f2a8c00b989fedcf40d3d6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cf01944de5f2a8c00b989fedcf40d3d6 = MAKE_FUNCTION_FRAME(codeobj_cf01944de5f2a8c00b989fedcf40d3d6, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cf01944de5f2a8c00b989fedcf40d3d6->m_type_description == NULL);
    frame_cf01944de5f2a8c00b989fedcf40d3d6 = cache_frame_cf01944de5f2a8c00b989fedcf40d3d6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cf01944de5f2a8c00b989fedcf40d3d6);
    assert(Py_REFCNT(frame_cf01944de5f2a8c00b989fedcf40d3d6) == 2);

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cf01944de5f2a8c00b989fedcf40d3d6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cf01944de5f2a8c00b989fedcf40d3d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cf01944de5f2a8c00b989fedcf40d3d6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cf01944de5f2a8c00b989fedcf40d3d6,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_cf01944de5f2a8c00b989fedcf40d3d6 == cache_frame_cf01944de5f2a8c00b989fedcf40d3d6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cf01944de5f2a8c00b989fedcf40d3d6);
        cache_frame_cf01944de5f2a8c00b989fedcf40d3d6 = NULL;
    }

    assertFrameObject(frame_cf01944de5f2a8c00b989fedcf40d3d6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__18_test_number(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_2fda4e582f0cba3c8b4031518b6075cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_2fda4e582f0cba3c8b4031518b6075cb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2fda4e582f0cba3c8b4031518b6075cb)) {
        Py_XDECREF(cache_frame_2fda4e582f0cba3c8b4031518b6075cb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2fda4e582f0cba3c8b4031518b6075cb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2fda4e582f0cba3c8b4031518b6075cb = MAKE_FUNCTION_FRAME(codeobj_2fda4e582f0cba3c8b4031518b6075cb, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2fda4e582f0cba3c8b4031518b6075cb->m_type_description == NULL);
    frame_2fda4e582f0cba3c8b4031518b6075cb = cache_frame_2fda4e582f0cba3c8b4031518b6075cb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2fda4e582f0cba3c8b4031518b6075cb);
    assert(Py_REFCNT(frame_2fda4e582f0cba3c8b4031518b6075cb) == 2);

    // Framed code:
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_value);
        tmp_isinstance_inst_1 = par_value;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2fda4e582f0cba3c8b4031518b6075cb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2fda4e582f0cba3c8b4031518b6075cb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2fda4e582f0cba3c8b4031518b6075cb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2fda4e582f0cba3c8b4031518b6075cb,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_2fda4e582f0cba3c8b4031518b6075cb == cache_frame_2fda4e582f0cba3c8b4031518b6075cb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2fda4e582f0cba3c8b4031518b6075cb);
        cache_frame_2fda4e582f0cba3c8b4031518b6075cb = NULL;
    }

    assertFrameObject(frame_2fda4e582f0cba3c8b4031518b6075cb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__19_test_sequence(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_9a448429eb0f31b5e224e4e27c661f02;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_9a448429eb0f31b5e224e4e27c661f02 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9a448429eb0f31b5e224e4e27c661f02)) {
        Py_XDECREF(cache_frame_9a448429eb0f31b5e224e4e27c661f02);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9a448429eb0f31b5e224e4e27c661f02 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9a448429eb0f31b5e224e4e27c661f02 = MAKE_FUNCTION_FRAME(codeobj_9a448429eb0f31b5e224e4e27c661f02, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9a448429eb0f31b5e224e4e27c661f02->m_type_description == NULL);
    frame_9a448429eb0f31b5e224e4e27c661f02 = cache_frame_9a448429eb0f31b5e224e4e27c661f02;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9a448429eb0f31b5e224e4e27c661f02);
    assert(Py_REFCNT(frame_9a448429eb0f31b5e224e4e27c661f02) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_len_arg_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_value);
        tmp_len_arg_1 = par_value;
        tmp_capi_result_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_capi_result_1);
    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_value);
        tmp_expression_value_1 = par_value;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[29]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_attribute_value_1);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_9a448429eb0f31b5e224e4e27c661f02, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_9a448429eb0f31b5e224e4e27c661f02, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_Exception;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 170;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_9a448429eb0f31b5e224e4e27c661f02->m_frame) frame_9a448429eb0f31b5e224e4e27c661f02->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9a448429eb0f31b5e224e4e27c661f02, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9a448429eb0f31b5e224e4e27c661f02->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9a448429eb0f31b5e224e4e27c661f02, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9a448429eb0f31b5e224e4e27c661f02,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_9a448429eb0f31b5e224e4e27c661f02 == cache_frame_9a448429eb0f31b5e224e4e27c661f02) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9a448429eb0f31b5e224e4e27c661f02);
        cache_frame_9a448429eb0f31b5e224e4e27c661f02 = NULL;
    }

    assertFrameObject(frame_9a448429eb0f31b5e224e4e27c661f02);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__20_test_sameas(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_other = python_pars[1];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        CHECK_OBJECT(par_other);
        tmp_cmp_expr_right_1 = par_other;
        tmp_return_value = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__21_test_iterable(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_96377b9e6bd4f1b518ec8aff51fdfa78;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_96377b9e6bd4f1b518ec8aff51fdfa78 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_96377b9e6bd4f1b518ec8aff51fdfa78)) {
        Py_XDECREF(cache_frame_96377b9e6bd4f1b518ec8aff51fdfa78);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96377b9e6bd4f1b518ec8aff51fdfa78 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96377b9e6bd4f1b518ec8aff51fdfa78 = MAKE_FUNCTION_FRAME(codeobj_96377b9e6bd4f1b518ec8aff51fdfa78, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_96377b9e6bd4f1b518ec8aff51fdfa78->m_type_description == NULL);
    frame_96377b9e6bd4f1b518ec8aff51fdfa78 = cache_frame_96377b9e6bd4f1b518ec8aff51fdfa78;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_96377b9e6bd4f1b518ec8aff51fdfa78);
    assert(Py_REFCNT(frame_96377b9e6bd4f1b518ec8aff51fdfa78) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_value);
        tmp_iter_arg_1 = par_value;
        tmp_capi_result_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        Py_DECREF(tmp_capi_result_1);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_96377b9e6bd4f1b518ec8aff51fdfa78, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_96377b9e6bd4f1b518ec8aff51fdfa78, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 194;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_96377b9e6bd4f1b518ec8aff51fdfa78->m_frame) frame_96377b9e6bd4f1b518ec8aff51fdfa78->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_96377b9e6bd4f1b518ec8aff51fdfa78, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96377b9e6bd4f1b518ec8aff51fdfa78->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96377b9e6bd4f1b518ec8aff51fdfa78, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96377b9e6bd4f1b518ec8aff51fdfa78,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_96377b9e6bd4f1b518ec8aff51fdfa78 == cache_frame_96377b9e6bd4f1b518ec8aff51fdfa78) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_96377b9e6bd4f1b518ec8aff51fdfa78);
        cache_frame_96377b9e6bd4f1b518ec8aff51fdfa78 = NULL;
    }

    assertFrameObject(frame_96377b9e6bd4f1b518ec8aff51fdfa78);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__22_test_escaped(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_a50286862976ffff2a9927f08282dbdf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a50286862976ffff2a9927f08282dbdf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a50286862976ffff2a9927f08282dbdf)) {
        Py_XDECREF(cache_frame_a50286862976ffff2a9927f08282dbdf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a50286862976ffff2a9927f08282dbdf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a50286862976ffff2a9927f08282dbdf = MAKE_FUNCTION_FRAME(codeobj_a50286862976ffff2a9927f08282dbdf, module_jinja2$tests, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a50286862976ffff2a9927f08282dbdf->m_type_description == NULL);
    frame_a50286862976ffff2a9927f08282dbdf = cache_frame_a50286862976ffff2a9927f08282dbdf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a50286862976ffff2a9927f08282dbdf);
    assert(Py_REFCNT(frame_a50286862976ffff2a9927f08282dbdf) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_value);
        tmp_expression_value_1 = par_value;
        tmp_attribute_value_1 = mod_consts[33];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a50286862976ffff2a9927f08282dbdf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a50286862976ffff2a9927f08282dbdf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a50286862976ffff2a9927f08282dbdf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a50286862976ffff2a9927f08282dbdf,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_a50286862976ffff2a9927f08282dbdf == cache_frame_a50286862976ffff2a9927f08282dbdf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a50286862976ffff2a9927f08282dbdf);
        cache_frame_a50286862976ffff2a9927f08282dbdf = NULL;
    }

    assertFrameObject(frame_a50286862976ffff2a9927f08282dbdf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_jinja2$tests$$$function__23_test_in(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_seq = python_pars[1];
    struct Nuitka_FrameObject *frame_8b0d3a2f1acf6e3d73bf49dcc99a1190;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8b0d3a2f1acf6e3d73bf49dcc99a1190 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8b0d3a2f1acf6e3d73bf49dcc99a1190)) {
        Py_XDECREF(cache_frame_8b0d3a2f1acf6e3d73bf49dcc99a1190);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8b0d3a2f1acf6e3d73bf49dcc99a1190 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8b0d3a2f1acf6e3d73bf49dcc99a1190 = MAKE_FUNCTION_FRAME(codeobj_8b0d3a2f1acf6e3d73bf49dcc99a1190, module_jinja2$tests, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8b0d3a2f1acf6e3d73bf49dcc99a1190->m_type_description == NULL);
    frame_8b0d3a2f1acf6e3d73bf49dcc99a1190 = cache_frame_8b0d3a2f1acf6e3d73bf49dcc99a1190;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8b0d3a2f1acf6e3d73bf49dcc99a1190);
    assert(Py_REFCNT(frame_8b0d3a2f1acf6e3d73bf49dcc99a1190) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_left_1 = par_value;
        CHECK_OBJECT(par_seq);
        tmp_cmp_expr_right_1 = par_seq;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8b0d3a2f1acf6e3d73bf49dcc99a1190, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b0d3a2f1acf6e3d73bf49dcc99a1190->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b0d3a2f1acf6e3d73bf49dcc99a1190, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8b0d3a2f1acf6e3d73bf49dcc99a1190,
        type_description_1,
        par_value,
        par_seq
    );


    // Release cached frame if used for exception.
    if (frame_8b0d3a2f1acf6e3d73bf49dcc99a1190 == cache_frame_8b0d3a2f1acf6e3d73bf49dcc99a1190) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8b0d3a2f1acf6e3d73bf49dcc99a1190);
        cache_frame_8b0d3a2f1acf6e3d73bf49dcc99a1190 = NULL;
    }

    assertFrameObject(frame_8b0d3a2f1acf6e3d73bf49dcc99a1190);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_seq);
    Py_DECREF(par_seq);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    CHECK_OBJECT(par_seq);
    Py_DECREF(par_seq);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__10_test_false(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__10_test_false,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b46bc3de3f2ae0a2d02a36a8bb2b601d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__11_test_true(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__11_test_true,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_11a940bd4a2e374b643007e38f034d66,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[16],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__12_test_integer(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__12_test_integer,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2a3d57fa9522db56ed444b9c1a160ee6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[17],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__13_test_float(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__13_test_float,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2859e680204b8aa2d3fbdc5f21b4d6bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[18],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__14_test_lower(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__14_test_lower,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7c24182d1b0b07426c71518b99957bd2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__15_test_upper(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__15_test_upper,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1685ce9f3893160462df500e052eae9e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__16_test_string(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__16_test_string,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_656d1cf5ff55f1f2301b8b630cda6c92,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__17_test_mapping(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__17_test_mapping,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cf01944de5f2a8c00b989fedcf40d3d6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__18_test_number(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__18_test_number,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2fda4e582f0cba3c8b4031518b6075cb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__19_test_sequence(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__19_test_sequence,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9a448429eb0f31b5e224e4e27c661f02,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[30],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__1_test_odd(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__1_test_odd,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2d98beb6a6fac287db1114b71bef5023,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__20_test_sameas(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__20_test_sameas,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bea10edd1a65b0a8514d69921894bc5c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[31],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__21_test_iterable(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__21_test_iterable,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_96377b9e6bd4f1b518ec8aff51fdfa78,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__22_test_escaped(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__22_test_escaped,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a50286862976ffff2a9927f08282dbdf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__23_test_in(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__23_test_in,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8b0d3a2f1acf6e3d73bf49dcc99a1190,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__2_test_even(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__2_test_even,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7ffa72c1175d685a00d728d2f97f023e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__3_test_divisibleby(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__3_test_divisibleby,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0f4c3df9a7b13326e3944a74e845e166,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__4_test_defined(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__4_test_defined,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_96b55904f6fd0f84725a6e3c95ac2559,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[7],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__5_test_undefined(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__5_test_undefined,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d0d6911fbb9e8cd501bf842cb8cd79aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__6_test_filter(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__6_test_filter,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bcf6e5bdd40d24898b488e4eb218de77,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__7_test_test(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__7_test_test,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_01bf5d54d85cb1b89ac6b7eec6f532ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__8_test_none(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__8_test_none,
        mod_consts[68],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dc0dd92bb7b1f3668179496e88726c63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_jinja2$tests$$$function__9_test_boolean(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_jinja2$tests$$$function__9_test_boolean,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b67f427c701d4a6f3d699af0ec3466b5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_jinja2$tests,
        mod_consts[14],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_jinja2$tests[] = {
    impl_jinja2$tests$$$function__1_test_odd,
    impl_jinja2$tests$$$function__2_test_even,
    impl_jinja2$tests$$$function__3_test_divisibleby,
    impl_jinja2$tests$$$function__4_test_defined,
    impl_jinja2$tests$$$function__5_test_undefined,
    impl_jinja2$tests$$$function__6_test_filter,
    impl_jinja2$tests$$$function__7_test_test,
    impl_jinja2$tests$$$function__8_test_none,
    impl_jinja2$tests$$$function__9_test_boolean,
    impl_jinja2$tests$$$function__10_test_false,
    impl_jinja2$tests$$$function__11_test_true,
    impl_jinja2$tests$$$function__12_test_integer,
    impl_jinja2$tests$$$function__13_test_float,
    impl_jinja2$tests$$$function__14_test_lower,
    impl_jinja2$tests$$$function__15_test_upper,
    impl_jinja2$tests$$$function__16_test_string,
    impl_jinja2$tests$$$function__17_test_mapping,
    impl_jinja2$tests$$$function__18_test_number,
    impl_jinja2$tests$$$function__19_test_sequence,
    impl_jinja2$tests$$$function__20_test_sameas,
    impl_jinja2$tests$$$function__21_test_iterable,
    impl_jinja2$tests$$$function__22_test_escaped,
    impl_jinja2$tests$$$function__23_test_in,
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

    function_impl_code *current = functable_jinja2$tests;
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

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
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

    if (offset > sizeof(functable_jinja2$tests) || offset < 0) {
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

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_jinja2$tests[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_jinja2$tests,
        doc,
        NULL,
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
PyObject *modulecode_jinja2$tests(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("jinja2.tests");

    // Store the module for future use.
    module_jinja2$tests = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("jinja2.tests: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("jinja2.tests: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("jinja2.tests: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initjinja2$tests\n");

    moduledict_jinja2$tests = MODULE_DICT(module_jinja2$tests);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_jinja2$tests,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_jinja2$tests,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[134]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_jinja2$tests,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_jinja2$tests,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_jinja2$tests,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_jinja2$tests);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_jinja2$tests, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_jinja2$tests, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_jinja2$tests, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_jinja2$tests);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_9c2379c66ab17e78d53575a17a65da91;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[36];
        UPDATE_STRING_DICT0(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[38];
        UPDATE_STRING_DICT0(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_2);
    }
    frame_9c2379c66ab17e78d53575a17a65da91 = MAKE_MODULE_FRAME(codeobj_9c2379c66ab17e78d53575a17a65da91, module_jinja2$tests);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9c2379c66ab17e78d53575a17a65da91);
    assert(Py_REFCNT(frame_9c2379c66ab17e78d53575a17a65da91) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[38];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[41], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[42], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[44];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_jinja2$tests;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[3];
        frame_9c2379c66ab17e78d53575a17a65da91->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[46];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_jinja2$tests;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[47];
        tmp_level_value_2 = mod_consts[3];
        frame_9c2379c66ab17e78d53575a17a65da91->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_jinja2$tests,
                mod_consts[24],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[24]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[48];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_jinja2$tests;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[49];
        tmp_level_value_3 = mod_consts[3];
        frame_9c2379c66ab17e78d53575a17a65da91->m_frame.f_lineno = 5;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_jinja2$tests,
                mod_consts[27],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[27]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[50];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_jinja2$tests;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[51];
        tmp_level_value_4 = mod_consts[1];
        frame_9c2379c66ab17e78d53575a17a65da91->m_frame.f_lineno = 7;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_jinja2$tests,
                mod_consts[6],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[6]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[52];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_jinja2$tests;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[53];
        tmp_level_value_5 = mod_consts[1];
        frame_9c2379c66ab17e78d53575a17a65da91->m_frame.f_lineno = 8;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_jinja2$tests,
                mod_consts[54],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[54]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[55]);


        tmp_assign_source_10 = MAKE_FUNCTION_jinja2$tests$$$function__1_test_odd(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_annotations_2;
        tmp_annotations_2 = DICT_COPY(mod_consts[55]);


        tmp_assign_source_11 = MAKE_FUNCTION_jinja2$tests$$$function__2_test_even(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_annotations_3;
        tmp_annotations_3 = DICT_COPY(mod_consts[58]);


        tmp_assign_source_12 = MAKE_FUNCTION_jinja2$tests$$$function__3_test_divisibleby(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        tmp_dict_key_1 = mod_consts[60];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[61]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[62];
        tmp_dict_value_1 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));


        tmp_assign_source_13 = MAKE_FUNCTION_jinja2$tests$$$function__4_test_defined(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_2;
        tmp_dict_key_2 = mod_consts[60];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[61]);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[62];
        tmp_dict_value_2 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));


        tmp_assign_source_14 = MAKE_FUNCTION_jinja2$tests$$$function__5_test_undefined(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_annotations_6;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        assert(!(tmp_called_value_1 == NULL));
        tmp_annotations_6 = DICT_COPY(mod_consts[65]);


        tmp_args_element_value_1 = MAKE_FUNCTION_jinja2$tests$$$function__6_test_filter(tmp_annotations_6);

        frame_9c2379c66ab17e78d53575a17a65da91->m_frame.f_lineno = 51;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_annotations_7;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = DICT_COPY(mod_consts[65]);


        tmp_args_element_value_2 = MAKE_FUNCTION_jinja2$tests$$$function__7_test_test(tmp_annotations_7);

        frame_9c2379c66ab17e78d53575a17a65da91->m_frame.f_lineno = 69;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_3;
        tmp_dict_key_3 = mod_consts[60];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[61]);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_3, tmp_dict_value_3);
        Py_DECREF(tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[62];
        tmp_dict_value_3 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));


        tmp_assign_source_17 = MAKE_FUNCTION_jinja2$tests$$$function__8_test_none(tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_4;
        tmp_dict_key_4 = mod_consts[60];
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_expression_value_4 == NULL));
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[61]);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_4, tmp_dict_value_4);
        Py_DECREF(tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[62];
        tmp_dict_value_4 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));


        tmp_assign_source_18 = MAKE_FUNCTION_jinja2$tests$$$function__9_test_boolean(tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_annotations_10;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_5;
        tmp_dict_key_5 = mod_consts[60];
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_expression_value_5 == NULL));
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[61]);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[62];
        tmp_dict_value_5 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));


        tmp_assign_source_19 = MAKE_FUNCTION_jinja2$tests$$$function__10_test_false(tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_annotations_11;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_value_6;
        tmp_dict_key_6 = mod_consts[60];
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_expression_value_6 == NULL));
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[61]);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        tmp_annotations_11 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[62];
        tmp_dict_value_6 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));


        tmp_assign_source_20 = MAKE_FUNCTION_jinja2$tests$$$function__11_test_true(tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_annotations_12;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_value_7;
        tmp_dict_key_7 = mod_consts[60];
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_expression_value_7 == NULL));
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[61]);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        tmp_annotations_12 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[62];
        tmp_dict_value_7 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));


        tmp_assign_source_21 = MAKE_FUNCTION_jinja2$tests$$$function__12_test_integer(tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_annotations_13;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_expression_value_8;
        tmp_dict_key_8 = mod_consts[60];
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_expression_value_8 == NULL));
        tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[61]);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_annotations_13 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_8, tmp_dict_value_8);
        Py_DECREF(tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[62];
        tmp_dict_value_8 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));


        tmp_assign_source_22 = MAKE_FUNCTION_jinja2$tests$$$function__13_test_float(tmp_annotations_13);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_annotations_14;
        tmp_annotations_14 = DICT_COPY(mod_consts[74]);


        tmp_assign_source_23 = MAKE_FUNCTION_jinja2$tests$$$function__14_test_lower(tmp_annotations_14);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_annotations_15;
        tmp_annotations_15 = DICT_COPY(mod_consts[74]);


        tmp_assign_source_24 = MAKE_FUNCTION_jinja2$tests$$$function__15_test_upper(tmp_annotations_15);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_annotations_16;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_expression_value_9;
        tmp_dict_key_9 = mod_consts[60];
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_expression_value_9 == NULL));
        tmp_dict_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[61]);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto frame_exception_exit_1;
        }
        tmp_annotations_16 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[62];
        tmp_dict_value_9 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));


        tmp_assign_source_25 = MAKE_FUNCTION_jinja2$tests$$$function__16_test_string(tmp_annotations_16);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_annotations_17;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_expression_value_10;
        tmp_dict_key_10 = mod_consts[60];
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_expression_value_10 == NULL));
        tmp_dict_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[61]);
        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_annotations_17 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_10, tmp_dict_value_10);
        Py_DECREF(tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[62];
        tmp_dict_value_10 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));


        tmp_assign_source_26 = MAKE_FUNCTION_jinja2$tests$$$function__17_test_mapping(tmp_annotations_17);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_annotations_18;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_expression_value_11;
        tmp_dict_key_11 = mod_consts[60];
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_expression_value_11 == NULL));
        tmp_dict_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[61]);
        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_annotations_18 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_11, tmp_dict_value_11);
        Py_DECREF(tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[62];
        tmp_dict_value_11 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));


        tmp_assign_source_27 = MAKE_FUNCTION_jinja2$tests$$$function__18_test_number(tmp_annotations_18);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_annotations_19;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_expression_value_12;
        tmp_dict_key_12 = mod_consts[60];
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_expression_value_12 == NULL));
        tmp_dict_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[61]);
        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;

            goto frame_exception_exit_1;
        }
        tmp_annotations_19 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_12, tmp_dict_value_12);
        Py_DECREF(tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[62];
        tmp_dict_value_12 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_19, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));


        tmp_assign_source_28 = MAKE_FUNCTION_jinja2$tests$$$function__19_test_sequence(tmp_annotations_19);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_annotations_20;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_expression_value_13;
        tmp_dict_key_13 = mod_consts[60];
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_expression_value_13 == NULL));
        tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[61]);
        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_annotations_20 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_14;
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[81];
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            assert(!(tmp_expression_value_14 == NULL));
            tmp_dict_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[61]);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[62];
            tmp_dict_value_13 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_20, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_20);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_29 = MAKE_FUNCTION_jinja2$tests$$$function__20_test_sameas(tmp_annotations_20);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_annotations_21;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_expression_value_15;
        tmp_dict_key_14 = mod_consts[60];
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_expression_value_15 == NULL));
        tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[61]);
        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_annotations_21 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_14, tmp_dict_value_14);
        Py_DECREF(tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = mod_consts[62];
        tmp_dict_value_14 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_21, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));


        tmp_assign_source_30 = MAKE_FUNCTION_jinja2$tests$$$function__21_test_iterable(tmp_annotations_21);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_annotations_22;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_expression_value_16;
        tmp_dict_key_15 = mod_consts[60];
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_expression_value_16 == NULL));
        tmp_dict_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[61]);
        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto frame_exception_exit_1;
        }
        tmp_annotations_22 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_15, tmp_dict_value_15);
        Py_DECREF(tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[62];
        tmp_dict_value_15 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_22, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));


        tmp_assign_source_31 = MAKE_FUNCTION_jinja2$tests$$$function__22_test_escaped(tmp_annotations_22);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_annotations_23;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_expression_value_17;
        tmp_dict_key_16 = mod_consts[60];
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_expression_value_17 == NULL));
        tmp_dict_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[61]);
        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_annotations_23 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_18;
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[85];
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            assert(!(tmp_expression_value_18 == NULL));
            tmp_dict_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[86]);
            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 207;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_dict_key_16 = mod_consts[62];
            tmp_dict_value_16 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_23, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_23);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_32 = MAKE_FUNCTION_jinja2$tests$$$function__23_test_in(tmp_annotations_23);

        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        tmp_dict_key_17 = mod_consts[88];
        tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_dict_value_17 == NULL)) {
            tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_33 = _PyDict_NewPresized( 39 );
        {
            PyObject *tmp_expression_value_19;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_expression_value_33;
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[89];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
            }

            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[90];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
            }

            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 218;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[91];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[63]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
            }

            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[92];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
            }

            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[93];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[66]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
            }

            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[94];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[95];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[96];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[97];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[98];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[99];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[72]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[100];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[101];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[102];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[103];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[77]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[104];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[78]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[105];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[79]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[106];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[80]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[107];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[83]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[108];
            tmp_dict_value_17 = LOOKUP_BUILTIN(mod_consts[108]);
            assert(tmp_dict_value_17 != NULL);
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[109];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[82]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[110];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[84]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[111];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            assert(!(tmp_dict_value_17 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[112];
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[113]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[113];
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[113]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[114];
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[113]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[115];
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[116]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[116];
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[116]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[117];
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[118]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[118];
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[118]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 246;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[119];
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[118]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[120];
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[120]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[121];
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[120]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[122];
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[123]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[123];
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[123]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[124];
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[123]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[125];
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[126]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_dict_key_17 = mod_consts[126];
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto dict_build_exception_3;
            }
            tmp_dict_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[126]);
            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 254;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_17, tmp_dict_value_17);
            Py_DECREF(tmp_dict_value_17);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_assign_source_33);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        UPDATE_STRING_DICT1(moduledict_jinja2$tests, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_33);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9c2379c66ab17e78d53575a17a65da91, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9c2379c66ab17e78d53575a17a65da91->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9c2379c66ab17e78d53575a17a65da91, exception_lineno);
    }



    assertFrameObject(frame_9c2379c66ab17e78d53575a17a65da91);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("jinja2.tests", false);

    Py_INCREF(module_jinja2$tests);
    return module_jinja2$tests;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_jinja2$tests, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("jinja2$tests", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
