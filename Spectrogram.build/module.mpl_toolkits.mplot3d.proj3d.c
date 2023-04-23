/* Generated code for Python module 'mpl_toolkits.mplot3d.proj3d'
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

/* The "module_mpl_toolkits$mplot3d$proj3d" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_mpl_toolkits$mplot3d$proj3d;
PyDictObject *moduledict_mpl_toolkits$mplot3d$proj3d;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[96];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[96];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("mpl_toolkits.mplot3d.proj3d"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 96; i++) {
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
void checkModuleConstants_mpl_toolkits$mplot3d$proj3d(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 96; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_03f7633fbc4823627d2b38a47f155181;
static PyCodeObject *codeobj_5134b4a6ec14573348c63aff34fe9d0e;
static PyCodeObject *codeobj_8dbcd3b748b837f939f8c80dd37237e1;
static PyCodeObject *codeobj_b3b994b474309e9c9fbb226d1ad4b926;
static PyCodeObject *codeobj_119b589da0eb456ba6614350828f8b6c;
static PyCodeObject *codeobj_033523cb9b1e35db77ea1080628269e6;
static PyCodeObject *codeobj_409c79052e51eb03a333ee39b246b940;
static PyCodeObject *codeobj_cbfd1341278cedcb8ada4450500ba61a;
static PyCodeObject *codeobj_372db36a0dfae977aa22dd9ac14a776a;
static PyCodeObject *codeobj_091797322df26df8c52aac24dc85fca2;
static PyCodeObject *codeobj_7c82b395bdd5236baee0a0533dad204a;
static PyCodeObject *codeobj_89d73e433c3ad96348939e14bbea40e6;
static PyCodeObject *codeobj_74d7006797de814b1a2952edc49488eb;
static PyCodeObject *codeobj_4ab01ceef015a3cfac19f866b2694cc6;
static PyCodeObject *codeobj_39a1c4a2f873e57a8c05d6da65a2082d;
static PyCodeObject *codeobj_6e976a6d822783f25e3c50ccf0aa8dee;
static PyCodeObject *codeobj_38d8ba02688ae5d58eb8258762beee96;
static PyCodeObject *codeobj_1585a1103a90d1c7f46670ce56f72f87;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[59]; CHECK_OBJECT(module_filename_obj);
    codeobj_03f7633fbc4823627d2b38a47f155181 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[78], mod_consts[78], NULL, NULL, 0, 0, 0);
    codeobj_5134b4a6ec14573348c63aff34fe9d0e = MAKE_CODE_OBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[79], NULL, 3, 0, 0);
    codeobj_8dbcd3b748b837f939f8c80dd37237e1 = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[80], NULL, 2, 0, 0);
    codeobj_b3b994b474309e9c9fbb226d1ad4b926 = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[81], NULL, 2, 0, 0);
    codeobj_119b589da0eb456ba6614350828f8b6c = MAKE_CODE_OBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[45], mod_consts[45], mod_consts[82], NULL, 3, 0, 0);
    codeobj_033523cb9b1e35db77ea1080628269e6 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[83], NULL, 4, 0, 0);
    codeobj_409c79052e51eb03a333ee39b246b940 = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[84], NULL, 4, 0, 0);
    codeobj_cbfd1341278cedcb8ada4450500ba61a = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[85], NULL, 4, 0, 0);
    codeobj_372db36a0dfae977aa22dd9ac14a776a = MAKE_CODE_OBJECT(module_filename_obj, 165, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[86], NULL, 2, 0, 0);
    codeobj_091797322df26df8c52aac24dc85fca2 = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[71], mod_consts[71], mod_consts[87], NULL, 3, 0, 0);
    codeobj_7c82b395bdd5236baee0a0533dad204a = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[88], NULL, 2, 0, 0);
    codeobj_89d73e433c3ad96348939e14bbea40e6 = MAKE_CODE_OBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[53], mod_consts[89], NULL, 2, 0, 0);
    codeobj_74d7006797de814b1a2952edc49488eb = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[54], mod_consts[54], mod_consts[90], NULL, 4, 0, 0);
    codeobj_4ab01ceef015a3cfac19f866b2694cc6 = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[75], mod_consts[75], mod_consts[90], NULL, 4, 0, 0);
    codeobj_39a1c4a2f873e57a8c05d6da65a2082d = MAKE_CODE_OBJECT(module_filename_obj, 243, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[91], NULL, 2, 0, 0);
    codeobj_6e976a6d822783f25e3c50ccf0aa8dee = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[92], NULL, 2, 0, 0);
    codeobj_38d8ba02688ae5d58eb8258762beee96 = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[93], NULL, 4, 0, 0);
    codeobj_1585a1103a90d1c7f46670ce56f72f87 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[69], mod_consts[69], mod_consts[94], NULL, 7, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__16_complex_call_helper_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__10__proj_transform_vec_clip();


static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__11_inv_transform();


static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__12__vec_pad_ones();


static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__13_proj_transform();


static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__14_proj_transform_clip();


static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__15_proj_points();


static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__16_proj_trans_points();


static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__17_rot_x();


static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__1__line2d_seg_dist();


static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__2_world_transformation(PyObject *defaults);


static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__3_rotation_about_vector();


static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__4__view_axes();


static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__5__view_transformation_uvw();


static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__6_view_transformation();


static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__7_persp_transformation();


static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__8_ortho_transformation();


static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__9__proj_transform_vec();


// The module function definitions.
static PyObject *impl_mpl_toolkits$mplot3d$proj3d$$$function__1__line2d_seg_dist(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[0];
    PyObject *par_s0 = python_pars[1];
    PyObject *par_s1 = python_pars[2];
    PyObject *var_s01 = NULL;
    PyObject *var_s0p = NULL;
    PyObject *var_l2 = NULL;
    PyObject *var_p1 = NULL;
    struct Nuitka_FrameObject *frame_5134b4a6ec14573348c63aff34fe9d0e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5134b4a6ec14573348c63aff34fe9d0e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5134b4a6ec14573348c63aff34fe9d0e)) {
        Py_XDECREF(cache_frame_5134b4a6ec14573348c63aff34fe9d0e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5134b4a6ec14573348c63aff34fe9d0e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5134b4a6ec14573348c63aff34fe9d0e = MAKE_FUNCTION_FRAME(codeobj_5134b4a6ec14573348c63aff34fe9d0e, module_mpl_toolkits$mplot3d$proj3d, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5134b4a6ec14573348c63aff34fe9d0e->m_type_description == NULL);
    frame_5134b4a6ec14573348c63aff34fe9d0e = cache_frame_5134b4a6ec14573348c63aff34fe9d0e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5134b4a6ec14573348c63aff34fe9d0e);
    assert(Py_REFCNT(frame_5134b4a6ec14573348c63aff34fe9d0e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_s0);
        tmp_args_element_value_1 = par_s0;
        frame_5134b4a6ec14573348c63aff34fe9d0e->m_frame.f_lineno = 20;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_s0;
            assert(old != NULL);
            par_s0 = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(par_s1);
        tmp_sub_expr_left_1 = par_s1;
        CHECK_OBJECT(par_s0);
        tmp_sub_expr_right_1 = par_s0;
        tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_s01 == NULL);
        var_s01 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        CHECK_OBJECT(par_p);
        tmp_sub_expr_left_2 = par_p;
        CHECK_OBJECT(par_s0);
        tmp_sub_expr_right_2 = par_s0;
        tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_s0p == NULL);
        var_s0p = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_matmult_expr_left_1;
        PyObject *tmp_matmult_expr_right_1;
        CHECK_OBJECT(var_s01);
        tmp_matmult_expr_left_1 = var_s01;
        CHECK_OBJECT(var_s01);
        tmp_matmult_expr_right_1 = var_s01;
        tmp_assign_source_4 = BINARY_OPERATION_MATMULT_OBJECT_OBJECT_OBJECT(tmp_matmult_expr_left_1, tmp_matmult_expr_right_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_l2 == NULL);
        var_l2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_l2);
        tmp_args_element_value_2 = var_l2;
        CHECK_OBJECT(var_l2);
        tmp_args_element_value_3 = var_l2;
        tmp_args_element_value_4 = mod_consts[3];
        frame_5134b4a6ec14573348c63aff34fe9d0e->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_2,
                mod_consts[2],
                call_args
            );
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_l2;
            assert(old != NULL);
            var_l2 = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_matmult_expr_left_2;
        PyObject *tmp_matmult_expr_right_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(par_s0);
        tmp_add_expr_left_1 = par_s0;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 28;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[6]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 28;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_s0p);
        tmp_matmult_expr_left_2 = var_s0p;
        CHECK_OBJECT(var_s01);
        tmp_matmult_expr_right_2 = var_s01;
        tmp_truediv_expr_left_1 = BINARY_OPERATION_MATMULT_OBJECT_OBJECT_OBJECT(tmp_matmult_expr_left_2, tmp_matmult_expr_right_2);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 28;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_l2);
        tmp_truediv_expr_right_1 = var_l2;
        tmp_args_element_value_6 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 28;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[7];
        tmp_args_element_value_8 = mod_consts[3];
        frame_5134b4a6ec14573348c63aff34fe9d0e->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 28;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_s01);
        tmp_args_element_value_9 = var_s01;
        frame_5134b4a6ec14573348c63aff34fe9d0e->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_9};
            tmp_add_expr_right_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_p1 == NULL);
        var_p1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_pow_expr_left_2;
        PyObject *tmp_pow_expr_right_2;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        CHECK_OBJECT(par_p);
        tmp_sub_expr_left_3 = par_p;
        CHECK_OBJECT(var_p1);
        tmp_sub_expr_right_3 = var_p1;
        tmp_pow_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        if (tmp_pow_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_pow_expr_right_2 = mod_consts[8];
        tmp_expression_value_4 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_2, tmp_pow_expr_right_2);
        Py_DECREF(tmp_pow_expr_left_2);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[9]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_5134b4a6ec14573348c63aff34fe9d0e->m_frame.f_lineno = 29;
        tmp_pow_expr_left_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[10], 0), mod_consts[11]);
        Py_DECREF(tmp_called_value_3);
        if (tmp_pow_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_pow_expr_right_1 = mod_consts[12];
        tmp_return_value = BINARY_OPERATION_POW_OBJECT_OBJECT_FLOAT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        Py_DECREF(tmp_pow_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5134b4a6ec14573348c63aff34fe9d0e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5134b4a6ec14573348c63aff34fe9d0e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5134b4a6ec14573348c63aff34fe9d0e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5134b4a6ec14573348c63aff34fe9d0e,
        type_description_1,
        par_p,
        par_s0,
        par_s1,
        var_s01,
        var_s0p,
        var_l2,
        var_p1
    );


    // Release cached frame if used for exception.
    if (frame_5134b4a6ec14573348c63aff34fe9d0e == cache_frame_5134b4a6ec14573348c63aff34fe9d0e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5134b4a6ec14573348c63aff34fe9d0e);
        cache_frame_5134b4a6ec14573348c63aff34fe9d0e = NULL;
    }

    assertFrameObject(frame_5134b4a6ec14573348c63aff34fe9d0e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_s0);
    Py_DECREF(par_s0);
    par_s0 = NULL;
    CHECK_OBJECT(var_s01);
    Py_DECREF(var_s01);
    var_s01 = NULL;
    CHECK_OBJECT(var_s0p);
    Py_DECREF(var_s0p);
    var_s0p = NULL;
    CHECK_OBJECT(var_l2);
    Py_DECREF(var_l2);
    var_l2 = NULL;
    CHECK_OBJECT(var_p1);
    Py_DECREF(var_p1);
    var_p1 = NULL;
    goto function_return_exit;
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

    Py_XDECREF(par_s0);
    par_s0 = NULL;
    Py_XDECREF(var_s01);
    var_s01 = NULL;
    Py_XDECREF(var_s0p);
    var_s0p = NULL;
    Py_XDECREF(var_l2);
    var_l2 = NULL;
    Py_XDECREF(var_p1);
    var_p1 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_s1);
    Py_DECREF(par_s1);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_p);
    Py_DECREF(par_p);
    CHECK_OBJECT(par_s1);
    Py_DECREF(par_s1);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$mplot3d$proj3d$$$function__2_world_transformation(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_xmin = python_pars[0];
    PyObject *par_xmax = python_pars[1];
    PyObject *par_ymin = python_pars[2];
    PyObject *par_ymax = python_pars[3];
    PyObject *par_zmin = python_pars[4];
    PyObject *par_zmax = python_pars[5];
    PyObject *par_pb_aspect = python_pars[6];
    PyObject *var_dx = NULL;
    PyObject *var_dy = NULL;
    PyObject *var_dz = NULL;
    PyObject *var_ax = NULL;
    PyObject *var_ay = NULL;
    PyObject *var_az = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1585a1103a90d1c7f46670ce56f72f87;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1585a1103a90d1c7f46670ce56f72f87 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1585a1103a90d1c7f46670ce56f72f87)) {
        Py_XDECREF(cache_frame_1585a1103a90d1c7f46670ce56f72f87);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1585a1103a90d1c7f46670ce56f72f87 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1585a1103a90d1c7f46670ce56f72f87 = MAKE_FUNCTION_FRAME(codeobj_1585a1103a90d1c7f46670ce56f72f87, module_mpl_toolkits$mplot3d$proj3d, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1585a1103a90d1c7f46670ce56f72f87->m_type_description == NULL);
    frame_1585a1103a90d1c7f46670ce56f72f87 = cache_frame_1585a1103a90d1c7f46670ce56f72f87;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1585a1103a90d1c7f46670ce56f72f87);
    assert(Py_REFCNT(frame_1585a1103a90d1c7f46670ce56f72f87) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(par_xmax);
        tmp_sub_expr_left_1 = par_xmax;
        CHECK_OBJECT(par_xmin);
        tmp_sub_expr_right_1 = par_xmin;
        tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dx == NULL);
        var_dx = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        CHECK_OBJECT(par_ymax);
        tmp_sub_expr_left_2 = par_ymax;
        CHECK_OBJECT(par_ymin);
        tmp_sub_expr_right_2 = par_ymin;
        tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dy == NULL);
        var_dy = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        CHECK_OBJECT(par_zmax);
        tmp_sub_expr_left_3 = par_zmax;
        CHECK_OBJECT(par_zmin);
        tmp_sub_expr_right_3 = par_zmin;
        tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dz == NULL);
        var_dz = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_pb_aspect);
        tmp_cmp_expr_left_1 = par_pb_aspect;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_pb_aspect);
        tmp_iter_arg_1 = par_pb_aspect;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 43;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 43;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooo";
            exception_lineno = 43;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 43;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[14];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooo";
            exception_lineno = 43;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        assert(var_ax == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_ax = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert(var_ay == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_ay = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;
        assert(var_az == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_az = tmp_assign_source_10;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_itruediv_expr_left_1;
        PyObject *tmp_itruediv_expr_right_1;
        CHECK_OBJECT(var_dx);
        tmp_itruediv_expr_left_1 = var_dx;
        CHECK_OBJECT(var_ax);
        tmp_itruediv_expr_right_1 = var_ax;
        tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_OBJECT(&tmp_itruediv_expr_left_1, tmp_itruediv_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = tmp_itruediv_expr_left_1;
        var_dx = tmp_assign_source_11;

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_itruediv_expr_left_2;
        PyObject *tmp_itruediv_expr_right_2;
        CHECK_OBJECT(var_dy);
        tmp_itruediv_expr_left_2 = var_dy;
        CHECK_OBJECT(var_ay);
        tmp_itruediv_expr_right_2 = var_ay;
        tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_OBJECT(&tmp_itruediv_expr_left_2, tmp_itruediv_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = tmp_itruediv_expr_left_2;
        var_dy = tmp_assign_source_12;

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_itruediv_expr_left_3;
        PyObject *tmp_itruediv_expr_right_3;
        CHECK_OBJECT(var_dz);
        tmp_itruediv_expr_left_3 = var_dz;
        CHECK_OBJECT(var_az);
        tmp_itruediv_expr_right_3 = var_az;
        tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_OBJECT(&tmp_itruediv_expr_left_3, tmp_itruediv_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = tmp_itruediv_expr_left_3;
        var_dz = tmp_assign_source_13;

    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_1 = mod_consts[3];
        CHECK_OBJECT(var_dx);
        tmp_truediv_expr_right_1 = var_dx;
        tmp_list_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 48;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyObject *tmp_operand_value_1;
            PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[7];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[7];
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_2);
            CHECK_OBJECT(par_xmin);
            tmp_operand_value_1 = par_xmin;
            tmp_truediv_expr_left_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
            if (tmp_truediv_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_1 = "ooooooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_dx);
            tmp_truediv_expr_right_2 = var_dx;
            tmp_list_element_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            Py_DECREF(tmp_truediv_expr_left_2);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_1 = "ooooooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_2);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_list_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_args_element_value_1 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_list_element_4;
            PyList_SET_ITEM(tmp_args_element_value_1, 0, tmp_list_element_1);
            tmp_list_element_3 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_truediv_expr_left_3;
                PyObject *tmp_truediv_expr_right_3;
                PyObject *tmp_truediv_expr_left_4;
                PyObject *tmp_truediv_expr_right_4;
                PyObject *tmp_operand_value_2;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_3);
                tmp_truediv_expr_left_3 = mod_consts[3];
                CHECK_OBJECT(var_dy);
                tmp_truediv_expr_right_3 = var_dy;
                tmp_list_element_3 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
                if (tmp_list_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;
                    type_description_1 = "ooooooooooooo";
                    goto list_build_exception_3;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_3);
                tmp_list_element_3 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_3);
                CHECK_OBJECT(par_ymin);
                tmp_operand_value_2 = par_ymin;
                tmp_truediv_expr_left_4 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
                if (tmp_truediv_expr_left_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;
                    type_description_1 = "ooooooooooooo";
                    goto list_build_exception_3;
                }
                CHECK_OBJECT(var_dy);
                tmp_truediv_expr_right_4 = var_dy;
                tmp_list_element_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
                Py_DECREF(tmp_truediv_expr_left_4);
                if (tmp_list_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 49;
                    type_description_1 = "ooooooooooooo";
                    goto list_build_exception_3;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_3);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            PyList_SET_ITEM(tmp_args_element_value_1, 1, tmp_list_element_1);
            tmp_list_element_4 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_truediv_expr_left_5;
                PyObject *tmp_truediv_expr_right_5;
                PyObject *tmp_truediv_expr_left_6;
                PyObject *tmp_truediv_expr_right_6;
                PyObject *tmp_operand_value_3;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_4);
                tmp_list_element_4 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_4);
                tmp_truediv_expr_left_5 = mod_consts[3];
                CHECK_OBJECT(var_dz);
                tmp_truediv_expr_right_5 = var_dz;
                tmp_list_element_4 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_5, tmp_truediv_expr_right_5);
                if (tmp_list_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 50;
                    type_description_1 = "ooooooooooooo";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_4);
                CHECK_OBJECT(par_zmin);
                tmp_operand_value_3 = par_zmin;
                tmp_truediv_expr_left_6 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
                if (tmp_truediv_expr_left_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 50;
                    type_description_1 = "ooooooooooooo";
                    goto list_build_exception_4;
                }
                CHECK_OBJECT(var_dz);
                tmp_truediv_expr_right_6 = var_dz;
                tmp_list_element_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_6, tmp_truediv_expr_right_6);
                Py_DECREF(tmp_truediv_expr_left_6);
                if (tmp_list_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 50;
                    type_description_1 = "ooooooooooooo";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_list_element_1, 3, tmp_list_element_4);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            PyList_SET_ITEM(tmp_args_element_value_1, 2, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST4(mod_consts[16]);
            PyList_SET_ITEM(tmp_args_element_value_1, 3, tmp_list_element_1);
        }
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        frame_1585a1103a90d1c7f46670ce56f72f87->m_frame.f_lineno = 48;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1585a1103a90d1c7f46670ce56f72f87, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1585a1103a90d1c7f46670ce56f72f87->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1585a1103a90d1c7f46670ce56f72f87, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1585a1103a90d1c7f46670ce56f72f87,
        type_description_1,
        par_xmin,
        par_xmax,
        par_ymin,
        par_ymax,
        par_zmin,
        par_zmax,
        par_pb_aspect,
        var_dx,
        var_dy,
        var_dz,
        var_ax,
        var_ay,
        var_az
    );


    // Release cached frame if used for exception.
    if (frame_1585a1103a90d1c7f46670ce56f72f87 == cache_frame_1585a1103a90d1c7f46670ce56f72f87) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1585a1103a90d1c7f46670ce56f72f87);
        cache_frame_1585a1103a90d1c7f46670ce56f72f87 = NULL;
    }

    assertFrameObject(frame_1585a1103a90d1c7f46670ce56f72f87);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_dx);
    Py_DECREF(var_dx);
    var_dx = NULL;
    CHECK_OBJECT(var_dy);
    Py_DECREF(var_dy);
    var_dy = NULL;
    CHECK_OBJECT(var_dz);
    Py_DECREF(var_dz);
    var_dz = NULL;
    Py_XDECREF(var_ax);
    var_ax = NULL;
    Py_XDECREF(var_ay);
    var_ay = NULL;
    Py_XDECREF(var_az);
    var_az = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_dx);
    var_dx = NULL;
    Py_XDECREF(var_dy);
    var_dy = NULL;
    Py_XDECREF(var_dz);
    var_dz = NULL;
    Py_XDECREF(var_ax);
    var_ax = NULL;
    Py_XDECREF(var_ay);
    var_ay = NULL;
    Py_XDECREF(var_az);
    var_az = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_xmin);
    Py_DECREF(par_xmin);
    CHECK_OBJECT(par_xmax);
    Py_DECREF(par_xmax);
    CHECK_OBJECT(par_ymin);
    Py_DECREF(par_ymin);
    CHECK_OBJECT(par_ymax);
    Py_DECREF(par_ymax);
    CHECK_OBJECT(par_zmin);
    Py_DECREF(par_zmin);
    CHECK_OBJECT(par_zmax);
    Py_DECREF(par_zmax);
    CHECK_OBJECT(par_pb_aspect);
    Py_DECREF(par_pb_aspect);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_xmin);
    Py_DECREF(par_xmin);
    CHECK_OBJECT(par_xmax);
    Py_DECREF(par_xmax);
    CHECK_OBJECT(par_ymin);
    Py_DECREF(par_ymin);
    CHECK_OBJECT(par_ymax);
    Py_DECREF(par_ymax);
    CHECK_OBJECT(par_zmin);
    Py_DECREF(par_zmin);
    CHECK_OBJECT(par_zmax);
    Py_DECREF(par_zmax);
    CHECK_OBJECT(par_pb_aspect);
    Py_DECREF(par_pb_aspect);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$mplot3d$proj3d$$$function__3_rotation_about_vector(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_v = python_pars[0];
    PyObject *par_angle = python_pars[1];
    PyObject *var_vx = NULL;
    PyObject *var_vy = NULL;
    PyObject *var_vz = NULL;
    PyObject *var_s = NULL;
    PyObject *var_c = NULL;
    PyObject *var_t = NULL;
    PyObject *var_R = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6e976a6d822783f25e3c50ccf0aa8dee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_6e976a6d822783f25e3c50ccf0aa8dee = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6e976a6d822783f25e3c50ccf0aa8dee)) {
        Py_XDECREF(cache_frame_6e976a6d822783f25e3c50ccf0aa8dee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e976a6d822783f25e3c50ccf0aa8dee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e976a6d822783f25e3c50ccf0aa8dee = MAKE_FUNCTION_FRAME(codeobj_6e976a6d822783f25e3c50ccf0aa8dee, module_mpl_toolkits$mplot3d$proj3d, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6e976a6d822783f25e3c50ccf0aa8dee->m_type_description == NULL);
    frame_6e976a6d822783f25e3c50ccf0aa8dee = cache_frame_6e976a6d822783f25e3c50ccf0aa8dee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6e976a6d822783f25e3c50ccf0aa8dee);
    assert(Py_REFCNT(frame_6e976a6d822783f25e3c50ccf0aa8dee) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_v);
        tmp_truediv_expr_left_1 = par_v;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_v);
        tmp_args_element_value_1 = par_v;
        frame_6e976a6d822783f25e3c50ccf0aa8dee->m_frame.f_lineno = 58;
        tmp_truediv_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[19], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 58;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 58;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 58;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooo";
                    exception_lineno = 58;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[14];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 58;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_vx == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_vx = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_vy == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_vy = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert(var_vz == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_vz = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_angle);
        tmp_args_element_value_2 = par_angle;
        frame_6e976a6d822783f25e3c50ccf0aa8dee->m_frame.f_lineno = 59;
        tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[20], tmp_args_element_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_s == NULL);
        var_s = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_angle);
        tmp_args_element_value_3 = par_angle;
        frame_6e976a6d822783f25e3c50ccf0aa8dee->m_frame.f_lineno = 60;
        tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[21], tmp_args_element_value_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_c == NULL);
        var_c = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        tmp_mult_expr_left_1 = mod_consts[8];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[20]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_angle);
        tmp_truediv_expr_left_2 = par_angle;
        tmp_truediv_expr_right_2 = mod_consts[8];
        tmp_args_element_value_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 61;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_6e976a6d822783f25e3c50ccf0aa8dee->m_frame.f_lineno = 61;
        tmp_pow_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_pow_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_pow_expr_right_1 = mod_consts[8];
        tmp_mult_expr_right_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        Py_DECREF(tmp_pow_expr_left_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_t == NULL);
        var_t = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_list_element_1;
        PyObject *tmp_list_element_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[15]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_t);
        tmp_mult_expr_left_3 = var_t;
        CHECK_OBJECT(var_vx);
        tmp_mult_expr_right_3 = var_vx;
        tmp_mult_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 64;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vx);
        tmp_mult_expr_right_2 = var_vx;
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 64;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_c);
        tmp_add_expr_right_1 = var_c;
        tmp_list_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 64;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_mult_expr_left_4;
            PyObject *tmp_mult_expr_right_4;
            PyObject *tmp_mult_expr_left_5;
            PyObject *tmp_mult_expr_right_5;
            PyObject *tmp_mult_expr_left_6;
            PyObject *tmp_mult_expr_right_6;
            PyObject *tmp_add_expr_left_2;
            PyObject *tmp_add_expr_right_2;
            PyObject *tmp_mult_expr_left_7;
            PyObject *tmp_mult_expr_right_7;
            PyObject *tmp_mult_expr_left_8;
            PyObject *tmp_mult_expr_right_8;
            PyObject *tmp_mult_expr_left_9;
            PyObject *tmp_mult_expr_right_9;
            PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_2);
            CHECK_OBJECT(var_t);
            tmp_mult_expr_left_5 = var_t;
            CHECK_OBJECT(var_vx);
            tmp_mult_expr_right_5 = var_vx;
            tmp_mult_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
            if (tmp_mult_expr_left_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_vy);
            tmp_mult_expr_right_4 = var_vy;
            tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
            Py_DECREF(tmp_mult_expr_left_4);
            if (tmp_sub_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_vz);
            tmp_mult_expr_left_6 = var_vz;
            CHECK_OBJECT(var_s);
            tmp_mult_expr_right_6 = var_s;
            tmp_sub_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
            if (tmp_sub_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_sub_expr_left_1);

                exception_lineno = 64;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_sub_expr_right_1);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_2);
            CHECK_OBJECT(var_t);
            tmp_mult_expr_left_8 = var_t;
            CHECK_OBJECT(var_vx);
            tmp_mult_expr_right_8 = var_vx;
            tmp_mult_expr_left_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
            if (tmp_mult_expr_left_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_vz);
            tmp_mult_expr_right_7 = var_vz;
            tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
            Py_DECREF(tmp_mult_expr_left_7);
            if (tmp_add_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(var_vy);
            tmp_mult_expr_left_9 = var_vy;
            CHECK_OBJECT(var_s);
            tmp_mult_expr_right_9 = var_s;
            tmp_add_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
            if (tmp_add_expr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_2);

                exception_lineno = 64;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            tmp_list_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
            Py_DECREF(tmp_add_expr_left_2);
            Py_DECREF(tmp_add_expr_right_2);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_2);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_list_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_args_element_value_5 = MAKE_LIST_EMPTY(3);
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_add_expr_left_3;
            PyObject *tmp_add_expr_right_3;
            PyObject *tmp_mult_expr_left_10;
            PyObject *tmp_mult_expr_right_10;
            PyObject *tmp_mult_expr_left_11;
            PyObject *tmp_mult_expr_right_11;
            PyObject *tmp_mult_expr_left_12;
            PyObject *tmp_mult_expr_right_12;
            PyObject *tmp_list_element_4;
            PyObject *tmp_sub_expr_left_3;
            PyObject *tmp_sub_expr_right_3;
            PyObject *tmp_mult_expr_left_18;
            PyObject *tmp_mult_expr_right_18;
            PyObject *tmp_mult_expr_left_19;
            PyObject *tmp_mult_expr_right_19;
            PyObject *tmp_mult_expr_left_20;
            PyObject *tmp_mult_expr_right_20;
            PyList_SET_ITEM(tmp_args_element_value_5, 0, tmp_list_element_1);
            CHECK_OBJECT(var_t);
            tmp_mult_expr_left_11 = var_t;
            CHECK_OBJECT(var_vy);
            tmp_mult_expr_right_11 = var_vy;
            tmp_mult_expr_left_10 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_11, tmp_mult_expr_right_11);
            if (tmp_mult_expr_left_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "ooooooooo";
                goto list_build_exception_2;
            }
            CHECK_OBJECT(var_vx);
            tmp_mult_expr_right_10 = var_vx;
            tmp_add_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_10, tmp_mult_expr_right_10);
            Py_DECREF(tmp_mult_expr_left_10);
            if (tmp_add_expr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "ooooooooo";
                goto list_build_exception_2;
            }
            CHECK_OBJECT(var_vz);
            tmp_mult_expr_left_12 = var_vz;
            CHECK_OBJECT(var_s);
            tmp_mult_expr_right_12 = var_s;
            tmp_add_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_12, tmp_mult_expr_right_12);
            if (tmp_add_expr_right_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_3);

                exception_lineno = 65;
                type_description_1 = "ooooooooo";
                goto list_build_exception_2;
            }
            tmp_list_element_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
            Py_DECREF(tmp_add_expr_left_3);
            Py_DECREF(tmp_add_expr_right_3);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;
                type_description_1 = "ooooooooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_add_expr_left_4;
                PyObject *tmp_add_expr_right_4;
                PyObject *tmp_mult_expr_left_13;
                PyObject *tmp_mult_expr_right_13;
                PyObject *tmp_mult_expr_left_14;
                PyObject *tmp_mult_expr_right_14;
                PyObject *tmp_sub_expr_left_2;
                PyObject *tmp_sub_expr_right_2;
                PyObject *tmp_mult_expr_left_15;
                PyObject *tmp_mult_expr_right_15;
                PyObject *tmp_mult_expr_left_16;
                PyObject *tmp_mult_expr_right_16;
                PyObject *tmp_mult_expr_left_17;
                PyObject *tmp_mult_expr_right_17;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_3);
                CHECK_OBJECT(var_t);
                tmp_mult_expr_left_14 = var_t;
                CHECK_OBJECT(var_vy);
                tmp_mult_expr_right_14 = var_vy;
                tmp_mult_expr_left_13 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_14, tmp_mult_expr_right_14);
                if (tmp_mult_expr_left_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_1 = "ooooooooo";
                    goto list_build_exception_3;
                }
                CHECK_OBJECT(var_vy);
                tmp_mult_expr_right_13 = var_vy;
                tmp_add_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_13, tmp_mult_expr_right_13);
                Py_DECREF(tmp_mult_expr_left_13);
                if (tmp_add_expr_left_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_1 = "ooooooooo";
                    goto list_build_exception_3;
                }
                CHECK_OBJECT(var_c);
                tmp_add_expr_right_4 = var_c;
                tmp_list_element_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
                Py_DECREF(tmp_add_expr_left_4);
                if (tmp_list_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_1 = "ooooooooo";
                    goto list_build_exception_3;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_3);
                CHECK_OBJECT(var_t);
                tmp_mult_expr_left_16 = var_t;
                CHECK_OBJECT(var_vy);
                tmp_mult_expr_right_16 = var_vy;
                tmp_mult_expr_left_15 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_16, tmp_mult_expr_right_16);
                if (tmp_mult_expr_left_15 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_1 = "ooooooooo";
                    goto list_build_exception_3;
                }
                CHECK_OBJECT(var_vz);
                tmp_mult_expr_right_15 = var_vz;
                tmp_sub_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_15, tmp_mult_expr_right_15);
                Py_DECREF(tmp_mult_expr_left_15);
                if (tmp_sub_expr_left_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_1 = "ooooooooo";
                    goto list_build_exception_3;
                }
                CHECK_OBJECT(var_vx);
                tmp_mult_expr_left_17 = var_vx;
                CHECK_OBJECT(var_s);
                tmp_mult_expr_right_17 = var_s;
                tmp_sub_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_17, tmp_mult_expr_right_17);
                if (tmp_sub_expr_right_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_sub_expr_left_2);

                    exception_lineno = 65;
                    type_description_1 = "ooooooooo";
                    goto list_build_exception_3;
                }
                tmp_list_element_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
                Py_DECREF(tmp_sub_expr_left_2);
                Py_DECREF(tmp_sub_expr_right_2);
                if (tmp_list_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 65;
                    type_description_1 = "ooooooooo";
                    goto list_build_exception_3;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_3);
            }
            goto list_build_noexception_2;
            // Exception handling pass through code for list_build:
            list_build_exception_3:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_2:;
            PyList_SET_ITEM(tmp_args_element_value_5, 1, tmp_list_element_1);
            CHECK_OBJECT(var_t);
            tmp_mult_expr_left_19 = var_t;
            CHECK_OBJECT(var_vz);
            tmp_mult_expr_right_19 = var_vz;
            tmp_mult_expr_left_18 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_19, tmp_mult_expr_right_19);
            if (tmp_mult_expr_left_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "ooooooooo";
                goto list_build_exception_2;
            }
            CHECK_OBJECT(var_vx);
            tmp_mult_expr_right_18 = var_vx;
            tmp_sub_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_18, tmp_mult_expr_right_18);
            Py_DECREF(tmp_mult_expr_left_18);
            if (tmp_sub_expr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "ooooooooo";
                goto list_build_exception_2;
            }
            CHECK_OBJECT(var_vy);
            tmp_mult_expr_left_20 = var_vy;
            CHECK_OBJECT(var_s);
            tmp_mult_expr_right_20 = var_s;
            tmp_sub_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_20, tmp_mult_expr_right_20);
            if (tmp_sub_expr_right_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_sub_expr_left_3);

                exception_lineno = 66;
                type_description_1 = "ooooooooo";
                goto list_build_exception_2;
            }
            tmp_list_element_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
            Py_DECREF(tmp_sub_expr_left_3);
            Py_DECREF(tmp_sub_expr_right_3);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "ooooooooo";
                goto list_build_exception_2;
            }
            tmp_list_element_1 = MAKE_LIST_EMPTY(3);
            {
                PyObject *tmp_add_expr_left_5;
                PyObject *tmp_add_expr_right_5;
                PyObject *tmp_mult_expr_left_21;
                PyObject *tmp_mult_expr_right_21;
                PyObject *tmp_mult_expr_left_22;
                PyObject *tmp_mult_expr_right_22;
                PyObject *tmp_mult_expr_left_23;
                PyObject *tmp_mult_expr_right_23;
                PyObject *tmp_add_expr_left_6;
                PyObject *tmp_add_expr_right_6;
                PyObject *tmp_mult_expr_left_24;
                PyObject *tmp_mult_expr_right_24;
                PyObject *tmp_mult_expr_left_25;
                PyObject *tmp_mult_expr_right_25;
                PyList_SET_ITEM(tmp_list_element_1, 0, tmp_list_element_4);
                CHECK_OBJECT(var_t);
                tmp_mult_expr_left_22 = var_t;
                CHECK_OBJECT(var_vz);
                tmp_mult_expr_right_22 = var_vz;
                tmp_mult_expr_left_21 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_22, tmp_mult_expr_right_22);
                if (tmp_mult_expr_left_21 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
                    type_description_1 = "ooooooooo";
                    goto list_build_exception_4;
                }
                CHECK_OBJECT(var_vy);
                tmp_mult_expr_right_21 = var_vy;
                tmp_add_expr_left_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_21, tmp_mult_expr_right_21);
                Py_DECREF(tmp_mult_expr_left_21);
                if (tmp_add_expr_left_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
                    type_description_1 = "ooooooooo";
                    goto list_build_exception_4;
                }
                CHECK_OBJECT(var_vx);
                tmp_mult_expr_left_23 = var_vx;
                CHECK_OBJECT(var_s);
                tmp_mult_expr_right_23 = var_s;
                tmp_add_expr_right_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_23, tmp_mult_expr_right_23);
                if (tmp_add_expr_right_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_add_expr_left_5);

                    exception_lineno = 66;
                    type_description_1 = "ooooooooo";
                    goto list_build_exception_4;
                }
                tmp_list_element_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
                Py_DECREF(tmp_add_expr_left_5);
                Py_DECREF(tmp_add_expr_right_5);
                if (tmp_list_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
                    type_description_1 = "ooooooooo";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_4);
                CHECK_OBJECT(var_t);
                tmp_mult_expr_left_25 = var_t;
                CHECK_OBJECT(var_vz);
                tmp_mult_expr_right_25 = var_vz;
                tmp_mult_expr_left_24 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_25, tmp_mult_expr_right_25);
                if (tmp_mult_expr_left_24 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
                    type_description_1 = "ooooooooo";
                    goto list_build_exception_4;
                }
                CHECK_OBJECT(var_vz);
                tmp_mult_expr_right_24 = var_vz;
                tmp_add_expr_left_6 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_24, tmp_mult_expr_right_24);
                Py_DECREF(tmp_mult_expr_left_24);
                if (tmp_add_expr_left_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
                    type_description_1 = "ooooooooo";
                    goto list_build_exception_4;
                }
                CHECK_OBJECT(var_c);
                tmp_add_expr_right_6 = var_c;
                tmp_list_element_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
                Py_DECREF(tmp_add_expr_left_6);
                if (tmp_list_element_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 66;
                    type_description_1 = "ooooooooo";
                    goto list_build_exception_4;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_4);
            }
            goto list_build_noexception_3;
            // Exception handling pass through code for list_build:
            list_build_exception_4:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_2;
            // Finished with no exception for list_build:
            list_build_noexception_3:;
            PyList_SET_ITEM(tmp_args_element_value_5, 2, tmp_list_element_1);
        }
        goto list_build_noexception_4;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_5);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_4:;
        frame_6e976a6d822783f25e3c50ccf0aa8dee->m_frame.f_lineno = 63;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_R == NULL);
        var_R = tmp_assign_source_11;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6e976a6d822783f25e3c50ccf0aa8dee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e976a6d822783f25e3c50ccf0aa8dee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e976a6d822783f25e3c50ccf0aa8dee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e976a6d822783f25e3c50ccf0aa8dee,
        type_description_1,
        par_v,
        par_angle,
        var_vx,
        var_vy,
        var_vz,
        var_s,
        var_c,
        var_t,
        var_R
    );


    // Release cached frame if used for exception.
    if (frame_6e976a6d822783f25e3c50ccf0aa8dee == cache_frame_6e976a6d822783f25e3c50ccf0aa8dee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6e976a6d822783f25e3c50ccf0aa8dee);
        cache_frame_6e976a6d822783f25e3c50ccf0aa8dee = NULL;
    }

    assertFrameObject(frame_6e976a6d822783f25e3c50ccf0aa8dee);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_R);
    tmp_return_value = var_R;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_vx);
    Py_DECREF(var_vx);
    var_vx = NULL;
    CHECK_OBJECT(var_vy);
    Py_DECREF(var_vy);
    var_vy = NULL;
    CHECK_OBJECT(var_vz);
    Py_DECREF(var_vz);
    var_vz = NULL;
    CHECK_OBJECT(var_s);
    Py_DECREF(var_s);
    var_s = NULL;
    CHECK_OBJECT(var_c);
    Py_DECREF(var_c);
    var_c = NULL;
    CHECK_OBJECT(var_t);
    Py_DECREF(var_t);
    var_t = NULL;
    CHECK_OBJECT(var_R);
    Py_DECREF(var_R);
    var_R = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_vx);
    var_vx = NULL;
    Py_XDECREF(var_vy);
    var_vy = NULL;
    Py_XDECREF(var_vz);
    var_vz = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_t);
    var_t = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    CHECK_OBJECT(par_angle);
    Py_DECREF(par_angle);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    CHECK_OBJECT(par_angle);
    Py_DECREF(par_angle);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$mplot3d$proj3d$$$function__4__view_axes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_E = python_pars[0];
    PyObject *par_R = python_pars[1];
    PyObject *par_V = python_pars[2];
    PyObject *par_roll = python_pars[3];
    PyObject *var_w = NULL;
    PyObject *var_u = NULL;
    PyObject *var_v = NULL;
    PyObject *var_Rroll = NULL;
    struct Nuitka_FrameObject *frame_033523cb9b1e35db77ea1080628269e6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_033523cb9b1e35db77ea1080628269e6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_033523cb9b1e35db77ea1080628269e6)) {
        Py_XDECREF(cache_frame_033523cb9b1e35db77ea1080628269e6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_033523cb9b1e35db77ea1080628269e6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_033523cb9b1e35db77ea1080628269e6 = MAKE_FUNCTION_FRAME(codeobj_033523cb9b1e35db77ea1080628269e6, module_mpl_toolkits$mplot3d$proj3d, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_033523cb9b1e35db77ea1080628269e6->m_type_description == NULL);
    frame_033523cb9b1e35db77ea1080628269e6 = cache_frame_033523cb9b1e35db77ea1080628269e6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_033523cb9b1e35db77ea1080628269e6);
    assert(Py_REFCNT(frame_033523cb9b1e35db77ea1080628269e6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(par_E);
        tmp_sub_expr_left_1 = par_E;
        CHECK_OBJECT(par_R);
        tmp_sub_expr_right_1 = par_R;
        tmp_assign_source_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_w == NULL);
        var_w = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_w);
        tmp_truediv_expr_left_1 = var_w;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_w);
        tmp_args_element_value_1 = var_w;
        frame_033523cb9b1e35db77ea1080628269e6->m_frame.f_lineno = 96;
        tmp_truediv_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[19], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_w;
            assert(old != NULL);
            var_w = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_V);
        tmp_args_element_value_2 = par_V;
        CHECK_OBJECT(var_w);
        tmp_args_element_value_3 = var_w;
        frame_033523cb9b1e35db77ea1080628269e6->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[23],
                call_args
            );
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_u == NULL);
        var_u = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_u);
        tmp_truediv_expr_left_2 = var_u;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_u);
        tmp_args_element_value_4 = var_u;
        frame_033523cb9b1e35db77ea1080628269e6->m_frame.f_lineno = 98;
        tmp_truediv_expr_right_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[19], tmp_args_element_value_4);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_u;
            assert(old != NULL);
            var_u = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_w);
        tmp_args_element_value_5 = var_w;
        CHECK_OBJECT(var_u);
        tmp_args_element_value_6 = var_u;
        frame_033523cb9b1e35db77ea1080628269e6->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[23],
                call_args
            );
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_v == NULL);
        var_v = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_roll);
        tmp_cmp_expr_left_1 = par_roll;
        tmp_cmp_expr_right_1 = mod_consts[7];
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_operand_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_w);
        tmp_args_element_value_7 = var_w;
        CHECK_OBJECT(par_roll);
        tmp_operand_value_1 = par_roll;
        tmp_args_element_value_8 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_033523cb9b1e35db77ea1080628269e6->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_Rroll == NULL);
        var_Rroll = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_Rroll);
        tmp_args_element_value_9 = var_Rroll;
        CHECK_OBJECT(var_u);
        tmp_args_element_value_10 = var_u;
        frame_033523cb9b1e35db77ea1080628269e6->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_7 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_5,
                mod_consts[25],
                call_args
            );
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_u;
            assert(old != NULL);
            var_u = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_Rroll);
        tmp_args_element_value_11 = var_Rroll;
        CHECK_OBJECT(var_v);
        tmp_args_element_value_12 = var_v;
        frame_033523cb9b1e35db77ea1080628269e6->m_frame.f_lineno = 106;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_8 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_6,
                mod_consts[25],
                call_args
            );
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_v;
            assert(old != NULL);
            var_v = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_tuple_element_1;
        if (var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[26]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 107;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_u;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_v);
        tmp_tuple_element_1 = var_v;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_w);
        tmp_tuple_element_1 = var_w;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_033523cb9b1e35db77ea1080628269e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_033523cb9b1e35db77ea1080628269e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_033523cb9b1e35db77ea1080628269e6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_033523cb9b1e35db77ea1080628269e6,
        type_description_1,
        par_E,
        par_R,
        par_V,
        par_roll,
        var_w,
        var_u,
        var_v,
        var_Rroll
    );


    // Release cached frame if used for exception.
    if (frame_033523cb9b1e35db77ea1080628269e6 == cache_frame_033523cb9b1e35db77ea1080628269e6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_033523cb9b1e35db77ea1080628269e6);
        cache_frame_033523cb9b1e35db77ea1080628269e6 = NULL;
    }

    assertFrameObject(frame_033523cb9b1e35db77ea1080628269e6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_w);
    Py_DECREF(var_w);
    var_w = NULL;
    Py_XDECREF(var_u);
    var_u = NULL;
    CHECK_OBJECT(var_v);
    Py_DECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_Rroll);
    var_Rroll = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_w);
    var_w = NULL;
    Py_XDECREF(var_u);
    var_u = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_Rroll);
    var_Rroll = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_E);
    Py_DECREF(par_E);
    CHECK_OBJECT(par_R);
    Py_DECREF(par_R);
    CHECK_OBJECT(par_V);
    Py_DECREF(par_V);
    CHECK_OBJECT(par_roll);
    Py_DECREF(par_roll);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_E);
    Py_DECREF(par_E);
    CHECK_OBJECT(par_R);
    Py_DECREF(par_R);
    CHECK_OBJECT(par_V);
    Py_DECREF(par_V);
    CHECK_OBJECT(par_roll);
    Py_DECREF(par_roll);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$mplot3d$proj3d$$$function__5__view_transformation_uvw(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_u = python_pars[0];
    PyObject *par_v = python_pars[1];
    PyObject *par_w = python_pars[2];
    PyObject *par_E = python_pars[3];
    PyObject *var_Mr = NULL;
    PyObject *var_Mt = NULL;
    PyObject *var_M = NULL;
    struct Nuitka_FrameObject *frame_409c79052e51eb03a333ee39b246b940;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_409c79052e51eb03a333ee39b246b940 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_409c79052e51eb03a333ee39b246b940)) {
        Py_XDECREF(cache_frame_409c79052e51eb03a333ee39b246b940);

#if _DEBUG_REFCOUNTS
        if (cache_frame_409c79052e51eb03a333ee39b246b940 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_409c79052e51eb03a333ee39b246b940 = MAKE_FUNCTION_FRAME(codeobj_409c79052e51eb03a333ee39b246b940, module_mpl_toolkits$mplot3d$proj3d, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_409c79052e51eb03a333ee39b246b940->m_type_description == NULL);
    frame_409c79052e51eb03a333ee39b246b940 = cache_frame_409c79052e51eb03a333ee39b246b940;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_409c79052e51eb03a333ee39b246b940);
    assert(Py_REFCNT(frame_409c79052e51eb03a333ee39b246b940) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_409c79052e51eb03a333ee39b246b940->m_frame.f_lineno = 125;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[28],
            PyTuple_GET_ITEM(mod_consts[29], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_Mr == NULL);
        var_Mr = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_409c79052e51eb03a333ee39b246b940->m_frame.f_lineno = 126;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[28],
            PyTuple_GET_ITEM(mod_consts[29], 0)
        );

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_Mt == NULL);
        var_Mt = tmp_assign_source_2;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_u);
        tmp_list_element_1 = par_u;
        tmp_ass_subvalue_1 = MAKE_LIST_EMPTY(3);
        PyList_SET_ITEM0(tmp_ass_subvalue_1, 0, tmp_list_element_1);
        CHECK_OBJECT(par_v);
        tmp_list_element_1 = par_v;
        PyList_SET_ITEM0(tmp_ass_subvalue_1, 1, tmp_list_element_1);
        CHECK_OBJECT(par_w);
        tmp_list_element_1 = par_w;
        PyList_SET_ITEM0(tmp_ass_subvalue_1, 2, tmp_list_element_1);
        CHECK_OBJECT(var_Mr);
        tmp_ass_subscribed_1 = var_Mr;
        tmp_ass_subscript_1 = mod_consts[30];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_E);
        tmp_operand_value_1 = par_E;
        tmp_ass_subvalue_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_Mt);
        tmp_ass_subscribed_2 = var_Mt;
        tmp_ass_subscript_2 = mod_consts[31];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_Mr);
        tmp_args_element_value_1 = var_Mr;
        CHECK_OBJECT(var_Mt);
        tmp_args_element_value_2 = var_Mt;
        frame_409c79052e51eb03a333ee39b246b940->m_frame.f_lineno = 129;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[25],
                call_args
            );
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_M == NULL);
        var_M = tmp_assign_source_3;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_409c79052e51eb03a333ee39b246b940, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_409c79052e51eb03a333ee39b246b940->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_409c79052e51eb03a333ee39b246b940, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_409c79052e51eb03a333ee39b246b940,
        type_description_1,
        par_u,
        par_v,
        par_w,
        par_E,
        var_Mr,
        var_Mt,
        var_M
    );


    // Release cached frame if used for exception.
    if (frame_409c79052e51eb03a333ee39b246b940 == cache_frame_409c79052e51eb03a333ee39b246b940) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_409c79052e51eb03a333ee39b246b940);
        cache_frame_409c79052e51eb03a333ee39b246b940 = NULL;
    }

    assertFrameObject(frame_409c79052e51eb03a333ee39b246b940);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_M);
    tmp_return_value = var_M;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_Mr);
    Py_DECREF(var_Mr);
    var_Mr = NULL;
    CHECK_OBJECT(var_Mt);
    Py_DECREF(var_Mt);
    var_Mt = NULL;
    CHECK_OBJECT(var_M);
    Py_DECREF(var_M);
    var_M = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_Mr);
    var_Mr = NULL;
    Py_XDECREF(var_Mt);
    var_Mt = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_u);
    Py_DECREF(par_u);
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    CHECK_OBJECT(par_w);
    Py_DECREF(par_w);
    CHECK_OBJECT(par_E);
    Py_DECREF(par_E);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_u);
    Py_DECREF(par_u);
    CHECK_OBJECT(par_v);
    Py_DECREF(par_v);
    CHECK_OBJECT(par_w);
    Py_DECREF(par_w);
    CHECK_OBJECT(par_E);
    Py_DECREF(par_E);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$mplot3d$proj3d$$$function__6_view_transformation(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_E = python_pars[0];
    PyObject *par_R = python_pars[1];
    PyObject *par_V = python_pars[2];
    PyObject *par_roll = python_pars[3];
    PyObject *var_u = NULL;
    PyObject *var_v = NULL;
    PyObject *var_w = NULL;
    PyObject *var_M = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_38d8ba02688ae5d58eb8258762beee96;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_38d8ba02688ae5d58eb8258762beee96 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_38d8ba02688ae5d58eb8258762beee96)) {
        Py_XDECREF(cache_frame_38d8ba02688ae5d58eb8258762beee96);

#if _DEBUG_REFCOUNTS
        if (cache_frame_38d8ba02688ae5d58eb8258762beee96 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_38d8ba02688ae5d58eb8258762beee96 = MAKE_FUNCTION_FRAME(codeobj_38d8ba02688ae5d58eb8258762beee96, module_mpl_toolkits$mplot3d$proj3d, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_38d8ba02688ae5d58eb8258762beee96->m_type_description == NULL);
    frame_38d8ba02688ae5d58eb8258762beee96 = cache_frame_38d8ba02688ae5d58eb8258762beee96;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_38d8ba02688ae5d58eb8258762beee96);
    assert(Py_REFCNT(frame_38d8ba02688ae5d58eb8258762beee96) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_E);
        tmp_args_element_value_1 = par_E;
        CHECK_OBJECT(par_R);
        tmp_args_element_value_2 = par_R;
        CHECK_OBJECT(par_V);
        tmp_args_element_value_3 = par_V;
        CHECK_OBJECT(par_roll);
        tmp_args_element_value_4 = par_roll;
        frame_38d8ba02688ae5d58eb8258762beee96->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 148;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 148;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 148;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooo";
                    exception_lineno = 148;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[14];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooo";
            exception_lineno = 148;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_u == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_u = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_v == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_v = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert(var_w == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_w = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_u);
        tmp_args_element_value_5 = var_u;
        CHECK_OBJECT(var_v);
        tmp_args_element_value_6 = var_v;
        CHECK_OBJECT(var_w);
        tmp_args_element_value_7 = var_w;
        CHECK_OBJECT(par_E);
        tmp_args_element_value_8 = par_E;
        frame_38d8ba02688ae5d58eb8258762beee96->m_frame.f_lineno = 149;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_M == NULL);
        var_M = tmp_assign_source_8;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_38d8ba02688ae5d58eb8258762beee96, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_38d8ba02688ae5d58eb8258762beee96->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_38d8ba02688ae5d58eb8258762beee96, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_38d8ba02688ae5d58eb8258762beee96,
        type_description_1,
        par_E,
        par_R,
        par_V,
        par_roll,
        var_u,
        var_v,
        var_w,
        var_M
    );


    // Release cached frame if used for exception.
    if (frame_38d8ba02688ae5d58eb8258762beee96 == cache_frame_38d8ba02688ae5d58eb8258762beee96) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_38d8ba02688ae5d58eb8258762beee96);
        cache_frame_38d8ba02688ae5d58eb8258762beee96 = NULL;
    }

    assertFrameObject(frame_38d8ba02688ae5d58eb8258762beee96);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_M);
    tmp_return_value = var_M;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_u);
    Py_DECREF(var_u);
    var_u = NULL;
    CHECK_OBJECT(var_v);
    Py_DECREF(var_v);
    var_v = NULL;
    CHECK_OBJECT(var_w);
    Py_DECREF(var_w);
    var_w = NULL;
    CHECK_OBJECT(var_M);
    Py_DECREF(var_M);
    var_M = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_u);
    var_u = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_E);
    Py_DECREF(par_E);
    CHECK_OBJECT(par_R);
    Py_DECREF(par_R);
    CHECK_OBJECT(par_V);
    Py_DECREF(par_V);
    CHECK_OBJECT(par_roll);
    Py_DECREF(par_roll);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_E);
    Py_DECREF(par_E);
    CHECK_OBJECT(par_R);
    Py_DECREF(par_R);
    CHECK_OBJECT(par_V);
    Py_DECREF(par_V);
    CHECK_OBJECT(par_roll);
    Py_DECREF(par_roll);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$mplot3d$proj3d$$$function__7_persp_transformation(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_zfront = python_pars[0];
    PyObject *par_zback = python_pars[1];
    PyObject *par_focal_length = python_pars[2];
    PyObject *var_e = NULL;
    PyObject *var_b = NULL;
    PyObject *var_c = NULL;
    PyObject *var_proj_matrix = NULL;
    struct Nuitka_FrameObject *frame_091797322df26df8c52aac24dc85fca2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_091797322df26df8c52aac24dc85fca2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_focal_length);
        tmp_assign_source_1 = par_focal_length;
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_e = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_091797322df26df8c52aac24dc85fca2)) {
        Py_XDECREF(cache_frame_091797322df26df8c52aac24dc85fca2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_091797322df26df8c52aac24dc85fca2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_091797322df26df8c52aac24dc85fca2 = MAKE_FUNCTION_FRAME(codeobj_091797322df26df8c52aac24dc85fca2, module_mpl_toolkits$mplot3d$proj3d, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_091797322df26df8c52aac24dc85fca2->m_type_description == NULL);
    frame_091797322df26df8c52aac24dc85fca2 = cache_frame_091797322df26df8c52aac24dc85fca2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_091797322df26df8c52aac24dc85fca2);
    assert(Py_REFCNT(frame_091797322df26df8c52aac24dc85fca2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(par_zfront);
        tmp_add_expr_left_1 = par_zfront;
        CHECK_OBJECT(par_zback);
        tmp_add_expr_right_1 = par_zback;
        tmp_truediv_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_zfront);
        tmp_sub_expr_left_1 = par_zfront;
        CHECK_OBJECT(par_zback);
        tmp_sub_expr_right_1 = par_zback;
        tmp_truediv_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 156;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        assert(var_b == NULL);
        var_b = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        tmp_mult_expr_left_1 = mod_consts[36];
        CHECK_OBJECT(par_zfront);
        tmp_mult_expr_left_2 = par_zfront;
        CHECK_OBJECT(par_zback);
        tmp_mult_expr_right_2 = par_zback;
        tmp_mult_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_zfront);
        tmp_sub_expr_left_2 = par_zfront;
        CHECK_OBJECT(par_zback);
        tmp_sub_expr_right_2 = par_zback;
        tmp_truediv_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_2);

            exception_lineno = 157;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        assert(var_c == NULL);
        var_c = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_list_element_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_e);
        tmp_list_element_2 = var_e;
        tmp_list_element_1 = MAKE_LIST_EMPTY(4);
        PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_2);
        tmp_list_element_2 = mod_consts[7];
        PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_2);
        tmp_list_element_2 = mod_consts[7];
        PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_2);
        tmp_list_element_2 = mod_consts[7];
        PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_2);
        tmp_args_element_value_1 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_list_element_3;
            PyObject *tmp_list_element_4;
            PyList_SET_ITEM(tmp_args_element_value_1, 0, tmp_list_element_1);
            tmp_list_element_3 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_truediv_expr_left_3;
                PyObject *tmp_truediv_expr_right_3;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_3);
                CHECK_OBJECT(var_e);
                tmp_truediv_expr_left_3 = var_e;
                tmp_truediv_expr_right_3 = mod_consts[3];
                tmp_list_element_3 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
                if (tmp_list_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 155;
                    type_description_1 = "ooooNooo";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_list_element_1, 1, tmp_list_element_3);
                tmp_list_element_3 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_3);
                tmp_list_element_3 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_3);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            PyList_SET_ITEM(tmp_args_element_value_1, 1, tmp_list_element_1);
            tmp_list_element_4 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_4);
            tmp_list_element_4 = mod_consts[7];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_4);
            CHECK_OBJECT(var_b);
            tmp_list_element_4 = var_b;
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_4);
            CHECK_OBJECT(var_c);
            tmp_list_element_4 = var_c;
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_4);
            PyList_SET_ITEM(tmp_args_element_value_1, 2, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST4(mod_consts[37]);
            PyList_SET_ITEM(tmp_args_element_value_1, 3, tmp_list_element_1);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        frame_091797322df26df8c52aac24dc85fca2->m_frame.f_lineno = 158;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "ooooNooo";
            goto frame_exception_exit_1;
        }
        assert(var_proj_matrix == NULL);
        var_proj_matrix = tmp_assign_source_4;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_091797322df26df8c52aac24dc85fca2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_091797322df26df8c52aac24dc85fca2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_091797322df26df8c52aac24dc85fca2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_091797322df26df8c52aac24dc85fca2,
        type_description_1,
        par_zfront,
        par_zback,
        par_focal_length,
        var_e,
        NULL,
        var_b,
        var_c,
        var_proj_matrix
    );


    // Release cached frame if used for exception.
    if (frame_091797322df26df8c52aac24dc85fca2 == cache_frame_091797322df26df8c52aac24dc85fca2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_091797322df26df8c52aac24dc85fca2);
        cache_frame_091797322df26df8c52aac24dc85fca2 = NULL;
    }

    assertFrameObject(frame_091797322df26df8c52aac24dc85fca2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_proj_matrix);
    tmp_return_value = var_proj_matrix;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_e);
    Py_DECREF(var_e);
    var_e = NULL;
    CHECK_OBJECT(var_b);
    Py_DECREF(var_b);
    var_b = NULL;
    CHECK_OBJECT(var_c);
    Py_DECREF(var_c);
    var_c = NULL;
    CHECK_OBJECT(var_proj_matrix);
    Py_DECREF(var_proj_matrix);
    var_proj_matrix = NULL;
    goto function_return_exit;
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

    CHECK_OBJECT(var_e);
    Py_DECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_zfront);
    Py_DECREF(par_zfront);
    CHECK_OBJECT(par_zback);
    Py_DECREF(par_zback);
    CHECK_OBJECT(par_focal_length);
    Py_DECREF(par_focal_length);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_zfront);
    Py_DECREF(par_zfront);
    CHECK_OBJECT(par_zback);
    Py_DECREF(par_zback);
    CHECK_OBJECT(par_focal_length);
    Py_DECREF(par_focal_length);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$mplot3d$proj3d$$$function__8_ortho_transformation(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_zfront = python_pars[0];
    PyObject *par_zback = python_pars[1];
    PyObject *var_a = NULL;
    PyObject *var_b = NULL;
    PyObject *var_proj_matrix = NULL;
    struct Nuitka_FrameObject *frame_372db36a0dfae977aa22dd9ac14a776a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_372db36a0dfae977aa22dd9ac14a776a = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_372db36a0dfae977aa22dd9ac14a776a)) {
        Py_XDECREF(cache_frame_372db36a0dfae977aa22dd9ac14a776a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_372db36a0dfae977aa22dd9ac14a776a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_372db36a0dfae977aa22dd9ac14a776a = MAKE_FUNCTION_FRAME(codeobj_372db36a0dfae977aa22dd9ac14a776a, module_mpl_toolkits$mplot3d$proj3d, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_372db36a0dfae977aa22dd9ac14a776a->m_type_description == NULL);
    frame_372db36a0dfae977aa22dd9ac14a776a = cache_frame_372db36a0dfae977aa22dd9ac14a776a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_372db36a0dfae977aa22dd9ac14a776a);
    assert(Py_REFCNT(frame_372db36a0dfae977aa22dd9ac14a776a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_zfront);
        tmp_add_expr_left_1 = par_zfront;
        CHECK_OBJECT(par_zback);
        tmp_add_expr_right_1 = par_zback;
        tmp_operand_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_a == NULL);
        var_a = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(par_zfront);
        tmp_sub_expr_left_1 = par_zfront;
        CHECK_OBJECT(par_zback);
        tmp_sub_expr_right_1 = par_zback;
        tmp_operand_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_b == NULL);
        var_b = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_element_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = MAKE_LIST4(mod_consts[38]);
        tmp_args_element_value_1 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_list_element_2;
            PyList_SET_ITEM(tmp_args_element_value_1, 0, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST4(mod_consts[39]);
            PyList_SET_ITEM(tmp_args_element_value_1, 1, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST4(mod_consts[40]);
            PyList_SET_ITEM(tmp_args_element_value_1, 2, tmp_list_element_1);
            tmp_list_element_2 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_2);
            tmp_list_element_2 = mod_consts[7];
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_2);
            CHECK_OBJECT(var_a);
            tmp_list_element_2 = var_a;
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_2);
            CHECK_OBJECT(var_b);
            tmp_list_element_2 = var_b;
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_2);
            PyList_SET_ITEM(tmp_args_element_value_1, 3, tmp_list_element_1);
        }
        frame_372db36a0dfae977aa22dd9ac14a776a->m_frame.f_lineno = 169;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[15], tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_proj_matrix == NULL);
        var_proj_matrix = tmp_assign_source_3;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_372db36a0dfae977aa22dd9ac14a776a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_372db36a0dfae977aa22dd9ac14a776a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_372db36a0dfae977aa22dd9ac14a776a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_372db36a0dfae977aa22dd9ac14a776a,
        type_description_1,
        par_zfront,
        par_zback,
        var_a,
        var_b,
        var_proj_matrix
    );


    // Release cached frame if used for exception.
    if (frame_372db36a0dfae977aa22dd9ac14a776a == cache_frame_372db36a0dfae977aa22dd9ac14a776a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_372db36a0dfae977aa22dd9ac14a776a);
        cache_frame_372db36a0dfae977aa22dd9ac14a776a = NULL;
    }

    assertFrameObject(frame_372db36a0dfae977aa22dd9ac14a776a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_proj_matrix);
    tmp_return_value = var_proj_matrix;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_a);
    Py_DECREF(var_a);
    var_a = NULL;
    CHECK_OBJECT(var_b);
    Py_DECREF(var_b);
    var_b = NULL;
    CHECK_OBJECT(var_proj_matrix);
    Py_DECREF(var_proj_matrix);
    var_proj_matrix = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_a);
    var_a = NULL;
    Py_XDECREF(var_b);
    var_b = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_zfront);
    Py_DECREF(par_zfront);
    CHECK_OBJECT(par_zback);
    Py_DECREF(par_zback);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_zfront);
    Py_DECREF(par_zfront);
    CHECK_OBJECT(par_zback);
    Py_DECREF(par_zback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$mplot3d$proj3d$$$function__9__proj_transform_vec(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_vec = python_pars[0];
    PyObject *par_M = python_pars[1];
    PyObject *var_vecw = NULL;
    PyObject *var_w = NULL;
    PyObject *var_txs = NULL;
    PyObject *var_tys = NULL;
    PyObject *var_tzs = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_8dbcd3b748b837f939f8c80dd37237e1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_8dbcd3b748b837f939f8c80dd37237e1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8dbcd3b748b837f939f8c80dd37237e1)) {
        Py_XDECREF(cache_frame_8dbcd3b748b837f939f8c80dd37237e1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8dbcd3b748b837f939f8c80dd37237e1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8dbcd3b748b837f939f8c80dd37237e1 = MAKE_FUNCTION_FRAME(codeobj_8dbcd3b748b837f939f8c80dd37237e1, module_mpl_toolkits$mplot3d$proj3d, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8dbcd3b748b837f939f8c80dd37237e1->m_type_description == NULL);
    frame_8dbcd3b748b837f939f8c80dd37237e1 = cache_frame_8dbcd3b748b837f939f8c80dd37237e1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8dbcd3b748b837f939f8c80dd37237e1);
    assert(Py_REFCNT(frame_8dbcd3b748b837f939f8c80dd37237e1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_M);
        tmp_args_element_value_1 = par_M;
        CHECK_OBJECT(par_vec);
        tmp_args_element_value_2 = par_vec;
        frame_8dbcd3b748b837f939f8c80dd37237e1->m_frame.f_lineno = 177;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[25],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vecw == NULL);
        var_vecw = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_vecw);
        tmp_expression_value_1 = var_vecw;
        tmp_subscript_value_1 = mod_consts[41];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_w == NULL);
        var_w = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_vecw);
        tmp_expression_value_2 = var_vecw;
        tmp_subscript_value_2 = mod_consts[7];
        tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_w);
        tmp_truediv_expr_right_1 = var_w;
        tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_truediv_expr_left_3;
            PyObject *tmp_truediv_expr_right_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_vecw);
            tmp_expression_value_3 = var_vecw;
            tmp_subscript_value_3 = mod_consts[3];
            tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_3, 1);
            if (tmp_truediv_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_w);
            tmp_truediv_expr_right_2 = var_w;
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            Py_DECREF(tmp_truediv_expr_left_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_vecw);
            tmp_expression_value_4 = var_vecw;
            tmp_subscript_value_4 = mod_consts[8];
            tmp_truediv_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_4, 2);
            if (tmp_truediv_expr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_w);
            tmp_truediv_expr_right_3 = var_w;
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
            Py_DECREF(tmp_truediv_expr_left_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_3 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_3 == NULL));
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 180;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 180;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 180;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooo";
                    exception_lineno = 180;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[14];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 180;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8dbcd3b748b837f939f8c80dd37237e1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8dbcd3b748b837f939f8c80dd37237e1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8dbcd3b748b837f939f8c80dd37237e1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8dbcd3b748b837f939f8c80dd37237e1,
        type_description_1,
        par_vec,
        par_M,
        var_vecw,
        var_w,
        var_txs,
        var_tys,
        var_tzs
    );


    // Release cached frame if used for exception.
    if (frame_8dbcd3b748b837f939f8c80dd37237e1 == cache_frame_8dbcd3b748b837f939f8c80dd37237e1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8dbcd3b748b837f939f8c80dd37237e1);
        cache_frame_8dbcd3b748b837f939f8c80dd37237e1 = NULL;
    }

    assertFrameObject(frame_8dbcd3b748b837f939f8c80dd37237e1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert(var_txs == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_txs = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert(var_tys == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_tys = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
        assert(var_tzs == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_tzs = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_txs);
        tmp_tuple_element_2 = var_txs;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_tys);
        tmp_tuple_element_2 = var_tys;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_tzs);
        tmp_tuple_element_2 = var_tzs;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_vecw);
    Py_DECREF(var_vecw);
    var_vecw = NULL;
    CHECK_OBJECT(var_w);
    Py_DECREF(var_w);
    var_w = NULL;
    CHECK_OBJECT(var_txs);
    Py_DECREF(var_txs);
    var_txs = NULL;
    CHECK_OBJECT(var_tys);
    Py_DECREF(var_tys);
    var_tys = NULL;
    CHECK_OBJECT(var_tzs);
    Py_DECREF(var_tzs);
    var_tzs = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_vecw);
    var_vecw = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_vec);
    Py_DECREF(par_vec);
    CHECK_OBJECT(par_M);
    Py_DECREF(par_M);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_vec);
    Py_DECREF(par_vec);
    CHECK_OBJECT(par_M);
    Py_DECREF(par_M);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$mplot3d$proj3d$$$function__10__proj_transform_vec_clip(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_vec = python_pars[0];
    PyObject *par_M = python_pars[1];
    PyObject *var_vecw = NULL;
    PyObject *var_w = NULL;
    PyObject *var_txs = NULL;
    PyObject *var_tys = NULL;
    PyObject *var_tzs = NULL;
    PyObject *var_tis = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b3b994b474309e9c9fbb226d1ad4b926;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b3b994b474309e9c9fbb226d1ad4b926 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b3b994b474309e9c9fbb226d1ad4b926)) {
        Py_XDECREF(cache_frame_b3b994b474309e9c9fbb226d1ad4b926);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b3b994b474309e9c9fbb226d1ad4b926 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b3b994b474309e9c9fbb226d1ad4b926 = MAKE_FUNCTION_FRAME(codeobj_b3b994b474309e9c9fbb226d1ad4b926, module_mpl_toolkits$mplot3d$proj3d, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b3b994b474309e9c9fbb226d1ad4b926->m_type_description == NULL);
    frame_b3b994b474309e9c9fbb226d1ad4b926 = cache_frame_b3b994b474309e9c9fbb226d1ad4b926;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b3b994b474309e9c9fbb226d1ad4b926);
    assert(Py_REFCNT(frame_b3b994b474309e9c9fbb226d1ad4b926) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_M);
        tmp_args_element_value_1 = par_M;
        CHECK_OBJECT(par_vec);
        tmp_args_element_value_2 = par_vec;
        frame_b3b994b474309e9c9fbb226d1ad4b926->m_frame.f_lineno = 185;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[25],
                call_args
            );
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vecw == NULL);
        var_vecw = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_vecw);
        tmp_expression_value_1 = var_vecw;
        tmp_subscript_value_1 = mod_consts[41];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_w == NULL);
        var_w = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_vecw);
        tmp_expression_value_2 = var_vecw;
        tmp_subscript_value_2 = mod_consts[7];
        tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_w);
        tmp_truediv_expr_right_1 = var_w;
        tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_truediv_expr_left_3;
            PyObject *tmp_truediv_expr_right_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_vecw);
            tmp_expression_value_3 = var_vecw;
            tmp_subscript_value_3 = mod_consts[3];
            tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_3, 1);
            if (tmp_truediv_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_w);
            tmp_truediv_expr_right_2 = var_w;
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            Py_DECREF(tmp_truediv_expr_left_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_vecw);
            tmp_expression_value_4 = var_vecw;
            tmp_subscript_value_4 = mod_consts[8];
            tmp_truediv_expr_left_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_4, 2);
            if (tmp_truediv_expr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_w);
            tmp_truediv_expr_right_3 = var_w;
            tmp_tuple_element_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
            Py_DECREF(tmp_truediv_expr_left_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_3 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_3 == NULL));
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 188;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 188;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 188;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooo";
                    exception_lineno = 188;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[14];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooo";
            exception_lineno = 188;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert(var_txs == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_txs = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert(var_tys == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_tys = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_3;
        assert(var_tzs == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_tzs = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        PyObject *tmp_bitand_expr_left_3;
        PyObject *tmp_bitand_expr_right_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_8;
        tmp_cmp_expr_left_1 = mod_consts[7];
        CHECK_OBJECT(var_vecw);
        tmp_expression_value_5 = var_vecw;
        tmp_subscript_value_5 = mod_consts[7];
        tmp_cmp_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_5, 0);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_left_3 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_bitand_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vecw);
        tmp_expression_value_6 = var_vecw;
        tmp_subscript_value_6 = mod_consts[7];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_6, 0);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitand_expr_left_3);

            exception_lineno = 189;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[3];
        tmp_bitand_expr_right_3 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_bitand_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitand_expr_left_3);

            exception_lineno = 189;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_left_2 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_3, tmp_bitand_expr_right_3);
        Py_DECREF(tmp_bitand_expr_left_3);
        Py_DECREF(tmp_bitand_expr_right_3);
        if (tmp_bitand_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_3 = mod_consts[7];
        CHECK_OBJECT(var_vecw);
        tmp_expression_value_7 = var_vecw;
        tmp_subscript_value_7 = mod_consts[3];
        tmp_cmp_expr_right_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_7, 1);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitand_expr_left_2);

            exception_lineno = 189;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_2 = RICH_COMPARE_LE_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_bitand_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitand_expr_left_2);

            exception_lineno = 189;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_left_1 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        Py_DECREF(tmp_bitand_expr_left_2);
        Py_DECREF(tmp_bitand_expr_right_2);
        if (tmp_bitand_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vecw);
        tmp_expression_value_8 = var_vecw;
        tmp_subscript_value_8 = mod_consts[3];
        tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_8, 1);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitand_expr_left_1);

            exception_lineno = 189;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[3];
        tmp_bitand_expr_right_1 = RICH_COMPARE_LE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_bitand_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitand_expr_left_1);

            exception_lineno = 189;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_left_1);
        Py_DECREF(tmp_bitand_expr_right_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_tis == NULL);
        var_tis = tmp_assign_source_10;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        int tmp_truth_name_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tis);
        tmp_args_element_value_3 = var_tis;
        frame_b3b994b474309e9c9fbb226d1ad4b926->m_frame.f_lineno = 190;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[42], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 190;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_9;
        CHECK_OBJECT(var_vecw);
        tmp_expression_value_9 = var_vecw;
        tmp_subscript_value_9 = mod_consts[3];
        tmp_cmp_expr_left_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_9, 1);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = mod_consts[3];
        tmp_assign_source_11 = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_tis;
            assert(old != NULL);
            var_tis = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_txs);
        tmp_tuple_element_2 = var_txs;
        tmp_return_value = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_tys);
        tmp_tuple_element_2 = var_tys;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_tzs);
        tmp_tuple_element_2 = var_tzs;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
        if (var_tis == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "oooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_2 = var_tis;
        PyTuple_SET_ITEM0(tmp_return_value, 3, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b3b994b474309e9c9fbb226d1ad4b926, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b3b994b474309e9c9fbb226d1ad4b926->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b3b994b474309e9c9fbb226d1ad4b926, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b3b994b474309e9c9fbb226d1ad4b926,
        type_description_1,
        par_vec,
        par_M,
        var_vecw,
        var_w,
        var_txs,
        var_tys,
        var_tzs,
        var_tis
    );


    // Release cached frame if used for exception.
    if (frame_b3b994b474309e9c9fbb226d1ad4b926 == cache_frame_b3b994b474309e9c9fbb226d1ad4b926) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b3b994b474309e9c9fbb226d1ad4b926);
        cache_frame_b3b994b474309e9c9fbb226d1ad4b926 = NULL;
    }

    assertFrameObject(frame_b3b994b474309e9c9fbb226d1ad4b926);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_vecw);
    Py_DECREF(var_vecw);
    var_vecw = NULL;
    CHECK_OBJECT(var_w);
    Py_DECREF(var_w);
    var_w = NULL;
    CHECK_OBJECT(var_txs);
    Py_DECREF(var_txs);
    var_txs = NULL;
    CHECK_OBJECT(var_tys);
    Py_DECREF(var_tys);
    var_tys = NULL;
    CHECK_OBJECT(var_tzs);
    Py_DECREF(var_tzs);
    var_tzs = NULL;
    Py_XDECREF(var_tis);
    var_tis = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_vecw);
    var_vecw = NULL;
    Py_XDECREF(var_w);
    var_w = NULL;
    Py_XDECREF(var_txs);
    var_txs = NULL;
    Py_XDECREF(var_tys);
    var_tys = NULL;
    Py_XDECREF(var_tzs);
    var_tzs = NULL;
    Py_XDECREF(var_tis);
    var_tis = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_vec);
    Py_DECREF(par_vec);
    CHECK_OBJECT(par_M);
    Py_DECREF(par_M);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_vec);
    Py_DECREF(par_vec);
    CHECK_OBJECT(par_M);
    Py_DECREF(par_M);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$mplot3d$proj3d$$$function__11_inv_transform(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_xs = python_pars[0];
    PyObject *par_ys = python_pars[1];
    PyObject *par_zs = python_pars[2];
    PyObject *par_M = python_pars[3];
    PyObject *var_iM = NULL;
    PyObject *var_vec = NULL;
    PyObject *var_vecr = NULL;
    struct Nuitka_FrameObject *frame_cbfd1341278cedcb8ada4450500ba61a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cbfd1341278cedcb8ada4450500ba61a = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_cbfd1341278cedcb8ada4450500ba61a)) {
        Py_XDECREF(cache_frame_cbfd1341278cedcb8ada4450500ba61a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cbfd1341278cedcb8ada4450500ba61a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cbfd1341278cedcb8ada4450500ba61a = MAKE_FUNCTION_FRAME(codeobj_cbfd1341278cedcb8ada4450500ba61a, module_mpl_toolkits$mplot3d$proj3d, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cbfd1341278cedcb8ada4450500ba61a->m_type_description == NULL);
    frame_cbfd1341278cedcb8ada4450500ba61a = cache_frame_cbfd1341278cedcb8ada4450500ba61a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cbfd1341278cedcb8ada4450500ba61a);
    assert(Py_REFCNT(frame_cbfd1341278cedcb8ada4450500ba61a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_M);
        tmp_args_element_value_1 = par_M;
        frame_cbfd1341278cedcb8ada4450500ba61a->m_frame.f_lineno = 199;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[44], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_iM == NULL);
        var_iM = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xs);
        tmp_args_element_value_2 = par_xs;
        CHECK_OBJECT(par_ys);
        tmp_args_element_value_3 = par_ys;
        CHECK_OBJECT(par_zs);
        tmp_args_element_value_4 = par_zs;
        frame_cbfd1341278cedcb8ada4450500ba61a->m_frame.f_lineno = 200;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vec == NULL);
        var_vec = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_iM);
        tmp_args_element_value_5 = var_iM;
        CHECK_OBJECT(var_vec);
        tmp_args_element_value_6 = var_vec;
        frame_cbfd1341278cedcb8ada4450500ba61a->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[25],
                call_args
            );
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vecr == NULL);
        var_vecr = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_vecr);
        tmp_truediv_expr_left_1 = var_vecr;
        CHECK_OBJECT(var_vecr);
        tmp_expression_value_1 = var_vecr;
        tmp_subscript_value_1 = mod_consts[41];
        tmp_truediv_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 3);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_vecr;
            assert(old != NULL);
            var_vecr = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_cbfd1341278cedcb8ada4450500ba61a, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_cbfd1341278cedcb8ada4450500ba61a, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_OverflowError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 202;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cbfd1341278cedcb8ada4450500ba61a->m_frame) frame_cbfd1341278cedcb8ada4450500ba61a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_3;
    branch_no_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
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
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_vecr);
        tmp_expression_value_2 = var_vecr;
        tmp_subscript_value_2 = mod_consts[7];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 0);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_vecr);
            tmp_expression_value_3 = var_vecr;
            tmp_subscript_value_3 = mod_consts[3];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_3, 1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_vecr);
            tmp_expression_value_4 = var_vecr;
            tmp_subscript_value_4 = mod_consts[8];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_4, 2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_return_value, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cbfd1341278cedcb8ada4450500ba61a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cbfd1341278cedcb8ada4450500ba61a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cbfd1341278cedcb8ada4450500ba61a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cbfd1341278cedcb8ada4450500ba61a,
        type_description_1,
        par_xs,
        par_ys,
        par_zs,
        par_M,
        var_iM,
        var_vec,
        var_vecr
    );


    // Release cached frame if used for exception.
    if (frame_cbfd1341278cedcb8ada4450500ba61a == cache_frame_cbfd1341278cedcb8ada4450500ba61a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cbfd1341278cedcb8ada4450500ba61a);
        cache_frame_cbfd1341278cedcb8ada4450500ba61a = NULL;
    }

    assertFrameObject(frame_cbfd1341278cedcb8ada4450500ba61a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_iM);
    Py_DECREF(var_iM);
    var_iM = NULL;
    CHECK_OBJECT(var_vec);
    Py_DECREF(var_vec);
    var_vec = NULL;
    CHECK_OBJECT(var_vecr);
    Py_DECREF(var_vecr);
    var_vecr = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_iM);
    var_iM = NULL;
    Py_XDECREF(var_vec);
    var_vec = NULL;
    Py_XDECREF(var_vecr);
    var_vecr = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_xs);
    Py_DECREF(par_xs);
    CHECK_OBJECT(par_ys);
    Py_DECREF(par_ys);
    CHECK_OBJECT(par_zs);
    Py_DECREF(par_zs);
    CHECK_OBJECT(par_M);
    Py_DECREF(par_M);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_xs);
    Py_DECREF(par_xs);
    CHECK_OBJECT(par_ys);
    Py_DECREF(par_ys);
    CHECK_OBJECT(par_zs);
    Py_DECREF(par_zs);
    CHECK_OBJECT(par_M);
    Py_DECREF(par_M);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$mplot3d$proj3d$$$function__12__vec_pad_ones(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_xs = python_pars[0];
    PyObject *par_ys = python_pars[1];
    PyObject *par_zs = python_pars[2];
    struct Nuitka_FrameObject *frame_119b589da0eb456ba6614350828f8b6c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_119b589da0eb456ba6614350828f8b6c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_119b589da0eb456ba6614350828f8b6c)) {
        Py_XDECREF(cache_frame_119b589da0eb456ba6614350828f8b6c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_119b589da0eb456ba6614350828f8b6c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_119b589da0eb456ba6614350828f8b6c = MAKE_FUNCTION_FRAME(codeobj_119b589da0eb456ba6614350828f8b6c, module_mpl_toolkits$mplot3d$proj3d, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_119b589da0eb456ba6614350828f8b6c->m_type_description == NULL);
    frame_119b589da0eb456ba6614350828f8b6c = cache_frame_119b589da0eb456ba6614350828f8b6c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_119b589da0eb456ba6614350828f8b6c);
    assert(Py_REFCNT(frame_119b589da0eb456ba6614350828f8b6c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_element_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xs);
        tmp_list_element_1 = par_xs;
        tmp_args_element_value_1 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_2;
            PyList_SET_ITEM0(tmp_args_element_value_1, 0, tmp_list_element_1);
            CHECK_OBJECT(par_ys);
            tmp_list_element_1 = par_ys;
            PyList_SET_ITEM0(tmp_args_element_value_1, 1, tmp_list_element_1);
            CHECK_OBJECT(par_zs);
            tmp_list_element_1 = par_zs;
            PyList_SET_ITEM0(tmp_args_element_value_1, 2, tmp_list_element_1);
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_1 = "ooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(par_xs);
            tmp_args_element_value_2 = par_xs;
            frame_119b589da0eb456ba6614350828f8b6c->m_frame.f_lineno = 210;
            tmp_list_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[47], tmp_args_element_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_1 = "ooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_args_element_value_1, 3, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        frame_119b589da0eb456ba6614350828f8b6c->m_frame.f_lineno = 210;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_119b589da0eb456ba6614350828f8b6c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_119b589da0eb456ba6614350828f8b6c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_119b589da0eb456ba6614350828f8b6c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_119b589da0eb456ba6614350828f8b6c,
        type_description_1,
        par_xs,
        par_ys,
        par_zs
    );


    // Release cached frame if used for exception.
    if (frame_119b589da0eb456ba6614350828f8b6c == cache_frame_119b589da0eb456ba6614350828f8b6c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_119b589da0eb456ba6614350828f8b6c);
        cache_frame_119b589da0eb456ba6614350828f8b6c = NULL;
    }

    assertFrameObject(frame_119b589da0eb456ba6614350828f8b6c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_xs);
    Py_DECREF(par_xs);
    CHECK_OBJECT(par_ys);
    Py_DECREF(par_ys);
    CHECK_OBJECT(par_zs);
    Py_DECREF(par_zs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_xs);
    Py_DECREF(par_xs);
    CHECK_OBJECT(par_ys);
    Py_DECREF(par_ys);
    CHECK_OBJECT(par_zs);
    Py_DECREF(par_zs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$mplot3d$proj3d$$$function__13_proj_transform(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_xs = python_pars[0];
    PyObject *par_ys = python_pars[1];
    PyObject *par_zs = python_pars[2];
    PyObject *par_M = python_pars[3];
    PyObject *var_vec = NULL;
    struct Nuitka_FrameObject *frame_74d7006797de814b1a2952edc49488eb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_74d7006797de814b1a2952edc49488eb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_74d7006797de814b1a2952edc49488eb)) {
        Py_XDECREF(cache_frame_74d7006797de814b1a2952edc49488eb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_74d7006797de814b1a2952edc49488eb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_74d7006797de814b1a2952edc49488eb = MAKE_FUNCTION_FRAME(codeobj_74d7006797de814b1a2952edc49488eb, module_mpl_toolkits$mplot3d$proj3d, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_74d7006797de814b1a2952edc49488eb->m_type_description == NULL);
    frame_74d7006797de814b1a2952edc49488eb = cache_frame_74d7006797de814b1a2952edc49488eb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_74d7006797de814b1a2952edc49488eb);
    assert(Py_REFCNT(frame_74d7006797de814b1a2952edc49488eb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xs);
        tmp_args_element_value_1 = par_xs;
        CHECK_OBJECT(par_ys);
        tmp_args_element_value_2 = par_ys;
        CHECK_OBJECT(par_zs);
        tmp_args_element_value_3 = par_zs;
        frame_74d7006797de814b1a2952edc49488eb->m_frame.f_lineno = 217;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vec == NULL);
        var_vec = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vec);
        tmp_args_element_value_4 = var_vec;
        CHECK_OBJECT(par_M);
        tmp_args_element_value_5 = par_M;
        frame_74d7006797de814b1a2952edc49488eb->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_74d7006797de814b1a2952edc49488eb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_74d7006797de814b1a2952edc49488eb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_74d7006797de814b1a2952edc49488eb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_74d7006797de814b1a2952edc49488eb,
        type_description_1,
        par_xs,
        par_ys,
        par_zs,
        par_M,
        var_vec
    );


    // Release cached frame if used for exception.
    if (frame_74d7006797de814b1a2952edc49488eb == cache_frame_74d7006797de814b1a2952edc49488eb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_74d7006797de814b1a2952edc49488eb);
        cache_frame_74d7006797de814b1a2952edc49488eb = NULL;
    }

    assertFrameObject(frame_74d7006797de814b1a2952edc49488eb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_vec);
    Py_DECREF(var_vec);
    var_vec = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_vec);
    var_vec = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_xs);
    Py_DECREF(par_xs);
    CHECK_OBJECT(par_ys);
    Py_DECREF(par_ys);
    CHECK_OBJECT(par_zs);
    Py_DECREF(par_zs);
    CHECK_OBJECT(par_M);
    Py_DECREF(par_M);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_xs);
    Py_DECREF(par_xs);
    CHECK_OBJECT(par_ys);
    Py_DECREF(par_ys);
    CHECK_OBJECT(par_zs);
    Py_DECREF(par_zs);
    CHECK_OBJECT(par_M);
    Py_DECREF(par_M);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$mplot3d$proj3d$$$function__14_proj_transform_clip(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_xs = python_pars[0];
    PyObject *par_ys = python_pars[1];
    PyObject *par_zs = python_pars[2];
    PyObject *par_M = python_pars[3];
    PyObject *var_vec = NULL;
    struct Nuitka_FrameObject *frame_4ab01ceef015a3cfac19f866b2694cc6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4ab01ceef015a3cfac19f866b2694cc6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4ab01ceef015a3cfac19f866b2694cc6)) {
        Py_XDECREF(cache_frame_4ab01ceef015a3cfac19f866b2694cc6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4ab01ceef015a3cfac19f866b2694cc6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4ab01ceef015a3cfac19f866b2694cc6 = MAKE_FUNCTION_FRAME(codeobj_4ab01ceef015a3cfac19f866b2694cc6, module_mpl_toolkits$mplot3d$proj3d, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4ab01ceef015a3cfac19f866b2694cc6->m_type_description == NULL);
    frame_4ab01ceef015a3cfac19f866b2694cc6 = cache_frame_4ab01ceef015a3cfac19f866b2694cc6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4ab01ceef015a3cfac19f866b2694cc6);
    assert(Py_REFCNT(frame_4ab01ceef015a3cfac19f866b2694cc6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xs);
        tmp_args_element_value_1 = par_xs;
        CHECK_OBJECT(par_ys);
        tmp_args_element_value_2 = par_ys;
        CHECK_OBJECT(par_zs);
        tmp_args_element_value_3 = par_zs;
        frame_4ab01ceef015a3cfac19f866b2694cc6->m_frame.f_lineno = 230;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vec == NULL);
        var_vec = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_vec);
        tmp_args_element_value_4 = var_vec;
        CHECK_OBJECT(par_M);
        tmp_args_element_value_5 = par_M;
        frame_4ab01ceef015a3cfac19f866b2694cc6->m_frame.f_lineno = 231;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4ab01ceef015a3cfac19f866b2694cc6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ab01ceef015a3cfac19f866b2694cc6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ab01ceef015a3cfac19f866b2694cc6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4ab01ceef015a3cfac19f866b2694cc6,
        type_description_1,
        par_xs,
        par_ys,
        par_zs,
        par_M,
        var_vec
    );


    // Release cached frame if used for exception.
    if (frame_4ab01ceef015a3cfac19f866b2694cc6 == cache_frame_4ab01ceef015a3cfac19f866b2694cc6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4ab01ceef015a3cfac19f866b2694cc6);
        cache_frame_4ab01ceef015a3cfac19f866b2694cc6 = NULL;
    }

    assertFrameObject(frame_4ab01ceef015a3cfac19f866b2694cc6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_vec);
    Py_DECREF(var_vec);
    var_vec = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_vec);
    var_vec = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_xs);
    Py_DECREF(par_xs);
    CHECK_OBJECT(par_ys);
    Py_DECREF(par_ys);
    CHECK_OBJECT(par_zs);
    Py_DECREF(par_zs);
    CHECK_OBJECT(par_M);
    Py_DECREF(par_M);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_xs);
    Py_DECREF(par_xs);
    CHECK_OBJECT(par_ys);
    Py_DECREF(par_ys);
    CHECK_OBJECT(par_zs);
    Py_DECREF(par_zs);
    CHECK_OBJECT(par_M);
    Py_DECREF(par_M);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$mplot3d$proj3d$$$function__15_proj_points(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_points = python_pars[0];
    PyObject *par_M = python_pars[1];
    struct Nuitka_FrameObject *frame_7c82b395bdd5236baee0a0533dad204a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7c82b395bdd5236baee0a0533dad204a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7c82b395bdd5236baee0a0533dad204a)) {
        Py_XDECREF(cache_frame_7c82b395bdd5236baee0a0533dad204a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7c82b395bdd5236baee0a0533dad204a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7c82b395bdd5236baee0a0533dad204a = MAKE_FUNCTION_FRAME(codeobj_7c82b395bdd5236baee0a0533dad204a, module_mpl_toolkits$mplot3d$proj3d, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7c82b395bdd5236baee0a0533dad204a->m_type_description == NULL);
    frame_7c82b395bdd5236baee0a0533dad204a = cache_frame_7c82b395bdd5236baee0a0533dad204a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7c82b395bdd5236baee0a0533dad204a);
    assert(Py_REFCNT(frame_7c82b395bdd5236baee0a0533dad204a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[52]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_points);
        tmp_args_element_value_2 = par_points;
        CHECK_OBJECT(par_M);
        tmp_args_element_value_3 = par_M;
        frame_7c82b395bdd5236baee0a0533dad204a->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 235;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_7c82b395bdd5236baee0a0533dad204a->m_frame.f_lineno = 235;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
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
        exception_tb = MAKE_TRACEBACK(frame_7c82b395bdd5236baee0a0533dad204a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7c82b395bdd5236baee0a0533dad204a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7c82b395bdd5236baee0a0533dad204a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7c82b395bdd5236baee0a0533dad204a,
        type_description_1,
        par_points,
        par_M
    );


    // Release cached frame if used for exception.
    if (frame_7c82b395bdd5236baee0a0533dad204a == cache_frame_7c82b395bdd5236baee0a0533dad204a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7c82b395bdd5236baee0a0533dad204a);
        cache_frame_7c82b395bdd5236baee0a0533dad204a = NULL;
    }

    assertFrameObject(frame_7c82b395bdd5236baee0a0533dad204a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_points);
    Py_DECREF(par_points);
    CHECK_OBJECT(par_M);
    Py_DECREF(par_M);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_points);
    Py_DECREF(par_points);
    CHECK_OBJECT(par_M);
    Py_DECREF(par_M);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$mplot3d$proj3d$$$function__16_proj_trans_points(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_points = python_pars[0];
    PyObject *par_M = python_pars[1];
    PyObject *var_xs = NULL;
    PyObject *var_ys = NULL;
    PyObject *var_zs = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_89d73e433c3ad96348939e14bbea40e6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_89d73e433c3ad96348939e14bbea40e6 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_89d73e433c3ad96348939e14bbea40e6)) {
        Py_XDECREF(cache_frame_89d73e433c3ad96348939e14bbea40e6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_89d73e433c3ad96348939e14bbea40e6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_89d73e433c3ad96348939e14bbea40e6 = MAKE_FUNCTION_FRAME(codeobj_89d73e433c3ad96348939e14bbea40e6, module_mpl_toolkits$mplot3d$proj3d, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_89d73e433c3ad96348939e14bbea40e6->m_type_description == NULL);
    frame_89d73e433c3ad96348939e14bbea40e6 = cache_frame_89d73e433c3ad96348939e14bbea40e6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_89d73e433c3ad96348939e14bbea40e6);
    assert(Py_REFCNT(frame_89d73e433c3ad96348939e14bbea40e6) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(par_points);
        tmp_dircall_arg2_1 = par_points;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_iter_arg_1 = impl___main__$$$function__16_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 239;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 239;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 239;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 239;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[14];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 239;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_xs == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_xs = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_ys == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_ys = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert(var_zs == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_zs = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_xs);
        tmp_args_element_value_1 = var_xs;
        CHECK_OBJECT(var_ys);
        tmp_args_element_value_2 = var_ys;
        CHECK_OBJECT(var_zs);
        tmp_args_element_value_3 = var_zs;
        CHECK_OBJECT(par_M);
        tmp_args_element_value_4 = par_M;
        frame_89d73e433c3ad96348939e14bbea40e6->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_89d73e433c3ad96348939e14bbea40e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_89d73e433c3ad96348939e14bbea40e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_89d73e433c3ad96348939e14bbea40e6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_89d73e433c3ad96348939e14bbea40e6,
        type_description_1,
        par_points,
        par_M,
        var_xs,
        var_ys,
        var_zs
    );


    // Release cached frame if used for exception.
    if (frame_89d73e433c3ad96348939e14bbea40e6 == cache_frame_89d73e433c3ad96348939e14bbea40e6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_89d73e433c3ad96348939e14bbea40e6);
        cache_frame_89d73e433c3ad96348939e14bbea40e6 = NULL;
    }

    assertFrameObject(frame_89d73e433c3ad96348939e14bbea40e6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_xs);
    Py_DECREF(var_xs);
    var_xs = NULL;
    CHECK_OBJECT(var_ys);
    Py_DECREF(var_ys);
    var_ys = NULL;
    CHECK_OBJECT(var_zs);
    Py_DECREF(var_zs);
    var_zs = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_xs);
    var_xs = NULL;
    Py_XDECREF(var_ys);
    var_ys = NULL;
    Py_XDECREF(var_zs);
    var_zs = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_points);
    Py_DECREF(par_points);
    CHECK_OBJECT(par_M);
    Py_DECREF(par_M);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_points);
    Py_DECREF(par_points);
    CHECK_OBJECT(par_M);
    Py_DECREF(par_M);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_mpl_toolkits$mplot3d$proj3d$$$function__17_rot_x(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_V = python_pars[0];
    PyObject *par_alpha = python_pars[1];
    PyObject *var_cosa = NULL;
    PyObject *var_sina = NULL;
    PyObject *var_M1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_39a1c4a2f873e57a8c05d6da65a2082d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_39a1c4a2f873e57a8c05d6da65a2082d = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_39a1c4a2f873e57a8c05d6da65a2082d)) {
        Py_XDECREF(cache_frame_39a1c4a2f873e57a8c05d6da65a2082d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_39a1c4a2f873e57a8c05d6da65a2082d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_39a1c4a2f873e57a8c05d6da65a2082d = MAKE_FUNCTION_FRAME(codeobj_39a1c4a2f873e57a8c05d6da65a2082d, module_mpl_toolkits$mplot3d$proj3d, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_39a1c4a2f873e57a8c05d6da65a2082d->m_type_description == NULL);
    frame_39a1c4a2f873e57a8c05d6da65a2082d = cache_frame_39a1c4a2f873e57a8c05d6da65a2082d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_39a1c4a2f873e57a8c05d6da65a2082d);
    assert(Py_REFCNT(frame_39a1c4a2f873e57a8c05d6da65a2082d) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_alpha);
        tmp_args_element_value_1 = par_alpha;
        frame_39a1c4a2f873e57a8c05d6da65a2082d->m_frame.f_lineno = 244;
        tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[21], tmp_args_element_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_2;
            PyTuple_SET_ITEM(tmp_iter_arg_1, 0, tmp_tuple_element_1);
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(par_alpha);
            tmp_args_element_value_2 = par_alpha;
            frame_39a1c4a2f873e57a8c05d6da65a2082d->m_frame.f_lineno = 244;
            tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[20], tmp_args_element_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 244;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 244;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooo";
                    exception_lineno = 244;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[55];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 244;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_cosa == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_cosa = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_sina == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_sina = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_list_element_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = MAKE_LIST4(mod_consts[56]);
        tmp_args_element_value_3 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_list_element_2;
            PyObject *tmp_list_element_3;
            PyList_SET_ITEM(tmp_args_element_value_3, 0, tmp_list_element_1);
            tmp_list_element_2 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            {
                PyObject *tmp_operand_value_1;
                PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_2);
                CHECK_OBJECT(var_cosa);
                tmp_list_element_2 = var_cosa;
                PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_2);
                CHECK_OBJECT(var_sina);
                tmp_operand_value_1 = var_sina;
                tmp_list_element_2 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
                if (tmp_list_element_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 246;
                    type_description_1 = "ooooo";
                    goto list_build_exception_2;
                }
                PyList_SET_ITEM(tmp_list_element_1, 2, tmp_list_element_2);
                tmp_list_element_2 = mod_consts[7];
                PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_2);
            }
            goto list_build_noexception_1;
            // Exception handling pass through code for list_build:
            list_build_exception_2:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for list_build:
            list_build_noexception_1:;
            PyList_SET_ITEM(tmp_args_element_value_3, 1, tmp_list_element_1);
            tmp_list_element_3 = mod_consts[7];
            tmp_list_element_1 = MAKE_LIST_EMPTY(4);
            PyList_SET_ITEM0(tmp_list_element_1, 0, tmp_list_element_3);
            CHECK_OBJECT(var_sina);
            tmp_list_element_3 = var_sina;
            PyList_SET_ITEM0(tmp_list_element_1, 1, tmp_list_element_3);
            CHECK_OBJECT(var_cosa);
            tmp_list_element_3 = var_cosa;
            PyList_SET_ITEM0(tmp_list_element_1, 2, tmp_list_element_3);
            tmp_list_element_3 = mod_consts[7];
            PyList_SET_ITEM0(tmp_list_element_1, 3, tmp_list_element_3);
            PyList_SET_ITEM(tmp_args_element_value_3, 2, tmp_list_element_1);
            tmp_list_element_1 = MAKE_LIST4(mod_consts[16]);
            PyList_SET_ITEM(tmp_args_element_value_3, 3, tmp_list_element_1);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        frame_39a1c4a2f873e57a8c05d6da65a2082d->m_frame.f_lineno = 245;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_M1 == NULL);
        var_M1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_M1);
        tmp_args_element_value_4 = var_M1;
        CHECK_OBJECT(par_V);
        tmp_args_element_value_5 = par_V;
        frame_39a1c4a2f873e57a8c05d6da65a2082d->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[25],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_39a1c4a2f873e57a8c05d6da65a2082d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_39a1c4a2f873e57a8c05d6da65a2082d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_39a1c4a2f873e57a8c05d6da65a2082d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_39a1c4a2f873e57a8c05d6da65a2082d,
        type_description_1,
        par_V,
        par_alpha,
        var_cosa,
        var_sina,
        var_M1
    );


    // Release cached frame if used for exception.
    if (frame_39a1c4a2f873e57a8c05d6da65a2082d == cache_frame_39a1c4a2f873e57a8c05d6da65a2082d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_39a1c4a2f873e57a8c05d6da65a2082d);
        cache_frame_39a1c4a2f873e57a8c05d6da65a2082d = NULL;
    }

    assertFrameObject(frame_39a1c4a2f873e57a8c05d6da65a2082d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cosa);
    Py_DECREF(var_cosa);
    var_cosa = NULL;
    CHECK_OBJECT(var_sina);
    Py_DECREF(var_sina);
    var_sina = NULL;
    CHECK_OBJECT(var_M1);
    Py_DECREF(var_M1);
    var_M1 = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_cosa);
    var_cosa = NULL;
    Py_XDECREF(var_sina);
    var_sina = NULL;
    Py_XDECREF(var_M1);
    var_M1 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_V);
    Py_DECREF(par_V);
    CHECK_OBJECT(par_alpha);
    Py_DECREF(par_alpha);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_V);
    Py_DECREF(par_V);
    CHECK_OBJECT(par_alpha);
    Py_DECREF(par_alpha);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__10__proj_transform_vec_clip() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$mplot3d$proj3d$$$function__10__proj_transform_vec_clip,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b3b994b474309e9c9fbb226d1ad4b926,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$mplot3d$proj3d,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__11_inv_transform() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$mplot3d$proj3d$$$function__11_inv_transform,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cbfd1341278cedcb8ada4450500ba61a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$mplot3d$proj3d,
        mod_consts[46],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__12__vec_pad_ones() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$mplot3d$proj3d$$$function__12__vec_pad_ones,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_119b589da0eb456ba6614350828f8b6c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$mplot3d$proj3d,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__13_proj_transform() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$mplot3d$proj3d$$$function__13_proj_transform,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_74d7006797de814b1a2952edc49488eb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$mplot3d$proj3d,
        mod_consts[49],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__14_proj_transform_clip() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$mplot3d$proj3d$$$function__14_proj_transform_clip,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4ab01ceef015a3cfac19f866b2694cc6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$mplot3d$proj3d,
        mod_consts[51],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__15_proj_points() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$mplot3d$proj3d$$$function__15_proj_points,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7c82b395bdd5236baee0a0533dad204a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$mplot3d$proj3d,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__16_proj_trans_points() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$mplot3d$proj3d$$$function__16_proj_trans_points,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_89d73e433c3ad96348939e14bbea40e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$mplot3d$proj3d,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__17_rot_x() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$mplot3d$proj3d$$$function__17_rot_x,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_39a1c4a2f873e57a8c05d6da65a2082d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$mplot3d$proj3d,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__1__line2d_seg_dist() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$mplot3d$proj3d$$$function__1__line2d_seg_dist,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5134b4a6ec14573348c63aff34fe9d0e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$mplot3d$proj3d,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__2_world_transformation(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$mplot3d$proj3d$$$function__2_world_transformation,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1585a1103a90d1c7f46670ce56f72f87,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$mplot3d$proj3d,
        mod_consts[17],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__3_rotation_about_vector() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$mplot3d$proj3d$$$function__3_rotation_about_vector,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6e976a6d822783f25e3c50ccf0aa8dee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$mplot3d$proj3d,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__4__view_axes() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$mplot3d$proj3d$$$function__4__view_axes,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_033523cb9b1e35db77ea1080628269e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$mplot3d$proj3d,
        mod_consts[27],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__5__view_transformation_uvw() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$mplot3d$proj3d$$$function__5__view_transformation_uvw,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_409c79052e51eb03a333ee39b246b940,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$mplot3d$proj3d,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__6_view_transformation() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$mplot3d$proj3d$$$function__6_view_transformation,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_38d8ba02688ae5d58eb8258762beee96,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$mplot3d$proj3d,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__7_persp_transformation() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$mplot3d$proj3d$$$function__7_persp_transformation,
        mod_consts[71],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_091797322df26df8c52aac24dc85fca2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$mplot3d$proj3d,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__8_ortho_transformation() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$mplot3d$proj3d$$$function__8_ortho_transformation,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_372db36a0dfae977aa22dd9ac14a776a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$mplot3d$proj3d,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__9__proj_transform_vec() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_mpl_toolkits$mplot3d$proj3d$$$function__9__proj_transform_vec,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8dbcd3b748b837f939f8c80dd37237e1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_mpl_toolkits$mplot3d$proj3d,
        NULL,
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

function_impl_code functable_mpl_toolkits$mplot3d$proj3d[] = {
    impl_mpl_toolkits$mplot3d$proj3d$$$function__1__line2d_seg_dist,
    impl_mpl_toolkits$mplot3d$proj3d$$$function__2_world_transformation,
    impl_mpl_toolkits$mplot3d$proj3d$$$function__3_rotation_about_vector,
    impl_mpl_toolkits$mplot3d$proj3d$$$function__4__view_axes,
    impl_mpl_toolkits$mplot3d$proj3d$$$function__5__view_transformation_uvw,
    impl_mpl_toolkits$mplot3d$proj3d$$$function__6_view_transformation,
    impl_mpl_toolkits$mplot3d$proj3d$$$function__7_persp_transformation,
    impl_mpl_toolkits$mplot3d$proj3d$$$function__8_ortho_transformation,
    impl_mpl_toolkits$mplot3d$proj3d$$$function__9__proj_transform_vec,
    impl_mpl_toolkits$mplot3d$proj3d$$$function__10__proj_transform_vec_clip,
    impl_mpl_toolkits$mplot3d$proj3d$$$function__11_inv_transform,
    impl_mpl_toolkits$mplot3d$proj3d$$$function__12__vec_pad_ones,
    impl_mpl_toolkits$mplot3d$proj3d$$$function__13_proj_transform,
    impl_mpl_toolkits$mplot3d$proj3d$$$function__14_proj_transform_clip,
    impl_mpl_toolkits$mplot3d$proj3d$$$function__15_proj_points,
    impl_mpl_toolkits$mplot3d$proj3d$$$function__16_proj_trans_points,
    impl_mpl_toolkits$mplot3d$proj3d$$$function__17_rot_x,
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

    function_impl_code *current = functable_mpl_toolkits$mplot3d$proj3d;
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

    if (offset > sizeof(functable_mpl_toolkits$mplot3d$proj3d) || offset < 0) {
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
        functable_mpl_toolkits$mplot3d$proj3d[offset],
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
        module_mpl_toolkits$mplot3d$proj3d,
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
PyObject *modulecode_mpl_toolkits$mplot3d$proj3d(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("mpl_toolkits.mplot3d.proj3d");

    // Store the module for future use.
    module_mpl_toolkits$mplot3d$proj3d = module;

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
        PRINT_STRING("mpl_toolkits.mplot3d.proj3d: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("mpl_toolkits.mplot3d.proj3d: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("mpl_toolkits.mplot3d.proj3d: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initmpl_toolkits$mplot3d$proj3d\n");

    moduledict_mpl_toolkits$mplot3d$proj3d = MODULE_DICT(module_mpl_toolkits$mplot3d$proj3d);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_mpl_toolkits$mplot3d$proj3d,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_mpl_toolkits$mplot3d$proj3d,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[95]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_mpl_toolkits$mplot3d$proj3d,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_mpl_toolkits$mplot3d$proj3d,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_mpl_toolkits$mplot3d$proj3d,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_mpl_toolkits$mplot3d$proj3d);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_mpl_toolkits$mplot3d$proj3d);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_03f7633fbc4823627d2b38a47f155181;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[59];
        UPDATE_STRING_DICT0(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_2);
    }
    frame_03f7633fbc4823627d2b38a47f155181 = MAKE_MODULE_FRAME(codeobj_03f7633fbc4823627d2b38a47f155181, module_mpl_toolkits$mplot3d$proj3d);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_03f7633fbc4823627d2b38a47f155181);
    assert(Py_REFCNT(frame_03f7633fbc4823627d2b38a47f155181) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[59];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[62], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[63], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[65];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_mpl_toolkits$mplot3d$proj3d;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[7];
        frame_03f7633fbc4823627d2b38a47f155181->m_frame.f_lineno = 5;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[66];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_mpl_toolkits$mplot3d$proj3d;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[7];
        frame_03f7633fbc4823627d2b38a47f155181->m_frame.f_lineno = 6;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_mpl_toolkits$mplot3d$proj3d,
                mod_consts[18],
                mod_consts[7]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[18]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_5);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_03f7633fbc4823627d2b38a47f155181, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_03f7633fbc4823627d2b38a47f155181->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_03f7633fbc4823627d2b38a47f155181, exception_lineno);
    }



    assertFrameObject(frame_03f7633fbc4823627d2b38a47f155181);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__1__line2d_seg_dist();

        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[68];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_7 = MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__2_world_transformation(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__3_rotation_about_vector();

        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__4__view_axes();

        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__5__view_transformation_uvw();

        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__6_view_transformation();

        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__7_persp_transformation();

        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__8_ortho_transformation();

        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__9__proj_transform_vec();

        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__10__proj_transform_vec_clip();

        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__11_inv_transform();

        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__12__vec_pad_ones();

        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__13_proj_transform();

        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_assign_source_19 == NULL)) {
            tmp_assign_source_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        assert(!(tmp_assign_source_19 == NULL));
        UPDATE_STRING_DICT0(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__14_proj_transform_clip();

        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__15_proj_points();

        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__16_proj_trans_points();

        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_mpl_toolkits$mplot3d$proj3d$$$function__17_rot_x();

        UPDATE_STRING_DICT1(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_23);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("mpl_toolkits.mplot3d.proj3d", false);

    Py_INCREF(module_mpl_toolkits$mplot3d$proj3d);
    return module_mpl_toolkits$mplot3d$proj3d;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_mpl_toolkits$mplot3d$proj3d, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("mpl_toolkits$mplot3d$proj3d", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
