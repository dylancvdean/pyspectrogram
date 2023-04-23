/* Generated code for Python module 'gi.overrides.GObject'
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

/* The "module_gi$overrides$GObject" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_gi$overrides$GObject;
PyDictObject *moduledict_gi$overrides$GObject;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[384];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[384];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("gi.overrides.GObject"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 384; i++) {
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
void checkModuleConstants_gi$overrides$GObject(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 384; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_f5080d7c55be52d4a7dee81af226c150;
static PyCodeObject *codeobj_e46131bc947d71be765957b1e7d78c16;
static PyCodeObject *codeobj_f1b67bf27f847bc00c34a0bcebfcf194;
static PyCodeObject *codeobj_43cdea03d3b7cdfa5e43adad212837e4;
static PyCodeObject *codeobj_75bee02e5534d21238e207093945d7ed;
static PyCodeObject *codeobj_417c09d970cd9f4035f9de4d6b180054;
static PyCodeObject *codeobj_cdb249fa25e41939c03a7dfc9a629967;
static PyCodeObject *codeobj_1a0004e8406ac84dd1501d84baaed878;
static PyCodeObject *codeobj_515bae9a16a09b839f3447a8000265c0;
static PyCodeObject *codeobj_96d3d1829303127c9b99c27e2c7481ca;
static PyCodeObject *codeobj_e0db56afc2ce56b6fb06b5fd8951e765;
static PyCodeObject *codeobj_c674af48880f3ae35bd4b22d009d9227;
static PyCodeObject *codeobj_064a459beefed80b4063ece54bdb3531;
static PyCodeObject *codeobj_6b25416baff135050e536231a23a252f;
static PyCodeObject *codeobj_b0e70d5e420caf07bf07f73a4fc33df4;
static PyCodeObject *codeobj_4113db0e480af519afa3dd276eb93826;
static PyCodeObject *codeobj_0dd24062db6bba6953d825730f729517;
static PyCodeObject *codeobj_6fa7ae2c36b721e01abfeab1fc1ef05e;
static PyCodeObject *codeobj_c666416d83358466c729bced26958f5c;
static PyCodeObject *codeobj_2b4ecde98286050168389c3d3d3b7d14;
static PyCodeObject *codeobj_fe4ebde65c0a34fded3100f6ef35a187;
static PyCodeObject *codeobj_3c32b9dc0ba8069438ba85308a9168f9;
static PyCodeObject *codeobj_048a05839f66a87974844d1724f2b51b;
static PyCodeObject *codeobj_19b14a6e8ba394e58ed23542af44b0cd;
static PyCodeObject *codeobj_a94c8bb5eb07cc020d82c34e87b0b6e5;
static PyCodeObject *codeobj_e3d03aed92dfbe93c06a4fe49e80228c;
static PyCodeObject *codeobj_35744a44bca3256d857918385780a7e5;
static PyCodeObject *codeobj_169f4a84066c15d3d74aaea4a28a003f;
static PyCodeObject *codeobj_b7b5038ff34db3a84e766f54696a2542;
static PyCodeObject *codeobj_62550dc25aa078bff59298c9b641874d;
static PyCodeObject *codeobj_25dedcd63964717ed1491815eb9d5e5a;
static PyCodeObject *codeobj_0711a2743d8395c8a1de8de6f6c77ca4;
static PyCodeObject *codeobj_3d62d2f1d61852dcc9098ec753d76b69;
static PyCodeObject *codeobj_0da5b0393c70916830445e51bc6f539b;
static PyCodeObject *codeobj_9de987181725b861d29d6e4001220c47;
static PyCodeObject *codeobj_635d74de40fb6f928f35c2dcd1d2f3bc;
static PyCodeObject *codeobj_da2779a14aeda7c6ad4732d3a114de38;
static PyCodeObject *codeobj_88b32384844927ec0b4be0d820d95fdc;
static PyCodeObject *codeobj_de87065ff53cdee074a468404a4cd044;
static PyCodeObject *codeobj_17705b4bcdd68b2adb12eb2eadb4c6f8;
static PyCodeObject *codeobj_1a7a09ac225fdb94a1356dfd815a021b;
static PyCodeObject *codeobj_827593bc725a00530596d3aa1de414a3;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[120]; CHECK_OBJECT(module_filename_obj);
    codeobj_f5080d7c55be52d4a7dee81af226c150 = MAKE_CODE_OBJECT(module_filename_obj, 337, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], mod_consts[59], mod_consts[354], NULL, 1, 0, 0);
    codeobj_e46131bc947d71be765957b1e7d78c16 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[355], mod_consts[355], NULL, NULL, 0, 0, 0);
    codeobj_f1b67bf27f847bc00c34a0bcebfcf194 = MAKE_CODE_OBJECT(module_filename_obj, 639, CO_NOFREE, mod_consts[116], mod_consts[116], mod_consts[356], NULL, 0, 0, 0);
    codeobj_43cdea03d3b7cdfa5e43adad212837e4 = MAKE_CODE_OBJECT(module_filename_obj, 497, CO_NOFREE, mod_consts[90], mod_consts[90], mod_consts[356], NULL, 0, 0, 0);
    codeobj_75bee02e5534d21238e207093945d7ed = MAKE_CODE_OBJECT(module_filename_obj, 202, CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[356], NULL, 0, 0, 0);
    codeobj_417c09d970cd9f4035f9de4d6b180054 = MAKE_CODE_OBJECT(module_filename_obj, 476, CO_NOFREE, mod_consts[92], mod_consts[92], mod_consts[356], NULL, 0, 0, 0);
    codeobj_cdb249fa25e41939c03a7dfc9a629967 = MAKE_CODE_OBJECT(module_filename_obj, 383, CO_NOFREE, mod_consts[74], mod_consts[74], mod_consts[356], NULL, 0, 0, 0);
    codeobj_1a0004e8406ac84dd1501d84baaed878 = MAKE_CODE_OBJECT(module_filename_obj, 640, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[345], mod_consts[345], mod_consts[357], NULL, 1, 0, 0);
    codeobj_515bae9a16a09b839f3447a8000265c0 = MAKE_CODE_OBJECT(module_filename_obj, 388, CO_NOFREE, mod_consts[157], mod_consts[157], mod_consts[357], NULL, 1, 0, 0);
    codeobj_96d3d1829303127c9b99c27e2c7481ca = MAKE_CODE_OBJECT(module_filename_obj, 480, CO_NOFREE, mod_consts[157], mod_consts[157], mod_consts[357], NULL, 1, 0, 0);
    codeobj_e0db56afc2ce56b6fb06b5fd8951e765 = MAKE_CODE_OBJECT(module_filename_obj, 391, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[158], mod_consts[158], mod_consts[358], NULL, 4, 0, 0);
    codeobj_c674af48880f3ae35bd4b22d009d9227 = MAKE_CODE_OBJECT(module_filename_obj, 483, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[158], mod_consts[158], mod_consts[358], NULL, 4, 0, 0);
    codeobj_064a459beefed80b4063ece54bdb3531 = MAKE_CODE_OBJECT(module_filename_obj, 211, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[252], mod_consts[252], mod_consts[357], NULL, 1, 0, 0);
    codeobj_6b25416baff135050e536231a23a252f = MAKE_CODE_OBJECT(module_filename_obj, 477, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[2], mod_consts[2], mod_consts[359], NULL, 2, 0, 0);
    codeobj_b0e70d5e420caf07bf07f73a4fc33df4 = MAKE_CODE_OBJECT(module_filename_obj, 384, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[2], mod_consts[2], mod_consts[360], NULL, 3, 0, 0);
    codeobj_4113db0e480af519afa3dd276eb93826 = MAKE_CODE_OBJECT(module_filename_obj, 203, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[2], mod_consts[2], mod_consts[361], NULL, 3, 0, 0);
    codeobj_0dd24062db6bba6953d825730f729517 = MAKE_CODE_OBJECT(module_filename_obj, 292, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[260], mod_consts[260], mod_consts[357], NULL, 1, 0, 0);
    codeobj_6fa7ae2c36b721e01abfeab1fc1ef05e = MAKE_CODE_OBJECT(module_filename_obj, 487, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[290], mod_consts[290], mod_consts[362], NULL, 1, 0, 0);
    codeobj_c666416d83358466c729bced26958f5c = MAKE_CODE_OBJECT(module_filename_obj, 501, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[293], mod_consts[293], mod_consts[363], NULL, 1, 0, 0);
    codeobj_2b4ecde98286050168389c3d3d3b7d14 = MAKE_CODE_OBJECT(module_filename_obj, 498, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[291], mod_consts[291], mod_consts[363], NULL, 1, 0, 0);
    codeobj_fe4ebde65c0a34fded3100f6ef35a187 = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[56], mod_consts[364], NULL, 1, 0, 0);
    codeobj_3c32b9dc0ba8069438ba85308a9168f9 = MAKE_CODE_OBJECT(module_filename_obj, 574, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[333], mod_consts[333], mod_consts[365], NULL, 3, 0, 0);
    codeobj_048a05839f66a87974844d1724f2b51b = MAKE_CODE_OBJECT(module_filename_obj, 556, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[91], mod_consts[91], mod_consts[366], NULL, 1, 0, 0);
    codeobj_19b14a6e8ba394e58ed23542af44b0cd = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[256], mod_consts[256], mod_consts[357], NULL, 1, 0, 0);
    codeobj_a94c8bb5eb07cc020d82c34e87b0b6e5 = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[47], mod_consts[367], NULL, 1, 0, 0);
    codeobj_e3d03aed92dfbe93c06a4fe49e80228c = MAKE_CODE_OBJECT(module_filename_obj, 492, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[85], mod_consts[85], mod_consts[368], mod_consts[369], 0, 0, 0);
    codeobj_35744a44bca3256d857918385780a7e5 = MAKE_CODE_OBJECT(module_filename_obj, 599, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts[102], mod_consts[102], mod_consts[370], mod_consts[371], 1, 0, 0);
    codeobj_169f4a84066c15d3d74aaea4a28a003f = MAKE_CODE_OBJECT(module_filename_obj, 441, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[279], mod_consts[279], mod_consts[372], NULL, 3, 0, 0);
    codeobj_b7b5038ff34db3a84e766f54696a2542 = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[254], mod_consts[254], mod_consts[373], NULL, 2, 0, 0);
    codeobj_62550dc25aa078bff59298c9b641874d = MAKE_CODE_OBJECT(module_filename_obj, 231, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[374], NULL, 2, 0, 0);
    codeobj_25dedcd63964717ed1491815eb9d5e5a = MAKE_CODE_OBJECT(module_filename_obj, 452, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[281], mod_consts[281], mod_consts[375], NULL, 4, 0, 0);
    codeobj_0711a2743d8395c8a1de8de6f6c77ca4 = MAKE_CODE_OBJECT(module_filename_obj, 460, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[283], mod_consts[283], mod_consts[375], NULL, 4, 0, 0);
    codeobj_3d62d2f1d61852dcc9098ec753d76b69 = MAKE_CODE_OBJECT(module_filename_obj, 395, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[376], NULL, 2, 0, 0);
    codeobj_0da5b0393c70916830445e51bc6f539b = MAKE_CODE_OBJECT(module_filename_obj, 327, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[57], mod_consts[57], mod_consts[364], NULL, 1, 0, 0);
    codeobj_9de987181725b861d29d6e4001220c47 = MAKE_CODE_OBJECT(module_filename_obj, 335, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[267], mod_consts[267], mod_consts[377], NULL, 1, 0, 0);
    codeobj_635d74de40fb6f928f35c2dcd1d2f3bc = MAKE_CODE_OBJECT(module_filename_obj, 343, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[378], NULL, 2, 0, 0);
    codeobj_da2779a14aeda7c6ad4732d3a114de38 = MAKE_CODE_OBJECT(module_filename_obj, 419, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[379], NULL, 3, 0, 0);
    codeobj_88b32384844927ec0b4be0d820d95fdc = MAKE_CODE_OBJECT(module_filename_obj, 361, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], mod_consts[62], mod_consts[380], NULL, 2, 0, 0);
    codeobj_de87065ff53cdee074a468404a4cd044 = MAKE_CODE_OBJECT(module_filename_obj, 626, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[381], NULL, 2, 0, 0);
    codeobj_17705b4bcdd68b2adb12eb2eadb4c6f8 = MAKE_CODE_OBJECT(module_filename_obj, 300, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[378], NULL, 1, 0, 0);
    codeobj_1a7a09ac225fdb94a1356dfd815a021b = MAKE_CODE_OBJECT(module_filename_obj, 310, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[382], NULL, 1, 0, 0);
    codeobj_827593bc725a00530596d3aa1de414a3 = MAKE_CODE_OBJECT(module_filename_obj, 646, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[117], mod_consts[117], mod_consts[366], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_gi$overrides$GObject$$$function__12_signal_list_names$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__15_complex_call_helper_pos_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__10__validate_type_for_signal_method();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__11_signal_list_ids();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__12_signal_list_names();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__13_signal_lookup();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__14_signal_query(PyObject *defaults);


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__15___init__();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__16___enter__();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__17___exit__();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__18_signal_handler_block();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__19_signal_parse_name();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__1___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__20_remove_emission_hook();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__21_signal_accumulator_first_wins(PyObject *defaults);


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__22_signal_accumulator_true_handled(PyObject *defaults);


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__23___init__();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__24___enter__();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__25___exit__();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__26__signalmethod();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__26__signalmethod$$$function__1_meth(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__27__unsupported_method();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__28__unsupported_data_method();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__29_freeze_notify();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__2___g_type();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__30_connect_data();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__30_connect_data$$$function__1_new_handler(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__31_stop_emission();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__32___call__();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__33_unbind();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__3_set_boxed();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__4_get_boxed();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__5_set_value();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__6_get_value();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__7___repr__();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__8_type_from_name();


static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__9_type_parent();


// The module function definitions.
static PyObject *impl_gi$overrides$GObject$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value_type = python_pars[1];
    PyObject *par_py_value = python_pars[2];
    struct Nuitka_FrameObject *frame_4113db0e480af519afa3dd276eb93826;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4113db0e480af519afa3dd276eb93826 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4113db0e480af519afa3dd276eb93826)) {
        Py_XDECREF(cache_frame_4113db0e480af519afa3dd276eb93826);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4113db0e480af519afa3dd276eb93826 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4113db0e480af519afa3dd276eb93826 = MAKE_FUNCTION_FRAME(codeobj_4113db0e480af519afa3dd276eb93826, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4113db0e480af519afa3dd276eb93826->m_type_description == NULL);
    frame_4113db0e480af519afa3dd276eb93826 = cache_frame_4113db0e480af519afa3dd276eb93826;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4113db0e480af519afa3dd276eb93826);
    assert(Py_REFCNT(frame_4113db0e480af519afa3dd276eb93826) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_4113db0e480af519afa3dd276eb93826->m_frame.f_lineno = 204;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[2], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_value_type);
        tmp_cmp_expr_left_1 = par_value_type;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_value_type);
        tmp_args_element_value_2 = par_value_type;
        frame_4113db0e480af519afa3dd276eb93826->m_frame.f_lineno = 206;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[3], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_py_value);
        tmp_cmp_expr_left_2 = par_py_value;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(par_py_value);
        tmp_args_element_value_3 = par_py_value;
        frame_4113db0e480af519afa3dd276eb93826->m_frame.f_lineno = 208;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[4], tmp_args_element_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_2:;
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4113db0e480af519afa3dd276eb93826, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4113db0e480af519afa3dd276eb93826->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4113db0e480af519afa3dd276eb93826, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4113db0e480af519afa3dd276eb93826,
        type_description_1,
        par_self,
        par_value_type,
        par_py_value
    );


    // Release cached frame if used for exception.
    if (frame_4113db0e480af519afa3dd276eb93826 == cache_frame_4113db0e480af519afa3dd276eb93826) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4113db0e480af519afa3dd276eb93826);
        cache_frame_4113db0e480af519afa3dd276eb93826 = NULL;
    }

    assertFrameObject(frame_4113db0e480af519afa3dd276eb93826);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value_type);
    Py_DECREF(par_value_type);
    CHECK_OBJECT(par_py_value);
    Py_DECREF(par_py_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value_type);
    Py_DECREF(par_value_type);
    CHECK_OBJECT(par_py_value);
    Py_DECREF(par_py_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__2___g_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_064a459beefed80b4063ece54bdb3531;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_064a459beefed80b4063ece54bdb3531 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_064a459beefed80b4063ece54bdb3531)) {
        Py_XDECREF(cache_frame_064a459beefed80b4063ece54bdb3531);

#if _DEBUG_REFCOUNTS
        if (cache_frame_064a459beefed80b4063ece54bdb3531 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_064a459beefed80b4063ece54bdb3531 = MAKE_FUNCTION_FRAME(codeobj_064a459beefed80b4063ece54bdb3531, module_gi$overrides$GObject, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_064a459beefed80b4063ece54bdb3531->m_type_description == NULL);
    frame_064a459beefed80b4063ece54bdb3531 = cache_frame_064a459beefed80b4063ece54bdb3531;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_064a459beefed80b4063ece54bdb3531);
    assert(Py_REFCNT(frame_064a459beefed80b4063ece54bdb3531) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_064a459beefed80b4063ece54bdb3531->m_frame.f_lineno = 214;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
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
        exception_tb = MAKE_TRACEBACK(frame_064a459beefed80b4063ece54bdb3531, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_064a459beefed80b4063ece54bdb3531->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_064a459beefed80b4063ece54bdb3531, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_064a459beefed80b4063ece54bdb3531,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_064a459beefed80b4063ece54bdb3531 == cache_frame_064a459beefed80b4063ece54bdb3531) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_064a459beefed80b4063ece54bdb3531);
        cache_frame_064a459beefed80b4063ece54bdb3531 = NULL;
    }

    assertFrameObject(frame_064a459beefed80b4063ece54bdb3531);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__3_set_boxed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_boxed = python_pars[1];
    struct Nuitka_FrameObject *frame_b7b5038ff34db3a84e766f54696a2542;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b7b5038ff34db3a84e766f54696a2542 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b7b5038ff34db3a84e766f54696a2542)) {
        Py_XDECREF(cache_frame_b7b5038ff34db3a84e766f54696a2542);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b7b5038ff34db3a84e766f54696a2542 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b7b5038ff34db3a84e766f54696a2542 = MAKE_FUNCTION_FRAME(codeobj_b7b5038ff34db3a84e766f54696a2542, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b7b5038ff34db3a84e766f54696a2542->m_type_description == NULL);
    frame_b7b5038ff34db3a84e766f54696a2542 = cache_frame_b7b5038ff34db3a84e766f54696a2542;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b7b5038ff34db3a84e766f54696a2542);
    assert(Py_REFCNT(frame_b7b5038ff34db3a84e766f54696a2542) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 217;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b7b5038ff34db3a84e766f54696a2542->m_frame.f_lineno = 217;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[12];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[14]);
        frame_b7b5038ff34db3a84e766f54696a2542->m_frame.f_lineno = 218;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        CHECK_OBJECT(par_boxed);
        tmp_args_element_value_3 = par_boxed;
        frame_b7b5038ff34db3a84e766f54696a2542->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[15],
                call_args
            );
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b7b5038ff34db3a84e766f54696a2542, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b7b5038ff34db3a84e766f54696a2542->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b7b5038ff34db3a84e766f54696a2542, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b7b5038ff34db3a84e766f54696a2542,
        type_description_1,
        par_self,
        par_boxed
    );


    // Release cached frame if used for exception.
    if (frame_b7b5038ff34db3a84e766f54696a2542 == cache_frame_b7b5038ff34db3a84e766f54696a2542) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b7b5038ff34db3a84e766f54696a2542);
        cache_frame_b7b5038ff34db3a84e766f54696a2542 = NULL;
    }

    assertFrameObject(frame_b7b5038ff34db3a84e766f54696a2542);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_boxed);
    Py_DECREF(par_boxed);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_boxed);
    Py_DECREF(par_boxed);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__4_get_boxed(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_19b14a6e8ba394e58ed23542af44b0cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_19b14a6e8ba394e58ed23542af44b0cd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_19b14a6e8ba394e58ed23542af44b0cd)) {
        Py_XDECREF(cache_frame_19b14a6e8ba394e58ed23542af44b0cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_19b14a6e8ba394e58ed23542af44b0cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_19b14a6e8ba394e58ed23542af44b0cd = MAKE_FUNCTION_FRAME(codeobj_19b14a6e8ba394e58ed23542af44b0cd, module_gi$overrides$GObject, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_19b14a6e8ba394e58ed23542af44b0cd->m_type_description == NULL);
    frame_19b14a6e8ba394e58ed23542af44b0cd = cache_frame_19b14a6e8ba394e58ed23542af44b0cd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_19b14a6e8ba394e58ed23542af44b0cd);
    assert(Py_REFCNT(frame_19b14a6e8ba394e58ed23542af44b0cd) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[8]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_19b14a6e8ba394e58ed23542af44b0cd->m_frame.f_lineno = 226;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[11]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[16];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "o";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[14]);
        frame_19b14a6e8ba394e58ed23542af44b0cd->m_frame.f_lineno = 227;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_2 = par_self;
        frame_19b14a6e8ba394e58ed23542af44b0cd->m_frame.f_lineno = 229;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[17], tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
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
        exception_tb = MAKE_TRACEBACK(frame_19b14a6e8ba394e58ed23542af44b0cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_19b14a6e8ba394e58ed23542af44b0cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_19b14a6e8ba394e58ed23542af44b0cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_19b14a6e8ba394e58ed23542af44b0cd,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_19b14a6e8ba394e58ed23542af44b0cd == cache_frame_19b14a6e8ba394e58ed23542af44b0cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_19b14a6e8ba394e58ed23542af44b0cd);
        cache_frame_19b14a6e8ba394e58ed23542af44b0cd = NULL;
    }

    assertFrameObject(frame_19b14a6e8ba394e58ed23542af44b0cd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__5_set_value(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_py_value = python_pars[1];
    PyObject *var_gtype = NULL;
    struct Nuitka_FrameObject *frame_62550dc25aa078bff59298c9b641874d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_62550dc25aa078bff59298c9b641874d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_62550dc25aa078bff59298c9b641874d)) {
        Py_XDECREF(cache_frame_62550dc25aa078bff59298c9b641874d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_62550dc25aa078bff59298c9b641874d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_62550dc25aa078bff59298c9b641874d = MAKE_FUNCTION_FRAME(codeobj_62550dc25aa078bff59298c9b641874d, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_62550dc25aa078bff59298c9b641874d->m_type_description == NULL);
    frame_62550dc25aa078bff59298c9b641874d = cache_frame_62550dc25aa078bff59298c9b641874d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_62550dc25aa078bff59298c9b641874d);
    assert(Py_REFCNT(frame_62550dc25aa078bff59298c9b641874d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_gtype == NULL);
        var_gtype = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_gtype);
        tmp_cmp_expr_left_1 = var_gtype;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_py_value);
        tmp_args_element_value_1 = par_py_value;
        frame_62550dc25aa078bff59298c9b641874d->m_frame.f_lineno = 235;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[19], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_gtype);
        tmp_cmp_expr_left_2 = var_gtype;
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_py_value);
        tmp_args_element_value_2 = par_py_value;
        frame_62550dc25aa078bff59298c9b641874d->m_frame.f_lineno = 237;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[21], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_gtype);
        tmp_cmp_expr_left_3 = var_gtype;
        tmp_cmp_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
            tmp_cmp_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_py_value);
        tmp_isinstance_inst_1 = par_py_value;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_py_value);
        tmp_cmp_expr_left_4 = par_py_value;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        tmp_condition_result_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_4 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        tmp_mod_expr_left_1 = mod_consts[23];
        CHECK_OBJECT(par_py_value);
        tmp_tuple_element_1 = par_py_value;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_type_arg_1;
            PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_py_value);
            tmp_type_arg_1 = par_py_value;
            tmp_tuple_element_1 = BUILTIN_TYPE1(tmp_type_arg_1);
            assert(!(tmp_tuple_element_1 == NULL));
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_62550dc25aa078bff59298c9b641874d->m_frame.f_lineno = 240;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 240;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_3 = par_self;
        CHECK_OBJECT(par_py_value);
        tmp_args_element_value_4 = par_py_value;
        frame_62550dc25aa078bff59298c9b641874d->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[15],
                call_args
            );
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_gtype);
        tmp_cmp_expr_left_5 = var_gtype;
        tmp_cmp_expr_right_5 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_cmp_expr_right_5 == NULL)) {
            tmp_cmp_expr_right_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        CHECK_OBJECT(par_py_value);
        tmp_args_element_value_5 = par_py_value;
        frame_62550dc25aa078bff59298c9b641874d->m_frame.f_lineno = 244;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[25], tmp_args_element_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_6;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_gtype);
        tmp_expression_value_2 = var_gtype;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[8]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 245;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_62550dc25aa078bff59298c9b641874d->m_frame.f_lineno = 245;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_5);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_5);

            exception_lineno = 245;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_5);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        CHECK_OBJECT(par_py_value);
        tmp_args_element_value_7 = par_py_value;
        frame_62550dc25aa078bff59298c9b641874d->m_frame.f_lineno = 246;
        tmp_call_result_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[27], tmp_args_element_value_7);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_gtype);
        tmp_cmp_expr_left_6 = var_gtype;
        tmp_cmp_expr_right_6 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_cmp_expr_right_6 == NULL)) {
            tmp_cmp_expr_right_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_cmp_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        CHECK_OBJECT(par_py_value);
        tmp_args_element_value_8 = par_py_value;
        frame_62550dc25aa078bff59298c9b641874d->m_frame.f_lineno = 248;
        tmp_call_result_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[29], tmp_args_element_value_8);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_gtype);
        tmp_cmp_expr_left_7 = var_gtype;
        tmp_cmp_expr_right_7 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_cmp_expr_right_7 == NULL)) {
            tmp_cmp_expr_right_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_cmp_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(par_self);
        tmp_called_instance_7 = par_self;
        CHECK_OBJECT(par_py_value);
        tmp_args_element_value_9 = par_py_value;
        frame_62550dc25aa078bff59298c9b641874d->m_frame.f_lineno = 250;
        tmp_call_result_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[31], tmp_args_element_value_9);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_gtype);
        tmp_cmp_expr_left_8 = var_gtype;
        tmp_cmp_expr_right_8 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_cmp_expr_right_8 == NULL)) {
            tmp_cmp_expr_right_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_cmp_expr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_self);
        tmp_called_instance_8 = par_self;
        CHECK_OBJECT(par_py_value);
        tmp_args_element_value_10 = par_py_value;
        frame_62550dc25aa078bff59298c9b641874d->m_frame.f_lineno = 252;
        tmp_call_result_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[33], tmp_args_element_value_10);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    goto branch_end_9;
    branch_no_9:;
    // Tried code:
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_11 = par_self;
        CHECK_OBJECT(par_py_value);
        tmp_args_element_value_12 = par_py_value;
        frame_62550dc25aa078bff59298c9b641874d->m_frame.f_lineno = 257;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_10 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_9,
                mod_consts[15],
                call_args
            );
        }

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_10);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_62550dc25aa078bff59298c9b641874d, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_62550dc25aa078bff59298c9b641874d, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        tmp_cmp_expr_left_9 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_9 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_10 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(var_gtype);
        tmp_cmp_expr_left_10 = var_gtype;
        tmp_cmp_expr_right_10 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_cmp_expr_right_10 == NULL)) {
            tmp_cmp_expr_right_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_cmp_expr_right_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[35];
        frame_62550dc25aa078bff59298c9b641874d->m_frame.f_lineno = 260;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 260;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    branch_no_11:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 261;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_62550dc25aa078bff59298c9b641874d->m_frame) frame_62550dc25aa078bff59298c9b641874d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    goto branch_end_10;
    branch_no_10:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 256;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_62550dc25aa078bff59298c9b641874d->m_frame) frame_62550dc25aa078bff59298c9b641874d->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_10:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
    // End of try:
    try_end_1:;
    branch_end_9:;
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
    branch_end_5:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_62550dc25aa078bff59298c9b641874d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_62550dc25aa078bff59298c9b641874d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_62550dc25aa078bff59298c9b641874d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_62550dc25aa078bff59298c9b641874d,
        type_description_1,
        par_self,
        par_py_value,
        var_gtype
    );


    // Release cached frame if used for exception.
    if (frame_62550dc25aa078bff59298c9b641874d == cache_frame_62550dc25aa078bff59298c9b641874d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_62550dc25aa078bff59298c9b641874d);
        cache_frame_62550dc25aa078bff59298c9b641874d = NULL;
    }

    assertFrameObject(frame_62550dc25aa078bff59298c9b641874d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_gtype);
    var_gtype = NULL;
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

    Py_XDECREF(var_gtype);
    var_gtype = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_py_value);
    Py_DECREF(par_py_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_py_value);
    Py_DECREF(par_py_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__6_get_value(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_gtype = NULL;
    struct Nuitka_FrameObject *frame_a94c8bb5eb07cc020d82c34e87b0b6e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_a94c8bb5eb07cc020d82c34e87b0b6e5 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a94c8bb5eb07cc020d82c34e87b0b6e5)) {
        Py_XDECREF(cache_frame_a94c8bb5eb07cc020d82c34e87b0b6e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a94c8bb5eb07cc020d82c34e87b0b6e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a94c8bb5eb07cc020d82c34e87b0b6e5 = MAKE_FUNCTION_FRAME(codeobj_a94c8bb5eb07cc020d82c34e87b0b6e5, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a94c8bb5eb07cc020d82c34e87b0b6e5->m_type_description == NULL);
    frame_a94c8bb5eb07cc020d82c34e87b0b6e5 = cache_frame_a94c8bb5eb07cc020d82c34e87b0b6e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a94c8bb5eb07cc020d82c34e87b0b6e5);
    assert(Py_REFCNT(frame_a94c8bb5eb07cc020d82c34e87b0b6e5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_gtype == NULL);
        var_gtype = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_gtype);
        tmp_cmp_expr_left_1 = var_gtype;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oo";
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
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_a94c8bb5eb07cc020d82c34e87b0b6e5->m_frame.f_lineno = 267;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[36]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_gtype);
        tmp_cmp_expr_left_2 = var_gtype;
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_a94c8bb5eb07cc020d82c34e87b0b6e5->m_frame.f_lineno = 269;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[37]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_gtype);
        tmp_cmp_expr_left_3 = var_gtype;
        tmp_cmp_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
            tmp_cmp_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_a94c8bb5eb07cc020d82c34e87b0b6e5->m_frame.f_lineno = 271;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[38]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_gtype);
        tmp_expression_value_2 = var_gtype;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[8]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 272;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a94c8bb5eb07cc020d82c34e87b0b6e5->m_frame.f_lineno = 272;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 272;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        frame_a94c8bb5eb07cc020d82c34e87b0b6e5->m_frame.f_lineno = 273;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[40]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_gtype);
        tmp_expression_value_3 = var_gtype;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[8]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_a94c8bb5eb07cc020d82c34e87b0b6e5->m_frame.f_lineno = 274;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_2);

            exception_lineno = 274;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        frame_a94c8bb5eb07cc020d82c34e87b0b6e5->m_frame.f_lineno = 275;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[41]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_gtype);
        tmp_cmp_expr_left_4 = var_gtype;
        tmp_cmp_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_cmp_expr_right_4 == NULL)) {
            tmp_cmp_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        frame_a94c8bb5eb07cc020d82c34e87b0b6e5->m_frame.f_lineno = 277;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[42]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_gtype);
        tmp_cmp_expr_left_5 = var_gtype;
        tmp_cmp_expr_right_5 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_cmp_expr_right_5 == NULL)) {
            tmp_cmp_expr_right_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_7 = par_self;
        frame_a94c8bb5eb07cc020d82c34e87b0b6e5->m_frame.f_lineno = 279;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[43]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_gtype);
        tmp_cmp_expr_left_6 = var_gtype;
        tmp_cmp_expr_right_6 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_cmp_expr_right_6 == NULL)) {
            tmp_cmp_expr_right_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_cmp_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_instance_8;
        CHECK_OBJECT(par_self);
        tmp_called_instance_8 = par_self;
        frame_a94c8bb5eb07cc020d82c34e87b0b6e5->m_frame.f_lineno = 283;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[44]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_8;
    branch_no_8:;
    // Tried code:
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_3 = par_self;
        frame_a94c8bb5eb07cc020d82c34e87b0b6e5->m_frame.f_lineno = 286;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[17], tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_a94c8bb5eb07cc020d82c34e87b0b6e5, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_a94c8bb5eb07cc020d82c34e87b0b6e5, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_7 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_gtype);
        tmp_cmp_expr_left_8 = var_gtype;
        tmp_cmp_expr_right_8 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_cmp_expr_right_8 == NULL)) {
            tmp_cmp_expr_right_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_cmp_expr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    branch_no_10:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 290;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a94c8bb5eb07cc020d82c34e87b0b6e5->m_frame) frame_a94c8bb5eb07cc020d82c34e87b0b6e5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    goto branch_end_9;
    branch_no_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 285;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a94c8bb5eb07cc020d82c34e87b0b6e5->m_frame) frame_a94c8bb5eb07cc020d82c34e87b0b6e5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_9:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
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
    // End of try:
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a94c8bb5eb07cc020d82c34e87b0b6e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a94c8bb5eb07cc020d82c34e87b0b6e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a94c8bb5eb07cc020d82c34e87b0b6e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a94c8bb5eb07cc020d82c34e87b0b6e5,
        type_description_1,
        par_self,
        var_gtype
    );


    // Release cached frame if used for exception.
    if (frame_a94c8bb5eb07cc020d82c34e87b0b6e5 == cache_frame_a94c8bb5eb07cc020d82c34e87b0b6e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a94c8bb5eb07cc020d82c34e87b0b6e5);
        cache_frame_a94c8bb5eb07cc020d82c34e87b0b6e5 = NULL;
    }

    assertFrameObject(frame_a94c8bb5eb07cc020d82c34e87b0b6e5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_gtype);
    Py_DECREF(var_gtype);
    var_gtype = NULL;
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

    Py_XDECREF(var_gtype);
    var_gtype = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__7___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0dd24062db6bba6953d825730f729517;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0dd24062db6bba6953d825730f729517 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0dd24062db6bba6953d825730f729517)) {
        Py_XDECREF(cache_frame_0dd24062db6bba6953d825730f729517);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0dd24062db6bba6953d825730f729517 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0dd24062db6bba6953d825730f729517 = MAKE_FUNCTION_FRAME(codeobj_0dd24062db6bba6953d825730f729517, module_gi$overrides$GObject, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0dd24062db6bba6953d825730f729517->m_type_description == NULL);
    frame_0dd24062db6bba6953d825730f729517 = cache_frame_0dd24062db6bba6953d825730f729517;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0dd24062db6bba6953d825730f729517);
    assert(Py_REFCNT(frame_0dd24062db6bba6953d825730f729517) == 2);

    // Framed code:
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_mod_expr_left_1 = mod_consts[45];
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_called_instance_1;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_called_instance_1 = par_self;
            frame_0dd24062db6bba6953d825730f729517->m_frame.f_lineno = 293;
            tmp_tuple_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[47]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 293;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
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
        exception_tb = MAKE_TRACEBACK(frame_0dd24062db6bba6953d825730f729517, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0dd24062db6bba6953d825730f729517->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0dd24062db6bba6953d825730f729517, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0dd24062db6bba6953d825730f729517,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0dd24062db6bba6953d825730f729517 == cache_frame_0dd24062db6bba6953d825730f729517) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0dd24062db6bba6953d825730f729517);
        cache_frame_0dd24062db6bba6953d825730f729517 = NULL;
    }

    assertFrameObject(frame_0dd24062db6bba6953d825730f729517);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__8_type_from_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *var_type_ = NULL;
    struct Nuitka_FrameObject *frame_17705b4bcdd68b2adb12eb2eadb4c6f8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_17705b4bcdd68b2adb12eb2eadb4c6f8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_17705b4bcdd68b2adb12eb2eadb4c6f8)) {
        Py_XDECREF(cache_frame_17705b4bcdd68b2adb12eb2eadb4c6f8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_17705b4bcdd68b2adb12eb2eadb4c6f8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_17705b4bcdd68b2adb12eb2eadb4c6f8 = MAKE_FUNCTION_FRAME(codeobj_17705b4bcdd68b2adb12eb2eadb4c6f8, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_17705b4bcdd68b2adb12eb2eadb4c6f8->m_type_description == NULL);
    frame_17705b4bcdd68b2adb12eb2eadb4c6f8 = cache_frame_17705b4bcdd68b2adb12eb2eadb4c6f8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_17705b4bcdd68b2adb12eb2eadb4c6f8);
    assert(Py_REFCNT(frame_17705b4bcdd68b2adb12eb2eadb4c6f8) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_value_1 = par_name;
        frame_17705b4bcdd68b2adb12eb2eadb4c6f8->m_frame.f_lineno = 301;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[48], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_type_ == NULL);
        var_type_ = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_type_);
        tmp_cmp_expr_left_1 = var_type_;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "oo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[49];
        CHECK_OBJECT(par_name);
        tmp_mod_expr_right_1 = par_name;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_17705b4bcdd68b2adb12eb2eadb4c6f8->m_frame.f_lineno = 303;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 303;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_17705b4bcdd68b2adb12eb2eadb4c6f8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_17705b4bcdd68b2adb12eb2eadb4c6f8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_17705b4bcdd68b2adb12eb2eadb4c6f8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_17705b4bcdd68b2adb12eb2eadb4c6f8,
        type_description_1,
        par_name,
        var_type_
    );


    // Release cached frame if used for exception.
    if (frame_17705b4bcdd68b2adb12eb2eadb4c6f8 == cache_frame_17705b4bcdd68b2adb12eb2eadb4c6f8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_17705b4bcdd68b2adb12eb2eadb4c6f8);
        cache_frame_17705b4bcdd68b2adb12eb2eadb4c6f8 = NULL;
    }

    assertFrameObject(frame_17705b4bcdd68b2adb12eb2eadb4c6f8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_type_);
    tmp_return_value = var_type_;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_type_);
    Py_DECREF(var_type_);
    var_type_ = NULL;
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

    Py_XDECREF(var_type_);
    var_type_ = NULL;
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
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__9_type_parent(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_type_ = python_pars[0];
    PyObject *var_parent = NULL;
    struct Nuitka_FrameObject *frame_1a7a09ac225fdb94a1356dfd815a021b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a7a09ac225fdb94a1356dfd815a021b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1a7a09ac225fdb94a1356dfd815a021b)) {
        Py_XDECREF(cache_frame_1a7a09ac225fdb94a1356dfd815a021b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a7a09ac225fdb94a1356dfd815a021b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a7a09ac225fdb94a1356dfd815a021b = MAKE_FUNCTION_FRAME(codeobj_1a7a09ac225fdb94a1356dfd815a021b, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a7a09ac225fdb94a1356dfd815a021b->m_type_description == NULL);
    frame_1a7a09ac225fdb94a1356dfd815a021b = cache_frame_1a7a09ac225fdb94a1356dfd815a021b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1a7a09ac225fdb94a1356dfd815a021b);
    assert(Py_REFCNT(frame_1a7a09ac225fdb94a1356dfd815a021b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_type_);
        tmp_args_element_value_1 = par_type_;
        frame_1a7a09ac225fdb94a1356dfd815a021b->m_frame.f_lineno = 311;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[50], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_parent == NULL);
        var_parent = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_parent);
        tmp_cmp_expr_left_1 = var_parent;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[51];
        frame_1a7a09ac225fdb94a1356dfd815a021b->m_frame.f_lineno = 313;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 313;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1a7a09ac225fdb94a1356dfd815a021b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a7a09ac225fdb94a1356dfd815a021b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a7a09ac225fdb94a1356dfd815a021b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a7a09ac225fdb94a1356dfd815a021b,
        type_description_1,
        par_type_,
        var_parent
    );


    // Release cached frame if used for exception.
    if (frame_1a7a09ac225fdb94a1356dfd815a021b == cache_frame_1a7a09ac225fdb94a1356dfd815a021b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a7a09ac225fdb94a1356dfd815a021b);
        cache_frame_1a7a09ac225fdb94a1356dfd815a021b = NULL;
    }

    assertFrameObject(frame_1a7a09ac225fdb94a1356dfd815a021b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_parent);
    tmp_return_value = var_parent;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_parent);
    Py_DECREF(var_parent);
    var_parent = NULL;
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

    Py_XDECREF(var_parent);
    var_parent = NULL;
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
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__10__validate_type_for_signal_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_type_ = python_pars[0];
    struct Nuitka_FrameObject *frame_fe4ebde65c0a34fded3100f6ef35a187;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fe4ebde65c0a34fded3100f6ef35a187 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fe4ebde65c0a34fded3100f6ef35a187)) {
        Py_XDECREF(cache_frame_fe4ebde65c0a34fded3100f6ef35a187);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fe4ebde65c0a34fded3100f6ef35a187 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fe4ebde65c0a34fded3100f6ef35a187 = MAKE_FUNCTION_FRAME(codeobj_fe4ebde65c0a34fded3100f6ef35a187, module_gi$overrides$GObject, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fe4ebde65c0a34fded3100f6ef35a187->m_type_description == NULL);
    frame_fe4ebde65c0a34fded3100f6ef35a187 = cache_frame_fe4ebde65c0a34fded3100f6ef35a187;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fe4ebde65c0a34fded3100f6ef35a187);
    assert(Py_REFCNT(frame_fe4ebde65c0a34fded3100f6ef35a187) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_type_);
        tmp_expression_value_1 = par_type_;
        tmp_attribute_value_1 = mod_consts[52];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_type_);
        tmp_expression_value_2 = par_type_;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[52]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_type_;
            assert(old != NULL);
            par_type_ = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_type_);
        tmp_called_instance_1 = par_type_;
        frame_fe4ebde65c0a34fded3100f6ef35a187->m_frame.f_lineno = 323;
        tmp_operand_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[53]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_type_);
        tmp_called_instance_2 = par_type_;
        frame_fe4ebde65c0a34fded3100f6ef35a187->m_frame.f_lineno = 323;
        tmp_operand_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[54]);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[55];
        CHECK_OBJECT(par_type_);
        tmp_mod_expr_right_1 = par_type_;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_fe4ebde65c0a34fded3100f6ef35a187->m_frame.f_lineno = 324;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 324;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fe4ebde65c0a34fded3100f6ef35a187, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fe4ebde65c0a34fded3100f6ef35a187->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fe4ebde65c0a34fded3100f6ef35a187, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fe4ebde65c0a34fded3100f6ef35a187,
        type_description_1,
        par_type_
    );


    // Release cached frame if used for exception.
    if (frame_fe4ebde65c0a34fded3100f6ef35a187 == cache_frame_fe4ebde65c0a34fded3100f6ef35a187) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fe4ebde65c0a34fded3100f6ef35a187);
        cache_frame_fe4ebde65c0a34fded3100f6ef35a187 = NULL;
    }

    assertFrameObject(frame_fe4ebde65c0a34fded3100f6ef35a187);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    par_type_ = NULL;
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

    Py_XDECREF(par_type_);
    par_type_ = NULL;
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

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__11_signal_list_ids(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_type_ = python_pars[0];
    struct Nuitka_FrameObject *frame_0da5b0393c70916830445e51bc6f539b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0da5b0393c70916830445e51bc6f539b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0da5b0393c70916830445e51bc6f539b)) {
        Py_XDECREF(cache_frame_0da5b0393c70916830445e51bc6f539b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0da5b0393c70916830445e51bc6f539b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0da5b0393c70916830445e51bc6f539b = MAKE_FUNCTION_FRAME(codeobj_0da5b0393c70916830445e51bc6f539b, module_gi$overrides$GObject, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0da5b0393c70916830445e51bc6f539b->m_type_description == NULL);
    frame_0da5b0393c70916830445e51bc6f539b = cache_frame_0da5b0393c70916830445e51bc6f539b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0da5b0393c70916830445e51bc6f539b);
    assert(Py_REFCNT(frame_0da5b0393c70916830445e51bc6f539b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_type_);
        tmp_args_element_value_1 = par_type_;
        frame_0da5b0393c70916830445e51bc6f539b->m_frame.f_lineno = 328;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_type_);
        tmp_args_element_value_2 = par_type_;
        frame_0da5b0393c70916830445e51bc6f539b->m_frame.f_lineno = 329;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[57], tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
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
        exception_tb = MAKE_TRACEBACK(frame_0da5b0393c70916830445e51bc6f539b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0da5b0393c70916830445e51bc6f539b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0da5b0393c70916830445e51bc6f539b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0da5b0393c70916830445e51bc6f539b,
        type_description_1,
        par_type_
    );


    // Release cached frame if used for exception.
    if (frame_0da5b0393c70916830445e51bc6f539b == cache_frame_0da5b0393c70916830445e51bc6f539b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0da5b0393c70916830445e51bc6f539b);
        cache_frame_0da5b0393c70916830445e51bc6f539b = NULL;
    }

    assertFrameObject(frame_0da5b0393c70916830445e51bc6f539b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__12_signal_list_names(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_type_ = python_pars[0];
    PyObject *var_ids = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_9de987181725b861d29d6e4001220c47;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9de987181725b861d29d6e4001220c47 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9de987181725b861d29d6e4001220c47)) {
        Py_XDECREF(cache_frame_9de987181725b861d29d6e4001220c47);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9de987181725b861d29d6e4001220c47 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9de987181725b861d29d6e4001220c47 = MAKE_FUNCTION_FRAME(codeobj_9de987181725b861d29d6e4001220c47, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9de987181725b861d29d6e4001220c47->m_type_description == NULL);
    frame_9de987181725b861d29d6e4001220c47 = cache_frame_9de987181725b861d29d6e4001220c47;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9de987181725b861d29d6e4001220c47);
    assert(Py_REFCNT(frame_9de987181725b861d29d6e4001220c47) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_type_);
        tmp_args_element_value_1 = par_type_;
        frame_9de987181725b861d29d6e4001220c47->m_frame.f_lineno = 336;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_ids == NULL);
        var_ids = tmp_assign_source_1;
    }
    {
        PyObject *tmp_tuple_arg_1;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_ids);
            tmp_iter_arg_1 = var_ids;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 337;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_tuple_arg_1 = MAKE_GENERATOR_gi$overrides$GObject$$$function__12_signal_list_names$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9de987181725b861d29d6e4001220c47, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9de987181725b861d29d6e4001220c47->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9de987181725b861d29d6e4001220c47, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9de987181725b861d29d6e4001220c47,
        type_description_1,
        par_type_,
        var_ids
    );


    // Release cached frame if used for exception.
    if (frame_9de987181725b861d29d6e4001220c47 == cache_frame_9de987181725b861d29d6e4001220c47) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9de987181725b861d29d6e4001220c47);
        cache_frame_9de987181725b861d29d6e4001220c47 = NULL;
    }

    assertFrameObject(frame_9de987181725b861d29d6e4001220c47);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ids);
    Py_DECREF(var_ids);
    var_ids = NULL;
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

    Py_XDECREF(var_ids);
    var_ids = NULL;
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
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct gi$overrides$GObject$$$function__12_signal_list_names$$$genexpr__1_genexpr_locals {
    PyObject *var_i;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *gi$overrides$GObject$$$function__12_signal_list_names$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct gi$overrides$GObject$$$function__12_signal_list_names$$$genexpr__1_genexpr_locals *generator_heap = (struct gi$overrides$GObject$$$function__12_signal_list_names$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_i = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_f5080d7c55be52d4a7dee81af226c150, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 337;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_i;
            generator_heap->var_i = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 337;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_i);
        tmp_args_element_value_1 = generator_heap->var_i;
        generator->m_frame->m_frame.f_lineno = 337;
        tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[58], tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 337;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 337;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 337;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_i
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_i);
    generator_heap->var_i = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_i);
    generator_heap->var_i = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_gi$overrides$GObject$$$function__12_signal_list_names$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        gi$overrides$GObject$$$function__12_signal_list_names$$$genexpr__1_genexpr_context,
        module_gi$overrides$GObject,
        mod_consts[59],
#if PYTHON_VERSION >= 0x350
        mod_consts[60],
#endif
        codeobj_f5080d7c55be52d4a7dee81af226c150,
        closure,
        1,
        sizeof(struct gi$overrides$GObject$$$function__12_signal_list_names$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_gi$overrides$GObject$$$function__13_signal_lookup(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[0];
    PyObject *par_type_ = python_pars[1];
    struct Nuitka_FrameObject *frame_635d74de40fb6f928f35c2dcd1d2f3bc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_635d74de40fb6f928f35c2dcd1d2f3bc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_635d74de40fb6f928f35c2dcd1d2f3bc)) {
        Py_XDECREF(cache_frame_635d74de40fb6f928f35c2dcd1d2f3bc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_635d74de40fb6f928f35c2dcd1d2f3bc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_635d74de40fb6f928f35c2dcd1d2f3bc = MAKE_FUNCTION_FRAME(codeobj_635d74de40fb6f928f35c2dcd1d2f3bc, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_635d74de40fb6f928f35c2dcd1d2f3bc->m_type_description == NULL);
    frame_635d74de40fb6f928f35c2dcd1d2f3bc = cache_frame_635d74de40fb6f928f35c2dcd1d2f3bc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_635d74de40fb6f928f35c2dcd1d2f3bc);
    assert(Py_REFCNT(frame_635d74de40fb6f928f35c2dcd1d2f3bc) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_type_);
        tmp_args_element_value_1 = par_type_;
        frame_635d74de40fb6f928f35c2dcd1d2f3bc->m_frame.f_lineno = 344;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_name);
        tmp_args_element_value_2 = par_name;
        CHECK_OBJECT(par_type_);
        tmp_args_element_value_3 = par_type_;
        frame_635d74de40fb6f928f35c2dcd1d2f3bc->m_frame.f_lineno = 345;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[61],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
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
        exception_tb = MAKE_TRACEBACK(frame_635d74de40fb6f928f35c2dcd1d2f3bc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_635d74de40fb6f928f35c2dcd1d2f3bc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_635d74de40fb6f928f35c2dcd1d2f3bc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_635d74de40fb6f928f35c2dcd1d2f3bc,
        type_description_1,
        par_name,
        par_type_
    );


    // Release cached frame if used for exception.
    if (frame_635d74de40fb6f928f35c2dcd1d2f3bc == cache_frame_635d74de40fb6f928f35c2dcd1d2f3bc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_635d74de40fb6f928f35c2dcd1d2f3bc);
        cache_frame_635d74de40fb6f928f35c2dcd1d2f3bc = NULL;
    }

    assertFrameObject(frame_635d74de40fb6f928f35c2dcd1d2f3bc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_name);
    Py_DECREF(par_name);
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__14_signal_query(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_id_or_name = python_pars[0];
    PyObject *par_type_ = python_pars[1];
    PyObject *var_res = NULL;
    struct Nuitka_FrameObject *frame_88b32384844927ec0b4be0d820d95fdc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_88b32384844927ec0b4be0d820d95fdc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_88b32384844927ec0b4be0d820d95fdc)) {
        Py_XDECREF(cache_frame_88b32384844927ec0b4be0d820d95fdc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_88b32384844927ec0b4be0d820d95fdc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_88b32384844927ec0b4be0d820d95fdc = MAKE_FUNCTION_FRAME(codeobj_88b32384844927ec0b4be0d820d95fdc, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_88b32384844927ec0b4be0d820d95fdc->m_type_description == NULL);
    frame_88b32384844927ec0b4be0d820d95fdc = cache_frame_88b32384844927ec0b4be0d820d95fdc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_88b32384844927ec0b4be0d820d95fdc);
    assert(Py_REFCNT(frame_88b32384844927ec0b4be0d820d95fdc) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_type_);
        tmp_cmp_expr_left_1 = par_type_;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_id_or_name);
        tmp_args_element_value_1 = par_id_or_name;
        CHECK_OBJECT(par_type_);
        tmp_args_element_value_2 = par_type_;
        frame_88b32384844927ec0b4be0d820d95fdc->m_frame.f_lineno = 363;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_id_or_name;
            assert(old != NULL);
            par_id_or_name = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_id_or_name);
        tmp_args_element_value_3 = par_id_or_name;
        frame_88b32384844927ec0b4be0d820d95fdc->m_frame.f_lineno = 365;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[62], tmp_args_element_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_res == NULL);
        var_res = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_res);
        tmp_cmp_expr_left_2 = var_res;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 366;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_res);
        tmp_expression_value_1 = var_res;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[64];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_expression_value_7;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_expression_value_2 = var_res;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[63]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_expression_value_3 = var_res;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[58]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 375;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_expression_value_4 = var_res;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[66]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 375;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_expression_value_5 = var_res;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[67]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 376;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_expression_value_6 = var_res;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[68]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 376;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_res);
        tmp_expression_value_7 = var_res;
        tmp_tuple_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[69]);
        if (tmp_tuple_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 377;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 377;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_88b32384844927ec0b4be0d820d95fdc->m_frame.f_lineno = 375;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_88b32384844927ec0b4be0d820d95fdc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_88b32384844927ec0b4be0d820d95fdc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_88b32384844927ec0b4be0d820d95fdc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_88b32384844927ec0b4be0d820d95fdc,
        type_description_1,
        par_id_or_name,
        par_type_,
        var_res
    );


    // Release cached frame if used for exception.
    if (frame_88b32384844927ec0b4be0d820d95fdc == cache_frame_88b32384844927ec0b4be0d820d95fdc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_88b32384844927ec0b4be0d820d95fdc);
        cache_frame_88b32384844927ec0b4be0d820d95fdc = NULL;
    }

    assertFrameObject(frame_88b32384844927ec0b4be0d820d95fdc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_id_or_name);
    Py_DECREF(par_id_or_name);
    par_id_or_name = NULL;
    CHECK_OBJECT(var_res);
    Py_DECREF(var_res);
    var_res = NULL;
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

    Py_XDECREF(par_id_or_name);
    par_id_or_name = NULL;
    Py_XDECREF(var_res);
    var_res = NULL;
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
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_type_);
    Py_DECREF(par_type_);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__15___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    PyObject *par_handler_id = python_pars[2];
    struct Nuitka_FrameObject *frame_b0e70d5e420caf07bf07f73a4fc33df4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b0e70d5e420caf07bf07f73a4fc33df4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b0e70d5e420caf07bf07f73a4fc33df4)) {
        Py_XDECREF(cache_frame_b0e70d5e420caf07bf07f73a4fc33df4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b0e70d5e420caf07bf07f73a4fc33df4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b0e70d5e420caf07bf07f73a4fc33df4 = MAKE_FUNCTION_FRAME(codeobj_b0e70d5e420caf07bf07f73a4fc33df4, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b0e70d5e420caf07bf07f73a4fc33df4->m_type_description == NULL);
    frame_b0e70d5e420caf07bf07f73a4fc33df4 = cache_frame_b0e70d5e420caf07bf07f73a4fc33df4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b0e70d5e420caf07bf07f73a4fc33df4);
    assert(Py_REFCNT(frame_b0e70d5e420caf07bf07f73a4fc33df4) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_obj);
        tmp_assattr_value_1 = par_obj;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[70], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_handler_id);
        tmp_assattr_value_2 = par_handler_id;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[71], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b0e70d5e420caf07bf07f73a4fc33df4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b0e70d5e420caf07bf07f73a4fc33df4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b0e70d5e420caf07bf07f73a4fc33df4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b0e70d5e420caf07bf07f73a4fc33df4,
        type_description_1,
        par_self,
        par_obj,
        par_handler_id
    );


    // Release cached frame if used for exception.
    if (frame_b0e70d5e420caf07bf07f73a4fc33df4 == cache_frame_b0e70d5e420caf07bf07f73a4fc33df4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b0e70d5e420caf07bf07f73a4fc33df4);
        cache_frame_b0e70d5e420caf07bf07f73a4fc33df4 = NULL;
    }

    assertFrameObject(frame_b0e70d5e420caf07bf07f73a4fc33df4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_handler_id);
    Py_DECREF(par_handler_id);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_handler_id);
    Py_DECREF(par_handler_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__17___exit__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_exc_type = python_pars[1];
    PyObject *par_exc_value = python_pars[2];
    PyObject *par_traceback = python_pars[3];
    struct Nuitka_FrameObject *frame_e0db56afc2ce56b6fb06b5fd8951e765;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e0db56afc2ce56b6fb06b5fd8951e765 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e0db56afc2ce56b6fb06b5fd8951e765)) {
        Py_XDECREF(cache_frame_e0db56afc2ce56b6fb06b5fd8951e765);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e0db56afc2ce56b6fb06b5fd8951e765 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e0db56afc2ce56b6fb06b5fd8951e765 = MAKE_FUNCTION_FRAME(codeobj_e0db56afc2ce56b6fb06b5fd8951e765, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e0db56afc2ce56b6fb06b5fd8951e765->m_type_description == NULL);
    frame_e0db56afc2ce56b6fb06b5fd8951e765 = cache_frame_e0db56afc2ce56b6fb06b5fd8951e765;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e0db56afc2ce56b6fb06b5fd8951e765);
    assert(Py_REFCNT(frame_e0db56afc2ce56b6fb06b5fd8951e765) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[72]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[70]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 392;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[71]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 392;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_e0db56afc2ce56b6fb06b5fd8951e765->m_frame.f_lineno = 392;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e0db56afc2ce56b6fb06b5fd8951e765, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e0db56afc2ce56b6fb06b5fd8951e765->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e0db56afc2ce56b6fb06b5fd8951e765, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e0db56afc2ce56b6fb06b5fd8951e765,
        type_description_1,
        par_self,
        par_exc_type,
        par_exc_value,
        par_traceback
    );


    // Release cached frame if used for exception.
    if (frame_e0db56afc2ce56b6fb06b5fd8951e765 == cache_frame_e0db56afc2ce56b6fb06b5fd8951e765) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e0db56afc2ce56b6fb06b5fd8951e765);
        cache_frame_e0db56afc2ce56b6fb06b5fd8951e765 = NULL;
    }

    assertFrameObject(frame_e0db56afc2ce56b6fb06b5fd8951e765);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_value);
    Py_DECREF(par_exc_value);
    CHECK_OBJECT(par_traceback);
    Py_DECREF(par_traceback);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_value);
    Py_DECREF(par_exc_value);
    CHECK_OBJECT(par_traceback);
    Py_DECREF(par_traceback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__18_signal_handler_block(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    PyObject *par_handler_id = python_pars[1];
    struct Nuitka_FrameObject *frame_3d62d2f1d61852dcc9098ec753d76b69;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3d62d2f1d61852dcc9098ec753d76b69 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3d62d2f1d61852dcc9098ec753d76b69)) {
        Py_XDECREF(cache_frame_3d62d2f1d61852dcc9098ec753d76b69);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3d62d2f1d61852dcc9098ec753d76b69 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3d62d2f1d61852dcc9098ec753d76b69 = MAKE_FUNCTION_FRAME(codeobj_3d62d2f1d61852dcc9098ec753d76b69, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3d62d2f1d61852dcc9098ec753d76b69->m_type_description == NULL);
    frame_3d62d2f1d61852dcc9098ec753d76b69 = cache_frame_3d62d2f1d61852dcc9098ec753d76b69;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3d62d2f1d61852dcc9098ec753d76b69);
    assert(Py_REFCNT(frame_3d62d2f1d61852dcc9098ec753d76b69) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_1 = par_obj;
        CHECK_OBJECT(par_handler_id);
        tmp_args_element_value_2 = par_handler_id;
        frame_3d62d2f1d61852dcc9098ec753d76b69->m_frame.f_lineno = 412;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[73],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_3 = par_obj;
        CHECK_OBJECT(par_handler_id);
        tmp_args_element_value_4 = par_handler_id;
        frame_3d62d2f1d61852dcc9098ec753d76b69->m_frame.f_lineno = 413;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
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
        exception_tb = MAKE_TRACEBACK(frame_3d62d2f1d61852dcc9098ec753d76b69, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3d62d2f1d61852dcc9098ec753d76b69->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3d62d2f1d61852dcc9098ec753d76b69, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3d62d2f1d61852dcc9098ec753d76b69,
        type_description_1,
        par_obj,
        par_handler_id
    );


    // Release cached frame if used for exception.
    if (frame_3d62d2f1d61852dcc9098ec753d76b69 == cache_frame_3d62d2f1d61852dcc9098ec753d76b69) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3d62d2f1d61852dcc9098ec753d76b69);
        cache_frame_3d62d2f1d61852dcc9098ec753d76b69 = NULL;
    }

    assertFrameObject(frame_3d62d2f1d61852dcc9098ec753d76b69);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_handler_id);
    Py_DECREF(par_handler_id);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_handler_id);
    Py_DECREF(par_handler_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__19_signal_parse_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_detailed_signal = python_pars[0];
    PyObject *par_itype = python_pars[1];
    PyObject *par_force_detail_quark = python_pars[2];
    PyObject *var_res = NULL;
    PyObject *var_signal_id = NULL;
    PyObject *var_detail = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_da2779a14aeda7c6ad4732d3a114de38;
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
    static struct Nuitka_FrameObject *cache_frame_da2779a14aeda7c6ad4732d3a114de38 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_da2779a14aeda7c6ad4732d3a114de38)) {
        Py_XDECREF(cache_frame_da2779a14aeda7c6ad4732d3a114de38);

#if _DEBUG_REFCOUNTS
        if (cache_frame_da2779a14aeda7c6ad4732d3a114de38 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_da2779a14aeda7c6ad4732d3a114de38 = MAKE_FUNCTION_FRAME(codeobj_da2779a14aeda7c6ad4732d3a114de38, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_da2779a14aeda7c6ad4732d3a114de38->m_type_description == NULL);
    frame_da2779a14aeda7c6ad4732d3a114de38 = cache_frame_da2779a14aeda7c6ad4732d3a114de38;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_da2779a14aeda7c6ad4732d3a114de38);
    assert(Py_REFCNT(frame_da2779a14aeda7c6ad4732d3a114de38) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_detailed_signal);
        tmp_args_element_value_1 = par_detailed_signal;
        CHECK_OBJECT(par_itype);
        tmp_args_element_value_2 = par_itype;
        CHECK_OBJECT(par_force_detail_quark);
        tmp_args_element_value_3 = par_force_detail_quark;
        frame_da2779a14aeda7c6ad4732d3a114de38->m_frame.f_lineno = 430;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[76],
                call_args
            );
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "oooooo";
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


            type_description_1 = "oooooo";
            exception_lineno = 430;
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


            type_description_1 = "oooooo";
            exception_lineno = 430;
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


            type_description_1 = "oooooo";
            exception_lineno = 430;
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

                    type_description_1 = "oooooo";
                    exception_lineno = 430;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[77];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 430;
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
        assert(var_res == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_res = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_signal_id == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_signal_id = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert(var_detail == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_detail = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_res);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_res);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_signal_id);
        tmp_tuple_element_1 = var_signal_id;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_detail);
        tmp_tuple_element_1 = var_detail;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_2;
        tmp_mod_expr_left_1 = mod_consts[78];
        CHECK_OBJECT(par_itype);
        tmp_tuple_element_2 = par_itype;
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_detailed_signal);
        tmp_tuple_element_2 = par_detailed_signal;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_da2779a14aeda7c6ad4732d3a114de38->m_frame.f_lineno = 435;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 435;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_da2779a14aeda7c6ad4732d3a114de38, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_da2779a14aeda7c6ad4732d3a114de38->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_da2779a14aeda7c6ad4732d3a114de38, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_da2779a14aeda7c6ad4732d3a114de38,
        type_description_1,
        par_detailed_signal,
        par_itype,
        par_force_detail_quark,
        var_res,
        var_signal_id,
        var_detail
    );


    // Release cached frame if used for exception.
    if (frame_da2779a14aeda7c6ad4732d3a114de38 == cache_frame_da2779a14aeda7c6ad4732d3a114de38) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_da2779a14aeda7c6ad4732d3a114de38);
        cache_frame_da2779a14aeda7c6ad4732d3a114de38 = NULL;
    }

    assertFrameObject(frame_da2779a14aeda7c6ad4732d3a114de38);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_res);
    Py_DECREF(var_res);
    var_res = NULL;
    CHECK_OBJECT(var_signal_id);
    Py_DECREF(var_signal_id);
    var_signal_id = NULL;
    CHECK_OBJECT(var_detail);
    Py_DECREF(var_detail);
    var_detail = NULL;
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

    Py_XDECREF(var_res);
    var_res = NULL;
    Py_XDECREF(var_signal_id);
    var_signal_id = NULL;
    Py_XDECREF(var_detail);
    var_detail = NULL;
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
    CHECK_OBJECT(par_detailed_signal);
    Py_DECREF(par_detailed_signal);
    CHECK_OBJECT(par_itype);
    Py_DECREF(par_itype);
    CHECK_OBJECT(par_force_detail_quark);
    Py_DECREF(par_force_detail_quark);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_detailed_signal);
    Py_DECREF(par_detailed_signal);
    CHECK_OBJECT(par_itype);
    Py_DECREF(par_itype);
    CHECK_OBJECT(par_force_detail_quark);
    Py_DECREF(par_force_detail_quark);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__20_remove_emission_hook(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    PyObject *par_detailed_signal = python_pars[1];
    PyObject *par_hook_id = python_pars[2];
    PyObject *var_signal_id = NULL;
    PyObject *var_detail = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_169f4a84066c15d3d74aaea4a28a003f;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_169f4a84066c15d3d74aaea4a28a003f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_169f4a84066c15d3d74aaea4a28a003f)) {
        Py_XDECREF(cache_frame_169f4a84066c15d3d74aaea4a28a003f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_169f4a84066c15d3d74aaea4a28a003f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_169f4a84066c15d3d74aaea4a28a003f = MAKE_FUNCTION_FRAME(codeobj_169f4a84066c15d3d74aaea4a28a003f, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_169f4a84066c15d3d74aaea4a28a003f->m_type_description == NULL);
    frame_169f4a84066c15d3d74aaea4a28a003f = cache_frame_169f4a84066c15d3d74aaea4a28a003f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_169f4a84066c15d3d74aaea4a28a003f);
    assert(Py_REFCNT(frame_169f4a84066c15d3d74aaea4a28a003f) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_detailed_signal);
        tmp_args_element_value_1 = par_detailed_signal;
        CHECK_OBJECT(par_obj);
        tmp_args_element_value_2 = par_obj;
        tmp_args_element_value_3 = Py_True;
        frame_169f4a84066c15d3d74aaea4a28a003f->m_frame.f_lineno = 442;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
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
            exception_lineno = 442;
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
            exception_lineno = 442;
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
                    exception_lineno = 442;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[80];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 442;
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
        assert(var_signal_id == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_signal_id = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_detail == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_detail = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_signal_id);
        tmp_args_element_value_4 = var_signal_id;
        CHECK_OBJECT(par_hook_id);
        tmp_args_element_value_5 = par_hook_id;
        frame_169f4a84066c15d3d74aaea4a28a003f->m_frame.f_lineno = 443;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[81],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_169f4a84066c15d3d74aaea4a28a003f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_169f4a84066c15d3d74aaea4a28a003f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_169f4a84066c15d3d74aaea4a28a003f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_169f4a84066c15d3d74aaea4a28a003f,
        type_description_1,
        par_obj,
        par_detailed_signal,
        par_hook_id,
        var_signal_id,
        var_detail
    );


    // Release cached frame if used for exception.
    if (frame_169f4a84066c15d3d74aaea4a28a003f == cache_frame_169f4a84066c15d3d74aaea4a28a003f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_169f4a84066c15d3d74aaea4a28a003f);
        cache_frame_169f4a84066c15d3d74aaea4a28a003f = NULL;
    }

    assertFrameObject(frame_169f4a84066c15d3d74aaea4a28a003f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_signal_id);
    Py_DECREF(var_signal_id);
    var_signal_id = NULL;
    CHECK_OBJECT(var_detail);
    Py_DECREF(var_detail);
    var_detail = NULL;
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

    Py_XDECREF(var_signal_id);
    var_signal_id = NULL;
    Py_XDECREF(var_detail);
    var_detail = NULL;
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
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_detailed_signal);
    Py_DECREF(par_detailed_signal);
    CHECK_OBJECT(par_hook_id);
    Py_DECREF(par_hook_id);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    CHECK_OBJECT(par_detailed_signal);
    Py_DECREF(par_detailed_signal);
    CHECK_OBJECT(par_hook_id);
    Py_DECREF(par_hook_id);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__21_signal_accumulator_first_wins(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ihint = python_pars[0];
    PyObject *par_return_accu = python_pars[1];
    PyObject *par_handler_return = python_pars[2];
    PyObject *par_user_data = python_pars[3];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = Py_False;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_handler_return);
        tmp_tuple_element_1 = par_handler_return;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ihint);
    Py_DECREF(par_ihint);
    CHECK_OBJECT(par_return_accu);
    Py_DECREF(par_return_accu);
    CHECK_OBJECT(par_handler_return);
    Py_DECREF(par_handler_return);
    CHECK_OBJECT(par_user_data);
    Py_DECREF(par_user_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__22_signal_accumulator_true_handled(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ihint = python_pars[0];
    PyObject *par_return_accu = python_pars[1];
    PyObject *par_handler_return = python_pars[2];
    PyObject *par_user_data = python_pars[3];
    struct Nuitka_FrameObject *frame_0711a2743d8395c8a1de8de6f6c77ca4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0711a2743d8395c8a1de8de6f6c77ca4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0711a2743d8395c8a1de8de6f6c77ca4)) {
        Py_XDECREF(cache_frame_0711a2743d8395c8a1de8de6f6c77ca4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0711a2743d8395c8a1de8de6f6c77ca4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0711a2743d8395c8a1de8de6f6c77ca4 = MAKE_FUNCTION_FRAME(codeobj_0711a2743d8395c8a1de8de6f6c77ca4, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0711a2743d8395c8a1de8de6f6c77ca4->m_type_description == NULL);
    frame_0711a2743d8395c8a1de8de6f6c77ca4 = cache_frame_0711a2743d8395c8a1de8de6f6c77ca4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0711a2743d8395c8a1de8de6f6c77ca4);
    assert(Py_REFCNT(frame_0711a2743d8395c8a1de8de6f6c77ca4) == 2);

    // Framed code:
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_handler_return);
        tmp_operand_value_1 = par_handler_return;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_handler_return);
        tmp_tuple_element_1 = par_handler_return;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_0711a2743d8395c8a1de8de6f6c77ca4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0711a2743d8395c8a1de8de6f6c77ca4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0711a2743d8395c8a1de8de6f6c77ca4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0711a2743d8395c8a1de8de6f6c77ca4,
        type_description_1,
        par_ihint,
        par_return_accu,
        par_handler_return,
        par_user_data
    );


    // Release cached frame if used for exception.
    if (frame_0711a2743d8395c8a1de8de6f6c77ca4 == cache_frame_0711a2743d8395c8a1de8de6f6c77ca4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0711a2743d8395c8a1de8de6f6c77ca4);
        cache_frame_0711a2743d8395c8a1de8de6f6c77ca4 = NULL;
    }

    assertFrameObject(frame_0711a2743d8395c8a1de8de6f6c77ca4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ihint);
    Py_DECREF(par_ihint);
    CHECK_OBJECT(par_return_accu);
    Py_DECREF(par_return_accu);
    CHECK_OBJECT(par_handler_return);
    Py_DECREF(par_handler_return);
    CHECK_OBJECT(par_user_data);
    Py_DECREF(par_user_data);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ihint);
    Py_DECREF(par_ihint);
    CHECK_OBJECT(par_return_accu);
    Py_DECREF(par_return_accu);
    CHECK_OBJECT(par_handler_return);
    Py_DECREF(par_handler_return);
    CHECK_OBJECT(par_user_data);
    Py_DECREF(par_user_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__23___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_obj = python_pars[1];
    struct Nuitka_FrameObject *frame_6b25416baff135050e536231a23a252f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6b25416baff135050e536231a23a252f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6b25416baff135050e536231a23a252f)) {
        Py_XDECREF(cache_frame_6b25416baff135050e536231a23a252f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6b25416baff135050e536231a23a252f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6b25416baff135050e536231a23a252f = MAKE_FUNCTION_FRAME(codeobj_6b25416baff135050e536231a23a252f, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6b25416baff135050e536231a23a252f->m_type_description == NULL);
    frame_6b25416baff135050e536231a23a252f = cache_frame_6b25416baff135050e536231a23a252f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6b25416baff135050e536231a23a252f);
    assert(Py_REFCNT(frame_6b25416baff135050e536231a23a252f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_obj);
        tmp_assattr_value_1 = par_obj;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[70], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6b25416baff135050e536231a23a252f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6b25416baff135050e536231a23a252f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b25416baff135050e536231a23a252f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6b25416baff135050e536231a23a252f,
        type_description_1,
        par_self,
        par_obj
    );


    // Release cached frame if used for exception.
    if (frame_6b25416baff135050e536231a23a252f == cache_frame_6b25416baff135050e536231a23a252f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6b25416baff135050e536231a23a252f);
        cache_frame_6b25416baff135050e536231a23a252f = NULL;
    }

    assertFrameObject(frame_6b25416baff135050e536231a23a252f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__25___exit__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_exc_type = python_pars[1];
    PyObject *par_exc_value = python_pars[2];
    PyObject *par_traceback = python_pars[3];
    struct Nuitka_FrameObject *frame_c674af48880f3ae35bd4b22d009d9227;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c674af48880f3ae35bd4b22d009d9227 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c674af48880f3ae35bd4b22d009d9227)) {
        Py_XDECREF(cache_frame_c674af48880f3ae35bd4b22d009d9227);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c674af48880f3ae35bd4b22d009d9227 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c674af48880f3ae35bd4b22d009d9227 = MAKE_FUNCTION_FRAME(codeobj_c674af48880f3ae35bd4b22d009d9227, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c674af48880f3ae35bd4b22d009d9227->m_type_description == NULL);
    frame_c674af48880f3ae35bd4b22d009d9227 = cache_frame_c674af48880f3ae35bd4b22d009d9227;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c674af48880f3ae35bd4b22d009d9227);
    assert(Py_REFCNT(frame_c674af48880f3ae35bd4b22d009d9227) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[70]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c674af48880f3ae35bd4b22d009d9227->m_frame.f_lineno = 484;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[82]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c674af48880f3ae35bd4b22d009d9227, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c674af48880f3ae35bd4b22d009d9227->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c674af48880f3ae35bd4b22d009d9227, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c674af48880f3ae35bd4b22d009d9227,
        type_description_1,
        par_self,
        par_exc_type,
        par_exc_value,
        par_traceback
    );


    // Release cached frame if used for exception.
    if (frame_c674af48880f3ae35bd4b22d009d9227 == cache_frame_c674af48880f3ae35bd4b22d009d9227) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c674af48880f3ae35bd4b22d009d9227);
        cache_frame_c674af48880f3ae35bd4b22d009d9227 = NULL;
    }

    assertFrameObject(frame_c674af48880f3ae35bd4b22d009d9227);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_value);
    Py_DECREF(par_exc_value);
    CHECK_OBJECT(par_traceback);
    Py_DECREF(par_traceback);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_value);
    Py_DECREF(par_exc_value);
    CHECK_OBJECT(par_traceback);
    Py_DECREF(par_traceback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__26__signalmethod(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_func = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_meth = NULL;
    struct Nuitka_FrameObject *frame_6fa7ae2c36b721e01abfeab1fc1ef05e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6fa7ae2c36b721e01abfeab1fc1ef05e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6fa7ae2c36b721e01abfeab1fc1ef05e)) {
        Py_XDECREF(cache_frame_6fa7ae2c36b721e01abfeab1fc1ef05e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6fa7ae2c36b721e01abfeab1fc1ef05e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6fa7ae2c36b721e01abfeab1fc1ef05e = MAKE_FUNCTION_FRAME(codeobj_6fa7ae2c36b721e01abfeab1fc1ef05e, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6fa7ae2c36b721e01abfeab1fc1ef05e->m_type_description == NULL);
    frame_6fa7ae2c36b721e01abfeab1fc1ef05e = cache_frame_6fa7ae2c36b721e01abfeab1fc1ef05e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6fa7ae2c36b721e01abfeab1fc1ef05e);
    assert(Py_REFCNT(frame_6fa7ae2c36b721e01abfeab1fc1ef05e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        struct Nuitka_CellObject *tmp_closure_1[1];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        assert(!(tmp_called_instance_1 == NULL));
        CHECK_OBJECT(Nuitka_Cell_GET(par_func));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_func);
        frame_6fa7ae2c36b721e01abfeab1fc1ef05e->m_frame.f_lineno = 491;
        tmp_called_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[84], tmp_args_element_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }

        tmp_closure_1[0] = par_func;
        Py_INCREF(tmp_closure_1[0]);

        tmp_args_element_value_2 = MAKE_FUNCTION_gi$overrides$GObject$$$function__26__signalmethod$$$function__1_meth(tmp_closure_1);

        frame_6fa7ae2c36b721e01abfeab1fc1ef05e->m_frame.f_lineno = 491;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "co";
            goto frame_exception_exit_1;
        }
        assert(var_meth == NULL);
        var_meth = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6fa7ae2c36b721e01abfeab1fc1ef05e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6fa7ae2c36b721e01abfeab1fc1ef05e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6fa7ae2c36b721e01abfeab1fc1ef05e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6fa7ae2c36b721e01abfeab1fc1ef05e,
        type_description_1,
        par_func,
        var_meth
    );


    // Release cached frame if used for exception.
    if (frame_6fa7ae2c36b721e01abfeab1fc1ef05e == cache_frame_6fa7ae2c36b721e01abfeab1fc1ef05e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6fa7ae2c36b721e01abfeab1fc1ef05e);
        cache_frame_6fa7ae2c36b721e01abfeab1fc1ef05e = NULL;
    }

    assertFrameObject(frame_6fa7ae2c36b721e01abfeab1fc1ef05e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_meth);
    tmp_return_value = var_meth;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_meth);
    Py_DECREF(var_meth);
    var_meth = NULL;
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
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__26__signalmethod$$$function__1_meth(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    struct Nuitka_FrameObject *frame_e3d03aed92dfbe93c06a4fe49e80228c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e3d03aed92dfbe93c06a4fe49e80228c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e3d03aed92dfbe93c06a4fe49e80228c)) {
        Py_XDECREF(cache_frame_e3d03aed92dfbe93c06a4fe49e80228c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e3d03aed92dfbe93c06a4fe49e80228c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e3d03aed92dfbe93c06a4fe49e80228c = MAKE_FUNCTION_FRAME(codeobj_e3d03aed92dfbe93c06a4fe49e80228c, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e3d03aed92dfbe93c06a4fe49e80228c->m_type_description == NULL);
    frame_e3d03aed92dfbe93c06a4fe49e80228c = cache_frame_e3d03aed92dfbe93c06a4fe49e80228c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e3d03aed92dfbe93c06a4fe49e80228c);
    assert(Py_REFCNT(frame_e3d03aed92dfbe93c06a4fe49e80228c) == 2);

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[87]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 493;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "ooc";
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
        exception_tb = MAKE_TRACEBACK(frame_e3d03aed92dfbe93c06a4fe49e80228c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e3d03aed92dfbe93c06a4fe49e80228c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e3d03aed92dfbe93c06a4fe49e80228c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e3d03aed92dfbe93c06a4fe49e80228c,
        type_description_1,
        par_args,
        par_kwargs,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_e3d03aed92dfbe93c06a4fe49e80228c == cache_frame_e3d03aed92dfbe93c06a4fe49e80228c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e3d03aed92dfbe93c06a4fe49e80228c);
        cache_frame_e3d03aed92dfbe93c06a4fe49e80228c = NULL;
    }

    assertFrameObject(frame_e3d03aed92dfbe93c06a4fe49e80228c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__27__unsupported_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kargs = python_pars[2];
    struct Nuitka_FrameObject *frame_2b4ecde98286050168389c3d3d3b7d14;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2b4ecde98286050168389c3d3d3b7d14 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2b4ecde98286050168389c3d3d3b7d14)) {
        Py_XDECREF(cache_frame_2b4ecde98286050168389c3d3d3b7d14);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2b4ecde98286050168389c3d3d3b7d14 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2b4ecde98286050168389c3d3d3b7d14 = MAKE_FUNCTION_FRAME(codeobj_2b4ecde98286050168389c3d3d3b7d14, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2b4ecde98286050168389c3d3d3b7d14->m_type_description == NULL);
    frame_2b4ecde98286050168389c3d3d3b7d14 = cache_frame_2b4ecde98286050168389c3d3d3b7d14;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2b4ecde98286050168389c3d3d3b7d14);
    assert(Py_REFCNT(frame_2b4ecde98286050168389c3d3d3b7d14) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[88];
        frame_2b4ecde98286050168389c3d3d3b7d14->m_frame.f_lineno = 499;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 499;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2b4ecde98286050168389c3d3d3b7d14, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2b4ecde98286050168389c3d3d3b7d14->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2b4ecde98286050168389c3d3d3b7d14, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2b4ecde98286050168389c3d3d3b7d14,
        type_description_1,
        par_self,
        par_args,
        par_kargs
    );


    // Release cached frame if used for exception.
    if (frame_2b4ecde98286050168389c3d3d3b7d14 == cache_frame_2b4ecde98286050168389c3d3d3b7d14) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2b4ecde98286050168389c3d3d3b7d14);
        cache_frame_2b4ecde98286050168389c3d3d3b7d14 = NULL;
    }

    assertFrameObject(frame_2b4ecde98286050168389c3d3d3b7d14);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kargs);
    Py_DECREF(par_kargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_gi$overrides$GObject$$$function__28__unsupported_data_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *par_kargs = python_pars[2];
    struct Nuitka_FrameObject *frame_c666416d83358466c729bced26958f5c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c666416d83358466c729bced26958f5c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c666416d83358466c729bced26958f5c)) {
        Py_XDECREF(cache_frame_c666416d83358466c729bced26958f5c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c666416d83358466c729bced26958f5c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c666416d83358466c729bced26958f5c = MAKE_FUNCTION_FRAME(codeobj_c666416d83358466c729bced26958f5c, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c666416d83358466c729bced26958f5c->m_type_description == NULL);
    frame_c666416d83358466c729bced26958f5c = cache_frame_c666416d83358466c729bced26958f5c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c666416d83358466c729bced26958f5c);
    assert(Py_REFCNT(frame_c666416d83358466c729bced26958f5c) == 2);

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[89];
        frame_c666416d83358466c729bced26958f5c->m_frame.f_lineno = 502;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 502;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c666416d83358466c729bced26958f5c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c666416d83358466c729bced26958f5c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c666416d83358466c729bced26958f5c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c666416d83358466c729bced26958f5c,
        type_description_1,
        par_self,
        par_args,
        par_kargs
    );


    // Release cached frame if used for exception.
    if (frame_c666416d83358466c729bced26958f5c == cache_frame_c666416d83358466c729bced26958f5c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c666416d83358466c729bced26958f5c);
        cache_frame_c666416d83358466c729bced26958f5c = NULL;
    }

    assertFrameObject(frame_c666416d83358466c729bced26958f5c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    CHECK_OBJECT(par_kargs);
    Py_DECREF(par_kargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_gi$overrides$GObject$$$function__29_freeze_notify(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_048a05839f66a87974844d1724f2b51b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_048a05839f66a87974844d1724f2b51b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_048a05839f66a87974844d1724f2b51b)) {
        Py_XDECREF(cache_frame_048a05839f66a87974844d1724f2b51b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_048a05839f66a87974844d1724f2b51b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_048a05839f66a87974844d1724f2b51b = MAKE_FUNCTION_FRAME(codeobj_048a05839f66a87974844d1724f2b51b, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_048a05839f66a87974844d1724f2b51b->m_type_description == NULL);
    frame_048a05839f66a87974844d1724f2b51b = cache_frame_048a05839f66a87974844d1724f2b51b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_048a05839f66a87974844d1724f2b51b);
    assert(Py_REFCNT(frame_048a05839f66a87974844d1724f2b51b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_gi$overrides$GObject, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        frame_048a05839f66a87974844d1724f2b51b->m_frame.f_lineno = 571;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[91]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_048a05839f66a87974844d1724f2b51b->m_frame.f_lineno = 572;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 572;
            type_description_1 = "oN";
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
        exception_tb = MAKE_TRACEBACK(frame_048a05839f66a87974844d1724f2b51b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_048a05839f66a87974844d1724f2b51b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_048a05839f66a87974844d1724f2b51b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_048a05839f66a87974844d1724f2b51b,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_048a05839f66a87974844d1724f2b51b == cache_frame_048a05839f66a87974844d1724f2b51b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_048a05839f66a87974844d1724f2b51b);
        cache_frame_048a05839f66a87974844d1724f2b51b = NULL;
    }

    assertFrameObject(frame_048a05839f66a87974844d1724f2b51b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__30_connect_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_detailed_signal = python_pars[1];
    struct Nuitka_CellObject *par_handler = Nuitka_Cell_New1(python_pars[2]);
    PyObject *par_data = python_pars[3];
    PyObject *par_kwargs = python_pars[4];
    PyObject *var_flags = NULL;
    PyObject *var_connect_func = NULL;
    PyObject *var_new_handler = NULL;
    struct Nuitka_FrameObject *frame_3c32b9dc0ba8069438ba85308a9168f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3c32b9dc0ba8069438ba85308a9168f9 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[94];
        tmp_default_value_1 = mod_consts[64];
        tmp_assign_source_1 = DICT_GET_ITEM1(tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_assign_source_1 == NULL) {
            tmp_assign_source_1 = tmp_default_value_1;
            Py_INCREF(tmp_assign_source_1);
        }
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_flags == NULL);
        var_flags = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_3c32b9dc0ba8069438ba85308a9168f9)) {
        Py_XDECREF(cache_frame_3c32b9dc0ba8069438ba85308a9168f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3c32b9dc0ba8069438ba85308a9168f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3c32b9dc0ba8069438ba85308a9168f9 = MAKE_FUNCTION_FRAME(codeobj_3c32b9dc0ba8069438ba85308a9168f9, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3c32b9dc0ba8069438ba85308a9168f9->m_type_description == NULL);
    frame_3c32b9dc0ba8069438ba85308a9168f9 = cache_frame_3c32b9dc0ba8069438ba85308a9168f9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3c32b9dc0ba8069438ba85308a9168f9);
    assert(Py_REFCNT(frame_3c32b9dc0ba8069438ba85308a9168f9) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_flags);
        tmp_bitand_expr_left_1 = var_flags;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "oocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[95]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "oocooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[96]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_bitand_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "oocooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 589;
            type_description_1 = "oocooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;
            type_description_1 = "oocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[97]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;
            type_description_1 = "oocooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[98]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 590;
            type_description_1 = "oocooooo";
            goto frame_exception_exit_1;
        }
        assert(var_connect_func == NULL);
        var_connect_func = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "oocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[97]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "oocooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[99]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 592;
            type_description_1 = "oocooooo";
            goto frame_exception_exit_1;
        }
        assert(var_connect_func == NULL);
        var_connect_func = tmp_assign_source_3;
    }
    branch_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_flags);
        tmp_bitand_expr_left_2 = var_flags;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_1 = "oocooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[95]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_1 = "oocooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[100]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_bitand_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_1 = "oocooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = BINARY_OPERATION_BITAND_NBOOL_OBJECT_OBJECT(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        Py_DECREF(tmp_bitand_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 594;
            type_description_1 = "oocooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_data);
        tmp_len_arg_1 = par_data;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        assert(!(tmp_cmp_expr_left_1 == NULL));
        tmp_cmp_expr_right_1 = 1;
        tmp_condition_result_3 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_list_element_1;
        tmp_mod_expr_left_1 = mod_consts[101];
        CHECK_OBJECT(par_data);
        tmp_list_element_1 = par_data;
        tmp_mod_expr_right_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_mod_expr_right_1, 0, tmp_list_element_1);
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_LIST(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 597;
            type_description_1 = "oocooooo";
            goto frame_exception_exit_1;
        }
        frame_3c32b9dc0ba8069438ba85308a9168f9->m_frame.f_lineno = 596;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 596;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oocooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_4;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_handler;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_4 = MAKE_FUNCTION_gi$overrides$GObject$$$function__30_connect_data$$$function__1_new_handler(tmp_closure_1);

        assert(var_new_handler == NULL);
        var_new_handler = tmp_assign_source_4;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(Nuitka_Cell_GET(par_handler));
        tmp_assign_source_5 = Nuitka_Cell_GET(par_handler);
        assert(var_new_handler == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_new_handler = tmp_assign_source_5;
    }
    branch_end_2:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(var_connect_func);
        tmp_dircall_arg1_1 = var_connect_func;
        CHECK_OBJECT(par_self);
        tmp_tuple_element_1 = par_self;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_detailed_signal);
        tmp_tuple_element_1 = par_detailed_signal;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_new_handler);
        tmp_tuple_element_1 = var_new_handler;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_data);
        tmp_dircall_arg3_1 = par_data;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__15_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 609;
            type_description_1 = "oocooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_3c32b9dc0ba8069438ba85308a9168f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3c32b9dc0ba8069438ba85308a9168f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3c32b9dc0ba8069438ba85308a9168f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3c32b9dc0ba8069438ba85308a9168f9,
        type_description_1,
        par_self,
        par_detailed_signal,
        par_handler,
        par_data,
        par_kwargs,
        var_flags,
        var_connect_func,
        var_new_handler
    );


    // Release cached frame if used for exception.
    if (frame_3c32b9dc0ba8069438ba85308a9168f9 == cache_frame_3c32b9dc0ba8069438ba85308a9168f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3c32b9dc0ba8069438ba85308a9168f9);
        cache_frame_3c32b9dc0ba8069438ba85308a9168f9 = NULL;
    }

    assertFrameObject(frame_3c32b9dc0ba8069438ba85308a9168f9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_flags);
    Py_DECREF(var_flags);
    var_flags = NULL;
    CHECK_OBJECT(var_connect_func);
    Py_DECREF(var_connect_func);
    var_connect_func = NULL;
    CHECK_OBJECT(var_new_handler);
    Py_DECREF(var_new_handler);
    var_new_handler = NULL;
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

    CHECK_OBJECT(var_flags);
    Py_DECREF(var_flags);
    var_flags = NULL;
    Py_XDECREF(var_connect_func);
    var_connect_func = NULL;
    Py_XDECREF(var_new_handler);
    var_new_handler = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_detailed_signal);
    Py_DECREF(par_detailed_signal);
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_detailed_signal);
    Py_DECREF(par_detailed_signal);
    CHECK_OBJECT(par_handler);
    Py_DECREF(par_handler);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__30_connect_data$$$function__1_new_handler(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_obj = python_pars[0];
    PyObject *par_args = python_pars[1];
    PyObject *var_swap = NULL;
    struct Nuitka_FrameObject *frame_35744a44bca3256d857918385780a7e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_35744a44bca3256d857918385780a7e5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_35744a44bca3256d857918385780a7e5)) {
        Py_XDECREF(cache_frame_35744a44bca3256d857918385780a7e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_35744a44bca3256d857918385780a7e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_35744a44bca3256d857918385780a7e5 = MAKE_FUNCTION_FRAME(codeobj_35744a44bca3256d857918385780a7e5, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_35744a44bca3256d857918385780a7e5->m_type_description == NULL);
    frame_35744a44bca3256d857918385780a7e5 = cache_frame_35744a44bca3256d857918385780a7e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_35744a44bca3256d857918385780a7e5);
    assert(Py_REFCNT(frame_35744a44bca3256d857918385780a7e5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_arg_1;
        CHECK_OBJECT(par_args);
        tmp_list_arg_1 = par_args;
        tmp_assign_source_1 = MAKE_LIST(tmp_list_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 602;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_args;
            assert(old != NULL);
            par_args = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_list_arg_value_1;
        CHECK_OBJECT(par_args);
        tmp_list_arg_value_1 = par_args;
        tmp_assign_source_2 = LIST_POP1(tmp_list_arg_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 603;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        assert(var_swap == NULL);
        var_swap = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(par_args);
        tmp_add_expr_left_1 = par_args;
        CHECK_OBJECT(par_obj);
        tmp_list_element_1 = par_obj;
        tmp_add_expr_right_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_add_expr_right_1, 0, tmp_list_element_1);
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LIST(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 604;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_args;
            assert(old != NULL);
            par_args = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 605;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(var_swap);
        tmp_tuple_element_1 = var_swap;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_args);
        tmp_dircall_arg3_1 = par_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__15_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 605;
            type_description_1 = "oooc";
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
        exception_tb = MAKE_TRACEBACK(frame_35744a44bca3256d857918385780a7e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_35744a44bca3256d857918385780a7e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_35744a44bca3256d857918385780a7e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_35744a44bca3256d857918385780a7e5,
        type_description_1,
        par_obj,
        par_args,
        var_swap,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_35744a44bca3256d857918385780a7e5 == cache_frame_35744a44bca3256d857918385780a7e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_35744a44bca3256d857918385780a7e5);
        cache_frame_35744a44bca3256d857918385780a7e5 = NULL;
    }

    assertFrameObject(frame_35744a44bca3256d857918385780a7e5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_args);
    Py_DECREF(par_args);
    par_args = NULL;
    CHECK_OBJECT(var_swap);
    Py_DECREF(var_swap);
    var_swap = NULL;
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

    Py_XDECREF(par_args);
    par_args = NULL;
    Py_XDECREF(var_swap);
    var_swap = NULL;
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
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__31_stop_emission(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_detailed_signal = python_pars[1];
    struct Nuitka_FrameObject *frame_de87065ff53cdee074a468404a4cd044;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_de87065ff53cdee074a468404a4cd044 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_de87065ff53cdee074a468404a4cd044)) {
        Py_XDECREF(cache_frame_de87065ff53cdee074a468404a4cd044);

#if _DEBUG_REFCOUNTS
        if (cache_frame_de87065ff53cdee074a468404a4cd044 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_de87065ff53cdee074a468404a4cd044 = MAKE_FUNCTION_FRAME(codeobj_de87065ff53cdee074a468404a4cd044, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_de87065ff53cdee074a468404a4cd044->m_type_description == NULL);
    frame_de87065ff53cdee074a468404a4cd044 = cache_frame_de87065ff53cdee074a468404a4cd044;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_de87065ff53cdee074a468404a4cd044);
    assert(Py_REFCNT(frame_de87065ff53cdee074a468404a4cd044) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 628;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 628;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[106]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 628;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[107]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 628;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 628;
            type_description_1 = "oo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[14]);
        frame_de87065ff53cdee074a468404a4cd044->m_frame.f_lineno = 628;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 628;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_detailed_signal);
        tmp_args_element_value_1 = par_detailed_signal;
        frame_de87065ff53cdee074a468404a4cd044->m_frame.f_lineno = 629;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[108], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 629;
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
        exception_tb = MAKE_TRACEBACK(frame_de87065ff53cdee074a468404a4cd044, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_de87065ff53cdee074a468404a4cd044->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_de87065ff53cdee074a468404a4cd044, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_de87065ff53cdee074a468404a4cd044,
        type_description_1,
        par_self,
        par_detailed_signal
    );


    // Release cached frame if used for exception.
    if (frame_de87065ff53cdee074a468404a4cd044 == cache_frame_de87065ff53cdee074a468404a4cd044) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_de87065ff53cdee074a468404a4cd044);
        cache_frame_de87065ff53cdee074a468404a4cd044 = NULL;
    }

    assertFrameObject(frame_de87065ff53cdee074a468404a4cd044);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_detailed_signal);
    Py_DECREF(par_detailed_signal);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_detailed_signal);
    Py_DECREF(par_detailed_signal);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__32___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1a0004e8406ac84dd1501d84baaed878;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a0004e8406ac84dd1501d84baaed878 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1a0004e8406ac84dd1501d84baaed878)) {
        Py_XDECREF(cache_frame_1a0004e8406ac84dd1501d84baaed878);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a0004e8406ac84dd1501d84baaed878 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a0004e8406ac84dd1501d84baaed878 = MAKE_FUNCTION_FRAME(codeobj_1a0004e8406ac84dd1501d84baaed878, module_gi$overrides$GObject, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a0004e8406ac84dd1501d84baaed878->m_type_description == NULL);
    frame_1a0004e8406ac84dd1501d84baaed878 = cache_frame_1a0004e8406ac84dd1501d84baaed878;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1a0004e8406ac84dd1501d84baaed878);
    assert(Py_REFCNT(frame_1a0004e8406ac84dd1501d84baaed878) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 641;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[11]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 641;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[110];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 643;
            type_description_1 = "o";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[14]);
        frame_1a0004e8406ac84dd1501d84baaed878->m_frame.f_lineno = 641;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 641;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1a0004e8406ac84dd1501d84baaed878, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a0004e8406ac84dd1501d84baaed878->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a0004e8406ac84dd1501d84baaed878, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a0004e8406ac84dd1501d84baaed878,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1a0004e8406ac84dd1501d84baaed878 == cache_frame_1a0004e8406ac84dd1501d84baaed878) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a0004e8406ac84dd1501d84baaed878);
        cache_frame_1a0004e8406ac84dd1501d84baaed878 = NULL;
    }

    assertFrameObject(frame_1a0004e8406ac84dd1501d84baaed878);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(par_self);
    tmp_return_value = par_self;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_gi$overrides$GObject$$$function__33_unbind(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_827593bc725a00530596d3aa1de414a3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_827593bc725a00530596d3aa1de414a3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_827593bc725a00530596d3aa1de414a3)) {
        Py_XDECREF(cache_frame_827593bc725a00530596d3aa1de414a3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_827593bc725a00530596d3aa1de414a3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_827593bc725a00530596d3aa1de414a3 = MAKE_FUNCTION_FRAME(codeobj_827593bc725a00530596d3aa1de414a3, module_gi$overrides$GObject, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_827593bc725a00530596d3aa1de414a3->m_type_description == NULL);
    frame_827593bc725a00530596d3aa1de414a3 = cache_frame_827593bc725a00530596d3aa1de414a3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_827593bc725a00530596d3aa1de414a3);
    assert(Py_REFCNT(frame_827593bc725a00530596d3aa1de414a3) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[112]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM(tmp_cmp_expr_left_1, 0, tmp_tuple_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;
                type_description_1 = "oN";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[113]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;
                type_description_1 = "oN";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_cmp_expr_left_1, 1, tmp_tuple_element_1);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[111]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;
                type_description_1 = "oN";
                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[114]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 648;
                type_description_1 = "oN";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_cmp_expr_left_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_cmp_expr_left_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_cmp_expr_right_1 = mod_consts[115];
        tmp_condition_result_1 = RICH_COMPARE_GE_NBOOL_TUPLE_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 648;
            type_description_1 = "oN";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_gi$overrides$GObject, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        frame_827593bc725a00530596d3aa1de414a3->m_frame.f_lineno = 649;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[117]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 649;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_attribute_value_1 = mod_consts[118];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_4, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 651;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[119];
        frame_827593bc725a00530596d3aa1de414a3->m_frame.f_lineno = 652;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 652;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oN";
        goto frame_exception_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT(par_self);
        tmp_setattr_target_1 = par_self;
        tmp_setattr_attr_1 = mod_consts[118];
        tmp_setattr_value_1 = Py_True;
        tmp_capi_result_1 = BUILTIN_SETATTR(tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 654;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_type_arg_value_2;
        PyObject *tmp_object_arg_value_2;
        PyObject *tmp_call_result_1;
        tmp_type_arg_value_2 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_type_arg_value_2 == NULL)) {
            tmp_type_arg_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_type_arg_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_2 = par_self;
        tmp_called_instance_2 = BUILTIN_SUPER2(moduledict_gi$overrides$GObject, tmp_type_arg_value_2, tmp_object_arg_value_2);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        frame_827593bc725a00530596d3aa1de414a3->m_frame.f_lineno = 655;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[117]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 655;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_827593bc725a00530596d3aa1de414a3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_827593bc725a00530596d3aa1de414a3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_827593bc725a00530596d3aa1de414a3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_827593bc725a00530596d3aa1de414a3,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_827593bc725a00530596d3aa1de414a3 == cache_frame_827593bc725a00530596d3aa1de414a3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_827593bc725a00530596d3aa1de414a3);
        cache_frame_827593bc725a00530596d3aa1de414a3 = NULL;
    }

    assertFrameObject(frame_827593bc725a00530596d3aa1de414a3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__10__validate_type_for_signal_method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__10__validate_type_for_signal_method,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fe4ebde65c0a34fded3100f6ef35a187,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__11_signal_list_ids() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__11_signal_list_ids,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0da5b0393c70916830445e51bc6f539b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__12_signal_list_names() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__12_signal_list_names,
        mod_consts[267],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9de987181725b861d29d6e4001220c47,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__13_signal_lookup() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__13_signal_lookup,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_635d74de40fb6f928f35c2dcd1d2f3bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__14_signal_query(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__14_signal_query,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_88b32384844927ec0b4be0d820d95fdc,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__15___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__15___init__,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[274],
#endif
        codeobj_b0e70d5e420caf07bf07f73a4fc33df4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__16___enter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        mod_consts[275],
#endif
        codeobj_515bae9a16a09b839f3447a8000265c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__17___exit__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__17___exit__,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        mod_consts[276],
#endif
        codeobj_e0db56afc2ce56b6fb06b5fd8951e765,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__18_signal_handler_block() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__18_signal_handler_block,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3d62d2f1d61852dcc9098ec753d76b69,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        mod_consts[75],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__19_signal_parse_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__19_signal_parse_name,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_da2779a14aeda7c6ad4732d3a114de38,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        mod_consts[79],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__1___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__1___init__,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[250],
#endif
        codeobj_4113db0e480af519afa3dd276eb93826,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__20_remove_emission_hook() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__20_remove_emission_hook,
        mod_consts[279],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_169f4a84066c15d3d74aaea4a28a003f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__21_signal_accumulator_first_wins(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__21_signal_accumulator_first_wins,
        mod_consts[281],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_25dedcd63964717ed1491815eb9d5e5a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__22_signal_accumulator_true_handled(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__22_signal_accumulator_true_handled,
        mod_consts[283],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0711a2743d8395c8a1de8de6f6c77ca4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__23___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__23___init__,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[287],
#endif
        codeobj_6b25416baff135050e536231a23a252f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__24___enter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        mod_consts[288],
#endif
        codeobj_96d3d1829303127c9b99c27e2c7481ca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__25___exit__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__25___exit__,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        mod_consts[289],
#endif
        codeobj_c674af48880f3ae35bd4b22d009d9227,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__26__signalmethod() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__26__signalmethod,
        mod_consts[290],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6fa7ae2c36b721e01abfeab1fc1ef05e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__26__signalmethod$$$function__1_meth(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__26__signalmethod$$$function__1_meth,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[86],
#endif
        codeobj_e3d03aed92dfbe93c06a4fe49e80228c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__27__unsupported_method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__27__unsupported_method,
        mod_consts[291],
#if PYTHON_VERSION >= 0x300
        mod_consts[292],
#endif
        codeobj_2b4ecde98286050168389c3d3d3b7d14,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__28__unsupported_data_method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__28__unsupported_data_method,
        mod_consts[293],
#if PYTHON_VERSION >= 0x300
        mod_consts[294],
#endif
        codeobj_c666416d83358466c729bced26958f5c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__29_freeze_notify() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__29_freeze_notify,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        mod_consts[332],
#endif
        codeobj_048a05839f66a87974844d1724f2b51b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        mod_consts[93],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__2___g_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__2___g_type,
        mod_consts[252],
#if PYTHON_VERSION >= 0x300
        mod_consts[253],
#endif
        codeobj_064a459beefed80b4063ece54bdb3531,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__30_connect_data() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__30_connect_data,
        mod_consts[333],
#if PYTHON_VERSION >= 0x300
        mod_consts[334],
#endif
        codeobj_3c32b9dc0ba8069438ba85308a9168f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        mod_consts[104],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__30_connect_data$$$function__1_new_handler(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__30_connect_data$$$function__1_new_handler,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        mod_consts[103],
#endif
        codeobj_35744a44bca3256d857918385780a7e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__31_stop_emission() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__31_stop_emission,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        mod_consts[343],
#endif
        codeobj_de87065ff53cdee074a468404a4cd044,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        mod_consts[109],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__32___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__32___call__,
        mod_consts[345],
#if PYTHON_VERSION >= 0x300
        mod_consts[346],
#endif
        codeobj_1a0004e8406ac84dd1501d84baaed878,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__33_unbind() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__33_unbind,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        mod_consts[347],
#endif
        codeobj_827593bc725a00530596d3aa1de414a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__3_set_boxed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__3_set_boxed,
        mod_consts[254],
#if PYTHON_VERSION >= 0x300
        mod_consts[255],
#endif
        codeobj_b7b5038ff34db3a84e766f54696a2542,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__4_get_boxed() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__4_get_boxed,
        mod_consts[256],
#if PYTHON_VERSION >= 0x300
        mod_consts[257],
#endif
        codeobj_19b14a6e8ba394e58ed23542af44b0cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__5_set_value() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__5_set_value,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[258],
#endif
        codeobj_62550dc25aa078bff59298c9b641874d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__6_get_value() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__6_get_value,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[259],
#endif
        codeobj_a94c8bb5eb07cc020d82c34e87b0b6e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__7___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__7___repr__,
        mod_consts[260],
#if PYTHON_VERSION >= 0x300
        mod_consts[261],
#endif
        codeobj_0dd24062db6bba6953d825730f729517,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__8_type_from_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__8_type_from_name,
        mod_consts[48],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_17705b4bcdd68b2adb12eb2eadb4c6f8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_gi$overrides$GObject$$$function__9_type_parent() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_gi$overrides$GObject$$$function__9_type_parent,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1a7a09ac225fdb94a1356dfd815a021b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_gi$overrides$GObject,
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

function_impl_code functable_gi$overrides$GObject[] = {
    impl_gi$overrides$GObject$$$function__26__signalmethod$$$function__1_meth,
    impl_gi$overrides$GObject$$$function__30_connect_data$$$function__1_new_handler,
    impl_gi$overrides$GObject$$$function__1___init__,
    impl_gi$overrides$GObject$$$function__2___g_type,
    impl_gi$overrides$GObject$$$function__3_set_boxed,
    impl_gi$overrides$GObject$$$function__4_get_boxed,
    impl_gi$overrides$GObject$$$function__5_set_value,
    impl_gi$overrides$GObject$$$function__6_get_value,
    impl_gi$overrides$GObject$$$function__7___repr__,
    impl_gi$overrides$GObject$$$function__8_type_from_name,
    impl_gi$overrides$GObject$$$function__9_type_parent,
    impl_gi$overrides$GObject$$$function__10__validate_type_for_signal_method,
    impl_gi$overrides$GObject$$$function__11_signal_list_ids,
    impl_gi$overrides$GObject$$$function__12_signal_list_names,
    impl_gi$overrides$GObject$$$function__13_signal_lookup,
    impl_gi$overrides$GObject$$$function__14_signal_query,
    impl_gi$overrides$GObject$$$function__15___init__,
    NULL,
    impl_gi$overrides$GObject$$$function__17___exit__,
    impl_gi$overrides$GObject$$$function__18_signal_handler_block,
    impl_gi$overrides$GObject$$$function__19_signal_parse_name,
    impl_gi$overrides$GObject$$$function__20_remove_emission_hook,
    impl_gi$overrides$GObject$$$function__21_signal_accumulator_first_wins,
    impl_gi$overrides$GObject$$$function__22_signal_accumulator_true_handled,
    impl_gi$overrides$GObject$$$function__23___init__,
    NULL,
    impl_gi$overrides$GObject$$$function__25___exit__,
    impl_gi$overrides$GObject$$$function__26__signalmethod,
    impl_gi$overrides$GObject$$$function__27__unsupported_method,
    impl_gi$overrides$GObject$$$function__28__unsupported_data_method,
    impl_gi$overrides$GObject$$$function__29_freeze_notify,
    impl_gi$overrides$GObject$$$function__30_connect_data,
    impl_gi$overrides$GObject$$$function__31_stop_emission,
    impl_gi$overrides$GObject$$$function__32___call__,
    impl_gi$overrides$GObject$$$function__33_unbind,
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

    function_impl_code *current = functable_gi$overrides$GObject;
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

    if (offset > sizeof(functable_gi$overrides$GObject) || offset < 0) {
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
        functable_gi$overrides$GObject[offset],
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
        module_gi$overrides$GObject,
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
PyObject *modulecode_gi$overrides$GObject(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("gi.overrides.GObject");

    // Store the module for future use.
    module_gi$overrides$GObject = module;

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
        PRINT_STRING("gi.overrides.GObject: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("gi.overrides.GObject: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("gi.overrides.GObject: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initgi$overrides$GObject\n");

    moduledict_gi$overrides$GObject = MODULE_DICT(module_gi$overrides$GObject);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_gi$overrides$GObject,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_gi$overrides$GObject,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[383]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_gi$overrides$GObject,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_gi$overrides$GObject,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_gi$overrides$GObject,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_gi$overrides$GObject);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_gi$overrides$GObject);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    PyObject *tmp_for_loop_7__for_iterator = NULL;
    PyObject *tmp_for_loop_7__iter_value = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_e46131bc947d71be765957b1e7d78c16;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *tmp_inplace_orig;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_gi$overrides$GObject$$$class__1_Value_202 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_75bee02e5534d21238e207093945d7ed_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_gi$overrides$GObject$$$class__2__HandlerBlockManager_383 = NULL;
    struct Nuitka_FrameObject *frame_cdb249fa25e41939c03a7dfc9a629967_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *locals_gi$overrides$GObject$$$class__3__FreezeNotifyManager_476 = NULL;
    struct Nuitka_FrameObject *frame_417c09d970cd9f4035f9de4d6b180054_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *locals_gi$overrides$GObject$$$class__4_Object_497 = NULL;
    struct Nuitka_FrameObject *frame_43cdea03d3b7cdfa5e43adad212837e4_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *locals_gi$overrides$GObject$$$class__5_Binding_639 = NULL;
    struct Nuitka_FrameObject *frame_f1b67bf27f847bc00c34a0bcebfcf194_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[120];
        UPDATE_STRING_DICT0(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_2);
    }
    frame_e46131bc947d71be765957b1e7d78c16 = MAKE_MODULE_FRAME(codeobj_e46131bc947d71be765957b1e7d78c16, module_gi$overrides$GObject);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e46131bc947d71be765957b1e7d78c16);
    assert(Py_REFCNT(frame_e46131bc947d71be765957b1e7d78c16) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[120];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[123], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[124], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_FUNCTOOLS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[10];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_gi$overrides$GObject;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[64];
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 25;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[126];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_gi$overrides$GObject;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[127];
        tmp_level_value_2 = mod_consts[64];
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 26;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_gi$overrides$GObject,
                mod_consts[128],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[128]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[129];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_gi$overrides$GObject;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[64];
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 28;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[131];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_gi$overrides$GObject;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[132];
        tmp_level_value_4 = mod_consts[64];
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 29;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_gi$overrides$GObject,
                mod_consts[133],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[133]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_gi$overrides$GObject,
                mod_consts[134],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[134]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_10);
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
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[135];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_gi$overrides$GObject;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[136];
        tmp_level_value_5 = mod_consts[64];
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 30;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_gi$overrides$GObject,
                mod_consts[111],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[111]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[130];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_gi$overrides$GObject;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[137];
        tmp_level_value_6 = mod_consts[64];
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 31;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_gi$overrides$GObject,
                mod_consts[13],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[13]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[130];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_gi$overrides$GObject;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[138];
        tmp_level_value_7 = mod_consts[64];
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 32;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_gi$overrides$GObject,
                mod_consts[139],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[139]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[130];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_gi$overrides$GObject;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[141];
        tmp_level_value_8 = mod_consts[64];
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 33;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_gi$overrides$GObject,
                mod_consts[142],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[142]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[130];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_gi$overrides$GObject;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[144];
        tmp_level_value_9 = mod_consts[64];
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 34;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_gi$overrides$GObject,
                mod_consts[5],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[5]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[130]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[145]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 37;
        tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[146],
            PyTuple_GET_ITEM(mod_consts[147], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_LIST_EMPTY(0);
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[130];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_gi$overrides$GObject;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[149];
        tmp_level_value_10 = mod_consts[64];
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 42;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_gi$overrides$GObject,
                mod_consts[150],
                mod_consts[64]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[150]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_assign_source_19 == NULL)) {
            tmp_assign_source_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
        }

        assert(!(tmp_assign_source_19 == NULL));
        UPDATE_STRING_DICT0(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[152];
        tmp_assign_source_20 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_assign_source_20 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_20;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_21 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                exception_lineno = 47;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_22 = tmp_for_loop_1__iter_value;
        UPDATE_STRING_DICT0(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_22);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_getattr_target_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_getattr_target_1 == NULL)) {
            tmp_getattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_2;
        }
        tmp_getattr_attr_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_getattr_attr_1 == NULL)) {
            tmp_getattr_attr_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_getattr_attr_1 == NULL));
        tmp_ass_subvalue_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, NULL);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_2;
        }
        tmp_ass_subscribed_1 = (PyObject *)moduledict_gi$overrides$GObject;
        tmp_ass_subscript_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_ass_subscript_1 == NULL)) {
            tmp_ass_subscript_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_ass_subscript_1 == NULL));
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = mod_consts[97];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_2;
        }
        tmp_add_expr_left_1 = mod_consts[153];
        tmp_add_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_add_expr_right_1 == NULL)) {
            tmp_add_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_2;
        }
        tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_2;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 58;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[154]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_2;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 59;

            goto try_except_handler_2;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 59;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 47;

        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = mod_consts[155];
        tmp_assign_source_23 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        assert(!(tmp_assign_source_23 == NULL));
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_23;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_24 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_24 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                exception_lineno = 62;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_25 = tmp_for_loop_2__iter_value;
        UPDATE_STRING_DICT0(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_25);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_4;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 79;
        tmp_assign_source_26 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[156]);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_with_1__source;
            tmp_with_1__source = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_3 = tmp_with_1__source;
        tmp_called_value_3 = LOOKUP_SPECIAL(tmp_expression_value_3, mod_consts[157]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_4;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 79;
        tmp_assign_source_27 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_with_1__enter;
            tmp_with_1__enter = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_4 = tmp_with_1__source;
        tmp_assign_source_28 = LOOKUP_SPECIAL(tmp_expression_value_4, mod_consts[158]);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_with_1__exit;
            tmp_with_1__exit = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_29;
        tmp_assign_source_29 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_29;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_6;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[159]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_6;
        }
        tmp_args_element_value_5 = mod_consts[160];
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 81;

            goto try_except_handler_6;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;

            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_getattr_target_2 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_getattr_target_2 == NULL)) {
            tmp_getattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_getattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_6;
        }
        tmp_getattr_attr_2 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_getattr_attr_2 == NULL)) {
            tmp_getattr_attr_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_getattr_attr_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_6;
        }
        tmp_ass_subvalue_2 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, NULL);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_6;
        }
        tmp_ass_subscribed_2 = (PyObject *)moduledict_gi$overrides$GObject;
        tmp_ass_subscript_2 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_ass_subscript_2 == NULL)) {
            tmp_ass_subscript_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_ass_subscript_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 82;

            goto try_except_handler_6;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_6;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_e46131bc947d71be765957b1e7d78c16, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_e46131bc947d71be765957b1e7d78c16, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
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
    {
        nuitka_bool tmp_assign_source_30;
        tmp_assign_source_30 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        tmp_args_element_value_7 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_8 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_9 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 79;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e46131bc947d71be765957b1e7d78c16->m_frame) frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_7;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 79;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e46131bc947d71be765957b1e7d78c16->m_frame) frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_7;
    branch_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_3;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 79;
        tmp_call_result_4 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[161]);

        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_5);
            Py_XDECREF(exception_keeper_value_5);
            Py_XDECREF(exception_keeper_tb_5);

            exception_lineno = 79;

            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_4;
    // End of try:
    try_end_5:;
    {
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 79;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_7, mod_consts[161]);

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_4:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_3;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_3;
        }
        tmp_args_element_value_10 = mod_consts[97];
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_3;
        }
        tmp_add_expr_left_2 = mod_consts[153];
        tmp_add_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_add_expr_right_2 == NULL)) {
            tmp_add_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_3;
        }
        tmp_args_element_value_12 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_3;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 83;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_13;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_3;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[154]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_3;
        }
        tmp_args_element_value_13 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_args_element_value_13 == NULL)) {
            tmp_args_element_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 84;

            goto try_except_handler_3;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 84;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;

            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_7);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 62;

        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_iter_arg_3;
        tmp_iter_arg_3 = mod_consts[162];
        tmp_assign_source_31 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
        assert(!(tmp_assign_source_31 == NULL));
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_31;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_32 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_32 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                exception_lineno = 87;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_32;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_33 = tmp_for_loop_3__iter_value;
        UPDATE_STRING_DICT0(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_expression_value_8 == NULL));
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[163]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_8;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 90;
        tmp_expression_value_7 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_10, mod_consts[164]);

        Py_DECREF(tmp_called_value_10);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_8;
        }
        tmp_subscript_value_1 = mod_consts[165];
        tmp_assign_source_34 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_1, -1);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_34);
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_getattr_target_3 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_getattr_target_3 == NULL)) {
            tmp_getattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_getattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_8;
        }
        tmp_getattr_attr_3 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_getattr_attr_3 == NULL)) {
            tmp_getattr_attr_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        assert(!(tmp_getattr_attr_3 == NULL));
        tmp_ass_subvalue_3 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, NULL);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_8;
        }
        tmp_ass_subscribed_3 = (PyObject *)moduledict_gi$overrides$GObject;
        tmp_ass_subscript_3 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_ass_subscript_3 == NULL)) {
            tmp_ass_subscript_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_ass_subscript_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 91;

            goto try_except_handler_8;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto try_except_handler_8;
        }
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_8;
        }
        tmp_args_element_value_14 = mod_consts[97];
        tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_args_element_value_15 == NULL)) {
            tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_8;
        }
        tmp_add_expr_left_3 = mod_consts[153];
        tmp_add_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_add_expr_right_3 == NULL)) {
            tmp_add_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_add_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_8;
        }
        tmp_args_element_value_16 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_8;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 92;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_args_element_value_16);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_17;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_8;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[154]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_8;
        }
        tmp_args_element_value_17 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_args_element_value_17 == NULL)) {
            tmp_args_element_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 93;

            goto try_except_handler_8;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 93;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_9);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 87;

        goto try_except_handler_8;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_iter_arg_4;
        tmp_iter_arg_4 = mod_consts[167];
        tmp_assign_source_35 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_4);
        assert(!(tmp_assign_source_35 == NULL));
        assert(tmp_for_loop_4__for_iterator == NULL);
        tmp_for_loop_4__for_iterator = tmp_assign_source_35;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_36 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_36 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                exception_lineno = 97;
                goto try_except_handler_9;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_assign_source_37 = tmp_for_loop_4__iter_value;
        UPDATE_STRING_DICT0(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_expression_value_11 == NULL));
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[163]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_9;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 101;
        tmp_expression_value_10 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_13, mod_consts[164]);

        Py_DECREF(tmp_called_value_13);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_9;
        }
        tmp_subscript_value_2 = mod_consts[165];
        tmp_assign_source_38 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_2, -1);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_38);
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_getattr_target_4 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_getattr_target_4 == NULL)) {
            tmp_getattr_target_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_getattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_9;
        }
        tmp_getattr_attr_4 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_getattr_attr_4 == NULL)) {
            tmp_getattr_attr_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        assert(!(tmp_getattr_attr_4 == NULL));
        tmp_ass_subvalue_4 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, NULL);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_9;
        }
        tmp_ass_subscribed_4 = (PyObject *)moduledict_gi$overrides$GObject;
        tmp_ass_subscript_4 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_ass_subscript_4 == NULL)) {
            tmp_ass_subscript_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_ass_subscript_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 102;

            goto try_except_handler_9;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;

            goto try_except_handler_9;
        }
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_9;
        }
        tmp_args_element_value_18 = mod_consts[97];
        tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_args_element_value_19 == NULL)) {
            tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_9;
        }
        tmp_add_expr_left_4 = mod_consts[153];
        tmp_add_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_add_expr_right_4 == NULL)) {
            tmp_add_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_add_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_9;
        }
        tmp_args_element_value_20 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_9;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_14, call_args);
        }

        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;

            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_21;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_9;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[154]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_9;
        }
        tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_args_element_value_21 == NULL)) {
            tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 104;

            goto try_except_handler_9;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 104;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_15);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_9;
        }
        Py_DECREF(tmp_call_result_11);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 97;

        goto try_except_handler_9;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 107;
        tmp_assign_source_39 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[168], 0)
        );

        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 108;
        tmp_assign_source_40 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[169], 0)
        );

        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_instance_5;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 109;
        tmp_assign_source_41 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[171], 0)
        );

        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_called_instance_6;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 110;
        tmp_assign_source_42 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_6,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[173], 0)
        );

        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_instance_7;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 111;
        tmp_assign_source_43 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[174], 0)
        );

        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_instance_8;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 112;
        tmp_assign_source_44 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_8,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[175], 0)
        );

        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_instance_9;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 113;
        tmp_assign_source_45 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_9,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[177], 0)
        );

        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_instance_10;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 114;
        tmp_assign_source_46 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_10,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[179], 0)
        );

        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_called_instance_11;
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 115;
        tmp_assign_source_47 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_11,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[181], 0)
        );

        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_instance_12;
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 116;
        tmp_assign_source_48 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_12,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[183], 0)
        );

        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_instance_13;
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 117;
        tmp_assign_source_49 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_13,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[185], 0)
        );

        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_called_instance_14;
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 118;
        tmp_assign_source_50 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_14,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[187], 0)
        );

        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_instance_15;
        tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_15 == NULL)) {
            tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 119;
        tmp_assign_source_51 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_15,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[189], 0)
        );

        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_called_instance_16;
        tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_16 == NULL)) {
            tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 120;
        tmp_assign_source_52 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_16,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[190], 0)
        );

        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_called_instance_17;
        tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_17 == NULL)) {
            tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 121;
        tmp_assign_source_53 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_17,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[191], 0)
        );

        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_instance_18;
        tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_18 == NULL)) {
            tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 122;
        tmp_assign_source_54 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_18,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[193], 0)
        );

        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_instance_19;
        tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_19 == NULL)) {
            tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 123;
        tmp_assign_source_55 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_19,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[195], 0)
        );

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_instance_20;
        tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_20 == NULL)) {
            tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 124;
        tmp_assign_source_56 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_20,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[196], 0)
        );

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_instance_21;
        tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_21 == NULL)) {
            tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 125;
        tmp_assign_source_57 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_21,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[197], 0)
        );

        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_instance_22;
        tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_22 == NULL)) {
            tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 126;
        tmp_assign_source_58 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_22,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[198], 0)
        );

        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_instance_23;
        tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_23 == NULL)) {
            tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 127;
        tmp_assign_source_59 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_23,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[147], 0)
        );

        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_instance_24;
        tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_24 == NULL)) {
            tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 128;
        tmp_assign_source_60 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_24,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[200], 0)
        );

        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_instance_25;
        tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_25 == NULL)) {
            tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 129;
        tmp_assign_source_61 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_25,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[202], 0)
        );

        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_instance_26;
        tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_26 == NULL)) {
            tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 130;
        tmp_assign_source_62 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_26,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[203], 0)
        );

        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_instance_27;
        tmp_called_instance_27 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_27 == NULL)) {
            tmp_called_instance_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 131;
        tmp_assign_source_63 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_27,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[205], 0)
        );

        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_instance_28;
        tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_28 == NULL)) {
            tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 132;
        tmp_assign_source_64 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_28,
            mod_consts[48],
            PyTuple_GET_ITEM(mod_consts[206], 0)
        );

        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[1]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[52]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[180]);

        if (unlikely(tmp_assign_source_66 == NULL)) {
            tmp_assign_source_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
        }

        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        tmp_iadd_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_iadd_expr_left_1 == NULL)) {
            tmp_iadd_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_iadd_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_1 = LIST_COPY(mod_consts[210]);
        tmp_inplace_orig = tmp_iadd_expr_left_1;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LIST(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_67 = tmp_iadd_expr_left_1;
        if (tmp_inplace_orig != tmp_assign_source_67) {
            UPDATE_STRING_DICT_INPLACE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_67);
        }
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_iter_arg_5;
        tmp_iter_arg_5 = mod_consts[211];
        tmp_assign_source_68 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_5);
        assert(!(tmp_assign_source_68 == NULL));
        assert(tmp_for_loop_5__for_iterator == NULL);
        tmp_for_loop_5__for_iterator = tmp_assign_source_68;
    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_69;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_5 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_69 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_69 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                exception_lineno = 145;
                goto try_except_handler_10;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_69;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_70;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_assign_source_70 = tmp_for_loop_5__iter_value;
        UPDATE_STRING_DICT0(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_70);
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_getattr_target_5;
        PyObject *tmp_getattr_attr_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        tmp_getattr_target_5 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_getattr_target_5 == NULL)) {
            tmp_getattr_target_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_getattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_10;
        }
        tmp_getattr_attr_5 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_getattr_attr_5 == NULL)) {
            tmp_getattr_attr_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_getattr_attr_5 == NULL));
        tmp_ass_subvalue_5 = BUILTIN_GETATTR(tmp_getattr_target_5, tmp_getattr_attr_5, NULL);
        if (tmp_ass_subvalue_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_10;
        }
        tmp_ass_subscribed_5 = (PyObject *)moduledict_gi$overrides$GObject;
        tmp_ass_subscript_5 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_ass_subscript_5 == NULL)) {
            tmp_ass_subscript_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_ass_subscript_5 == NULL));
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto try_except_handler_10;
        }
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto try_except_handler_10;
        }
        tmp_args_element_value_22 = mod_consts[97];
        tmp_args_element_value_23 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_args_element_value_23 == NULL)) {
            tmp_args_element_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto try_except_handler_10;
        }
        tmp_add_expr_left_5 = mod_consts[153];
        tmp_add_expr_right_5 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_add_expr_right_5 == NULL)) {
            tmp_add_expr_right_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_add_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto try_except_handler_10;
        }
        tmp_args_element_value_24 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto try_except_handler_10;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 147;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_16, call_args);
        }

        Py_DECREF(tmp_args_element_value_24);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_25;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_10;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[154]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_10;
        }
        tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_args_element_value_25 == NULL)) {
            tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 148;

            goto try_except_handler_10;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 148;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_25);
        Py_DECREF(tmp_called_value_17);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_13);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 145;

        goto try_except_handler_10;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_iter_arg_6;
        tmp_iter_arg_6 = mod_consts[212];
        tmp_assign_source_71 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_6);
        assert(!(tmp_assign_source_71 == NULL));
        assert(tmp_for_loop_6__for_iterator == NULL);
        tmp_for_loop_6__for_iterator = tmp_assign_source_71;
    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_72;
        CHECK_OBJECT(tmp_for_loop_6__for_iterator);
        tmp_next_source_6 = tmp_for_loop_6__for_iterator;
        tmp_assign_source_72 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_72 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                exception_lineno = 152;
                goto try_except_handler_11;
            }
        }

        {
            PyObject *old = tmp_for_loop_6__iter_value;
            tmp_for_loop_6__iter_value = tmp_assign_source_72;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_73;
        CHECK_OBJECT(tmp_for_loop_6__iter_value);
        tmp_assign_source_73 = tmp_for_loop_6__iter_value;
        UPDATE_STRING_DICT0(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_expression_value_17 == NULL));
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[163]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_11;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 154;
        tmp_expression_value_16 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_18, mod_consts[164]);

        Py_DECREF(tmp_called_value_18);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_11;
        }
        tmp_subscript_value_3 = mod_consts[165];
        tmp_assign_source_74 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_3, -1);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_11;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_74);
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_getattr_target_6;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_getattr_attr_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_11;
        }
        tmp_getattr_target_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[213]);
        if (tmp_getattr_target_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_11;
        }
        tmp_getattr_attr_6 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_getattr_attr_6 == NULL)) {
            tmp_getattr_attr_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_getattr_attr_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_getattr_target_6);

            exception_lineno = 155;

            goto try_except_handler_11;
        }
        tmp_ass_subvalue_6 = BUILTIN_GETATTR(tmp_getattr_target_6, tmp_getattr_attr_6, NULL);
        Py_DECREF(tmp_getattr_target_6);
        if (tmp_ass_subvalue_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_11;
        }
        tmp_ass_subscribed_6 = (PyObject *)moduledict_gi$overrides$GObject;
        tmp_ass_subscript_6 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_ass_subscript_6 == NULL)) {
            tmp_ass_subscript_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_ass_subscript_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_6);

            exception_lineno = 155;

            goto try_except_handler_11;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto try_except_handler_11;
        }
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_11;
        }
        tmp_args_element_value_26 = mod_consts[97];
        tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_args_element_value_27 == NULL)) {
            tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_11;
        }
        tmp_add_expr_left_6 = mod_consts[214];
        tmp_add_expr_right_6 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_add_expr_right_6 == NULL)) {
            tmp_add_expr_right_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_add_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_11;
        }
        tmp_args_element_value_28 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_11;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = {tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_19, call_args);
        }

        Py_DECREF(tmp_args_element_value_28);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_29;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_11;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[154]);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_11;
        }
        tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_args_element_value_29 == NULL)) {
            tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 157;

            goto try_except_handler_11;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 157;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_29);
        Py_DECREF(tmp_called_value_20);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_15);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 152;

        goto try_except_handler_11;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[213]);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[215]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_bitor_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[213]);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[216]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_bitor_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_75 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_left_1);
        Py_DECREF(tmp_bitor_expr_right_1);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_75);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_call_result_16;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 163;
        tmp_call_result_16 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_21, mod_consts[218]);

        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_17;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[154]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 164;
        tmp_call_result_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_22, mod_consts[219]);

        Py_DECREF(tmp_called_value_22);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_iter_arg_7;
        tmp_iter_arg_7 = mod_consts[220];
        tmp_assign_source_76 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_7);
        assert(!(tmp_assign_source_76 == NULL));
        assert(tmp_for_loop_7__for_iterator == NULL);
        tmp_for_loop_7__for_iterator = tmp_assign_source_76;
    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_77;
        CHECK_OBJECT(tmp_for_loop_7__for_iterator);
        tmp_next_source_7 = tmp_for_loop_7__for_iterator;
        tmp_assign_source_77 = ITERATOR_NEXT(tmp_next_source_7);
        if (tmp_assign_source_77 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_7;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                exception_lineno = 168;
                goto try_except_handler_12;
            }
        }

        {
            PyObject *old = tmp_for_loop_7__iter_value;
            tmp_for_loop_7__iter_value = tmp_assign_source_77;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_78;
        CHECK_OBJECT(tmp_for_loop_7__iter_value);
        tmp_assign_source_78 = tmp_for_loop_7__iter_value;
        UPDATE_STRING_DICT0(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_4;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        assert(!(tmp_expression_value_26 == NULL));
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[163]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_12;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 171;
        tmp_expression_value_25 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_23, mod_consts[164]);

        Py_DECREF(tmp_called_value_23);
        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_12;
        }
        tmp_subscript_value_4 = mod_consts[165];
        tmp_assign_source_79 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_25, tmp_subscript_value_4, -1);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_12;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_79);
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_getattr_target_7;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_getattr_attr_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_12;
        }
        tmp_getattr_target_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[221]);
        if (tmp_getattr_target_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_12;
        }
        tmp_getattr_attr_7 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_getattr_attr_7 == NULL)) {
            tmp_getattr_attr_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_getattr_attr_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_getattr_target_7);

            exception_lineno = 172;

            goto try_except_handler_12;
        }
        tmp_ass_subvalue_7 = BUILTIN_GETATTR(tmp_getattr_target_7, tmp_getattr_attr_7, NULL);
        Py_DECREF(tmp_getattr_target_7);
        if (tmp_ass_subvalue_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_12;
        }
        tmp_ass_subscribed_7 = (PyObject *)moduledict_gi$overrides$GObject;
        tmp_ass_subscript_7 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_ass_subscript_7 == NULL)) {
            tmp_ass_subscript_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_ass_subscript_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_7);

            exception_lineno = 172;

            goto try_except_handler_12;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        Py_DECREF(tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto try_except_handler_12;
        }
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_12;
        }
        tmp_args_element_value_30 = mod_consts[97];
        tmp_args_element_value_31 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_args_element_value_31 == NULL)) {
            tmp_args_element_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_12;
        }
        tmp_add_expr_left_7 = mod_consts[222];
        tmp_add_expr_right_7 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_add_expr_right_7 == NULL)) {
            tmp_add_expr_right_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_add_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_12;
        }
        tmp_args_element_value_32 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_12;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = {tmp_args_element_value_30, tmp_args_element_value_31, tmp_args_element_value_32};
            tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_24, call_args);
        }

        Py_DECREF(tmp_args_element_value_32);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_33;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_12;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[154]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_12;
        }
        tmp_args_element_value_33 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_args_element_value_33 == NULL)) {
            tmp_args_element_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 174;

            goto try_except_handler_12;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 174;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_33);
        Py_DECREF(tmp_called_value_25);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_12;
        }
        Py_DECREF(tmp_call_result_19);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 168;

        goto try_except_handler_12;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_expression_value_29;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[223]);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_expression_value_30;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[224]);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_expression_value_31;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[225]);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_expression_value_32;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[226]);
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_expression_value_33;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[97]);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_expression_value_34;
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[227]);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_expression_value_35;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[228]);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_expression_value_36;
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[229]);
        if (tmp_assign_source_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_expression_value_37;
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[230]);
        if (tmp_assign_source_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_expression_value_38;
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[231]);
        if (tmp_assign_source_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        tmp_iadd_expr_left_2 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_iadd_expr_left_2 == NULL)) {
            tmp_iadd_expr_left_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_iadd_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_2 = MAKE_LIST10(mod_consts[232]);
        tmp_inplace_orig = tmp_iadd_expr_left_2;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LIST(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_90 = tmp_iadd_expr_left_2;
        if (tmp_inplace_orig != tmp_assign_source_90) {
            UPDATE_STRING_DICT_INPLACE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_90);
        }
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = DICT_COPY(mod_consts[233]);
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_expression_value_39;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[235]);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_expression_value_40;
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_93 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[236]);
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_expression_value_41;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[237]);
        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_expression_value_42;
        tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_expression_value_42 == NULL)) {
            tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_95 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[238]);
        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[238], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_expression_value_43;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[239]);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        tmp_iadd_expr_left_3 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_iadd_expr_left_3 == NULL)) {
            tmp_iadd_expr_left_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_iadd_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_3 = MAKE_LIST6(mod_consts[240]);
        tmp_inplace_orig = tmp_iadd_expr_left_3;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LIST(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_97 = tmp_iadd_expr_left_3;
        if (tmp_inplace_orig != tmp_assign_source_97) {
            UPDATE_STRING_DICT_INPLACE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_97);
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_44;
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_13;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[1]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_13;
        }
        tmp_assign_source_98 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_98, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_98;
    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_99 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_99;
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_100;
    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_13;
        }
        tmp_condition_result_5 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_45 = tmp_class_creation_1__bases;
        tmp_subscript_value_5 = mod_consts[64];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_45, tmp_subscript_value_5, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_13;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_101 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_101;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_46 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_46, mod_consts[241]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_47 = tmp_class_creation_1__metaclass;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[241]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_13;
        }
        tmp_tuple_element_2 = mod_consts[1];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 202;
        tmp_assign_source_102 = CALL_FUNCTION(tmp_called_value_26, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_102;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_48;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_48 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_48, mod_consts[242]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_13;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_8;
        PyObject *tmp_getattr_attr_8;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[243];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_8 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_8 = mod_consts[244];
        tmp_getattr_default_1 = mod_consts[245];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_8, tmp_getattr_attr_8, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_49;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_49 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_49 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[244]);
            Py_DECREF(tmp_expression_value_49);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 202;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_103;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_104;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_gi$overrides$GObject$$$class__1_Value_202 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[246];
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__1_Value_202, mod_consts[247], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[1];
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__1_Value_202, mod_consts[248], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_15;
        }
        frame_75bee02e5534d21238e207093945d7ed_2 = MAKE_CLASS_FRAME(codeobj_75bee02e5534d21238e207093945d7ed, module_gi$overrides$GObject, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_75bee02e5534d21238e207093945d7ed_2);
        assert(Py_REFCNT(frame_75bee02e5534d21238e207093945d7ed_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[249];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_gi$overrides$GObject$$$function__1___init__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__1_Value_202, mod_consts[2], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 203;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_34;
            tmp_called_value_27 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__1_Value_202, mod_consts[251]);

            if (tmp_called_value_27 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[251]);

                    if (unlikely(tmp_called_value_27 == NULL)) {
                        tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[251]);
                    }

                    if (tmp_called_value_27 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 210;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_called_value_27);
                } else {
                    goto frame_exception_exit_2;
                }
            }



            tmp_args_element_value_34 = MAKE_FUNCTION_gi$overrides$GObject$$$function__2___g_type();

            frame_75bee02e5534d21238e207093945d7ed_2->m_frame.f_lineno = 210;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_34);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 210;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__1_Value_202, mod_consts[7], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 211;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_gi$overrides$GObject$$$function__3_set_boxed();

        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__1_Value_202, mod_consts[254], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_gi$overrides$GObject$$$function__4_get_boxed();

        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__1_Value_202, mod_consts[256], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_gi$overrides$GObject$$$function__5_set_value();

        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__1_Value_202, mod_consts[4], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_gi$overrides$GObject$$$function__6_get_value();

        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__1_Value_202, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_gi$overrides$GObject$$$function__7___repr__();

        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__1_Value_202, mod_consts[260], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_75bee02e5534d21238e207093945d7ed_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_75bee02e5534d21238e207093945d7ed_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_75bee02e5534d21238e207093945d7ed_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_75bee02e5534d21238e207093945d7ed_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_75bee02e5534d21238e207093945d7ed_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_15;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__1_Value_202, mod_consts[262], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_15;
        }
        branch_no_7:;
        {
            PyObject *tmp_assign_source_105;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_28 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[1];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_gi$overrides$GObject$$$class__1_Value_202;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 202;
            tmp_assign_source_105 = CALL_FUNCTION(tmp_called_value_28, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_105 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 202;

                goto try_except_handler_15;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_105;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_104 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_104);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_gi$overrides$GObject$$$class__1_Value_202);
        locals_gi$overrides$GObject$$$class__1_Value_202 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gi$overrides$GObject$$$class__1_Value_202);
        locals_gi$overrides$GObject$$$class__1_Value_202 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 202;
        goto try_except_handler_13;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_104);
    }
    goto try_end_13;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_35;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_35 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_args_element_value_35 == NULL)) {
            tmp_args_element_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 296;
        tmp_assign_source_106 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_29, tmp_args_element_value_35);
        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_106);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_call_result_20;
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[154]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 297;
        tmp_call_result_20 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_30, mod_consts[263]);

        Py_DECREF(tmp_called_value_30);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_assign_source_107;


        tmp_assign_source_107 = MAKE_FUNCTION_gi$overrides$GObject$$$function__8_type_from_name();

        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_107);
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_call_result_21;
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[154]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 307;
        tmp_call_result_21 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_31, mod_consts[264]);

        Py_DECREF(tmp_called_value_31);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_assign_source_108;


        tmp_assign_source_108 = MAKE_FUNCTION_gi$overrides$GObject$$$function__9_type_parent();

        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_108);
    }
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_call_result_22;
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[154]);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 317;
        tmp_call_result_22 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_32, mod_consts[265]);

        Py_DECREF(tmp_called_value_32);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_assign_source_109;


        tmp_assign_source_109 = MAKE_FUNCTION_gi$overrides$GObject$$$function__10__validate_type_for_signal_method();

        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;


        tmp_assign_source_110 = MAKE_FUNCTION_gi$overrides$GObject$$$function__11_signal_list_ids();

        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_110);
    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_call_result_23;
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[154]);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 332;
        tmp_call_result_23 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_33, mod_consts[266]);

        Py_DECREF(tmp_called_value_33);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_assign_source_111;


        tmp_assign_source_111 = MAKE_FUNCTION_gi$overrides$GObject$$$function__12_signal_list_names();

        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_111);
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_call_result_24;
        tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_54 == NULL)) {
            tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[154]);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 340;
        tmp_call_result_24 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_34, mod_consts[268]);

        Py_DECREF(tmp_called_value_34);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_assign_source_112;


        tmp_assign_source_112 = MAKE_FUNCTION_gi$overrides$GObject$$$function__13_signal_lookup();

        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_112);
    }
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_call_result_25;
        tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_55 == NULL)) {
            tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[154]);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 348;
        tmp_call_result_25 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_35, mod_consts[269]);

        Py_DECREF(tmp_called_value_35);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_assign_source_113;
        PyObject *tmp_called_value_36;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[65];
        tmp_call_arg_element_2 = MAKE_LIST6(mod_consts[270]);
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 351;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_assign_source_113 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_36, call_args);
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_assign_source_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[271];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_114 = MAKE_FUNCTION_gi$overrides$GObject$$$function__14_signal_query(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_114);
    }
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_call_result_26;
        tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_56 == NULL)) {
            tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[154]);
        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 380;
        tmp_call_result_26 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_37, mod_consts[272]);

        Py_DECREF(tmp_called_value_37);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = mod_consts[273];
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_115 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_115;
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_116;
    }
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto try_except_handler_16;
        }
        tmp_condition_result_9 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_57 = tmp_class_creation_2__bases;
        tmp_subscript_value_6 = mod_consts[64];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_57, tmp_subscript_value_6, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto try_except_handler_16;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_117 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_117;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_58;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_58 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_58, mod_consts[241]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_59 = tmp_class_creation_2__metaclass;
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[241]);
        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto try_except_handler_16;
        }
        tmp_tuple_element_5 = mod_consts[74];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_5 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 383;
        tmp_assign_source_118 = CALL_FUNCTION(tmp_called_value_38, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_118;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_60;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_60 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_60, mod_consts[242]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto try_except_handler_16;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_getattr_target_9;
        PyObject *tmp_getattr_attr_9;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[243];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_9 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_9 = mod_consts[244];
        tmp_getattr_default_2 = mod_consts[245];
        tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_9, tmp_getattr_attr_9, tmp_getattr_default_2);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_61;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_61 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_61 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[244]);
            Py_DECREF(tmp_expression_value_61);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 383;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_119;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_120;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_gi$overrides$GObject$$$class__2__HandlerBlockManager_383 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[246];
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__2__HandlerBlockManager_383, mod_consts[247], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[74];
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__2__HandlerBlockManager_383, mod_consts[248], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto try_except_handler_18;
        }
        frame_cdb249fa25e41939c03a7dfc9a629967_3 = MAKE_CLASS_FRAME(codeobj_cdb249fa25e41939c03a7dfc9a629967, module_gi$overrides$GObject, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_cdb249fa25e41939c03a7dfc9a629967_3);
        assert(Py_REFCNT(frame_cdb249fa25e41939c03a7dfc9a629967_3) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_gi$overrides$GObject$$$function__15___init__();

        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__2__HandlerBlockManager_383, mod_consts[2], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_gi$overrides$GObject$$$function__16___enter__();

        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__2__HandlerBlockManager_383, mod_consts[157], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_gi$overrides$GObject$$$function__17___exit__();

        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__2__HandlerBlockManager_383, mod_consts[158], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_cdb249fa25e41939c03a7dfc9a629967_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_cdb249fa25e41939c03a7dfc9a629967_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_cdb249fa25e41939c03a7dfc9a629967_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_cdb249fa25e41939c03a7dfc9a629967_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_cdb249fa25e41939c03a7dfc9a629967_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_18;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_2__bases;
            tmp_cmp_expr_right_5 = mod_consts[273];
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;

                goto try_except_handler_18;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        tmp_dictset_value = mod_consts[273];
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__2__HandlerBlockManager_383, mod_consts[262], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto try_except_handler_18;
        }
        branch_no_10:;
        {
            PyObject *tmp_assign_source_121;
            PyObject *tmp_called_value_39;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_39 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = mod_consts[74];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_gi$overrides$GObject$$$class__2__HandlerBlockManager_383;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 383;
            tmp_assign_source_121 = CALL_FUNCTION(tmp_called_value_39, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_121 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;

                goto try_except_handler_18;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_121;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_120 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_120);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_gi$overrides$GObject$$$class__2__HandlerBlockManager_383);
        locals_gi$overrides$GObject$$$class__2__HandlerBlockManager_383 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gi$overrides$GObject$$$class__2__HandlerBlockManager_383);
        locals_gi$overrides$GObject$$$class__2__HandlerBlockManager_383 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 383;
        goto try_except_handler_16;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_120);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(tmp_class_creation_2__bases);
    Py_DECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__metaclass);
    Py_DECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_122;


        tmp_assign_source_122 = MAKE_FUNCTION_gi$overrides$GObject$$$function__18_signal_handler_block();

        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_122);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_call_result_27;
        tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_62 == NULL)) {
            tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[154]);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 416;
        tmp_call_result_27 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_40, mod_consts[277]);

        Py_DECREF(tmp_called_value_40);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_assign_source_123;


        tmp_assign_source_123 = MAKE_FUNCTION_gi$overrides$GObject$$$function__19_signal_parse_name();

        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_123);
    }
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_call_result_28;
        tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_63 == NULL)) {
            tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[154]);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 438;
        tmp_call_result_28 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_41, mod_consts[278]);

        Py_DECREF(tmp_called_value_41);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_assign_source_124;


        tmp_assign_source_124 = MAKE_FUNCTION_gi$overrides$GObject$$$function__20_remove_emission_hook();

        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_124);
    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_call_result_29;
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[154]);
        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 446;
        tmp_call_result_29 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_42, mod_consts[280]);

        Py_DECREF(tmp_called_value_42);
        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[271];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_125 = MAKE_FUNCTION_gi$overrides$GObject$$$function__21_signal_accumulator_first_wins(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_125);
    }
    {
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_call_result_30;
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto frame_exception_exit_1;
        }
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[154]);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 457;
        tmp_call_result_30 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_43, mod_consts[282]);

        Py_DECREF(tmp_called_value_43);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = mod_consts[271];
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_126 = MAKE_FUNCTION_gi$overrides$GObject$$$function__22_signal_accumulator_true_handled(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[283], tmp_assign_source_126);
    }
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_call_result_31;
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;

            goto frame_exception_exit_1;
        }
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[154]);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 465;
        tmp_call_result_31 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_44, mod_consts[284]);

        Py_DECREF(tmp_called_value_44);
        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_expression_value_67;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_127 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[285]);
        if (tmp_assign_source_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[285], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_expression_value_68;
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_128 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[286]);
        if (tmp_assign_source_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        tmp_iadd_expr_left_4 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_iadd_expr_left_4 == NULL)) {
            tmp_iadd_expr_left_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_iadd_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_4 = MAKE_LIST2(mod_consts[285],mod_consts[286]);
        tmp_inplace_orig = tmp_iadd_expr_left_4;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LIST(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        Py_DECREF(tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_129 = tmp_iadd_expr_left_4;
        if (tmp_inplace_orig != tmp_assign_source_129) {
            UPDATE_STRING_DICT_INPLACE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_129);
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_130;
        PyObject *tmp_dircall_arg1_3;
        tmp_dircall_arg1_3 = mod_consts[273];
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_130 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_130;
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_131;
    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto try_except_handler_19;
        }
        tmp_condition_result_13 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_69 = tmp_class_creation_3__bases;
        tmp_subscript_value_7 = mod_consts[64];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_69, tmp_subscript_value_7, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto try_except_handler_19;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto try_except_handler_19;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_132 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_132;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_expression_value_70;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_70 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_70, mod_consts[241]);
        tmp_condition_result_14 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_133;
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_71 = tmp_class_creation_3__metaclass;
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[241]);
        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto try_except_handler_19;
        }
        tmp_tuple_element_8 = mod_consts[92];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_8 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 476;
        tmp_assign_source_133 = CALL_FUNCTION(tmp_called_value_45, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_45);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_133;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_72;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_72 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_72, mod_consts[242]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto try_except_handler_19;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_getattr_target_10;
        PyObject *tmp_getattr_attr_10;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[243];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_10 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_10 = mod_consts[244];
        tmp_getattr_default_3 = mod_consts[245];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tmp_getattr_target_10, tmp_getattr_attr_10, tmp_getattr_default_3);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto try_except_handler_19;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_73;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_73 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_73 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[244]);
            Py_DECREF(tmp_expression_value_73);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 476;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_12:;
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_134;
    }
    branch_end_11:;
    {
        PyObject *tmp_assign_source_135;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_gi$overrides$GObject$$$class__3__FreezeNotifyManager_476 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[246];
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__3__FreezeNotifyManager_476, mod_consts[247], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__3__FreezeNotifyManager_476, mod_consts[248], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto try_except_handler_21;
        }
        frame_417c09d970cd9f4035f9de4d6b180054_4 = MAKE_CLASS_FRAME(codeobj_417c09d970cd9f4035f9de4d6b180054, module_gi$overrides$GObject, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_417c09d970cd9f4035f9de4d6b180054_4);
        assert(Py_REFCNT(frame_417c09d970cd9f4035f9de4d6b180054_4) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_gi$overrides$GObject$$$function__23___init__();

        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__3__FreezeNotifyManager_476, mod_consts[2], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_gi$overrides$GObject$$$function__24___enter__();

        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__3__FreezeNotifyManager_476, mod_consts[157], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        tmp_dictset_value = MAKE_FUNCTION_gi$overrides$GObject$$$function__25___exit__();

        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__3__FreezeNotifyManager_476, mod_consts[158], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_417c09d970cd9f4035f9de4d6b180054_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_417c09d970cd9f4035f9de4d6b180054_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_417c09d970cd9f4035f9de4d6b180054_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_417c09d970cd9f4035f9de4d6b180054_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_417c09d970cd9f4035f9de4d6b180054_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_21;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_3__bases;
            tmp_cmp_expr_right_6 = mod_consts[273];
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;

                goto try_except_handler_21;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_13;
            } else {
                goto branch_no_13;
            }
        }
        branch_yes_13:;
        tmp_dictset_value = mod_consts[273];
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__3__FreezeNotifyManager_476, mod_consts[262], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;

            goto try_except_handler_21;
        }
        branch_no_13:;
        {
            PyObject *tmp_assign_source_136;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_46 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_10 = mod_consts[92];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_10 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_gi$overrides$GObject$$$class__3__FreezeNotifyManager_476;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 476;
            tmp_assign_source_136 = CALL_FUNCTION(tmp_called_value_46, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_136 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 476;

                goto try_except_handler_21;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_136;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_135 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_135);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_gi$overrides$GObject$$$class__3__FreezeNotifyManager_476);
        locals_gi$overrides$GObject$$$class__3__FreezeNotifyManager_476 = NULL;
        goto try_return_handler_20;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gi$overrides$GObject$$$class__3__FreezeNotifyManager_476);
        locals_gi$overrides$GObject$$$class__3__FreezeNotifyManager_476 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 476;
        goto try_except_handler_19;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_135);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(tmp_class_creation_3__bases);
    Py_DECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__metaclass);
    Py_DECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_137;


        tmp_assign_source_137 = MAKE_FUNCTION_gi$overrides$GObject$$$function__26__signalmethod();

        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_137);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_expression_value_74;
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_22;
        }
        tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[90]);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_22;
        }
        tmp_assign_source_138 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_138, 0, tmp_tuple_element_11);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_138;
    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_139 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_139;
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_140;
    }
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_17;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_22;
        }
        tmp_condition_result_17 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_75 = tmp_class_creation_4__bases;
        tmp_subscript_value_8 = mod_consts[64];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_75, tmp_subscript_value_8, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_22;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_22;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_141 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_141;
    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_expression_value_76;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_76 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_76, mod_consts[241]);
        tmp_condition_result_18 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_142;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_77 = tmp_class_creation_4__metaclass;
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[241]);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_22;
        }
        tmp_tuple_element_12 = mod_consts[90];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_12 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_12);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 497;
        tmp_assign_source_142 = CALL_FUNCTION(tmp_called_value_47, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_22;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_142;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_expression_value_78;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_78 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_78, mod_consts[242]);
        tmp_operand_value_5 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_22;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_getattr_target_11;
        PyObject *tmp_getattr_attr_11;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[243];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_11 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_11 = mod_consts[244];
        tmp_getattr_default_4 = mod_consts[245];
        tmp_tuple_element_13 = BUILTIN_GETATTR(tmp_getattr_target_11, tmp_getattr_attr_11, tmp_getattr_default_4);
        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_22;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_79;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_79 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_79 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[244]);
            Py_DECREF(tmp_expression_value_79);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 497;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_22;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_22;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 497;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_22;
    }
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_143;
    }
    branch_end_14:;
    {
        PyObject *tmp_assign_source_144;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_gi$overrides$GObject$$$class__4_Object_497 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[246];
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[247], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_24;
        }
        tmp_dictset_value = mod_consts[90];
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[248], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_24;
        }
        frame_43cdea03d3b7cdfa5e43adad212837e4_5 = MAKE_CLASS_FRAME(codeobj_43cdea03d3b7cdfa5e43adad212837e4, module_gi$overrides$GObject, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_43cdea03d3b7cdfa5e43adad212837e4_5);
        assert(Py_REFCNT(frame_43cdea03d3b7cdfa5e43adad212837e4_5) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_gi$overrides$GObject$$$function__27__unsupported_method();

        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[291], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_gi$overrides$GObject$$$function__28__unsupported_data_method();

        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[293], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[293]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[293]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 507;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[295], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[293]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[293]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 508;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[296], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[293]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[293]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 509;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[297], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[293]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[293]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 510;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[298], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[293]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[293]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 511;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[299], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[293]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[293]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 512;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[300], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[293]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[293]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 513;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[301], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[291]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[291]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 517;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[302], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[291]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[291]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 518;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[303], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[291]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[291]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 519;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[304], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[291]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[291]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 520;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[305], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[291]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[291]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 521;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[306], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[291]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[291]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 522;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[307], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[291]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[291]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 523;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[308], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        {
            PyObject *tmp_expression_value_80;
            PyObject *tmp_expression_value_81;
            tmp_expression_value_81 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[0]);

            if (tmp_expression_value_81 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_81 == NULL)) {
                        tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_81 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 526;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_81);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[90]);
            Py_DECREF(tmp_expression_value_81);
            if (tmp_expression_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 526;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[309]);
            Py_DECREF(tmp_expression_value_80);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 526;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[310], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 526;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_82;
            PyObject *tmp_expression_value_83;
            tmp_expression_value_83 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[0]);

            if (tmp_expression_value_83 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_83 == NULL)) {
                        tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_83 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 527;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_83);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[90]);
            Py_DECREF(tmp_expression_value_83);
            if (tmp_expression_value_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 527;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[311]);
            Py_DECREF(tmp_expression_value_82);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 527;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[312], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 527;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_84;
            PyObject *tmp_expression_value_85;
            tmp_expression_value_85 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[0]);

            if (tmp_expression_value_85 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_85 == NULL)) {
                        tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_85 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 528;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_85);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[90]);
            Py_DECREF(tmp_expression_value_85);
            if (tmp_expression_value_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 528;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[313]);
            Py_DECREF(tmp_expression_value_84);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 528;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[314], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 528;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_86;
            PyObject *tmp_expression_value_87;
            tmp_expression_value_87 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[0]);

            if (tmp_expression_value_87 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_87 == NULL)) {
                        tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_87 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 529;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_87);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[90]);
            Py_DECREF(tmp_expression_value_87);
            if (tmp_expression_value_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 529;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[315]);
            Py_DECREF(tmp_expression_value_86);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 529;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[316], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 529;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        tmp_dictset_value = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[291]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[291]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 531;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[309], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[291]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[291]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 532;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[311], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[291]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[291]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 533;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[313], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[291]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[291]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 534;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[315], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        {
            PyObject *tmp_expression_value_88;
            PyObject *tmp_expression_value_89;
            tmp_expression_value_89 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[5]);

            if (tmp_expression_value_89 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

                    if (unlikely(tmp_expression_value_89 == NULL)) {
                        tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                    }

                    if (tmp_expression_value_89 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 538;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_89);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[97]);
            Py_DECREF(tmp_expression_value_89);
            if (tmp_expression_value_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[317]);
            Py_DECREF(tmp_expression_value_88);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[317], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 538;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_90;
            PyObject *tmp_expression_value_91;
            tmp_expression_value_91 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[5]);

            if (tmp_expression_value_91 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

                    if (unlikely(tmp_expression_value_91 == NULL)) {
                        tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                    }

                    if (tmp_expression_value_91 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 539;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_91);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[97]);
            Py_DECREF(tmp_expression_value_91);
            if (tmp_expression_value_90 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 539;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[318]);
            Py_DECREF(tmp_expression_value_90);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 539;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[318], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 539;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_92;
            PyObject *tmp_expression_value_93;
            tmp_expression_value_93 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[5]);

            if (tmp_expression_value_93 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

                    if (unlikely(tmp_expression_value_93 == NULL)) {
                        tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                    }

                    if (tmp_expression_value_93 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 540;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_93);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[97]);
            Py_DECREF(tmp_expression_value_93);
            if (tmp_expression_value_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[319]);
            Py_DECREF(tmp_expression_value_92);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[319], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 540;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_94;
            PyObject *tmp_expression_value_95;
            tmp_expression_value_95 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[5]);

            if (tmp_expression_value_95 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

                    if (unlikely(tmp_expression_value_95 == NULL)) {
                        tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                    }

                    if (tmp_expression_value_95 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 541;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_95);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_94 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[97]);
            Py_DECREF(tmp_expression_value_95);
            if (tmp_expression_value_94 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[320]);
            Py_DECREF(tmp_expression_value_94);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[320], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 541;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_96;
            PyObject *tmp_expression_value_97;
            tmp_expression_value_97 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[5]);

            if (tmp_expression_value_97 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

                    if (unlikely(tmp_expression_value_97 == NULL)) {
                        tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                    }

                    if (tmp_expression_value_97 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 542;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_97);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[97]);
            Py_DECREF(tmp_expression_value_97);
            if (tmp_expression_value_96 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[321]);
            Py_DECREF(tmp_expression_value_96);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[321], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 542;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_98;
            PyObject *tmp_expression_value_99;
            tmp_expression_value_99 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[5]);

            if (tmp_expression_value_99 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

                    if (unlikely(tmp_expression_value_99 == NULL)) {
                        tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                    }

                    if (tmp_expression_value_99 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 543;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_99);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[97]);
            Py_DECREF(tmp_expression_value_99);
            if (tmp_expression_value_98 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_98, mod_consts[99]);
            Py_DECREF(tmp_expression_value_98);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[99], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 543;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_100;
            PyObject *tmp_expression_value_101;
            tmp_expression_value_101 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[5]);

            if (tmp_expression_value_101 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

                    if (unlikely(tmp_expression_value_101 == NULL)) {
                        tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                    }

                    if (tmp_expression_value_101 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 544;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_101);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_100 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[97]);
            Py_DECREF(tmp_expression_value_101);
            if (tmp_expression_value_100 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[98]);
            Py_DECREF(tmp_expression_value_100);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[98], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 544;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_102;
            PyObject *tmp_expression_value_103;
            tmp_expression_value_103 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[5]);

            if (tmp_expression_value_103 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

                    if (unlikely(tmp_expression_value_103 == NULL)) {
                        tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                    }

                    if (tmp_expression_value_103 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 545;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_103);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_102 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[97]);
            Py_DECREF(tmp_expression_value_103);
            if (tmp_expression_value_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[322]);
            Py_DECREF(tmp_expression_value_102);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[322], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 545;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_104;
            PyObject *tmp_expression_value_105;
            tmp_expression_value_105 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[5]);

            if (tmp_expression_value_105 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

                    if (unlikely(tmp_expression_value_105 == NULL)) {
                        tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                    }

                    if (tmp_expression_value_105 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 546;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_105);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_104 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[97]);
            Py_DECREF(tmp_expression_value_105);
            if (tmp_expression_value_104 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 546;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[323]);
            Py_DECREF(tmp_expression_value_104);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 546;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[323], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 546;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_106;
            PyObject *tmp_expression_value_107;
            tmp_expression_value_107 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[5]);

            if (tmp_expression_value_107 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

                    if (unlikely(tmp_expression_value_107 == NULL)) {
                        tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                    }

                    if (tmp_expression_value_107 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 547;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_107);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_106 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[97]);
            Py_DECREF(tmp_expression_value_107);
            if (tmp_expression_value_106 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[324]);
            Py_DECREF(tmp_expression_value_106);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[324], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_108;
            PyObject *tmp_expression_value_109;
            tmp_expression_value_109 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[5]);

            if (tmp_expression_value_109 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

                    if (unlikely(tmp_expression_value_109 == NULL)) {
                        tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                    }

                    if (tmp_expression_value_109 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 548;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_109);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_108 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[97]);
            Py_DECREF(tmp_expression_value_109);
            if (tmp_expression_value_108 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 548;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[325]);
            Py_DECREF(tmp_expression_value_108);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 548;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[325], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 548;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_110;
            PyObject *tmp_expression_value_111;
            tmp_expression_value_111 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[5]);

            if (tmp_expression_value_111 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

                    if (unlikely(tmp_expression_value_111 == NULL)) {
                        tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                    }

                    if (tmp_expression_value_111 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 549;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_111);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_110 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[97]);
            Py_DECREF(tmp_expression_value_111);
            if (tmp_expression_value_110 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[326]);
            Py_DECREF(tmp_expression_value_110);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[326], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 549;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_112;
            PyObject *tmp_expression_value_113;
            tmp_expression_value_113 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[5]);

            if (tmp_expression_value_113 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

                    if (unlikely(tmp_expression_value_113 == NULL)) {
                        tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                    }

                    if (tmp_expression_value_113 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 550;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_113);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_112 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[97]);
            Py_DECREF(tmp_expression_value_113);
            if (tmp_expression_value_112 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[327]);
            Py_DECREF(tmp_expression_value_112);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[327], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 550;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_114;
            PyObject *tmp_expression_value_115;
            tmp_expression_value_115 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[5]);

            if (tmp_expression_value_115 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

                    if (unlikely(tmp_expression_value_115 == NULL)) {
                        tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                    }

                    if (tmp_expression_value_115 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 551;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_115);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_114 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[97]);
            Py_DECREF(tmp_expression_value_115);
            if (tmp_expression_value_114 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[328]);
            Py_DECREF(tmp_expression_value_114);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[328], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 551;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_116;
            PyObject *tmp_expression_value_117;
            tmp_expression_value_117 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[5]);

            if (tmp_expression_value_117 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

                    if (unlikely(tmp_expression_value_117 == NULL)) {
                        tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                    }

                    if (tmp_expression_value_117 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 552;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_117);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_116 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[97]);
            Py_DECREF(tmp_expression_value_117);
            if (tmp_expression_value_116 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 552;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[329]);
            Py_DECREF(tmp_expression_value_116);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 552;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[329], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 552;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_118;
            PyObject *tmp_expression_value_119;
            tmp_expression_value_119 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[5]);

            if (tmp_expression_value_119 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

                    if (unlikely(tmp_expression_value_119 == NULL)) {
                        tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                    }

                    if (tmp_expression_value_119 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 553;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_119);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_118 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[97]);
            Py_DECREF(tmp_expression_value_119);
            if (tmp_expression_value_118 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[330]);
            Py_DECREF(tmp_expression_value_118);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[330], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 553;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_expression_value_120;
            PyObject *tmp_expression_value_121;
            tmp_expression_value_121 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[5]);

            if (tmp_expression_value_121 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[5]);

                    if (unlikely(tmp_expression_value_121 == NULL)) {
                        tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
                    }

                    if (tmp_expression_value_121 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 554;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_121);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_120 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[97]);
            Py_DECREF(tmp_expression_value_121);
            if (tmp_expression_value_120 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_dictset_value = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[331]);
            Py_DECREF(tmp_expression_value_120);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[331], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 554;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_gi$overrides$GObject$$$function__29_freeze_notify();

        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[91], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_gi$overrides$GObject$$$function__30_connect_data();

        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[333], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 574;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[73]);

        if (tmp_dictset_value == NULL) {
            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                tmp_dictset_value = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[73]);

                if (unlikely(tmp_dictset_value == NULL)) {
                    tmp_dictset_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
                }

                if (tmp_dictset_value == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 615;
                    type_description_2 = "o";
                    goto frame_exception_exit_5;
                }
                Py_INCREF(tmp_dictset_value);
            } else {
                goto frame_exception_exit_5;
            }
        }

        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[335], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 615;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        {
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_expression_value_122;
            tmp_called_value_48 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[290]);

            if (tmp_called_value_48 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[290]);

                    if (unlikely(tmp_called_value_48 == NULL)) {
                        tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[290]);
                    }

                    if (tmp_called_value_48 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 616;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_48);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_122 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[0]);

            if (tmp_expression_value_122 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_122 == NULL)) {
                        tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_122 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_48);

                        exception_lineno = 616;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_122);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_args_element_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[72]);
            Py_DECREF(tmp_expression_value_122);
            if (tmp_args_element_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_48);

                exception_lineno = 616;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_43cdea03d3b7cdfa5e43adad212837e4_5->m_frame.f_lineno = 616;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_36);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 616;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[336], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 616;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_expression_value_123;
            tmp_called_value_49 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[290]);

            if (tmp_called_value_49 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[290]);

                    if (unlikely(tmp_called_value_49 == NULL)) {
                        tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[290]);
                    }

                    if (tmp_called_value_49 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 617;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_49);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_123 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[0]);

            if (tmp_expression_value_123 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_123 == NULL)) {
                        tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_123 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_49);

                        exception_lineno = 617;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_123);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_args_element_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[337]);
            Py_DECREF(tmp_expression_value_123);
            if (tmp_args_element_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_49);

                exception_lineno = 617;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_43cdea03d3b7cdfa5e43adad212837e4_5->m_frame.f_lineno = 617;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_37);
            Py_DECREF(tmp_called_value_49);
            Py_DECREF(tmp_args_element_value_37);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 617;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[338], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 617;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_element_value_38;
            PyObject *tmp_expression_value_124;
            tmp_called_value_50 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[290]);

            if (tmp_called_value_50 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[290]);

                    if (unlikely(tmp_called_value_50 == NULL)) {
                        tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[290]);
                    }

                    if (tmp_called_value_50 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 618;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_50);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_124 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[0]);

            if (tmp_expression_value_124 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_124 == NULL)) {
                        tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_124 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_50);

                        exception_lineno = 618;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_124);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_args_element_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[337]);
            Py_DECREF(tmp_expression_value_124);
            if (tmp_args_element_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_50);

                exception_lineno = 618;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_43cdea03d3b7cdfa5e43adad212837e4_5->m_frame.f_lineno = 618;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_38);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_args_element_value_38);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 618;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[339], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 618;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_51;
            PyObject *tmp_args_element_value_39;
            PyObject *tmp_expression_value_125;
            tmp_called_value_51 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[290]);

            if (tmp_called_value_51 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[290]);

                    if (unlikely(tmp_called_value_51 == NULL)) {
                        tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[290]);
                    }

                    if (tmp_called_value_51 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 619;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_51);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_125 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[0]);

            if (tmp_expression_value_125 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_125 == NULL)) {
                        tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_125 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_51);

                        exception_lineno = 619;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_125);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[340]);
            Py_DECREF(tmp_expression_value_125);
            if (tmp_args_element_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_51);

                exception_lineno = 619;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_43cdea03d3b7cdfa5e43adad212837e4_5->m_frame.f_lineno = 619;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_39);
            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_args_element_value_39);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 619;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[341], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 619;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_element_value_40;
            PyObject *tmp_expression_value_126;
            tmp_called_value_52 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[290]);

            if (tmp_called_value_52 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[290]);

                    if (unlikely(tmp_called_value_52 == NULL)) {
                        tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[290]);
                    }

                    if (tmp_called_value_52 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 620;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_called_value_52);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_expression_value_126 = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[0]);

            if (tmp_expression_value_126 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

                    if (unlikely(tmp_expression_value_126 == NULL)) {
                        tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
                    }

                    if (tmp_expression_value_126 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_52);

                        exception_lineno = 620;
                        type_description_2 = "o";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_expression_value_126);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_args_element_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[342]);
            Py_DECREF(tmp_expression_value_126);
            if (tmp_args_element_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_52);

                exception_lineno = 620;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            frame_43cdea03d3b7cdfa5e43adad212837e4_5->m_frame.f_lineno = 620;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_40);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_args_element_value_40);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 620;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[108], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 620;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_gi$overrides$GObject$$$function__31_stop_emission();

        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[106], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 626;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_dictset_value = PyObject_GetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[106]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[106]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 631;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 631;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[344], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 631;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_43cdea03d3b7cdfa5e43adad212837e4_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_43cdea03d3b7cdfa5e43adad212837e4_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_43cdea03d3b7cdfa5e43adad212837e4_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_43cdea03d3b7cdfa5e43adad212837e4_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_43cdea03d3b7cdfa5e43adad212837e4_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_24;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_20;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_7 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_7 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_20 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            if (tmp_condition_result_20 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 497;

                goto try_except_handler_24;
            }
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
        }
        branch_yes_16:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__4_Object_497, mod_consts[262], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto try_except_handler_24;
        }
        branch_no_16:;
        {
            PyObject *tmp_assign_source_145;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_53 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_14 = mod_consts[90];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_14 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_gi$overrides$GObject$$$class__4_Object_497;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 497;
            tmp_assign_source_145 = CALL_FUNCTION(tmp_called_value_53, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_145 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 497;

                goto try_except_handler_24;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_145;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_144 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_144);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_DECREF(locals_gi$overrides$GObject$$$class__4_Object_497);
        locals_gi$overrides$GObject$$$class__4_Object_497 = NULL;
        goto try_return_handler_23;
        // Exception handler code:
        try_except_handler_24:;
        exception_keeper_type_22 = exception_type;
        exception_keeper_value_22 = exception_value;
        exception_keeper_tb_22 = exception_tb;
        exception_keeper_lineno_22 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gi$overrides$GObject$$$class__4_Object_497);
        locals_gi$overrides$GObject$$$class__4_Object_497 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_22;
        exception_value = exception_keeper_value_22;
        exception_tb = exception_keeper_tb_22;
        exception_lineno = exception_keeper_lineno_22;

        goto try_except_handler_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 497;
        goto try_except_handler_22;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_144);
    }
    goto try_end_16;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    {
        PyObject *tmp_assign_source_146;
        PyObject *tmp_called_value_54;
        PyObject *tmp_args_element_value_41;
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 634;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_41 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_args_element_value_41 == NULL)) {
            tmp_args_element_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 634;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 634;
        tmp_assign_source_146 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_41);
        if (tmp_assign_source_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 634;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_assign_source_147 == NULL)) {
            tmp_assign_source_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        assert(!(tmp_assign_source_147 == NULL));
        UPDATE_STRING_DICT0(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        PyObject *tmp_iadd_expr_left_5;
        PyObject *tmp_iadd_expr_right_5;
        tmp_iadd_expr_left_5 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_iadd_expr_left_5 == NULL)) {
            tmp_iadd_expr_left_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_iadd_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;

            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_5 = MAKE_LIST2(mod_consts[90],mod_consts[97]);
        tmp_inplace_orig = tmp_iadd_expr_left_5;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LIST(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
        Py_DECREF(tmp_iadd_expr_right_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 636;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_148 = tmp_iadd_expr_left_5;
        if (tmp_inplace_orig != tmp_assign_source_148) {
            UPDATE_STRING_DICT_INPLACE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_148);
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_expression_value_127;
        tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_127 == NULL)) {
            tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_25;
        }
        tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[116]);
        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_25;
        }
        tmp_assign_source_149 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_149, 0, tmp_tuple_element_15);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_149;
    }
    {
        PyObject *tmp_assign_source_150;
        PyObject *tmp_dircall_arg1_5;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_5 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_5);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
            tmp_assign_source_150 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_150;
    }
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_151;
    }
    {
        PyObject *tmp_assign_source_152;
        PyObject *tmp_metaclass_value_5;
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_9;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_bases_value_5;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_25;
        }
        tmp_condition_result_21 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_128 = tmp_class_creation_5__bases;
        tmp_subscript_value_9 = mod_consts[64];
        tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_128, tmp_subscript_value_9, 0);
        if (tmp_type_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_25;
        }
        tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
        Py_DECREF(tmp_type_arg_9);
        if (tmp_metaclass_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_25;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_5);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_5 = tmp_class_creation_5__bases;
        tmp_assign_source_152 = SELECT_METACLASS(tmp_metaclass_value_5, tmp_bases_value_5);
        Py_DECREF(tmp_metaclass_value_5);
        if (tmp_assign_source_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_152;
    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_expression_value_129;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_129 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_129, mod_consts[241]);
        tmp_condition_result_22 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_kwargs_value_9;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_130 = tmp_class_creation_5__metaclass;
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[241]);
        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_25;
        }
        tmp_tuple_element_16 = mod_consts[116];
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_16 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_16);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 639;
        tmp_assign_source_153 = CALL_FUNCTION(tmp_called_value_55, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_args_value_9);
        if (tmp_assign_source_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_25;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_153;
    }
    {
        bool tmp_condition_result_23;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_expression_value_131;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_131 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_131, mod_consts[242]);
        tmp_operand_value_6 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_25;
        }
        tmp_condition_result_23 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_raise_value_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_getattr_target_12;
        PyObject *tmp_getattr_attr_12;
        PyObject *tmp_getattr_default_5;
        tmp_raise_type_5 = PyExc_TypeError;
        tmp_mod_expr_left_5 = mod_consts[243];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_12 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_12 = mod_consts[244];
        tmp_getattr_default_5 = mod_consts[245];
        tmp_tuple_element_17 = BUILTIN_GETATTR(tmp_getattr_target_12, tmp_getattr_attr_12, tmp_getattr_default_5);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_25;
        }
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_132;
            PyObject *tmp_type_arg_10;
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_17);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_10 = tmp_class_creation_5__prepared;
            tmp_expression_value_132 = BUILTIN_TYPE1(tmp_type_arg_10);
            assert(!(tmp_expression_value_132 == NULL));
            tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[244]);
            Py_DECREF(tmp_expression_value_132);
            if (tmp_tuple_element_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_mod_expr_right_5);
        goto try_except_handler_25;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_raise_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_25;
        }
        exception_type = tmp_raise_type_5;
        Py_INCREF(tmp_raise_type_5);
        exception_value = tmp_raise_value_5;
        exception_lineno = 639;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_25;
    }
    branch_no_18:;
    goto branch_end_17;
    branch_no_17:;
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_154;
    }
    branch_end_17:;
    {
        PyObject *tmp_assign_source_155;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_gi$overrides$GObject$$$class__5_Binding_639 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[246];
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__5_Binding_639, mod_consts[247], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_27;
        }
        tmp_dictset_value = mod_consts[116];
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__5_Binding_639, mod_consts[248], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_27;
        }
        frame_f1b67bf27f847bc00c34a0bcebfcf194_6 = MAKE_CLASS_FRAME(codeobj_f1b67bf27f847bc00c34a0bcebfcf194, module_gi$overrides$GObject, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f1b67bf27f847bc00c34a0bcebfcf194_6);
        assert(Py_REFCNT(frame_f1b67bf27f847bc00c34a0bcebfcf194_6) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_gi$overrides$GObject$$$function__32___call__();

        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__5_Binding_639, mod_consts[345], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 640;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        tmp_dictset_value = MAKE_FUNCTION_gi$overrides$GObject$$$function__33_unbind();

        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__5_Binding_639, mod_consts[117], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;
            type_description_2 = "o";
            goto frame_exception_exit_6;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f1b67bf27f847bc00c34a0bcebfcf194_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f1b67bf27f847bc00c34a0bcebfcf194_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f1b67bf27f847bc00c34a0bcebfcf194_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f1b67bf27f847bc00c34a0bcebfcf194_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_f1b67bf27f847bc00c34a0bcebfcf194_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_27;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_8 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_8 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto try_except_handler_27;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_19;
            } else {
                goto branch_no_19;
            }
        }
        branch_yes_19:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_gi$overrides$GObject$$$class__5_Binding_639, mod_consts[262], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 639;

            goto try_except_handler_27;
        }
        branch_no_19:;
        {
            PyObject *tmp_assign_source_156;
            PyObject *tmp_called_value_56;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_56 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_18 = mod_consts[116];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_18 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_gi$overrides$GObject$$$class__5_Binding_639;
            PyTuple_SET_ITEM0(tmp_args_value_10, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_class_creation_5__class_decl_dict;
            frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 639;
            tmp_assign_source_156 = CALL_FUNCTION(tmp_called_value_56, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_156 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 639;

                goto try_except_handler_27;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_156;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_155 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_155);
        goto try_return_handler_27;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        Py_DECREF(locals_gi$overrides$GObject$$$class__5_Binding_639);
        locals_gi$overrides$GObject$$$class__5_Binding_639 = NULL;
        goto try_return_handler_26;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_25 = exception_type;
        exception_keeper_value_25 = exception_value;
        exception_keeper_tb_25 = exception_tb;
        exception_keeper_lineno_25 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_gi$overrides$GObject$$$class__5_Binding_639);
        locals_gi$overrides$GObject$$$class__5_Binding_639 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_25;
        exception_value = exception_keeper_value_25;
        exception_tb = exception_keeper_tb_25;
        exception_lineno = exception_keeper_lineno_25;

        goto try_except_handler_26;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_26:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 639;
        goto try_except_handler_25;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_155);
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_called_value_57;
        PyObject *tmp_args_element_value_42;
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_42 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_args_element_value_42 == NULL)) {
            tmp_args_element_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 658;
        tmp_assign_source_157 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_57, tmp_args_element_value_42);
        if (tmp_assign_source_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 658;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_157);
    }
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_call_result_32;
        tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_expression_value_133 == NULL)) {
            tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_expression_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;

            goto frame_exception_exit_1;
        }
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[154]);
        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 659;
        tmp_call_result_32 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_58, mod_consts[348]);

        Py_DECREF(tmp_called_value_58);
        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 659;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_expression_value_134;
        tmp_expression_value_134 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[140]);

        if (unlikely(tmp_expression_value_134 == NULL)) {
            tmp_expression_value_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
        }

        if (tmp_expression_value_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_158 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[349]);
        if (tmp_assign_source_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 662;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[349], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_expression_value_135;
        tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_expression_value_135 == NULL)) {
            tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_expression_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 663;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_159 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[350]);
        if (tmp_assign_source_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 663;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[350], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_expression_value_136;
        tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[143]);

        if (unlikely(tmp_expression_value_136 == NULL)) {
            tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[143]);
        }

        if (tmp_expression_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_160 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[351]);
        if (tmp_assign_source_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 664;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[351], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        tmp_assign_source_161 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[349]);

        if (unlikely(tmp_assign_source_161 == NULL)) {
            tmp_assign_source_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[349]);
        }

        if (tmp_assign_source_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 667;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_161);
    }
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_call_result_33;
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[134]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 668;

            goto frame_exception_exit_1;
        }
        frame_e46131bc947d71be765957b1e7d78c16->m_frame.f_lineno = 668;
        tmp_call_result_33 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_59, mod_consts[352]);

        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 668;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_iadd_expr_left_6;
        PyObject *tmp_iadd_expr_right_6;
        tmp_iadd_expr_left_6 = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148]);

        if (unlikely(tmp_iadd_expr_left_6 == NULL)) {
            tmp_iadd_expr_left_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
        }

        if (tmp_iadd_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 669;

            goto frame_exception_exit_1;
        }
        tmp_iadd_expr_right_6 = MAKE_LIST4(mod_consts[353]);
        tmp_inplace_orig = tmp_iadd_expr_left_6;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LIST(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
        Py_DECREF(tmp_iadd_expr_right_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 669;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_162 = tmp_iadd_expr_left_6;
        if (tmp_inplace_orig != tmp_assign_source_162) {
            UPDATE_STRING_DICT_INPLACE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_162);
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e46131bc947d71be765957b1e7d78c16, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e46131bc947d71be765957b1e7d78c16->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e46131bc947d71be765957b1e7d78c16, exception_lineno);
    }



    assertFrameObject(frame_e46131bc947d71be765957b1e7d78c16);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_6:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("gi.overrides.GObject", false);

    Py_INCREF(module_gi$overrides$GObject);
    return module_gi$overrides$GObject;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_gi$overrides$GObject, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("gi$overrides$GObject", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
