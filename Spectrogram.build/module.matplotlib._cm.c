/* Generated code for Python module 'matplotlib._cm'
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

/* The "module_matplotlib$_cm" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_matplotlib$_cm;
PyDictObject *moduledict_matplotlib$_cm;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[340];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[340];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("matplotlib._cm"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 340; i++) {
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
void checkModuleConstants_matplotlib$_cm(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 340; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_70def600758d6d8e381e9c22662947d1;
static PyCodeObject *codeobj_cb36e1886e14f4f65329434515335fac;
static PyCodeObject *codeobj_255571b316e5b529581e1c91e67c8542;
static PyCodeObject *codeobj_acb5dbffd2d5a77cc78bba87899d54f0;
static PyCodeObject *codeobj_1214e46c2e8e525fc07d792a8fa0e08d;
static PyCodeObject *codeobj_b18ce6f1000c99b0244a15c0e6987de4;
static PyCodeObject *codeobj_fbf1d2a2a6b296b8b6dc5cc972c4b1cb;
static PyCodeObject *codeobj_0055ec0c618adee545a4c122675d5f19;
static PyCodeObject *codeobj_7a10c44b76aa65a769d54530e6846c06;
static PyCodeObject *codeobj_ee57030045021373b9c6cf74b206610a;
static PyCodeObject *codeobj_9b4319a4c3601e125665508568b0eb3d;
static PyCodeObject *codeobj_fc55a5ed67a19431c090ead47b391cdb;
static PyCodeObject *codeobj_dacf7ebbd3cb3f1839cfa4b5e101acfd;
static PyCodeObject *codeobj_6cfbd41b643d9df19a9d7814f82698c9;
static PyCodeObject *codeobj_4fa4e501dfea68dd37ba7be771befc58;
static PyCodeObject *codeobj_1346cd135aa87889f7a1f3619f2d8db2;
static PyCodeObject *codeobj_602c54f0a37ee0aef9dc83acd564cbf7;
static PyCodeObject *codeobj_34fc6684fd3f6c8e105d89bba384fd51;
static PyCodeObject *codeobj_1054b4959166fff5ef1e73c3ecc780b9;
static PyCodeObject *codeobj_6e85a35f49234bf6bf89de065cb79f59;
static PyCodeObject *codeobj_1e704fe612d31e6872eb5ffdd2a7739a;
static PyCodeObject *codeobj_cdb4a9c4c8d7c5378daee29ebaafd306;
static PyCodeObject *codeobj_c680daa41894eaa6c84c4152e7a4d652;
static PyCodeObject *codeobj_5fd8d2e2ce614a2838cdc80900f8d873;
static PyCodeObject *codeobj_e70427f8e2525b689c9a4c43e5c1916c;
static PyCodeObject *codeobj_add1727bd02c66bb93618aae2e582794;
static PyCodeObject *codeobj_daff43ca2b7853898a88dd8e608e6490;
static PyCodeObject *codeobj_42de8ee7ded3529cb306f0f4feaa3896;
static PyCodeObject *codeobj_70069f9e26ebfa29f22811c477bfaec4;
static PyCodeObject *codeobj_6e2b71cc47e4c6ef998ad76dca63a8b3;
static PyCodeObject *codeobj_342f9d93e90bb691e23666fb481c43aa;
static PyCodeObject *codeobj_1a05bd0a8d2a05d0cb9c74bca2f08040;
static PyCodeObject *codeobj_bedacddae73f1407e75fbed83f94038d;
static PyCodeObject *codeobj_ae42c534bdd50fbc6930d27f4693e71c;
static PyCodeObject *codeobj_5d4552fda44d18892832df6815d4c65e;
static PyCodeObject *codeobj_2f7ef3de808e0c9aa593d9edd9d15e56;
static PyCodeObject *codeobj_c30a511137039a139da1560c04aa087b;
static PyCodeObject *codeobj_1ccbce328cc0b8e649f067941597a582;
static PyCodeObject *codeobj_6e6e205b8a8f0276f4668b121ea50ee7;
static PyCodeObject *codeobj_37822a379b49894f6d0e929cbfb57165;
static PyCodeObject *codeobj_f3ffc56c250278247faea3841785f2e4;
static PyCodeObject *codeobj_02307b31f7f66d93b4e65a5e8173e0a0;
static PyCodeObject *codeobj_c444d01ae541266be04aca09effeb94b;
static PyCodeObject *codeobj_2167435bf2ed2f88e36b0b544f18b629;
static PyCodeObject *codeobj_08c7f846454187b5298326343cbd17b7;
static PyCodeObject *codeobj_29d9ce4ec564f0d320d5eef534d769ae;
static PyCodeObject *codeobj_0b3da2a37d473d9856f7871b6ebef882;
static PyCodeObject *codeobj_ad4f58ec2d3f069122ea6de3a96460ee;
static PyCodeObject *codeobj_79ac6e0034b80220a0f6858dc582089d;
static PyCodeObject *codeobj_5890105dde54f9e4a16393dc4540e18f;
static PyCodeObject *codeobj_4daf2a95c7037f8a85fc565d3f3d9885;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[43]; CHECK_OBJECT(module_filename_obj);
    codeobj_70def600758d6d8e381e9c22662947d1 = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_NEWLOCALS | CO_NOFREE, mod_consts[332], mod_consts[332], mod_consts[333], NULL, 1, 0, 0);
    codeobj_cb36e1886e14f4f65329434515335fac = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[334], mod_consts[334], NULL, NULL, 0, 0, 0);
    codeobj_255571b316e5b529581e1c91e67c8542 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[18], mod_consts[18], mod_consts[335], NULL, 7, 0, 0);
    codeobj_acb5dbffd2d5a77cc78bba87899d54f0 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[336], NULL, 1, 0, 0);
    codeobj_1214e46c2e8e525fc07d792a8fa0e08d = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], mod_consts[62], mod_consts[336], NULL, 1, 0, 0);
    codeobj_b18ce6f1000c99b0244a15c0e6987de4 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[61], mod_consts[61], mod_consts[336], NULL, 1, 0, 0);
    codeobj_fbf1d2a2a6b296b8b6dc5cc972c4b1cb = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[336], NULL, 1, 0, 0);
    codeobj_0055ec0c618adee545a4c122675d5f19 = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[77], mod_consts[77], mod_consts[336], NULL, 1, 0, 0);
    codeobj_7a10c44b76aa65a769d54530e6846c06 = MAKE_CODE_OBJECT(module_filename_obj, 122, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[86], mod_consts[86], mod_consts[336], NULL, 1, 0, 0);
    codeobj_ee57030045021373b9c6cf74b206610a = MAKE_CODE_OBJECT(module_filename_obj, 123, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[336], NULL, 1, 0, 0);
    codeobj_9b4319a4c3601e125665508568b0eb3d = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[336], NULL, 1, 0, 0);
    codeobj_fc55a5ed67a19431c090ead47b391cdb = MAKE_CODE_OBJECT(module_filename_obj, 125, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[336], NULL, 1, 0, 0);
    codeobj_dacf7ebbd3cb3f1839cfa4b5e101acfd = MAKE_CODE_OBJECT(module_filename_obj, 126, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[90], mod_consts[90], mod_consts[336], NULL, 1, 0, 0);
    codeobj_6cfbd41b643d9df19a9d7814f82698c9 = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[91], mod_consts[91], mod_consts[336], NULL, 1, 0, 0);
    codeobj_4fa4e501dfea68dd37ba7be771befc58 = MAKE_CODE_OBJECT(module_filename_obj, 128, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[92], mod_consts[92], mod_consts[336], NULL, 1, 0, 0);
    codeobj_1346cd135aa87889f7a1f3619f2d8db2 = MAKE_CODE_OBJECT(module_filename_obj, 129, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[93], mod_consts[93], mod_consts[336], NULL, 1, 0, 0);
    codeobj_602c54f0a37ee0aef9dc83acd564cbf7 = MAKE_CODE_OBJECT(module_filename_obj, 130, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[94], mod_consts[94], mod_consts[336], NULL, 1, 0, 0);
    codeobj_34fc6684fd3f6c8e105d89bba384fd51 = MAKE_CODE_OBJECT(module_filename_obj, 131, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[95], mod_consts[336], NULL, 1, 0, 0);
    codeobj_1054b4959166fff5ef1e73c3ecc780b9 = MAKE_CODE_OBJECT(module_filename_obj, 114, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[336], NULL, 1, 0, 0);
    codeobj_6e85a35f49234bf6bf89de065cb79f59 = MAKE_CODE_OBJECT(module_filename_obj, 132, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[96], mod_consts[96], mod_consts[336], NULL, 1, 0, 0);
    codeobj_1e704fe612d31e6872eb5ffdd2a7739a = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[336], NULL, 1, 0, 0);
    codeobj_cdb4a9c4c8d7c5378daee29ebaafd306 = MAKE_CODE_OBJECT(module_filename_obj, 134, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[98], mod_consts[98], mod_consts[336], NULL, 1, 0, 0);
    codeobj_c680daa41894eaa6c84c4152e7a4d652 = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[99], mod_consts[99], mod_consts[336], NULL, 1, 0, 0);
    codeobj_5fd8d2e2ce614a2838cdc80900f8d873 = MAKE_CODE_OBJECT(module_filename_obj, 136, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[100], mod_consts[100], mod_consts[336], NULL, 1, 0, 0);
    codeobj_e70427f8e2525b689c9a4c43e5c1916c = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[336], NULL, 1, 0, 0);
    codeobj_add1727bd02c66bb93618aae2e582794 = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[102], mod_consts[102], mod_consts[336], NULL, 1, 0, 0);
    codeobj_daff43ca2b7853898a88dd8e608e6490 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[103], mod_consts[103], mod_consts[336], NULL, 1, 0, 0);
    codeobj_42de8ee7ded3529cb306f0f4feaa3896 = MAKE_CODE_OBJECT(module_filename_obj, 140, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[104], mod_consts[104], mod_consts[336], NULL, 1, 0, 0);
    codeobj_70069f9e26ebfa29f22811c477bfaec4 = MAKE_CODE_OBJECT(module_filename_obj, 141, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[105], mod_consts[105], mod_consts[336], NULL, 1, 0, 0);
    codeobj_6e2b71cc47e4c6ef998ad76dca63a8b3 = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[336], NULL, 1, 0, 0);
    codeobj_342f9d93e90bb691e23666fb481c43aa = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[336], NULL, 1, 0, 0);
    codeobj_1a05bd0a8d2a05d0cb9c74bca2f08040 = MAKE_CODE_OBJECT(module_filename_obj, 143, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[107], mod_consts[107], mod_consts[336], NULL, 1, 0, 0);
    codeobj_bedacddae73f1407e75fbed83f94038d = MAKE_CODE_OBJECT(module_filename_obj, 144, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[108], mod_consts[108], mod_consts[337], NULL, 1, 0, 0);
    codeobj_ae42c534bdd50fbc6930d27f4693e71c = MAKE_CODE_OBJECT(module_filename_obj, 153, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[109], mod_consts[109], mod_consts[336], NULL, 1, 0, 0);
    codeobj_5d4552fda44d18892832df6815d4c65e = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[110], mod_consts[110], mod_consts[336], NULL, 1, 0, 0);
    codeobj_2f7ef3de808e0c9aa593d9edd9d15e56 = MAKE_CODE_OBJECT(module_filename_obj, 155, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[111], mod_consts[111], mod_consts[336], NULL, 1, 0, 0);
    codeobj_c30a511137039a139da1560c04aa087b = MAKE_CODE_OBJECT(module_filename_obj, 156, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[112], mod_consts[112], mod_consts[336], NULL, 1, 0, 0);
    codeobj_1ccbce328cc0b8e649f067941597a582 = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[80], mod_consts[80], mod_consts[336], NULL, 1, 0, 0);
    codeobj_6e6e205b8a8f0276f4668b121ea50ee7 = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[81], mod_consts[81], mod_consts[336], NULL, 1, 0, 0);
    codeobj_37822a379b49894f6d0e929cbfb57165 = MAKE_CODE_OBJECT(module_filename_obj, 118, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[336], NULL, 1, 0, 0);
    codeobj_f3ffc56c250278247faea3841785f2e4 = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[336], NULL, 1, 0, 0);
    codeobj_02307b31f7f66d93b4e65a5e8173e0a0 = MAKE_CODE_OBJECT(module_filename_obj, 120, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[84], mod_consts[84], mod_consts[336], NULL, 1, 0, 0);
    codeobj_c444d01ae541266be04aca09effeb94b = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[336], NULL, 1, 0, 0);
    codeobj_2167435bf2ed2f88e36b0b544f18b629 = MAKE_CODE_OBJECT(module_filename_obj, 1023, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[232], mod_consts[232], mod_consts[336], NULL, 1, 0, 0);
    codeobj_08c7f846454187b5298326343cbd17b7 = MAKE_CODE_OBJECT(module_filename_obj, 1022, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[231], mod_consts[231], mod_consts[336], NULL, 1, 0, 0);
    codeobj_29d9ce4ec564f0d320d5eef534d769ae = MAKE_CODE_OBJECT(module_filename_obj, 1021, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[230], mod_consts[230], mod_consts[336], NULL, 1, 0, 0);
    codeobj_0b3da2a37d473d9856f7871b6ebef882 = MAKE_CODE_OBJECT(module_filename_obj, 1102, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[240], mod_consts[240], mod_consts[336], NULL, 1, 0, 0);
    codeobj_ad4f58ec2d3f069122ea6de3a96460ee = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[336], NULL, 1, 0, 0);
    codeobj_79ac6e0034b80220a0f6858dc582089d = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[66], mod_consts[336], NULL, 1, 0, 0);
    codeobj_5890105dde54f9e4a16393dc4540e18f = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[336], NULL, 1, 0, 0);
    codeobj_4daf2a95c7037f8a85fc565d3f3d9885 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[338], NULL, 4, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__10__g1();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__11__g2();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__12__g3();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__13__g4();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__14__g5();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__15__g6();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__16__g7();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__17__g8();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__18__g9();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__19__g10();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__1__flag_red();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__20__g11();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__21__g12();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__22__g13();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__23__g14();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__24__g15();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__25__g16();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__26__g17();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__27__g18();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__28__g19();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__29__g20();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__2__flag_green();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__30__g21();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__31__g22();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__32__g23();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__33__g24();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__34__g25();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__35__g26();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__36__g27();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__37__g28();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__38__g29();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__39__g30();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__3__flag_blue();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__40__g31();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__41__g32();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__42__g33();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__43__g34();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__44__g35();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__45__g36();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__46__gist_heat_red();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__47__gist_heat_green();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__48__gist_heat_blue();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__49__gist_yarg();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__4__prism_red();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__5__prism_green();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__6__prism_blue();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__7__ch_helper();


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__8_cubehelix(PyObject *defaults);


static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__9__g0();


// The module function definitions.
static PyObject *impl_matplotlib$_cm$$$function__1__flag_red(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_b18ce6f1000c99b0244a15c0e6987de4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b18ce6f1000c99b0244a15c0e6987de4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b18ce6f1000c99b0244a15c0e6987de4)) {
        Py_XDECREF(cache_frame_b18ce6f1000c99b0244a15c0e6987de4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b18ce6f1000c99b0244a15c0e6987de4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b18ce6f1000c99b0244a15c0e6987de4 = MAKE_FUNCTION_FRAME(codeobj_b18ce6f1000c99b0244a15c0e6987de4, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b18ce6f1000c99b0244a15c0e6987de4->m_type_description == NULL);
    frame_b18ce6f1000c99b0244a15c0e6987de4 = cache_frame_b18ce6f1000c99b0244a15c0e6987de4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b18ce6f1000c99b0244a15c0e6987de4);
    assert(Py_REFCNT(frame_b18ce6f1000c99b0244a15c0e6987de4) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_expression_value_2;
        tmp_mult_expr_left_1 = mod_consts[0];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_mult_expr_left_3 = par_x;
        tmp_mult_expr_right_3 = mod_consts[3];
        tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[4];
        tmp_mult_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b18ce6f1000c99b0244a15c0e6987de4->m_frame.f_lineno = 46;
        tmp_mult_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[6];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
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
        exception_tb = MAKE_TRACEBACK(frame_b18ce6f1000c99b0244a15c0e6987de4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b18ce6f1000c99b0244a15c0e6987de4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b18ce6f1000c99b0244a15c0e6987de4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b18ce6f1000c99b0244a15c0e6987de4,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_b18ce6f1000c99b0244a15c0e6987de4 == cache_frame_b18ce6f1000c99b0244a15c0e6987de4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b18ce6f1000c99b0244a15c0e6987de4);
        cache_frame_b18ce6f1000c99b0244a15c0e6987de4 = NULL;
    }

    assertFrameObject(frame_b18ce6f1000c99b0244a15c0e6987de4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__2__flag_green(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_1214e46c2e8e525fc07d792a8fa0e08d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1214e46c2e8e525fc07d792a8fa0e08d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1214e46c2e8e525fc07d792a8fa0e08d)) {
        Py_XDECREF(cache_frame_1214e46c2e8e525fc07d792a8fa0e08d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1214e46c2e8e525fc07d792a8fa0e08d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1214e46c2e8e525fc07d792a8fa0e08d = MAKE_FUNCTION_FRAME(codeobj_1214e46c2e8e525fc07d792a8fa0e08d, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1214e46c2e8e525fc07d792a8fa0e08d->m_type_description == NULL);
    frame_1214e46c2e8e525fc07d792a8fa0e08d = cache_frame_1214e46c2e8e525fc07d792a8fa0e08d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1214e46c2e8e525fc07d792a8fa0e08d);
    assert(Py_REFCNT(frame_1214e46c2e8e525fc07d792a8fa0e08d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_mult_expr_left_2 = par_x;
        tmp_mult_expr_right_2 = mod_consts[3];
        tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 47;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1214e46c2e8e525fc07d792a8fa0e08d->m_frame.f_lineno = 47;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
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
        exception_tb = MAKE_TRACEBACK(frame_1214e46c2e8e525fc07d792a8fa0e08d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1214e46c2e8e525fc07d792a8fa0e08d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1214e46c2e8e525fc07d792a8fa0e08d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1214e46c2e8e525fc07d792a8fa0e08d,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_1214e46c2e8e525fc07d792a8fa0e08d == cache_frame_1214e46c2e8e525fc07d792a8fa0e08d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1214e46c2e8e525fc07d792a8fa0e08d);
        cache_frame_1214e46c2e8e525fc07d792a8fa0e08d = NULL;
    }

    assertFrameObject(frame_1214e46c2e8e525fc07d792a8fa0e08d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__3__flag_blue(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_acb5dbffd2d5a77cc78bba87899d54f0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_acb5dbffd2d5a77cc78bba87899d54f0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_acb5dbffd2d5a77cc78bba87899d54f0)) {
        Py_XDECREF(cache_frame_acb5dbffd2d5a77cc78bba87899d54f0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_acb5dbffd2d5a77cc78bba87899d54f0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_acb5dbffd2d5a77cc78bba87899d54f0 = MAKE_FUNCTION_FRAME(codeobj_acb5dbffd2d5a77cc78bba87899d54f0, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_acb5dbffd2d5a77cc78bba87899d54f0->m_type_description == NULL);
    frame_acb5dbffd2d5a77cc78bba87899d54f0 = cache_frame_acb5dbffd2d5a77cc78bba87899d54f0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_acb5dbffd2d5a77cc78bba87899d54f0);
    assert(Py_REFCNT(frame_acb5dbffd2d5a77cc78bba87899d54f0) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_expression_value_2;
        tmp_mult_expr_left_1 = mod_consts[0];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_mult_expr_left_3 = par_x;
        tmp_mult_expr_right_3 = mod_consts[3];
        tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[4];
        tmp_mult_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_FLOAT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_acb5dbffd2d5a77cc78bba87899d54f0->m_frame.f_lineno = 48;
        tmp_mult_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[6];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
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
        exception_tb = MAKE_TRACEBACK(frame_acb5dbffd2d5a77cc78bba87899d54f0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_acb5dbffd2d5a77cc78bba87899d54f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_acb5dbffd2d5a77cc78bba87899d54f0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_acb5dbffd2d5a77cc78bba87899d54f0,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_acb5dbffd2d5a77cc78bba87899d54f0 == cache_frame_acb5dbffd2d5a77cc78bba87899d54f0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_acb5dbffd2d5a77cc78bba87899d54f0);
        cache_frame_acb5dbffd2d5a77cc78bba87899d54f0 = NULL;
    }

    assertFrameObject(frame_acb5dbffd2d5a77cc78bba87899d54f0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__4__prism_red(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_5890105dde54f9e4a16393dc4540e18f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5890105dde54f9e4a16393dc4540e18f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5890105dde54f9e4a16393dc4540e18f)) {
        Py_XDECREF(cache_frame_5890105dde54f9e4a16393dc4540e18f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5890105dde54f9e4a16393dc4540e18f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5890105dde54f9e4a16393dc4540e18f = MAKE_FUNCTION_FRAME(codeobj_5890105dde54f9e4a16393dc4540e18f, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5890105dde54f9e4a16393dc4540e18f->m_type_description == NULL);
    frame_5890105dde54f9e4a16393dc4540e18f = cache_frame_5890105dde54f9e4a16393dc4540e18f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5890105dde54f9e4a16393dc4540e18f);
    assert(Py_REFCNT(frame_5890105dde54f9e4a16393dc4540e18f) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_expression_value_2;
        tmp_mult_expr_left_1 = mod_consts[0];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_mult_expr_left_3 = par_x;
        tmp_mult_expr_right_3 = mod_consts[7];
        tmp_add_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[4];
        tmp_mult_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5890105dde54f9e4a16393dc4540e18f->m_frame.f_lineno = 51;
        tmp_mult_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[8];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
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
        exception_tb = MAKE_TRACEBACK(frame_5890105dde54f9e4a16393dc4540e18f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5890105dde54f9e4a16393dc4540e18f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5890105dde54f9e4a16393dc4540e18f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5890105dde54f9e4a16393dc4540e18f,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_5890105dde54f9e4a16393dc4540e18f == cache_frame_5890105dde54f9e4a16393dc4540e18f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5890105dde54f9e4a16393dc4540e18f);
        cache_frame_5890105dde54f9e4a16393dc4540e18f = NULL;
    }

    assertFrameObject(frame_5890105dde54f9e4a16393dc4540e18f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__5__prism_green(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_79ac6e0034b80220a0f6858dc582089d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_79ac6e0034b80220a0f6858dc582089d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_79ac6e0034b80220a0f6858dc582089d)) {
        Py_XDECREF(cache_frame_79ac6e0034b80220a0f6858dc582089d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_79ac6e0034b80220a0f6858dc582089d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_79ac6e0034b80220a0f6858dc582089d = MAKE_FUNCTION_FRAME(codeobj_79ac6e0034b80220a0f6858dc582089d, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_79ac6e0034b80220a0f6858dc582089d->m_type_description == NULL);
    frame_79ac6e0034b80220a0f6858dc582089d = cache_frame_79ac6e0034b80220a0f6858dc582089d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_79ac6e0034b80220a0f6858dc582089d);
    assert(Py_REFCNT(frame_79ac6e0034b80220a0f6858dc582089d) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_expression_value_2;
        tmp_mult_expr_left_1 = mod_consts[0];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_mult_expr_left_3 = par_x;
        tmp_mult_expr_right_3 = mod_consts[7];
        tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[4];
        tmp_mult_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_FLOAT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_79ac6e0034b80220a0f6858dc582089d->m_frame.f_lineno = 52;
        tmp_mult_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[9];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
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
        exception_tb = MAKE_TRACEBACK(frame_79ac6e0034b80220a0f6858dc582089d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_79ac6e0034b80220a0f6858dc582089d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_79ac6e0034b80220a0f6858dc582089d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_79ac6e0034b80220a0f6858dc582089d,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_79ac6e0034b80220a0f6858dc582089d == cache_frame_79ac6e0034b80220a0f6858dc582089d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_79ac6e0034b80220a0f6858dc582089d);
        cache_frame_79ac6e0034b80220a0f6858dc582089d = NULL;
    }

    assertFrameObject(frame_79ac6e0034b80220a0f6858dc582089d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__6__prism_blue(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_ad4f58ec2d3f069122ea6de3a96460ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ad4f58ec2d3f069122ea6de3a96460ee = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ad4f58ec2d3f069122ea6de3a96460ee)) {
        Py_XDECREF(cache_frame_ad4f58ec2d3f069122ea6de3a96460ee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ad4f58ec2d3f069122ea6de3a96460ee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ad4f58ec2d3f069122ea6de3a96460ee = MAKE_FUNCTION_FRAME(codeobj_ad4f58ec2d3f069122ea6de3a96460ee, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ad4f58ec2d3f069122ea6de3a96460ee->m_type_description == NULL);
    frame_ad4f58ec2d3f069122ea6de3a96460ee = cache_frame_ad4f58ec2d3f069122ea6de3a96460ee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ad4f58ec2d3f069122ea6de3a96460ee);
    assert(Py_REFCNT(frame_ad4f58ec2d3f069122ea6de3a96460ee) == 2);

    // Framed code:
    {
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_expression_value_2;
        tmp_mult_expr_left_1 = mod_consts[10];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_mult_expr_left_3 = par_x;
        tmp_mult_expr_right_3 = mod_consts[7];
        tmp_mult_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 53;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 53;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 53;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 53;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ad4f58ec2d3f069122ea6de3a96460ee->m_frame.f_lineno = 53;
        tmp_mult_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
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
        exception_tb = MAKE_TRACEBACK(frame_ad4f58ec2d3f069122ea6de3a96460ee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad4f58ec2d3f069122ea6de3a96460ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad4f58ec2d3f069122ea6de3a96460ee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ad4f58ec2d3f069122ea6de3a96460ee,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_ad4f58ec2d3f069122ea6de3a96460ee == cache_frame_ad4f58ec2d3f069122ea6de3a96460ee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ad4f58ec2d3f069122ea6de3a96460ee);
        cache_frame_ad4f58ec2d3f069122ea6de3a96460ee = NULL;
    }

    assertFrameObject(frame_ad4f58ec2d3f069122ea6de3a96460ee);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__7__ch_helper(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_gamma = python_pars[0];
    PyObject *par_s = python_pars[1];
    PyObject *par_r = python_pars[2];
    PyObject *par_h = python_pars[3];
    PyObject *par_p0 = python_pars[4];
    PyObject *par_p1 = python_pars[5];
    PyObject *par_x = python_pars[6];
    PyObject *var_xg = NULL;
    PyObject *var_a = NULL;
    PyObject *var_phi = NULL;
    struct Nuitka_FrameObject *frame_255571b316e5b529581e1c91e67c8542;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_255571b316e5b529581e1c91e67c8542 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_255571b316e5b529581e1c91e67c8542)) {
        Py_XDECREF(cache_frame_255571b316e5b529581e1c91e67c8542);

#if _DEBUG_REFCOUNTS
        if (cache_frame_255571b316e5b529581e1c91e67c8542 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_255571b316e5b529581e1c91e67c8542 = MAKE_FUNCTION_FRAME(codeobj_255571b316e5b529581e1c91e67c8542, module_matplotlib$_cm, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_255571b316e5b529581e1c91e67c8542->m_type_description == NULL);
    frame_255571b316e5b529581e1c91e67c8542 = cache_frame_255571b316e5b529581e1c91e67c8542;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_255571b316e5b529581e1c91e67c8542);
    assert(Py_REFCNT(frame_255571b316e5b529581e1c91e67c8542) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_pow_expr_left_1 = par_x;
        CHECK_OBJECT(par_gamma);
        tmp_pow_expr_right_1 = par_gamma;
        tmp_assign_source_1 = BINARY_OPERATION_POW_OBJECT_OBJECT_OBJECT(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_xg == NULL);
        var_xg = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(par_h);
        tmp_mult_expr_left_2 = par_h;
        CHECK_OBJECT(var_xg);
        tmp_mult_expr_right_2 = var_xg;
        tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_1 = mod_consts[11];
        CHECK_OBJECT(var_xg);
        tmp_sub_expr_right_1 = var_xg;
        tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 62;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[12];
        tmp_assign_source_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_a == NULL);
        var_a = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        tmp_mult_expr_left_4 = mod_consts[12];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_mult_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_right_4);
        if (tmp_mult_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_s);
        tmp_truediv_expr_left_2 = par_s;
        tmp_truediv_expr_right_2 = mod_consts[13];
        tmp_add_expr_left_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_3);

            exception_lineno = 63;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_r);
        tmp_mult_expr_left_5 = par_r;
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_5 = par_x;
        tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_3);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 63;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_mult_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_3);

            exception_lineno = 63;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        Py_DECREF(tmp_mult_expr_right_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_phi == NULL);
        var_phi = tmp_assign_source_3;
    }
    {
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_xg);
        tmp_add_expr_left_2 = var_xg;
        CHECK_OBJECT(var_a);
        tmp_mult_expr_left_6 = var_a;
        CHECK_OBJECT(par_p0);
        tmp_mult_expr_left_7 = par_p0;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_phi);
        tmp_args_element_value_1 = var_phi;
        frame_255571b316e5b529581e1c91e67c8542->m_frame.f_lineno = 64;
        tmp_mult_expr_right_7 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[14], tmp_args_element_value_1);
        if (tmp_mult_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        Py_DECREF(tmp_mult_expr_right_7);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_p1);
        tmp_mult_expr_left_8 = par_p1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 64;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_phi);
        tmp_args_element_value_2 = var_phi;
        frame_255571b316e5b529581e1c91e67c8542->m_frame.f_lineno = 64;
        tmp_mult_expr_right_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[2], tmp_args_element_value_2);
        if (tmp_mult_expr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 64;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        Py_DECREF(tmp_mult_expr_right_8);
        if (tmp_add_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 64;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_mult_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        Py_DECREF(tmp_mult_expr_right_6);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_255571b316e5b529581e1c91e67c8542, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_255571b316e5b529581e1c91e67c8542->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_255571b316e5b529581e1c91e67c8542, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_255571b316e5b529581e1c91e67c8542,
        type_description_1,
        par_gamma,
        par_s,
        par_r,
        par_h,
        par_p0,
        par_p1,
        par_x,
        var_xg,
        var_a,
        var_phi
    );


    // Release cached frame if used for exception.
    if (frame_255571b316e5b529581e1c91e67c8542 == cache_frame_255571b316e5b529581e1c91e67c8542) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_255571b316e5b529581e1c91e67c8542);
        cache_frame_255571b316e5b529581e1c91e67c8542 = NULL;
    }

    assertFrameObject(frame_255571b316e5b529581e1c91e67c8542);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_xg);
    Py_DECREF(var_xg);
    var_xg = NULL;
    CHECK_OBJECT(var_a);
    Py_DECREF(var_a);
    var_a = NULL;
    CHECK_OBJECT(var_phi);
    Py_DECREF(var_phi);
    var_phi = NULL;
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

    Py_XDECREF(var_xg);
    var_xg = NULL;
    Py_XDECREF(var_a);
    var_a = NULL;
    Py_XDECREF(var_phi);
    var_phi = NULL;
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
    CHECK_OBJECT(par_gamma);
    Py_DECREF(par_gamma);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    CHECK_OBJECT(par_h);
    Py_DECREF(par_h);
    CHECK_OBJECT(par_p0);
    Py_DECREF(par_p0);
    CHECK_OBJECT(par_p1);
    Py_DECREF(par_p1);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_gamma);
    Py_DECREF(par_gamma);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    CHECK_OBJECT(par_h);
    Py_DECREF(par_h);
    CHECK_OBJECT(par_p0);
    Py_DECREF(par_p0);
    CHECK_OBJECT(par_p1);
    Py_DECREF(par_p1);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__8_cubehelix(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_gamma = python_pars[0];
    PyObject *par_s = python_pars[1];
    PyObject *par_r = python_pars[2];
    PyObject *par_h = python_pars[3];
    struct Nuitka_FrameObject *frame_4daf2a95c7037f8a85fc565d3f3d9885;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4daf2a95c7037f8a85fc565d3f3d9885 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4daf2a95c7037f8a85fc565d3f3d9885)) {
        Py_XDECREF(cache_frame_4daf2a95c7037f8a85fc565d3f3d9885);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4daf2a95c7037f8a85fc565d3f3d9885 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4daf2a95c7037f8a85fc565d3f3d9885 = MAKE_FUNCTION_FRAME(codeobj_4daf2a95c7037f8a85fc565d3f3d9885, module_matplotlib$_cm, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4daf2a95c7037f8a85fc565d3f3d9885->m_type_description == NULL);
    frame_4daf2a95c7037f8a85fc565d3f3d9885 = cache_frame_4daf2a95c7037f8a85fc565d3f3d9885;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4daf2a95c7037f8a85fc565d3f3d9885);
    assert(Py_REFCNT(frame_4daf2a95c7037f8a85fc565d3f3d9885) == 2);

    // Framed code:
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_dict_key_1 = mod_consts[16];
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_called_value_1 == NULL));
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_gamma);
        tmp_args_element_value_2 = par_gamma;
        CHECK_OBJECT(par_s);
        tmp_args_element_value_3 = par_s;
        CHECK_OBJECT(par_r);
        tmp_args_element_value_4 = par_r;
        CHECK_OBJECT(par_h);
        tmp_args_element_value_5 = par_h;
        tmp_args_element_value_6 = mod_consts[19];
        tmp_args_element_value_7 = mod_consts[20];
        frame_4daf2a95c7037f8a85fc565d3f3d9885->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_1, call_args);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_args_element_value_21;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[21];
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_args_element_value_8 == NULL)) {
                tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_args_element_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(par_gamma);
            tmp_args_element_value_9 = par_gamma;
            CHECK_OBJECT(par_s);
            tmp_args_element_value_10 = par_s;
            CHECK_OBJECT(par_r);
            tmp_args_element_value_11 = par_r;
            CHECK_OBJECT(par_h);
            tmp_args_element_value_12 = par_h;
            tmp_args_element_value_13 = mod_consts[22];
            tmp_args_element_value_14 = mod_consts[23];
            frame_4daf2a95c7037f8a85fc565d3f3d9885->m_frame.f_lineno = 103;
            {
                PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
                tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_2, call_args);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[24];
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_15 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[18]);

            if (unlikely(tmp_args_element_value_15 == NULL)) {
                tmp_args_element_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
            }

            if (tmp_args_element_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(par_gamma);
            tmp_args_element_value_16 = par_gamma;
            CHECK_OBJECT(par_s);
            tmp_args_element_value_17 = par_s;
            CHECK_OBJECT(par_r);
            tmp_args_element_value_18 = par_r;
            CHECK_OBJECT(par_h);
            tmp_args_element_value_19 = par_h;
            tmp_args_element_value_20 = mod_consts[25];
            tmp_args_element_value_21 = mod_consts[26];
            frame_4daf2a95c7037f8a85fc565d3f3d9885->m_frame.f_lineno = 104;
            {
                PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
                tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_3, call_args);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;
                type_description_1 = "oooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_4daf2a95c7037f8a85fc565d3f3d9885, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4daf2a95c7037f8a85fc565d3f3d9885->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4daf2a95c7037f8a85fc565d3f3d9885, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4daf2a95c7037f8a85fc565d3f3d9885,
        type_description_1,
        par_gamma,
        par_s,
        par_r,
        par_h
    );


    // Release cached frame if used for exception.
    if (frame_4daf2a95c7037f8a85fc565d3f3d9885 == cache_frame_4daf2a95c7037f8a85fc565d3f3d9885) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4daf2a95c7037f8a85fc565d3f3d9885);
        cache_frame_4daf2a95c7037f8a85fc565d3f3d9885 = NULL;
    }

    assertFrameObject(frame_4daf2a95c7037f8a85fc565d3f3d9885);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_gamma);
    Py_DECREF(par_gamma);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    CHECK_OBJECT(par_h);
    Py_DECREF(par_h);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_gamma);
    Py_DECREF(par_gamma);
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    CHECK_OBJECT(par_h);
    Py_DECREF(par_h);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__12__g3(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    CHECK_OBJECT(par_x);
    tmp_return_value = par_x;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__13__g4(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_1ccbce328cc0b8e649f067941597a582;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1ccbce328cc0b8e649f067941597a582 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1ccbce328cc0b8e649f067941597a582)) {
        Py_XDECREF(cache_frame_1ccbce328cc0b8e649f067941597a582);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1ccbce328cc0b8e649f067941597a582 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1ccbce328cc0b8e649f067941597a582 = MAKE_FUNCTION_FRAME(codeobj_1ccbce328cc0b8e649f067941597a582, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1ccbce328cc0b8e649f067941597a582->m_type_description == NULL);
    frame_1ccbce328cc0b8e649f067941597a582 = cache_frame_1ccbce328cc0b8e649f067941597a582;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1ccbce328cc0b8e649f067941597a582);
    assert(Py_REFCNT(frame_1ccbce328cc0b8e649f067941597a582) == 2);

    // Framed code:
    {
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_pow_expr_left_1 = par_x;
        tmp_pow_expr_right_1 = mod_consts[12];
        tmp_return_value = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
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
        exception_tb = MAKE_TRACEBACK(frame_1ccbce328cc0b8e649f067941597a582, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1ccbce328cc0b8e649f067941597a582->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1ccbce328cc0b8e649f067941597a582, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1ccbce328cc0b8e649f067941597a582,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_1ccbce328cc0b8e649f067941597a582 == cache_frame_1ccbce328cc0b8e649f067941597a582) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1ccbce328cc0b8e649f067941597a582);
        cache_frame_1ccbce328cc0b8e649f067941597a582 = NULL;
    }

    assertFrameObject(frame_1ccbce328cc0b8e649f067941597a582);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__14__g5(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_6e6e205b8a8f0276f4668b121ea50ee7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6e6e205b8a8f0276f4668b121ea50ee7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6e6e205b8a8f0276f4668b121ea50ee7)) {
        Py_XDECREF(cache_frame_6e6e205b8a8f0276f4668b121ea50ee7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e6e205b8a8f0276f4668b121ea50ee7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e6e205b8a8f0276f4668b121ea50ee7 = MAKE_FUNCTION_FRAME(codeobj_6e6e205b8a8f0276f4668b121ea50ee7, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6e6e205b8a8f0276f4668b121ea50ee7->m_type_description == NULL);
    frame_6e6e205b8a8f0276f4668b121ea50ee7 = cache_frame_6e6e205b8a8f0276f4668b121ea50ee7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6e6e205b8a8f0276f4668b121ea50ee7);
    assert(Py_REFCNT(frame_6e6e205b8a8f0276f4668b121ea50ee7) == 2);

    // Framed code:
    {
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_pow_expr_left_1 = par_x;
        tmp_pow_expr_right_1 = mod_consts[13];
        tmp_return_value = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
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
        exception_tb = MAKE_TRACEBACK(frame_6e6e205b8a8f0276f4668b121ea50ee7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e6e205b8a8f0276f4668b121ea50ee7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e6e205b8a8f0276f4668b121ea50ee7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e6e205b8a8f0276f4668b121ea50ee7,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_6e6e205b8a8f0276f4668b121ea50ee7 == cache_frame_6e6e205b8a8f0276f4668b121ea50ee7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6e6e205b8a8f0276f4668b121ea50ee7);
        cache_frame_6e6e205b8a8f0276f4668b121ea50ee7 = NULL;
    }

    assertFrameObject(frame_6e6e205b8a8f0276f4668b121ea50ee7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__15__g6(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_37822a379b49894f6d0e929cbfb57165;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_37822a379b49894f6d0e929cbfb57165 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_37822a379b49894f6d0e929cbfb57165)) {
        Py_XDECREF(cache_frame_37822a379b49894f6d0e929cbfb57165);

#if _DEBUG_REFCOUNTS
        if (cache_frame_37822a379b49894f6d0e929cbfb57165 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_37822a379b49894f6d0e929cbfb57165 = MAKE_FUNCTION_FRAME(codeobj_37822a379b49894f6d0e929cbfb57165, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_37822a379b49894f6d0e929cbfb57165->m_type_description == NULL);
    frame_37822a379b49894f6d0e929cbfb57165 = cache_frame_37822a379b49894f6d0e929cbfb57165;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_37822a379b49894f6d0e929cbfb57165);
    assert(Py_REFCNT(frame_37822a379b49894f6d0e929cbfb57165) == 2);

    // Framed code:
    {
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_pow_expr_left_1 = par_x;
        tmp_pow_expr_right_1 = mod_consts[28];
        tmp_return_value = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
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
        exception_tb = MAKE_TRACEBACK(frame_37822a379b49894f6d0e929cbfb57165, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_37822a379b49894f6d0e929cbfb57165->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_37822a379b49894f6d0e929cbfb57165, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_37822a379b49894f6d0e929cbfb57165,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_37822a379b49894f6d0e929cbfb57165 == cache_frame_37822a379b49894f6d0e929cbfb57165) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_37822a379b49894f6d0e929cbfb57165);
        cache_frame_37822a379b49894f6d0e929cbfb57165 = NULL;
    }

    assertFrameObject(frame_37822a379b49894f6d0e929cbfb57165);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__16__g7(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_f3ffc56c250278247faea3841785f2e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f3ffc56c250278247faea3841785f2e4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f3ffc56c250278247faea3841785f2e4)) {
        Py_XDECREF(cache_frame_f3ffc56c250278247faea3841785f2e4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f3ffc56c250278247faea3841785f2e4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f3ffc56c250278247faea3841785f2e4 = MAKE_FUNCTION_FRAME(codeobj_f3ffc56c250278247faea3841785f2e4, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f3ffc56c250278247faea3841785f2e4->m_type_description == NULL);
    frame_f3ffc56c250278247faea3841785f2e4 = cache_frame_f3ffc56c250278247faea3841785f2e4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f3ffc56c250278247faea3841785f2e4);
    assert(Py_REFCNT(frame_f3ffc56c250278247faea3841785f2e4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_f3ffc56c250278247faea3841785f2e4->m_frame.f_lineno = 119;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[29], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
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
        exception_tb = MAKE_TRACEBACK(frame_f3ffc56c250278247faea3841785f2e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f3ffc56c250278247faea3841785f2e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f3ffc56c250278247faea3841785f2e4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f3ffc56c250278247faea3841785f2e4,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_f3ffc56c250278247faea3841785f2e4 == cache_frame_f3ffc56c250278247faea3841785f2e4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f3ffc56c250278247faea3841785f2e4);
        cache_frame_f3ffc56c250278247faea3841785f2e4 = NULL;
    }

    assertFrameObject(frame_f3ffc56c250278247faea3841785f2e4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__17__g8(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_02307b31f7f66d93b4e65a5e8173e0a0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_02307b31f7f66d93b4e65a5e8173e0a0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_02307b31f7f66d93b4e65a5e8173e0a0)) {
        Py_XDECREF(cache_frame_02307b31f7f66d93b4e65a5e8173e0a0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_02307b31f7f66d93b4e65a5e8173e0a0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_02307b31f7f66d93b4e65a5e8173e0a0 = MAKE_FUNCTION_FRAME(codeobj_02307b31f7f66d93b4e65a5e8173e0a0, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_02307b31f7f66d93b4e65a5e8173e0a0->m_type_description == NULL);
    frame_02307b31f7f66d93b4e65a5e8173e0a0 = cache_frame_02307b31f7f66d93b4e65a5e8173e0a0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_02307b31f7f66d93b4e65a5e8173e0a0);
    assert(Py_REFCNT(frame_02307b31f7f66d93b4e65a5e8173e0a0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[29]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_02307b31f7f66d93b4e65a5e8173e0a0->m_frame.f_lineno = 120;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[29], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_02307b31f7f66d93b4e65a5e8173e0a0->m_frame.f_lineno = 120;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
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
        exception_tb = MAKE_TRACEBACK(frame_02307b31f7f66d93b4e65a5e8173e0a0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_02307b31f7f66d93b4e65a5e8173e0a0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_02307b31f7f66d93b4e65a5e8173e0a0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_02307b31f7f66d93b4e65a5e8173e0a0,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_02307b31f7f66d93b4e65a5e8173e0a0 == cache_frame_02307b31f7f66d93b4e65a5e8173e0a0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_02307b31f7f66d93b4e65a5e8173e0a0);
        cache_frame_02307b31f7f66d93b4e65a5e8173e0a0 = NULL;
    }

    assertFrameObject(frame_02307b31f7f66d93b4e65a5e8173e0a0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__18__g9(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_c444d01ae541266be04aca09effeb94b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c444d01ae541266be04aca09effeb94b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c444d01ae541266be04aca09effeb94b)) {
        Py_XDECREF(cache_frame_c444d01ae541266be04aca09effeb94b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c444d01ae541266be04aca09effeb94b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c444d01ae541266be04aca09effeb94b = MAKE_FUNCTION_FRAME(codeobj_c444d01ae541266be04aca09effeb94b, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c444d01ae541266be04aca09effeb94b->m_type_description == NULL);
    frame_c444d01ae541266be04aca09effeb94b = cache_frame_c444d01ae541266be04aca09effeb94b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c444d01ae541266be04aca09effeb94b);
    assert(Py_REFCNT(frame_c444d01ae541266be04aca09effeb94b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_mult_expr_left_1 = par_x;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 121;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 121;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 121;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[12];
        tmp_args_element_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 121;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c444d01ae541266be04aca09effeb94b->m_frame.f_lineno = 121;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
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
        exception_tb = MAKE_TRACEBACK(frame_c444d01ae541266be04aca09effeb94b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c444d01ae541266be04aca09effeb94b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c444d01ae541266be04aca09effeb94b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c444d01ae541266be04aca09effeb94b,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_c444d01ae541266be04aca09effeb94b == cache_frame_c444d01ae541266be04aca09effeb94b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c444d01ae541266be04aca09effeb94b);
        cache_frame_c444d01ae541266be04aca09effeb94b = NULL;
    }

    assertFrameObject(frame_c444d01ae541266be04aca09effeb94b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__19__g10(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_7a10c44b76aa65a769d54530e6846c06;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7a10c44b76aa65a769d54530e6846c06 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7a10c44b76aa65a769d54530e6846c06)) {
        Py_XDECREF(cache_frame_7a10c44b76aa65a769d54530e6846c06);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7a10c44b76aa65a769d54530e6846c06 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7a10c44b76aa65a769d54530e6846c06 = MAKE_FUNCTION_FRAME(codeobj_7a10c44b76aa65a769d54530e6846c06, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7a10c44b76aa65a769d54530e6846c06->m_type_description == NULL);
    frame_7a10c44b76aa65a769d54530e6846c06 = cache_frame_7a10c44b76aa65a769d54530e6846c06;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7a10c44b76aa65a769d54530e6846c06);
    assert(Py_REFCNT(frame_7a10c44b76aa65a769d54530e6846c06) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_mult_expr_left_1 = par_x;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[12];
        tmp_args_element_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7a10c44b76aa65a769d54530e6846c06->m_frame.f_lineno = 122;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
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
        exception_tb = MAKE_TRACEBACK(frame_7a10c44b76aa65a769d54530e6846c06, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7a10c44b76aa65a769d54530e6846c06->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a10c44b76aa65a769d54530e6846c06, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7a10c44b76aa65a769d54530e6846c06,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_7a10c44b76aa65a769d54530e6846c06 == cache_frame_7a10c44b76aa65a769d54530e6846c06) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7a10c44b76aa65a769d54530e6846c06);
        cache_frame_7a10c44b76aa65a769d54530e6846c06 = NULL;
    }

    assertFrameObject(frame_7a10c44b76aa65a769d54530e6846c06);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__20__g11(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_ee57030045021373b9c6cf74b206610a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ee57030045021373b9c6cf74b206610a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ee57030045021373b9c6cf74b206610a)) {
        Py_XDECREF(cache_frame_ee57030045021373b9c6cf74b206610a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ee57030045021373b9c6cf74b206610a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ee57030045021373b9c6cf74b206610a = MAKE_FUNCTION_FRAME(codeobj_ee57030045021373b9c6cf74b206610a, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ee57030045021373b9c6cf74b206610a->m_type_description == NULL);
    frame_ee57030045021373b9c6cf74b206610a = cache_frame_ee57030045021373b9c6cf74b206610a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ee57030045021373b9c6cf74b206610a);
    assert(Py_REFCNT(frame_ee57030045021373b9c6cf74b206610a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_sub_expr_left_1 = par_x;
        tmp_sub_expr_right_1 = mod_consts[6];
        tmp_args_element_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_FLOAT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 123;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ee57030045021373b9c6cf74b206610a->m_frame.f_lineno = 123;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
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
        exception_tb = MAKE_TRACEBACK(frame_ee57030045021373b9c6cf74b206610a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee57030045021373b9c6cf74b206610a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee57030045021373b9c6cf74b206610a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ee57030045021373b9c6cf74b206610a,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_ee57030045021373b9c6cf74b206610a == cache_frame_ee57030045021373b9c6cf74b206610a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ee57030045021373b9c6cf74b206610a);
        cache_frame_ee57030045021373b9c6cf74b206610a = NULL;
    }

    assertFrameObject(frame_ee57030045021373b9c6cf74b206610a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__21__g12(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_9b4319a4c3601e125665508568b0eb3d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9b4319a4c3601e125665508568b0eb3d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9b4319a4c3601e125665508568b0eb3d)) {
        Py_XDECREF(cache_frame_9b4319a4c3601e125665508568b0eb3d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9b4319a4c3601e125665508568b0eb3d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9b4319a4c3601e125665508568b0eb3d = MAKE_FUNCTION_FRAME(codeobj_9b4319a4c3601e125665508568b0eb3d, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9b4319a4c3601e125665508568b0eb3d->m_type_description == NULL);
    frame_9b4319a4c3601e125665508568b0eb3d = cache_frame_9b4319a4c3601e125665508568b0eb3d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9b4319a4c3601e125665508568b0eb3d);
    assert(Py_REFCNT(frame_9b4319a4c3601e125665508568b0eb3d) == 2);

    // Framed code:
    {
        PyObject *tmp_pow_expr_left_1;
        PyObject *tmp_pow_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_mult_expr_left_1 = mod_consts[12];
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[11];
        tmp_pow_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_pow_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_pow_expr_right_1 = mod_consts[12];
        tmp_return_value = BINARY_OPERATION_POW_OBJECT_OBJECT_LONG(tmp_pow_expr_left_1, tmp_pow_expr_right_1);
        Py_DECREF(tmp_pow_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
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
        exception_tb = MAKE_TRACEBACK(frame_9b4319a4c3601e125665508568b0eb3d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9b4319a4c3601e125665508568b0eb3d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9b4319a4c3601e125665508568b0eb3d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9b4319a4c3601e125665508568b0eb3d,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_9b4319a4c3601e125665508568b0eb3d == cache_frame_9b4319a4c3601e125665508568b0eb3d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9b4319a4c3601e125665508568b0eb3d);
        cache_frame_9b4319a4c3601e125665508568b0eb3d = NULL;
    }

    assertFrameObject(frame_9b4319a4c3601e125665508568b0eb3d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__22__g13(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_fc55a5ed67a19431c090ead47b391cdb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fc55a5ed67a19431c090ead47b391cdb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fc55a5ed67a19431c090ead47b391cdb)) {
        Py_XDECREF(cache_frame_fc55a5ed67a19431c090ead47b391cdb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fc55a5ed67a19431c090ead47b391cdb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fc55a5ed67a19431c090ead47b391cdb = MAKE_FUNCTION_FRAME(codeobj_fc55a5ed67a19431c090ead47b391cdb, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fc55a5ed67a19431c090ead47b391cdb->m_type_description == NULL);
    frame_fc55a5ed67a19431c090ead47b391cdb = cache_frame_fc55a5ed67a19431c090ead47b391cdb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fc55a5ed67a19431c090ead47b391cdb);
    assert(Py_REFCNT(frame_fc55a5ed67a19431c090ead47b391cdb) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_mult_expr_left_1 = par_x;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_fc55a5ed67a19431c090ead47b391cdb->m_frame.f_lineno = 125;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
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
        exception_tb = MAKE_TRACEBACK(frame_fc55a5ed67a19431c090ead47b391cdb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc55a5ed67a19431c090ead47b391cdb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc55a5ed67a19431c090ead47b391cdb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fc55a5ed67a19431c090ead47b391cdb,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_fc55a5ed67a19431c090ead47b391cdb == cache_frame_fc55a5ed67a19431c090ead47b391cdb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fc55a5ed67a19431c090ead47b391cdb);
        cache_frame_fc55a5ed67a19431c090ead47b391cdb = NULL;
    }

    assertFrameObject(frame_fc55a5ed67a19431c090ead47b391cdb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__23__g14(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_dacf7ebbd3cb3f1839cfa4b5e101acfd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dacf7ebbd3cb3f1839cfa4b5e101acfd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dacf7ebbd3cb3f1839cfa4b5e101acfd)) {
        Py_XDECREF(cache_frame_dacf7ebbd3cb3f1839cfa4b5e101acfd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dacf7ebbd3cb3f1839cfa4b5e101acfd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dacf7ebbd3cb3f1839cfa4b5e101acfd = MAKE_FUNCTION_FRAME(codeobj_dacf7ebbd3cb3f1839cfa4b5e101acfd, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dacf7ebbd3cb3f1839cfa4b5e101acfd->m_type_description == NULL);
    frame_dacf7ebbd3cb3f1839cfa4b5e101acfd = cache_frame_dacf7ebbd3cb3f1839cfa4b5e101acfd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dacf7ebbd3cb3f1839cfa4b5e101acfd);
    assert(Py_REFCNT(frame_dacf7ebbd3cb3f1839cfa4b5e101acfd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_mult_expr_left_1 = par_x;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_dacf7ebbd3cb3f1839cfa4b5e101acfd->m_frame.f_lineno = 126;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 126;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_dacf7ebbd3cb3f1839cfa4b5e101acfd->m_frame.f_lineno = 126;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
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
        exception_tb = MAKE_TRACEBACK(frame_dacf7ebbd3cb3f1839cfa4b5e101acfd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dacf7ebbd3cb3f1839cfa4b5e101acfd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dacf7ebbd3cb3f1839cfa4b5e101acfd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dacf7ebbd3cb3f1839cfa4b5e101acfd,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_dacf7ebbd3cb3f1839cfa4b5e101acfd == cache_frame_dacf7ebbd3cb3f1839cfa4b5e101acfd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dacf7ebbd3cb3f1839cfa4b5e101acfd);
        cache_frame_dacf7ebbd3cb3f1839cfa4b5e101acfd = NULL;
    }

    assertFrameObject(frame_dacf7ebbd3cb3f1839cfa4b5e101acfd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__24__g15(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_6cfbd41b643d9df19a9d7814f82698c9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6cfbd41b643d9df19a9d7814f82698c9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6cfbd41b643d9df19a9d7814f82698c9)) {
        Py_XDECREF(cache_frame_6cfbd41b643d9df19a9d7814f82698c9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6cfbd41b643d9df19a9d7814f82698c9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6cfbd41b643d9df19a9d7814f82698c9 = MAKE_FUNCTION_FRAME(codeobj_6cfbd41b643d9df19a9d7814f82698c9, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6cfbd41b643d9df19a9d7814f82698c9->m_type_description == NULL);
    frame_6cfbd41b643d9df19a9d7814f82698c9 = cache_frame_6cfbd41b643d9df19a9d7814f82698c9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6cfbd41b643d9df19a9d7814f82698c9);
    assert(Py_REFCNT(frame_6cfbd41b643d9df19a9d7814f82698c9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_mult_expr_left_2 = par_x;
        tmp_mult_expr_right_2 = mod_consts[12];
        tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 127;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 127;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 127;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 127;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_6cfbd41b643d9df19a9d7814f82698c9->m_frame.f_lineno = 127;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
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
        exception_tb = MAKE_TRACEBACK(frame_6cfbd41b643d9df19a9d7814f82698c9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6cfbd41b643d9df19a9d7814f82698c9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6cfbd41b643d9df19a9d7814f82698c9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6cfbd41b643d9df19a9d7814f82698c9,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_6cfbd41b643d9df19a9d7814f82698c9 == cache_frame_6cfbd41b643d9df19a9d7814f82698c9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6cfbd41b643d9df19a9d7814f82698c9);
        cache_frame_6cfbd41b643d9df19a9d7814f82698c9 = NULL;
    }

    assertFrameObject(frame_6cfbd41b643d9df19a9d7814f82698c9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__25__g16(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_4fa4e501dfea68dd37ba7be771befc58;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4fa4e501dfea68dd37ba7be771befc58 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4fa4e501dfea68dd37ba7be771befc58)) {
        Py_XDECREF(cache_frame_4fa4e501dfea68dd37ba7be771befc58);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4fa4e501dfea68dd37ba7be771befc58 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4fa4e501dfea68dd37ba7be771befc58 = MAKE_FUNCTION_FRAME(codeobj_4fa4e501dfea68dd37ba7be771befc58, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4fa4e501dfea68dd37ba7be771befc58->m_type_description == NULL);
    frame_4fa4e501dfea68dd37ba7be771befc58 = cache_frame_4fa4e501dfea68dd37ba7be771befc58;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4fa4e501dfea68dd37ba7be771befc58);
    assert(Py_REFCNT(frame_4fa4e501dfea68dd37ba7be771befc58) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_mult_expr_left_2 = par_x;
        tmp_mult_expr_right_2 = mod_consts[12];
        tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[5]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 128;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4fa4e501dfea68dd37ba7be771befc58->m_frame.f_lineno = 128;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
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
        exception_tb = MAKE_TRACEBACK(frame_4fa4e501dfea68dd37ba7be771befc58, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4fa4e501dfea68dd37ba7be771befc58->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4fa4e501dfea68dd37ba7be771befc58, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4fa4e501dfea68dd37ba7be771befc58,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_4fa4e501dfea68dd37ba7be771befc58 == cache_frame_4fa4e501dfea68dd37ba7be771befc58) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4fa4e501dfea68dd37ba7be771befc58);
        cache_frame_4fa4e501dfea68dd37ba7be771befc58 = NULL;
    }

    assertFrameObject(frame_4fa4e501dfea68dd37ba7be771befc58);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__26__g17(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_1346cd135aa87889f7a1f3619f2d8db2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1346cd135aa87889f7a1f3619f2d8db2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1346cd135aa87889f7a1f3619f2d8db2)) {
        Py_XDECREF(cache_frame_1346cd135aa87889f7a1f3619f2d8db2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1346cd135aa87889f7a1f3619f2d8db2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1346cd135aa87889f7a1f3619f2d8db2 = MAKE_FUNCTION_FRAME(codeobj_1346cd135aa87889f7a1f3619f2d8db2, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1346cd135aa87889f7a1f3619f2d8db2->m_type_description == NULL);
    frame_1346cd135aa87889f7a1f3619f2d8db2 = cache_frame_1346cd135aa87889f7a1f3619f2d8db2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1346cd135aa87889f7a1f3619f2d8db2);
    assert(Py_REFCNT(frame_1346cd135aa87889f7a1f3619f2d8db2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_mult_expr_left_2 = par_x;
        tmp_mult_expr_right_2 = mod_consts[12];
        tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1346cd135aa87889f7a1f3619f2d8db2->m_frame.f_lineno = 129;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 129;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1346cd135aa87889f7a1f3619f2d8db2->m_frame.f_lineno = 129;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
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
        exception_tb = MAKE_TRACEBACK(frame_1346cd135aa87889f7a1f3619f2d8db2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1346cd135aa87889f7a1f3619f2d8db2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1346cd135aa87889f7a1f3619f2d8db2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1346cd135aa87889f7a1f3619f2d8db2,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_1346cd135aa87889f7a1f3619f2d8db2 == cache_frame_1346cd135aa87889f7a1f3619f2d8db2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1346cd135aa87889f7a1f3619f2d8db2);
        cache_frame_1346cd135aa87889f7a1f3619f2d8db2 = NULL;
    }

    assertFrameObject(frame_1346cd135aa87889f7a1f3619f2d8db2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__27__g18(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_602c54f0a37ee0aef9dc83acd564cbf7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_602c54f0a37ee0aef9dc83acd564cbf7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_602c54f0a37ee0aef9dc83acd564cbf7)) {
        Py_XDECREF(cache_frame_602c54f0a37ee0aef9dc83acd564cbf7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_602c54f0a37ee0aef9dc83acd564cbf7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_602c54f0a37ee0aef9dc83acd564cbf7 = MAKE_FUNCTION_FRAME(codeobj_602c54f0a37ee0aef9dc83acd564cbf7, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_602c54f0a37ee0aef9dc83acd564cbf7->m_type_description == NULL);
    frame_602c54f0a37ee0aef9dc83acd564cbf7 = cache_frame_602c54f0a37ee0aef9dc83acd564cbf7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_602c54f0a37ee0aef9dc83acd564cbf7);
    assert(Py_REFCNT(frame_602c54f0a37ee0aef9dc83acd564cbf7) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_mult_expr_left_2 = par_x;
        tmp_mult_expr_right_2 = mod_consts[12];
        tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_602c54f0a37ee0aef9dc83acd564cbf7->m_frame.f_lineno = 130;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 130;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_602c54f0a37ee0aef9dc83acd564cbf7->m_frame.f_lineno = 130;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
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
        exception_tb = MAKE_TRACEBACK(frame_602c54f0a37ee0aef9dc83acd564cbf7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_602c54f0a37ee0aef9dc83acd564cbf7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_602c54f0a37ee0aef9dc83acd564cbf7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_602c54f0a37ee0aef9dc83acd564cbf7,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_602c54f0a37ee0aef9dc83acd564cbf7 == cache_frame_602c54f0a37ee0aef9dc83acd564cbf7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_602c54f0a37ee0aef9dc83acd564cbf7);
        cache_frame_602c54f0a37ee0aef9dc83acd564cbf7 = NULL;
    }

    assertFrameObject(frame_602c54f0a37ee0aef9dc83acd564cbf7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__28__g19(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_34fc6684fd3f6c8e105d89bba384fd51;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_34fc6684fd3f6c8e105d89bba384fd51 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_34fc6684fd3f6c8e105d89bba384fd51)) {
        Py_XDECREF(cache_frame_34fc6684fd3f6c8e105d89bba384fd51);

#if _DEBUG_REFCOUNTS
        if (cache_frame_34fc6684fd3f6c8e105d89bba384fd51 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_34fc6684fd3f6c8e105d89bba384fd51 = MAKE_FUNCTION_FRAME(codeobj_34fc6684fd3f6c8e105d89bba384fd51, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_34fc6684fd3f6c8e105d89bba384fd51->m_type_description == NULL);
    frame_34fc6684fd3f6c8e105d89bba384fd51 = cache_frame_34fc6684fd3f6c8e105d89bba384fd51;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_34fc6684fd3f6c8e105d89bba384fd51);
    assert(Py_REFCNT(frame_34fc6684fd3f6c8e105d89bba384fd51) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_mult_expr_left_2 = par_x;
        tmp_mult_expr_right_2 = mod_consts[28];
        tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_34fc6684fd3f6c8e105d89bba384fd51->m_frame.f_lineno = 131;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 131;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_34fc6684fd3f6c8e105d89bba384fd51->m_frame.f_lineno = 131;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
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
        exception_tb = MAKE_TRACEBACK(frame_34fc6684fd3f6c8e105d89bba384fd51, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_34fc6684fd3f6c8e105d89bba384fd51->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_34fc6684fd3f6c8e105d89bba384fd51, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_34fc6684fd3f6c8e105d89bba384fd51,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_34fc6684fd3f6c8e105d89bba384fd51 == cache_frame_34fc6684fd3f6c8e105d89bba384fd51) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_34fc6684fd3f6c8e105d89bba384fd51);
        cache_frame_34fc6684fd3f6c8e105d89bba384fd51 = NULL;
    }

    assertFrameObject(frame_34fc6684fd3f6c8e105d89bba384fd51);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__29__g20(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_6e85a35f49234bf6bf89de065cb79f59;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6e85a35f49234bf6bf89de065cb79f59 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6e85a35f49234bf6bf89de065cb79f59)) {
        Py_XDECREF(cache_frame_6e85a35f49234bf6bf89de065cb79f59);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e85a35f49234bf6bf89de065cb79f59 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e85a35f49234bf6bf89de065cb79f59 = MAKE_FUNCTION_FRAME(codeobj_6e85a35f49234bf6bf89de065cb79f59, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6e85a35f49234bf6bf89de065cb79f59->m_type_description == NULL);
    frame_6e85a35f49234bf6bf89de065cb79f59 = cache_frame_6e85a35f49234bf6bf89de065cb79f59;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6e85a35f49234bf6bf89de065cb79f59);
    assert(Py_REFCNT(frame_6e85a35f49234bf6bf89de065cb79f59) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[14]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_mult_expr_left_2 = par_x;
        tmp_mult_expr_right_2 = mod_consts[28];
        tmp_mult_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_6e85a35f49234bf6bf89de065cb79f59->m_frame.f_lineno = 132;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 132;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_6e85a35f49234bf6bf89de065cb79f59->m_frame.f_lineno = 132;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
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
        exception_tb = MAKE_TRACEBACK(frame_6e85a35f49234bf6bf89de065cb79f59, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e85a35f49234bf6bf89de065cb79f59->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e85a35f49234bf6bf89de065cb79f59, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e85a35f49234bf6bf89de065cb79f59,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_6e85a35f49234bf6bf89de065cb79f59 == cache_frame_6e85a35f49234bf6bf89de065cb79f59) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6e85a35f49234bf6bf89de065cb79f59);
        cache_frame_6e85a35f49234bf6bf89de065cb79f59 = NULL;
    }

    assertFrameObject(frame_6e85a35f49234bf6bf89de065cb79f59);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__30__g21(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_1e704fe612d31e6872eb5ffdd2a7739a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1e704fe612d31e6872eb5ffdd2a7739a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1e704fe612d31e6872eb5ffdd2a7739a)) {
        Py_XDECREF(cache_frame_1e704fe612d31e6872eb5ffdd2a7739a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e704fe612d31e6872eb5ffdd2a7739a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e704fe612d31e6872eb5ffdd2a7739a = MAKE_FUNCTION_FRAME(codeobj_1e704fe612d31e6872eb5ffdd2a7739a, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e704fe612d31e6872eb5ffdd2a7739a->m_type_description == NULL);
    frame_1e704fe612d31e6872eb5ffdd2a7739a = cache_frame_1e704fe612d31e6872eb5ffdd2a7739a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1e704fe612d31e6872eb5ffdd2a7739a);
    assert(Py_REFCNT(frame_1e704fe612d31e6872eb5ffdd2a7739a) == 2);

    // Framed code:
    {
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_mult_expr_left_1 = mod_consts[13];
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_return_value = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
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
        exception_tb = MAKE_TRACEBACK(frame_1e704fe612d31e6872eb5ffdd2a7739a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e704fe612d31e6872eb5ffdd2a7739a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e704fe612d31e6872eb5ffdd2a7739a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e704fe612d31e6872eb5ffdd2a7739a,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_1e704fe612d31e6872eb5ffdd2a7739a == cache_frame_1e704fe612d31e6872eb5ffdd2a7739a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e704fe612d31e6872eb5ffdd2a7739a);
        cache_frame_1e704fe612d31e6872eb5ffdd2a7739a = NULL;
    }

    assertFrameObject(frame_1e704fe612d31e6872eb5ffdd2a7739a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__31__g22(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_cdb4a9c4c8d7c5378daee29ebaafd306;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cdb4a9c4c8d7c5378daee29ebaafd306 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cdb4a9c4c8d7c5378daee29ebaafd306)) {
        Py_XDECREF(cache_frame_cdb4a9c4c8d7c5378daee29ebaafd306);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cdb4a9c4c8d7c5378daee29ebaafd306 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cdb4a9c4c8d7c5378daee29ebaafd306 = MAKE_FUNCTION_FRAME(codeobj_cdb4a9c4c8d7c5378daee29ebaafd306, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cdb4a9c4c8d7c5378daee29ebaafd306->m_type_description == NULL);
    frame_cdb4a9c4c8d7c5378daee29ebaafd306 = cache_frame_cdb4a9c4c8d7c5378daee29ebaafd306;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cdb4a9c4c8d7c5378daee29ebaafd306);
    assert(Py_REFCNT(frame_cdb4a9c4c8d7c5378daee29ebaafd306) == 2);

    // Framed code:
    {
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_mult_expr_left_1 = mod_consts[13];
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[11];
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
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
        exception_tb = MAKE_TRACEBACK(frame_cdb4a9c4c8d7c5378daee29ebaafd306, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cdb4a9c4c8d7c5378daee29ebaafd306->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cdb4a9c4c8d7c5378daee29ebaafd306, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cdb4a9c4c8d7c5378daee29ebaafd306,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_cdb4a9c4c8d7c5378daee29ebaafd306 == cache_frame_cdb4a9c4c8d7c5378daee29ebaafd306) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cdb4a9c4c8d7c5378daee29ebaafd306);
        cache_frame_cdb4a9c4c8d7c5378daee29ebaafd306 = NULL;
    }

    assertFrameObject(frame_cdb4a9c4c8d7c5378daee29ebaafd306);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__32__g23(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_c680daa41894eaa6c84c4152e7a4d652;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c680daa41894eaa6c84c4152e7a4d652 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c680daa41894eaa6c84c4152e7a4d652)) {
        Py_XDECREF(cache_frame_c680daa41894eaa6c84c4152e7a4d652);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c680daa41894eaa6c84c4152e7a4d652 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c680daa41894eaa6c84c4152e7a4d652 = MAKE_FUNCTION_FRAME(codeobj_c680daa41894eaa6c84c4152e7a4d652, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c680daa41894eaa6c84c4152e7a4d652->m_type_description == NULL);
    frame_c680daa41894eaa6c84c4152e7a4d652 = cache_frame_c680daa41894eaa6c84c4152e7a4d652;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c680daa41894eaa6c84c4152e7a4d652);
    assert(Py_REFCNT(frame_c680daa41894eaa6c84c4152e7a4d652) == 2);

    // Framed code:
    {
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_mult_expr_left_1 = mod_consts[13];
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[12];
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
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
        exception_tb = MAKE_TRACEBACK(frame_c680daa41894eaa6c84c4152e7a4d652, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c680daa41894eaa6c84c4152e7a4d652->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c680daa41894eaa6c84c4152e7a4d652, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c680daa41894eaa6c84c4152e7a4d652,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_c680daa41894eaa6c84c4152e7a4d652 == cache_frame_c680daa41894eaa6c84c4152e7a4d652) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c680daa41894eaa6c84c4152e7a4d652);
        cache_frame_c680daa41894eaa6c84c4152e7a4d652 = NULL;
    }

    assertFrameObject(frame_c680daa41894eaa6c84c4152e7a4d652);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__33__g24(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_5fd8d2e2ce614a2838cdc80900f8d873;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5fd8d2e2ce614a2838cdc80900f8d873 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5fd8d2e2ce614a2838cdc80900f8d873)) {
        Py_XDECREF(cache_frame_5fd8d2e2ce614a2838cdc80900f8d873);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5fd8d2e2ce614a2838cdc80900f8d873 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5fd8d2e2ce614a2838cdc80900f8d873 = MAKE_FUNCTION_FRAME(codeobj_5fd8d2e2ce614a2838cdc80900f8d873, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5fd8d2e2ce614a2838cdc80900f8d873->m_type_description == NULL);
    frame_5fd8d2e2ce614a2838cdc80900f8d873 = cache_frame_5fd8d2e2ce614a2838cdc80900f8d873;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5fd8d2e2ce614a2838cdc80900f8d873);
    assert(Py_REFCNT(frame_5fd8d2e2ce614a2838cdc80900f8d873) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = mod_consts[13];
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 136;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[11];
        tmp_args_element_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 136;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5fd8d2e2ce614a2838cdc80900f8d873->m_frame.f_lineno = 136;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
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
        exception_tb = MAKE_TRACEBACK(frame_5fd8d2e2ce614a2838cdc80900f8d873, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5fd8d2e2ce614a2838cdc80900f8d873->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5fd8d2e2ce614a2838cdc80900f8d873, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5fd8d2e2ce614a2838cdc80900f8d873,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_5fd8d2e2ce614a2838cdc80900f8d873 == cache_frame_5fd8d2e2ce614a2838cdc80900f8d873) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5fd8d2e2ce614a2838cdc80900f8d873);
        cache_frame_5fd8d2e2ce614a2838cdc80900f8d873 = NULL;
    }

    assertFrameObject(frame_5fd8d2e2ce614a2838cdc80900f8d873);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__34__g25(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_e70427f8e2525b689c9a4c43e5c1916c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e70427f8e2525b689c9a4c43e5c1916c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e70427f8e2525b689c9a4c43e5c1916c)) {
        Py_XDECREF(cache_frame_e70427f8e2525b689c9a4c43e5c1916c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e70427f8e2525b689c9a4c43e5c1916c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e70427f8e2525b689c9a4c43e5c1916c = MAKE_FUNCTION_FRAME(codeobj_e70427f8e2525b689c9a4c43e5c1916c, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e70427f8e2525b689c9a4c43e5c1916c->m_type_description == NULL);
    frame_e70427f8e2525b689c9a4c43e5c1916c = cache_frame_e70427f8e2525b689c9a4c43e5c1916c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e70427f8e2525b689c9a4c43e5c1916c);
    assert(Py_REFCNT(frame_e70427f8e2525b689c9a4c43e5c1916c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = mod_consts[13];
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 137;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[12];
        tmp_args_element_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 137;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e70427f8e2525b689c9a4c43e5c1916c->m_frame.f_lineno = 137;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
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
        exception_tb = MAKE_TRACEBACK(frame_e70427f8e2525b689c9a4c43e5c1916c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e70427f8e2525b689c9a4c43e5c1916c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e70427f8e2525b689c9a4c43e5c1916c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e70427f8e2525b689c9a4c43e5c1916c,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_e70427f8e2525b689c9a4c43e5c1916c == cache_frame_e70427f8e2525b689c9a4c43e5c1916c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e70427f8e2525b689c9a4c43e5c1916c);
        cache_frame_e70427f8e2525b689c9a4c43e5c1916c = NULL;
    }

    assertFrameObject(frame_e70427f8e2525b689c9a4c43e5c1916c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__35__g26(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_add1727bd02c66bb93618aae2e582794;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_add1727bd02c66bb93618aae2e582794 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_add1727bd02c66bb93618aae2e582794)) {
        Py_XDECREF(cache_frame_add1727bd02c66bb93618aae2e582794);

#if _DEBUG_REFCOUNTS
        if (cache_frame_add1727bd02c66bb93618aae2e582794 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_add1727bd02c66bb93618aae2e582794 = MAKE_FUNCTION_FRAME(codeobj_add1727bd02c66bb93618aae2e582794, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_add1727bd02c66bb93618aae2e582794->m_type_description == NULL);
    frame_add1727bd02c66bb93618aae2e582794 = cache_frame_add1727bd02c66bb93618aae2e582794;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_add1727bd02c66bb93618aae2e582794);
    assert(Py_REFCNT(frame_add1727bd02c66bb93618aae2e582794) == 2);

    // Framed code:
    {
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_mult_expr_left_1 = mod_consts[13];
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[11];
        tmp_truediv_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[12];
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
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
        exception_tb = MAKE_TRACEBACK(frame_add1727bd02c66bb93618aae2e582794, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_add1727bd02c66bb93618aae2e582794->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_add1727bd02c66bb93618aae2e582794, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_add1727bd02c66bb93618aae2e582794,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_add1727bd02c66bb93618aae2e582794 == cache_frame_add1727bd02c66bb93618aae2e582794) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_add1727bd02c66bb93618aae2e582794);
        cache_frame_add1727bd02c66bb93618aae2e582794 = NULL;
    }

    assertFrameObject(frame_add1727bd02c66bb93618aae2e582794);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__36__g27(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_daff43ca2b7853898a88dd8e608e6490;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_daff43ca2b7853898a88dd8e608e6490 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_daff43ca2b7853898a88dd8e608e6490)) {
        Py_XDECREF(cache_frame_daff43ca2b7853898a88dd8e608e6490);

#if _DEBUG_REFCOUNTS
        if (cache_frame_daff43ca2b7853898a88dd8e608e6490 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_daff43ca2b7853898a88dd8e608e6490 = MAKE_FUNCTION_FRAME(codeobj_daff43ca2b7853898a88dd8e608e6490, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_daff43ca2b7853898a88dd8e608e6490->m_type_description == NULL);
    frame_daff43ca2b7853898a88dd8e608e6490 = cache_frame_daff43ca2b7853898a88dd8e608e6490;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_daff43ca2b7853898a88dd8e608e6490);
    assert(Py_REFCNT(frame_daff43ca2b7853898a88dd8e608e6490) == 2);

    // Framed code:
    {
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_mult_expr_left_1 = mod_consts[13];
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[12];
        tmp_truediv_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[12];
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
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
        exception_tb = MAKE_TRACEBACK(frame_daff43ca2b7853898a88dd8e608e6490, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_daff43ca2b7853898a88dd8e608e6490->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_daff43ca2b7853898a88dd8e608e6490, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_daff43ca2b7853898a88dd8e608e6490,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_daff43ca2b7853898a88dd8e608e6490 == cache_frame_daff43ca2b7853898a88dd8e608e6490) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_daff43ca2b7853898a88dd8e608e6490);
        cache_frame_daff43ca2b7853898a88dd8e608e6490 = NULL;
    }

    assertFrameObject(frame_daff43ca2b7853898a88dd8e608e6490);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__37__g28(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_42de8ee7ded3529cb306f0f4feaa3896;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_42de8ee7ded3529cb306f0f4feaa3896 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_42de8ee7ded3529cb306f0f4feaa3896)) {
        Py_XDECREF(cache_frame_42de8ee7ded3529cb306f0f4feaa3896);

#if _DEBUG_REFCOUNTS
        if (cache_frame_42de8ee7ded3529cb306f0f4feaa3896 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_42de8ee7ded3529cb306f0f4feaa3896 = MAKE_FUNCTION_FRAME(codeobj_42de8ee7ded3529cb306f0f4feaa3896, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_42de8ee7ded3529cb306f0f4feaa3896->m_type_description == NULL);
    frame_42de8ee7ded3529cb306f0f4feaa3896 = cache_frame_42de8ee7ded3529cb306f0f4feaa3896;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_42de8ee7ded3529cb306f0f4feaa3896);
    assert(Py_REFCNT(frame_42de8ee7ded3529cb306f0f4feaa3896) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = mod_consts[13];
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 140;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[11];
        tmp_truediv_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 140;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[12];
        tmp_args_element_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 140;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_42de8ee7ded3529cb306f0f4feaa3896->m_frame.f_lineno = 140;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_42de8ee7ded3529cb306f0f4feaa3896, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_42de8ee7ded3529cb306f0f4feaa3896->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_42de8ee7ded3529cb306f0f4feaa3896, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_42de8ee7ded3529cb306f0f4feaa3896,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_42de8ee7ded3529cb306f0f4feaa3896 == cache_frame_42de8ee7ded3529cb306f0f4feaa3896) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_42de8ee7ded3529cb306f0f4feaa3896);
        cache_frame_42de8ee7ded3529cb306f0f4feaa3896 = NULL;
    }

    assertFrameObject(frame_42de8ee7ded3529cb306f0f4feaa3896);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__38__g29(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_70069f9e26ebfa29f22811c477bfaec4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_70069f9e26ebfa29f22811c477bfaec4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_70069f9e26ebfa29f22811c477bfaec4)) {
        Py_XDECREF(cache_frame_70069f9e26ebfa29f22811c477bfaec4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_70069f9e26ebfa29f22811c477bfaec4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_70069f9e26ebfa29f22811c477bfaec4 = MAKE_FUNCTION_FRAME(codeobj_70069f9e26ebfa29f22811c477bfaec4, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_70069f9e26ebfa29f22811c477bfaec4->m_type_description == NULL);
    frame_70069f9e26ebfa29f22811c477bfaec4 = cache_frame_70069f9e26ebfa29f22811c477bfaec4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_70069f9e26ebfa29f22811c477bfaec4);
    assert(Py_REFCNT(frame_70069f9e26ebfa29f22811c477bfaec4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = mod_consts[13];
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[12];
        tmp_truediv_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[12];
        tmp_args_element_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 141;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_70069f9e26ebfa29f22811c477bfaec4->m_frame.f_lineno = 141;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
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
        exception_tb = MAKE_TRACEBACK(frame_70069f9e26ebfa29f22811c477bfaec4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_70069f9e26ebfa29f22811c477bfaec4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_70069f9e26ebfa29f22811c477bfaec4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_70069f9e26ebfa29f22811c477bfaec4,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_70069f9e26ebfa29f22811c477bfaec4 == cache_frame_70069f9e26ebfa29f22811c477bfaec4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_70069f9e26ebfa29f22811c477bfaec4);
        cache_frame_70069f9e26ebfa29f22811c477bfaec4 = NULL;
    }

    assertFrameObject(frame_70069f9e26ebfa29f22811c477bfaec4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__39__g30(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_342f9d93e90bb691e23666fb481c43aa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_342f9d93e90bb691e23666fb481c43aa = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_342f9d93e90bb691e23666fb481c43aa)) {
        Py_XDECREF(cache_frame_342f9d93e90bb691e23666fb481c43aa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_342f9d93e90bb691e23666fb481c43aa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_342f9d93e90bb691e23666fb481c43aa = MAKE_FUNCTION_FRAME(codeobj_342f9d93e90bb691e23666fb481c43aa, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_342f9d93e90bb691e23666fb481c43aa->m_type_description == NULL);
    frame_342f9d93e90bb691e23666fb481c43aa = cache_frame_342f9d93e90bb691e23666fb481c43aa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_342f9d93e90bb691e23666fb481c43aa);
    assert(Py_REFCNT(frame_342f9d93e90bb691e23666fb481c43aa) == 2);

    // Framed code:
    {
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_truediv_expr_left_1 = par_x;
        tmp_truediv_expr_right_1 = mod_consts[31];
        tmp_sub_expr_left_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[32];
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_FLOAT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
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
        exception_tb = MAKE_TRACEBACK(frame_342f9d93e90bb691e23666fb481c43aa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_342f9d93e90bb691e23666fb481c43aa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_342f9d93e90bb691e23666fb481c43aa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_342f9d93e90bb691e23666fb481c43aa,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_342f9d93e90bb691e23666fb481c43aa == cache_frame_342f9d93e90bb691e23666fb481c43aa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_342f9d93e90bb691e23666fb481c43aa);
        cache_frame_342f9d93e90bb691e23666fb481c43aa = NULL;
    }

    assertFrameObject(frame_342f9d93e90bb691e23666fb481c43aa);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__40__g31(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_1a05bd0a8d2a05d0cb9c74bca2f08040;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a05bd0a8d2a05d0cb9c74bca2f08040 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1a05bd0a8d2a05d0cb9c74bca2f08040)) {
        Py_XDECREF(cache_frame_1a05bd0a8d2a05d0cb9c74bca2f08040);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a05bd0a8d2a05d0cb9c74bca2f08040 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a05bd0a8d2a05d0cb9c74bca2f08040 = MAKE_FUNCTION_FRAME(codeobj_1a05bd0a8d2a05d0cb9c74bca2f08040, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a05bd0a8d2a05d0cb9c74bca2f08040->m_type_description == NULL);
    frame_1a05bd0a8d2a05d0cb9c74bca2f08040 = cache_frame_1a05bd0a8d2a05d0cb9c74bca2f08040;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1a05bd0a8d2a05d0cb9c74bca2f08040);
    assert(Py_REFCNT(frame_1a05bd0a8d2a05d0cb9c74bca2f08040) == 2);

    // Framed code:
    {
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_mult_expr_left_1 = mod_consts[12];
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[33];
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_FLOAT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
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
        exception_tb = MAKE_TRACEBACK(frame_1a05bd0a8d2a05d0cb9c74bca2f08040, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a05bd0a8d2a05d0cb9c74bca2f08040->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a05bd0a8d2a05d0cb9c74bca2f08040, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a05bd0a8d2a05d0cb9c74bca2f08040,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_1a05bd0a8d2a05d0cb9c74bca2f08040 == cache_frame_1a05bd0a8d2a05d0cb9c74bca2f08040) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a05bd0a8d2a05d0cb9c74bca2f08040);
        cache_frame_1a05bd0a8d2a05d0cb9c74bca2f08040 = NULL;
    }

    assertFrameObject(frame_1a05bd0a8d2a05d0cb9c74bca2f08040);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__41__g32(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    PyObject *var_ret = NULL;
    PyObject *var_m = NULL;
    struct Nuitka_FrameObject *frame_bedacddae73f1407e75fbed83f94038d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_bedacddae73f1407e75fbed83f94038d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bedacddae73f1407e75fbed83f94038d)) {
        Py_XDECREF(cache_frame_bedacddae73f1407e75fbed83f94038d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bedacddae73f1407e75fbed83f94038d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bedacddae73f1407e75fbed83f94038d = MAKE_FUNCTION_FRAME(codeobj_bedacddae73f1407e75fbed83f94038d, module_matplotlib$_cm, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bedacddae73f1407e75fbed83f94038d->m_type_description == NULL);
    frame_bedacddae73f1407e75fbed83f94038d = cache_frame_bedacddae73f1407e75fbed83f94038d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bedacddae73f1407e75fbed83f94038d);
    assert(Py_REFCNT(frame_bedacddae73f1407e75fbed83f94038d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_len_arg_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[34]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_len_arg_1 = par_x;
        tmp_args_element_value_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 145;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_bedacddae73f1407e75fbed83f94038d->m_frame.f_lineno = 145;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_ret == NULL);
        var_ret = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_1 = par_x;
        tmp_cmp_expr_right_1 = mod_consts[4];
        tmp_assign_source_2 = RICH_COMPARE_LT_OBJECT_OBJECT_FLOAT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_m == NULL);
        var_m = tmp_assign_source_2;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_mult_expr_left_1 = mod_consts[28];
        CHECK_OBJECT(par_x);
        tmp_expression_value_2 = par_x;
        CHECK_OBJECT(var_m);
        tmp_subscript_value_1 = var_m;
        tmp_mult_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ret);
        tmp_ass_subscribed_1 = var_ret;
        CHECK_OBJECT(var_m);
        tmp_ass_subscript_1 = var_m;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_2 = par_x;
        tmp_cmp_expr_right_2 = mod_consts[4];
        tmp_bitand_expr_left_1 = RICH_COMPARE_GE_OBJECT_OBJECT_FLOAT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_bitand_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_3 = par_x;
        tmp_cmp_expr_right_3 = mod_consts[35];
        tmp_bitand_expr_right_1 = RICH_COMPARE_LT_OBJECT_OBJECT_FLOAT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_bitand_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitand_expr_left_1);

            exception_lineno = 148;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_left_1);
        Py_DECREF(tmp_bitand_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_m;
            assert(old != NULL);
            var_m = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_mult_expr_left_2 = mod_consts[36];
        CHECK_OBJECT(par_x);
        tmp_expression_value_3 = par_x;
        CHECK_OBJECT(var_m);
        tmp_subscript_value_2 = var_m;
        tmp_mult_expr_right_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[37];
        tmp_ass_subvalue_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_FLOAT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ret);
        tmp_ass_subscribed_2 = var_ret;
        CHECK_OBJECT(var_m);
        tmp_ass_subscript_2 = var_m;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_x);
        tmp_cmp_expr_left_4 = par_x;
        tmp_cmp_expr_right_4 = mod_consts[35];
        tmp_assign_source_4 = RICH_COMPARE_GE_OBJECT_OBJECT_FLOAT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_m;
            assert(old != NULL);
            var_m = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT(par_x);
        tmp_expression_value_4 = par_x;
        CHECK_OBJECT(var_m);
        tmp_subscript_value_3 = var_m;
        tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_right_1 = mod_consts[38];
        tmp_sub_expr_left_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_FLOAT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[39];
        tmp_ass_subvalue_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_FLOAT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ret);
        tmp_ass_subscribed_3 = var_ret;
        CHECK_OBJECT(var_m);
        tmp_ass_subscript_3 = var_m;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bedacddae73f1407e75fbed83f94038d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bedacddae73f1407e75fbed83f94038d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bedacddae73f1407e75fbed83f94038d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bedacddae73f1407e75fbed83f94038d,
        type_description_1,
        par_x,
        var_ret,
        var_m
    );


    // Release cached frame if used for exception.
    if (frame_bedacddae73f1407e75fbed83f94038d == cache_frame_bedacddae73f1407e75fbed83f94038d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bedacddae73f1407e75fbed83f94038d);
        cache_frame_bedacddae73f1407e75fbed83f94038d = NULL;
    }

    assertFrameObject(frame_bedacddae73f1407e75fbed83f94038d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_ret);
    tmp_return_value = var_ret;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ret);
    Py_DECREF(var_ret);
    var_ret = NULL;
    CHECK_OBJECT(var_m);
    Py_DECREF(var_m);
    var_m = NULL;
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

    Py_XDECREF(var_ret);
    var_ret = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__42__g33(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_ae42c534bdd50fbc6930d27f4693e71c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ae42c534bdd50fbc6930d27f4693e71c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ae42c534bdd50fbc6930d27f4693e71c)) {
        Py_XDECREF(cache_frame_ae42c534bdd50fbc6930d27f4693e71c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ae42c534bdd50fbc6930d27f4693e71c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ae42c534bdd50fbc6930d27f4693e71c = MAKE_FUNCTION_FRAME(codeobj_ae42c534bdd50fbc6930d27f4693e71c, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ae42c534bdd50fbc6930d27f4693e71c->m_type_description == NULL);
    frame_ae42c534bdd50fbc6930d27f4693e71c = cache_frame_ae42c534bdd50fbc6930d27f4693e71c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ae42c534bdd50fbc6930d27f4693e71c);
    assert(Py_REFCNT(frame_ae42c534bdd50fbc6930d27f4693e71c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = mod_consts[12];
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 153;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[6];
        tmp_args_element_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_FLOAT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 153;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ae42c534bdd50fbc6930d27f4693e71c->m_frame.f_lineno = 153;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
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
        exception_tb = MAKE_TRACEBACK(frame_ae42c534bdd50fbc6930d27f4693e71c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ae42c534bdd50fbc6930d27f4693e71c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ae42c534bdd50fbc6930d27f4693e71c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ae42c534bdd50fbc6930d27f4693e71c,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_ae42c534bdd50fbc6930d27f4693e71c == cache_frame_ae42c534bdd50fbc6930d27f4693e71c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ae42c534bdd50fbc6930d27f4693e71c);
        cache_frame_ae42c534bdd50fbc6930d27f4693e71c = NULL;
    }

    assertFrameObject(frame_ae42c534bdd50fbc6930d27f4693e71c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__43__g34(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_5d4552fda44d18892832df6815d4c65e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5d4552fda44d18892832df6815d4c65e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5d4552fda44d18892832df6815d4c65e)) {
        Py_XDECREF(cache_frame_5d4552fda44d18892832df6815d4c65e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5d4552fda44d18892832df6815d4c65e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5d4552fda44d18892832df6815d4c65e = MAKE_FUNCTION_FRAME(codeobj_5d4552fda44d18892832df6815d4c65e, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5d4552fda44d18892832df6815d4c65e->m_type_description == NULL);
    frame_5d4552fda44d18892832df6815d4c65e = cache_frame_5d4552fda44d18892832df6815d4c65e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5d4552fda44d18892832df6815d4c65e);
    assert(Py_REFCNT(frame_5d4552fda44d18892832df6815d4c65e) == 2);

    // Framed code:
    {
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_mult_expr_left_1 = mod_consts[12];
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_return_value = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
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
        exception_tb = MAKE_TRACEBACK(frame_5d4552fda44d18892832df6815d4c65e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5d4552fda44d18892832df6815d4c65e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5d4552fda44d18892832df6815d4c65e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5d4552fda44d18892832df6815d4c65e,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_5d4552fda44d18892832df6815d4c65e == cache_frame_5d4552fda44d18892832df6815d4c65e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5d4552fda44d18892832df6815d4c65e);
        cache_frame_5d4552fda44d18892832df6815d4c65e = NULL;
    }

    assertFrameObject(frame_5d4552fda44d18892832df6815d4c65e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__44__g35(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_2f7ef3de808e0c9aa593d9edd9d15e56;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2f7ef3de808e0c9aa593d9edd9d15e56 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2f7ef3de808e0c9aa593d9edd9d15e56)) {
        Py_XDECREF(cache_frame_2f7ef3de808e0c9aa593d9edd9d15e56);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f7ef3de808e0c9aa593d9edd9d15e56 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f7ef3de808e0c9aa593d9edd9d15e56 = MAKE_FUNCTION_FRAME(codeobj_2f7ef3de808e0c9aa593d9edd9d15e56, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2f7ef3de808e0c9aa593d9edd9d15e56->m_type_description == NULL);
    frame_2f7ef3de808e0c9aa593d9edd9d15e56 = cache_frame_2f7ef3de808e0c9aa593d9edd9d15e56;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2f7ef3de808e0c9aa593d9edd9d15e56);
    assert(Py_REFCNT(frame_2f7ef3de808e0c9aa593d9edd9d15e56) == 2);

    // Framed code:
    {
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_mult_expr_left_1 = mod_consts[12];
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[6];
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_FLOAT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
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
        exception_tb = MAKE_TRACEBACK(frame_2f7ef3de808e0c9aa593d9edd9d15e56, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f7ef3de808e0c9aa593d9edd9d15e56->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f7ef3de808e0c9aa593d9edd9d15e56, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f7ef3de808e0c9aa593d9edd9d15e56,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_2f7ef3de808e0c9aa593d9edd9d15e56 == cache_frame_2f7ef3de808e0c9aa593d9edd9d15e56) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2f7ef3de808e0c9aa593d9edd9d15e56);
        cache_frame_2f7ef3de808e0c9aa593d9edd9d15e56 = NULL;
    }

    assertFrameObject(frame_2f7ef3de808e0c9aa593d9edd9d15e56);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__45__g36(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_c30a511137039a139da1560c04aa087b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c30a511137039a139da1560c04aa087b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c30a511137039a139da1560c04aa087b)) {
        Py_XDECREF(cache_frame_c30a511137039a139da1560c04aa087b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c30a511137039a139da1560c04aa087b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c30a511137039a139da1560c04aa087b = MAKE_FUNCTION_FRAME(codeobj_c30a511137039a139da1560c04aa087b, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c30a511137039a139da1560c04aa087b->m_type_description == NULL);
    frame_c30a511137039a139da1560c04aa087b = cache_frame_c30a511137039a139da1560c04aa087b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c30a511137039a139da1560c04aa087b);
    assert(Py_REFCNT(frame_c30a511137039a139da1560c04aa087b) == 2);

    // Framed code:
    {
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_mult_expr_left_1 = mod_consts[12];
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[11];
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
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
        exception_tb = MAKE_TRACEBACK(frame_c30a511137039a139da1560c04aa087b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c30a511137039a139da1560c04aa087b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c30a511137039a139da1560c04aa087b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c30a511137039a139da1560c04aa087b,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_c30a511137039a139da1560c04aa087b == cache_frame_c30a511137039a139da1560c04aa087b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c30a511137039a139da1560c04aa087b);
        cache_frame_c30a511137039a139da1560c04aa087b = NULL;
    }

    assertFrameObject(frame_c30a511137039a139da1560c04aa087b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__46__gist_heat_red(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_29d9ce4ec564f0d320d5eef534d769ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_29d9ce4ec564f0d320d5eef534d769ae = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_29d9ce4ec564f0d320d5eef534d769ae)) {
        Py_XDECREF(cache_frame_29d9ce4ec564f0d320d5eef534d769ae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_29d9ce4ec564f0d320d5eef534d769ae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_29d9ce4ec564f0d320d5eef534d769ae = MAKE_FUNCTION_FRAME(codeobj_29d9ce4ec564f0d320d5eef534d769ae, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_29d9ce4ec564f0d320d5eef534d769ae->m_type_description == NULL);
    frame_29d9ce4ec564f0d320d5eef534d769ae = cache_frame_29d9ce4ec564f0d320d5eef534d769ae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_29d9ce4ec564f0d320d5eef534d769ae);
    assert(Py_REFCNT(frame_29d9ce4ec564f0d320d5eef534d769ae) == 2);

    // Framed code:
    {
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_mult_expr_left_1 = mod_consts[40];
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_return_value = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1021;
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
        exception_tb = MAKE_TRACEBACK(frame_29d9ce4ec564f0d320d5eef534d769ae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_29d9ce4ec564f0d320d5eef534d769ae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_29d9ce4ec564f0d320d5eef534d769ae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_29d9ce4ec564f0d320d5eef534d769ae,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_29d9ce4ec564f0d320d5eef534d769ae == cache_frame_29d9ce4ec564f0d320d5eef534d769ae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_29d9ce4ec564f0d320d5eef534d769ae);
        cache_frame_29d9ce4ec564f0d320d5eef534d769ae = NULL;
    }

    assertFrameObject(frame_29d9ce4ec564f0d320d5eef534d769ae);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__47__gist_heat_green(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_08c7f846454187b5298326343cbd17b7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_08c7f846454187b5298326343cbd17b7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_08c7f846454187b5298326343cbd17b7)) {
        Py_XDECREF(cache_frame_08c7f846454187b5298326343cbd17b7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_08c7f846454187b5298326343cbd17b7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_08c7f846454187b5298326343cbd17b7 = MAKE_FUNCTION_FRAME(codeobj_08c7f846454187b5298326343cbd17b7, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_08c7f846454187b5298326343cbd17b7->m_type_description == NULL);
    frame_08c7f846454187b5298326343cbd17b7 = cache_frame_08c7f846454187b5298326343cbd17b7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_08c7f846454187b5298326343cbd17b7);
    assert(Py_REFCNT(frame_08c7f846454187b5298326343cbd17b7) == 2);

    // Framed code:
    {
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_mult_expr_left_1 = mod_consts[12];
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1022;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[11];
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1022;
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
        exception_tb = MAKE_TRACEBACK(frame_08c7f846454187b5298326343cbd17b7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_08c7f846454187b5298326343cbd17b7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_08c7f846454187b5298326343cbd17b7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_08c7f846454187b5298326343cbd17b7,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_08c7f846454187b5298326343cbd17b7 == cache_frame_08c7f846454187b5298326343cbd17b7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_08c7f846454187b5298326343cbd17b7);
        cache_frame_08c7f846454187b5298326343cbd17b7 = NULL;
    }

    assertFrameObject(frame_08c7f846454187b5298326343cbd17b7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__48__gist_heat_blue(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_2167435bf2ed2f88e36b0b544f18b629;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2167435bf2ed2f88e36b0b544f18b629 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2167435bf2ed2f88e36b0b544f18b629)) {
        Py_XDECREF(cache_frame_2167435bf2ed2f88e36b0b544f18b629);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2167435bf2ed2f88e36b0b544f18b629 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2167435bf2ed2f88e36b0b544f18b629 = MAKE_FUNCTION_FRAME(codeobj_2167435bf2ed2f88e36b0b544f18b629, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2167435bf2ed2f88e36b0b544f18b629->m_type_description == NULL);
    frame_2167435bf2ed2f88e36b0b544f18b629 = cache_frame_2167435bf2ed2f88e36b0b544f18b629;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2167435bf2ed2f88e36b0b544f18b629);
    assert(Py_REFCNT(frame_2167435bf2ed2f88e36b0b544f18b629) == 2);

    // Framed code:
    {
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        tmp_mult_expr_left_1 = mod_consts[28];
        CHECK_OBJECT(par_x);
        tmp_mult_expr_right_1 = par_x;
        tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1023;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[13];
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1023;
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
        exception_tb = MAKE_TRACEBACK(frame_2167435bf2ed2f88e36b0b544f18b629, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2167435bf2ed2f88e36b0b544f18b629->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2167435bf2ed2f88e36b0b544f18b629, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2167435bf2ed2f88e36b0b544f18b629,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_2167435bf2ed2f88e36b0b544f18b629 == cache_frame_2167435bf2ed2f88e36b0b544f18b629) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2167435bf2ed2f88e36b0b544f18b629);
        cache_frame_2167435bf2ed2f88e36b0b544f18b629 = NULL;
    }

    assertFrameObject(frame_2167435bf2ed2f88e36b0b544f18b629);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_matplotlib$_cm$$$function__49__gist_yarg(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_0b3da2a37d473d9856f7871b6ebef882;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0b3da2a37d473d9856f7871b6ebef882 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0b3da2a37d473d9856f7871b6ebef882)) {
        Py_XDECREF(cache_frame_0b3da2a37d473d9856f7871b6ebef882);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0b3da2a37d473d9856f7871b6ebef882 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0b3da2a37d473d9856f7871b6ebef882 = MAKE_FUNCTION_FRAME(codeobj_0b3da2a37d473d9856f7871b6ebef882, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0b3da2a37d473d9856f7871b6ebef882->m_type_description == NULL);
    frame_0b3da2a37d473d9856f7871b6ebef882 = cache_frame_0b3da2a37d473d9856f7871b6ebef882;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0b3da2a37d473d9856f7871b6ebef882);
    assert(Py_REFCNT(frame_0b3da2a37d473d9856f7871b6ebef882) == 2);

    // Framed code:
    {
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        tmp_sub_expr_left_1 = mod_consts[11];
        CHECK_OBJECT(par_x);
        tmp_sub_expr_right_1 = par_x;
        tmp_return_value = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1102;
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
        exception_tb = MAKE_TRACEBACK(frame_0b3da2a37d473d9856f7871b6ebef882, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0b3da2a37d473d9856f7871b6ebef882->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0b3da2a37d473d9856f7871b6ebef882, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0b3da2a37d473d9856f7871b6ebef882,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_0b3da2a37d473d9856f7871b6ebef882 == cache_frame_0b3da2a37d473d9856f7871b6ebef882) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0b3da2a37d473d9856f7871b6ebef882);
        cache_frame_0b3da2a37d473d9856f7871b6ebef882 = NULL;
    }

    assertFrameObject(frame_0b3da2a37d473d9856f7871b6ebef882);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__10__g1() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0055ec0c618adee545a4c122675d5f19,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[6]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__11__g2() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1054b4959166fff5ef1e73c3ecc780b9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[11]);

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__12__g3() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__12__g3,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6e2b71cc47e4c6ef998ad76dca63a8b3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__13__g4() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__13__g4,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1ccbce328cc0b8e649f067941597a582,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__14__g5() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__14__g5,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6e6e205b8a8f0276f4668b121ea50ee7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__15__g6() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__15__g6,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_37822a379b49894f6d0e929cbfb57165,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__16__g7() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__16__g7,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f3ffc56c250278247faea3841785f2e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__17__g8() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__17__g8,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_02307b31f7f66d93b4e65a5e8173e0a0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__18__g9() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__18__g9,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c444d01ae541266be04aca09effeb94b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__19__g10() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__19__g10,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7a10c44b76aa65a769d54530e6846c06,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__1__flag_red() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__1__flag_red,
        mod_consts[61],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b18ce6f1000c99b0244a15c0e6987de4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__20__g11() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__20__g11,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ee57030045021373b9c6cf74b206610a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__21__g12() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__21__g12,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9b4319a4c3601e125665508568b0eb3d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__22__g13() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__22__g13,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fc55a5ed67a19431c090ead47b391cdb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__23__g14() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__23__g14,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dacf7ebbd3cb3f1839cfa4b5e101acfd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__24__g15() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__24__g15,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6cfbd41b643d9df19a9d7814f82698c9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__25__g16() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__25__g16,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4fa4e501dfea68dd37ba7be771befc58,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__26__g17() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__26__g17,
        mod_consts[93],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1346cd135aa87889f7a1f3619f2d8db2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__27__g18() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__27__g18,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_602c54f0a37ee0aef9dc83acd564cbf7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__28__g19() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__28__g19,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_34fc6684fd3f6c8e105d89bba384fd51,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__29__g20() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__29__g20,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6e85a35f49234bf6bf89de065cb79f59,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__2__flag_green() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__2__flag_green,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1214e46c2e8e525fc07d792a8fa0e08d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__30__g21() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__30__g21,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1e704fe612d31e6872eb5ffdd2a7739a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__31__g22() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__31__g22,
        mod_consts[98],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cdb4a9c4c8d7c5378daee29ebaafd306,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__32__g23() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__32__g23,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c680daa41894eaa6c84c4152e7a4d652,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__33__g24() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__33__g24,
        mod_consts[100],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5fd8d2e2ce614a2838cdc80900f8d873,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__34__g25() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__34__g25,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e70427f8e2525b689c9a4c43e5c1916c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__35__g26() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__35__g26,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_add1727bd02c66bb93618aae2e582794,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__36__g27() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__36__g27,
        mod_consts[103],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_daff43ca2b7853898a88dd8e608e6490,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__37__g28() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__37__g28,
        mod_consts[104],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_42de8ee7ded3529cb306f0f4feaa3896,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__38__g29() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__38__g29,
        mod_consts[105],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_70069f9e26ebfa29f22811c477bfaec4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__39__g30() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__39__g30,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_342f9d93e90bb691e23666fb481c43aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__3__flag_blue() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__3__flag_blue,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_acb5dbffd2d5a77cc78bba87899d54f0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__40__g31() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__40__g31,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1a05bd0a8d2a05d0cb9c74bca2f08040,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__41__g32() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__41__g32,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bedacddae73f1407e75fbed83f94038d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__42__g33() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__42__g33,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ae42c534bdd50fbc6930d27f4693e71c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__43__g34() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__43__g34,
        mod_consts[110],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5d4552fda44d18892832df6815d4c65e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__44__g35() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__44__g35,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2f7ef3de808e0c9aa593d9edd9d15e56,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__45__g36() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__45__g36,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c30a511137039a139da1560c04aa087b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__46__gist_heat_red() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__46__gist_heat_red,
        mod_consts[230],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_29d9ce4ec564f0d320d5eef534d769ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__47__gist_heat_green() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__47__gist_heat_green,
        mod_consts[231],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_08c7f846454187b5298326343cbd17b7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__48__gist_heat_blue() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__48__gist_heat_blue,
        mod_consts[232],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2167435bf2ed2f88e36b0b544f18b629,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__49__gist_yarg() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__49__gist_yarg,
        mod_consts[240],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0b3da2a37d473d9856f7871b6ebef882,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__4__prism_red() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__4__prism_red,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5890105dde54f9e4a16393dc4540e18f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__5__prism_green() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__5__prism_green,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_79ac6e0034b80220a0f6858dc582089d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__6__prism_blue() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__6__prism_blue,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ad4f58ec2d3f069122ea6de3a96460ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__7__ch_helper() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__7__ch_helper,
        mod_consts[18],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_255571b316e5b529581e1c91e67c8542,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__8_cubehelix(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_matplotlib$_cm$$$function__8_cubehelix,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4daf2a95c7037f8a85fc565d3f3d9885,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        mod_consts[27],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_matplotlib$_cm$$$function__9__g0() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fbf1d2a2a6b296b8b6dc5cc972c4b1cb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_matplotlib$_cm,
        NULL,
        NULL,
        0
    );
    Nuitka_Function_EnableConstReturnGeneric(result, mod_consts[50]);

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

function_impl_code functable_matplotlib$_cm[] = {
    impl_matplotlib$_cm$$$function__1__flag_red,
    impl_matplotlib$_cm$$$function__2__flag_green,
    impl_matplotlib$_cm$$$function__3__flag_blue,
    impl_matplotlib$_cm$$$function__4__prism_red,
    impl_matplotlib$_cm$$$function__5__prism_green,
    impl_matplotlib$_cm$$$function__6__prism_blue,
    impl_matplotlib$_cm$$$function__7__ch_helper,
    impl_matplotlib$_cm$$$function__8_cubehelix,
    NULL,
    NULL,
    NULL,
    impl_matplotlib$_cm$$$function__12__g3,
    impl_matplotlib$_cm$$$function__13__g4,
    impl_matplotlib$_cm$$$function__14__g5,
    impl_matplotlib$_cm$$$function__15__g6,
    impl_matplotlib$_cm$$$function__16__g7,
    impl_matplotlib$_cm$$$function__17__g8,
    impl_matplotlib$_cm$$$function__18__g9,
    impl_matplotlib$_cm$$$function__19__g10,
    impl_matplotlib$_cm$$$function__20__g11,
    impl_matplotlib$_cm$$$function__21__g12,
    impl_matplotlib$_cm$$$function__22__g13,
    impl_matplotlib$_cm$$$function__23__g14,
    impl_matplotlib$_cm$$$function__24__g15,
    impl_matplotlib$_cm$$$function__25__g16,
    impl_matplotlib$_cm$$$function__26__g17,
    impl_matplotlib$_cm$$$function__27__g18,
    impl_matplotlib$_cm$$$function__28__g19,
    impl_matplotlib$_cm$$$function__29__g20,
    impl_matplotlib$_cm$$$function__30__g21,
    impl_matplotlib$_cm$$$function__31__g22,
    impl_matplotlib$_cm$$$function__32__g23,
    impl_matplotlib$_cm$$$function__33__g24,
    impl_matplotlib$_cm$$$function__34__g25,
    impl_matplotlib$_cm$$$function__35__g26,
    impl_matplotlib$_cm$$$function__36__g27,
    impl_matplotlib$_cm$$$function__37__g28,
    impl_matplotlib$_cm$$$function__38__g29,
    impl_matplotlib$_cm$$$function__39__g30,
    impl_matplotlib$_cm$$$function__40__g31,
    impl_matplotlib$_cm$$$function__41__g32,
    impl_matplotlib$_cm$$$function__42__g33,
    impl_matplotlib$_cm$$$function__43__g34,
    impl_matplotlib$_cm$$$function__44__g35,
    impl_matplotlib$_cm$$$function__45__g36,
    impl_matplotlib$_cm$$$function__46__gist_heat_red,
    impl_matplotlib$_cm$$$function__47__gist_heat_green,
    impl_matplotlib$_cm$$$function__48__gist_heat_blue,
    impl_matplotlib$_cm$$$function__49__gist_yarg,
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

    function_impl_code *current = functable_matplotlib$_cm;
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

    if (offset > sizeof(functable_matplotlib$_cm) || offset < 0) {
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
        functable_matplotlib$_cm[offset],
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
        module_matplotlib$_cm,
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
PyObject *modulecode_matplotlib$_cm(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("matplotlib._cm");

    // Store the module for future use.
    module_matplotlib$_cm = module;

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
        PRINT_STRING("matplotlib._cm: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("matplotlib._cm: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("matplotlib._cm: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initmatplotlib$_cm\n");

    moduledict_matplotlib$_cm = MODULE_DICT(module_matplotlib$_cm);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_matplotlib$_cm,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_matplotlib$_cm,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[339]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_matplotlib$_cm,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_matplotlib$_cm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_matplotlib$_cm,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_matplotlib$_cm);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_matplotlib$_cm);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var_i = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_cb36e1886e14f4f65329434515335fac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_70def600758d6d8e381e9c22662947d1_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_70def600758d6d8e381e9c22662947d1_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[41];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[43];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_2);
    }
    frame_cb36e1886e14f4f65329434515335fac = MAKE_MODULE_FRAME(codeobj_cb36e1886e14f4f65329434515335fac, module_matplotlib$_cm);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cb36e1886e14f4f65329434515335fac);
    assert(Py_REFCNT(frame_cb36e1886e14f4f65329434515335fac) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[43];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[46], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[47], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[17]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[49];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_matplotlib$_cm;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[50];
        frame_cb36e1886e14f4f65329434515335fac->m_frame.f_lineno = 11;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = DICT_COPY(mod_consts[51]);
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = DICT_COPY(mod_consts[53]);
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = DICT_COPY(mod_consts[55]);
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = DICT_COPY(mod_consts[57]);
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = DICT_COPY(mod_consts[59]);
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_matplotlib$_cm$$$function__1__flag_red();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_matplotlib$_cm$$$function__2__flag_green();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_matplotlib$_cm$$$function__3__flag_blue();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[16];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_assign_source_14 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_assign_source_14, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[21];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_14, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[24];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        assert(!(tmp_dict_value_1 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_14, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_matplotlib$_cm$$$function__4__prism_red();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_matplotlib$_cm$$$function__5__prism_green();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_matplotlib$_cm$$$function__6__prism_blue();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[16];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_assign_source_18 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[21];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[24];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_18, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_matplotlib$_cm$$$function__7__ch_helper();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[69];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_20 = MAKE_FUNCTION_matplotlib$_cm$$$function__8_cubehelix(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[70]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
        }

        assert(!(tmp_called_value_1 == NULL));
        frame_cb36e1886e14f4f65329434515335fac->m_frame.f_lineno = 106;
        tmp_assign_source_21 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_matplotlib$_cm$$$function__9__g0();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_matplotlib$_cm$$$function__10__g1();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_matplotlib$_cm$$$function__11__g2();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_matplotlib$_cm$$$function__12__g3();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_matplotlib$_cm$$$function__13__g4();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_matplotlib$_cm$$$function__14__g5();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;


        tmp_assign_source_30 = MAKE_FUNCTION_matplotlib$_cm$$$function__15__g6();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;


        tmp_assign_source_31 = MAKE_FUNCTION_matplotlib$_cm$$$function__16__g7();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;


        tmp_assign_source_32 = MAKE_FUNCTION_matplotlib$_cm$$$function__17__g8();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_matplotlib$_cm$$$function__18__g9();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_matplotlib$_cm$$$function__19__g10();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_matplotlib$_cm$$$function__20__g11();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;


        tmp_assign_source_36 = MAKE_FUNCTION_matplotlib$_cm$$$function__21__g12();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;


        tmp_assign_source_37 = MAKE_FUNCTION_matplotlib$_cm$$$function__22__g13();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;


        tmp_assign_source_38 = MAKE_FUNCTION_matplotlib$_cm$$$function__23__g14();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;


        tmp_assign_source_39 = MAKE_FUNCTION_matplotlib$_cm$$$function__24__g15();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;


        tmp_assign_source_40 = MAKE_FUNCTION_matplotlib$_cm$$$function__25__g16();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;


        tmp_assign_source_41 = MAKE_FUNCTION_matplotlib$_cm$$$function__26__g17();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;


        tmp_assign_source_42 = MAKE_FUNCTION_matplotlib$_cm$$$function__27__g18();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;


        tmp_assign_source_43 = MAKE_FUNCTION_matplotlib$_cm$$$function__28__g19();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;


        tmp_assign_source_44 = MAKE_FUNCTION_matplotlib$_cm$$$function__29__g20();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;


        tmp_assign_source_45 = MAKE_FUNCTION_matplotlib$_cm$$$function__30__g21();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;


        tmp_assign_source_46 = MAKE_FUNCTION_matplotlib$_cm$$$function__31__g22();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;


        tmp_assign_source_47 = MAKE_FUNCTION_matplotlib$_cm$$$function__32__g23();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;


        tmp_assign_source_48 = MAKE_FUNCTION_matplotlib$_cm$$$function__33__g24();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;


        tmp_assign_source_49 = MAKE_FUNCTION_matplotlib$_cm$$$function__34__g25();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;


        tmp_assign_source_50 = MAKE_FUNCTION_matplotlib$_cm$$$function__35__g26();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;


        tmp_assign_source_51 = MAKE_FUNCTION_matplotlib$_cm$$$function__36__g27();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;


        tmp_assign_source_52 = MAKE_FUNCTION_matplotlib$_cm$$$function__37__g28();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;


        tmp_assign_source_53 = MAKE_FUNCTION_matplotlib$_cm$$$function__38__g29();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;


        tmp_assign_source_54 = MAKE_FUNCTION_matplotlib$_cm$$$function__39__g30();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;


        tmp_assign_source_55 = MAKE_FUNCTION_matplotlib$_cm$$$function__40__g31();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;


        tmp_assign_source_56 = MAKE_FUNCTION_matplotlib$_cm$$$function__41__g32();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;


        tmp_assign_source_57 = MAKE_FUNCTION_matplotlib$_cm$$$function__42__g33();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;


        tmp_assign_source_58 = MAKE_FUNCTION_matplotlib$_cm$$$function__43__g34();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;


        tmp_assign_source_59 = MAKE_FUNCTION_matplotlib$_cm$$$function__44__g35();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;


        tmp_assign_source_60 = MAKE_FUNCTION_matplotlib$_cm$$$function__45__g36();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_iter_arg_1;
            tmp_iter_arg_1 = mod_consts[113];
            tmp_assign_source_62 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
            assert(!(tmp_assign_source_62 == NULL));
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_62;
        }
        {
            PyObject *tmp_assign_source_63;
            tmp_assign_source_63 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_63;
        }
        // Tried code:
        if (isFrameUnusable(cache_frame_70def600758d6d8e381e9c22662947d1_2)) {
            Py_XDECREF(cache_frame_70def600758d6d8e381e9c22662947d1_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_70def600758d6d8e381e9c22662947d1_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_70def600758d6d8e381e9c22662947d1_2 = MAKE_FUNCTION_FRAME(codeobj_70def600758d6d8e381e9c22662947d1, module_matplotlib$_cm, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_70def600758d6d8e381e9c22662947d1_2->m_type_description == NULL);
        frame_70def600758d6d8e381e9c22662947d1_2 = cache_frame_70def600758d6d8e381e9c22662947d1_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_70def600758d6d8e381e9c22662947d1_2);
        assert(Py_REFCNT(frame_70def600758d6d8e381e9c22662947d1_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_64;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_1 = tmp_dictcontraction_1__$0;
            tmp_assign_source_64 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_64 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 158;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_64;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_65;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_assign_source_65 = tmp_dictcontraction_1__iter_value_0;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_65;
                Py_INCREF(outline_0_var_i);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_dictset38_key_1;
            PyObject *tmp_dictset38_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_kw_call_arg_value_0_1;
            PyObject *tmp_kw_call_arg_value_1_1;
            PyObject *tmp_dictset38_dict_1;
            CHECK_OBJECT(outline_0_var_i);
            tmp_dictset38_key_1 = outline_0_var_i;
            tmp_expression_value_1 = (PyObject *)moduledict_matplotlib$_cm;
            tmp_kw_call_arg_value_0_1 = mod_consts[114];
            CHECK_OBJECT(outline_0_var_i);
            tmp_kw_call_arg_value_1_1 = outline_0_var_i;
            frame_70def600758d6d8e381e9c22662947d1_2->m_frame.f_lineno = 158;
            {
                PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
                tmp_subscript_value_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
            }

            if (tmp_subscript_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            tmp_dictset38_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
            Py_DECREF(tmp_subscript_value_1);
            if (tmp_dictset38_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_1));
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

            Py_DECREF(tmp_dictset38_value_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_2 = "o";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_2 = "o";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_assign_source_61 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_assign_source_61);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
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

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_70def600758d6d8e381e9c22662947d1_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_70def600758d6d8e381e9c22662947d1_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_70def600758d6d8e381e9c22662947d1_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_70def600758d6d8e381e9c22662947d1_2,
            type_description_2,
            outline_0_var_i
        );


        // Release cached frame if used for exception.
        if (frame_70def600758d6d8e381e9c22662947d1_2 == cache_frame_70def600758d6d8e381e9c22662947d1_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_70def600758d6d8e381e9c22662947d1_2);
            cache_frame_70def600758d6d8e381e9c22662947d1_2 = NULL;
        }

        assertFrameObject(frame_70def600758d6d8e381e9c22662947d1_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_1;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_1:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 158;
        goto frame_exception_exit_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_dict_key_3 = mod_consts[16];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_subscript_value_2 = mod_consts[116];
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 7);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_66 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[21];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_3 = mod_consts[117];
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_3, 5);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[24];
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_4 = mod_consts[118];
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_4, 15);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_66, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_66);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        tmp_dict_key_4 = mod_consts[16];
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = mod_consts[120];
        tmp_dict_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_5, 30);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_67 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_7;
            tmp_res = PyDict_SetItem(tmp_assign_source_67, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[21];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_6 = mod_consts[121];
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_6, 31);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_67, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[24];
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_7 = mod_consts[122];
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_7, 32);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_67, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_67);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_8;
        tmp_dict_key_5 = mod_consts[16];
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = mod_consts[124];
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_8, 23);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_68 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_subscript_value_10;
            tmp_res = PyDict_SetItem(tmp_assign_source_68, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[21];
            tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_expression_value_9 == NULL)) {
                tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_9 = mod_consts[125];
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_9, 28);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_68, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[24];
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto dict_build_exception_3;
            }
            tmp_subscript_value_10 = mod_consts[13];
            tmp_dict_value_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_10, 3);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_68, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_assign_source_68);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_11;
        tmp_dict_key_6 = mod_consts[16];
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = mod_consts[127];
        tmp_dict_value_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_11, tmp_subscript_value_11, 34);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_69 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_13;
            tmp_res = PyDict_SetItem(tmp_assign_source_69, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[21];
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_12 = mod_consts[128];
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_12, tmp_subscript_value_12, 35);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_69, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
            tmp_dict_key_6 = mod_consts[24];
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_4;
            }
            tmp_subscript_value_13 = mod_consts[129];
            tmp_dict_value_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_13, 36);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_69, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_value_6);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_assign_source_69);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_14;
        tmp_dict_key_7 = mod_consts[16];
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_14 = mod_consts[131];
        tmp_dict_value_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_14, tmp_subscript_value_14, 33);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_70 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_subscript_value_16;
            tmp_res = PyDict_SetItem(tmp_assign_source_70, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[21];
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_15 = mod_consts[132];
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_15, tmp_subscript_value_15, 13);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 186;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_70, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[24];
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto dict_build_exception_5;
            }
            tmp_subscript_value_16 = mod_consts[133];
            tmp_dict_value_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_16, 10);
            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_70, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_assign_source_70);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[134], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[135];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[137];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = DICT_COPY(mod_consts[139]);
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        tmp_assign_source_74 = DICT_COPY(mod_consts[141]);
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = DICT_COPY(mod_consts[143]);
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = DICT_COPY(mod_consts[145]);
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = DICT_COPY(mod_consts[147]);
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = DICT_COPY(mod_consts[149]);
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = DICT_COPY(mod_consts[151]);
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = DICT_COPY(mod_consts[153]);
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = DEEP_COPY_DICT(mod_consts[155]);
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[157];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[159];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[161];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[163];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[165];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[167];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[169];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[171];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[173];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[175];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[177];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[179];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[181];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[183];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[185];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[187];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[189];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[191];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[192], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[193];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[195];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[196], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[197];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[199];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = mod_consts[201];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = mod_consts[203];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = mod_consts[205];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[207];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = mod_consts[209];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[210], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = mod_consts[211];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[213];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[215];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[217];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[219];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[221];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = mod_consts[223];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[225];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = DICT_COPY(mod_consts[227]);
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_17;
        tmp_dict_key_8 = mod_consts[16];
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1016;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_17 = mod_consts[13];
        tmp_dict_value_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_17, tmp_subscript_value_17, 3);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1016;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_118 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_19;
            tmp_res = PyDict_SetItem(tmp_assign_source_118, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[21];
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1017;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_18 = mod_consts[13];
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_18, tmp_subscript_value_18, 3);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1017;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_118, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[24];
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1018;

                goto dict_build_exception_6;
            }
            tmp_subscript_value_19 = mod_consts[13];
            tmp_dict_value_8 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_19, tmp_subscript_value_19, 3);
            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1018;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_118, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_assign_source_118);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;


        tmp_assign_source_119 = MAKE_FUNCTION_matplotlib$_cm$$$function__46__gist_heat_red();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;


        tmp_assign_source_120 = MAKE_FUNCTION_matplotlib$_cm$$$function__47__gist_heat_green();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[231], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;


        tmp_assign_source_121 = MAKE_FUNCTION_matplotlib$_cm$$$function__48__gist_heat_blue();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        tmp_dict_key_9 = mod_consts[16];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[230]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[230]);
        }

        assert(!(tmp_dict_value_9 == NULL));
        tmp_assign_source_122 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_assign_source_122, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[21];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[231]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[231]);
        }

        assert(!(tmp_dict_value_9 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_122, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[24];
        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[232]);

        if (unlikely(tmp_dict_value_9 == NULL)) {
            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[232]);
        }

        assert(!(tmp_dict_value_9 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_122, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = DICT_COPY(mod_consts[234]);
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[236];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[237], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = DICT_COPY(mod_consts[238]);
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;


        tmp_assign_source_126 = MAKE_FUNCTION_matplotlib$_cm$$$function__49__gist_yarg();

        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[240], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        tmp_dict_key_10 = mod_consts[16];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[240]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[240]);
        }

        assert(!(tmp_dict_value_10 == NULL));
        tmp_assign_source_127 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_assign_source_127, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[21];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[240]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[240]);
        }

        assert(!(tmp_dict_value_10 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_127, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[24];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[240]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[240]);
        }

        assert(!(tmp_dict_value_10 == NULL));
        tmp_res = PyDict_SetItem(tmp_assign_source_127, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = DEEP_COPY_DICT(mod_consts[242]);
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = DICT_COPY(mod_consts[244]);
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = DEEP_COPY_DICT(mod_consts[246]);
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[248];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[250];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = mod_consts[252];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = mod_consts[254];
        UPDATE_STRING_DICT0(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        tmp_dict_key_11 = mod_consts[256];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1364;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_135 = _PyDict_NewPresized( 75 );
        {
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[257];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[160]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1365;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[258];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[162]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1366;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[259];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[164]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[164]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1367;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[260];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[245]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[245]);
            }

            assert(!(tmp_dict_value_11 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[261];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[166]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1369;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[262];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[168]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1370;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[263];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[170]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1371;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[264];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[174]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[174]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1372;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[265];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[172]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[172]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1373;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[266];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[178]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[178]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1374;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[267];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[176]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[176]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1375;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[268];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[180]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[180]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1376;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[269];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[182]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[182]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1377;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[270];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[184]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1378;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[271];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[186]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1379;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[272];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[188]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[188]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1380;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[273];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[190]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1381;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[274];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[192]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[192]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1382;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[275];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[194]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[194]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1383;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[276];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[196]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[196]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1384;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[277];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[198]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[198]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1385;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[278];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[200]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[200]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1386;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[279];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[202]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[202]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1387;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[280];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[247]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[247]);
            }

            assert(!(tmp_dict_value_11 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[281];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[204]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1389;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[282];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[206]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[206]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1390;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[283];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[208]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[208]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1391;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[284];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[210]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[210]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1392;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[285];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[130]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[130]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1393;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[286];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1394;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[287];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1395;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[288];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1396;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[289];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1397;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[290];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1398;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[291];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1399;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[292];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[243]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[243]);
            }

            assert(!(tmp_dict_value_11 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[293];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[60]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1401;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[70];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1402;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[294];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1403;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[295];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[228]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[228]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1404;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[296];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[229]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[229]);
            }

            assert(!(tmp_dict_value_11 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[297];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[233]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
            }

            assert(!(tmp_dict_value_11 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[298];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[235]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[235]);
            }

            assert(!(tmp_dict_value_11 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[299];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[237]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[237]);
            }

            assert(!(tmp_dict_value_11 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[300];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[239]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[239]);
            }

            assert(!(tmp_dict_value_11 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[301];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[241]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[241]);
            }

            assert(!(tmp_dict_value_11 == NULL));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[302];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1411;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[303];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1412;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[304];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[140]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[140]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1413;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[305];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[142]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1414;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[306];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1415;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[307];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[146]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1416;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[308];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[156]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1417;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[309];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[126]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1418;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[310];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[148]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1419;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[311];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1420;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[312];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[134]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[134]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1421;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[313];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[136]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[136]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1422;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[314];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[150]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1423;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[315];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[152]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1424;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[316];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[138]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1425;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[317];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[154]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1426;

                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[318];
            tmp_dict_key_12 = mod_consts[319];
            tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[212]);

            if (unlikely(tmp_dict_value_12 == NULL)) {
                tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[212]);
            }

            if (tmp_dict_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1428;

                goto dict_build_exception_7;
            }
            tmp_dict_value_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_dict_value_11, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[320];
            tmp_dict_key_13 = mod_consts[319];
            tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[214]);

            if (unlikely(tmp_dict_value_13 == NULL)) {
                tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[214]);
            }

            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1429;

                goto dict_build_exception_7;
            }
            tmp_dict_value_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_dict_value_11, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[321];
            tmp_dict_key_14 = mod_consts[319];
            tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[216]);

            if (unlikely(tmp_dict_value_14 == NULL)) {
                tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[216]);
            }

            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1430;

                goto dict_build_exception_7;
            }
            tmp_dict_value_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_dict_value_11, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[322];
            tmp_dict_key_15 = mod_consts[319];
            tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[218]);

            if (unlikely(tmp_dict_value_15 == NULL)) {
                tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[218]);
            }

            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1431;

                goto dict_build_exception_7;
            }
            tmp_dict_value_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_dict_value_11, tmp_dict_key_15, tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[323];
            tmp_dict_key_16 = mod_consts[319];
            tmp_dict_value_16 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[220]);

            if (unlikely(tmp_dict_value_16 == NULL)) {
                tmp_dict_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[220]);
            }

            if (tmp_dict_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1432;

                goto dict_build_exception_7;
            }
            tmp_dict_value_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_dict_value_11, tmp_dict_key_16, tmp_dict_value_16);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[324];
            tmp_dict_key_17 = mod_consts[319];
            tmp_dict_value_17 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[222]);

            if (unlikely(tmp_dict_value_17 == NULL)) {
                tmp_dict_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[222]);
            }

            if (tmp_dict_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1433;

                goto dict_build_exception_7;
            }
            tmp_dict_value_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_dict_value_11, tmp_dict_key_17, tmp_dict_value_17);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[325];
            tmp_dict_key_18 = mod_consts[319];
            tmp_dict_value_18 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[224]);

            if (unlikely(tmp_dict_value_18 == NULL)) {
                tmp_dict_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[224]);
            }

            if (tmp_dict_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1434;

                goto dict_build_exception_7;
            }
            tmp_dict_value_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_dict_value_11, tmp_dict_key_18, tmp_dict_value_18);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[326];
            tmp_dict_key_19 = mod_consts[319];
            tmp_dict_value_19 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[226]);

            if (unlikely(tmp_dict_value_19 == NULL)) {
                tmp_dict_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[226]);
            }

            if (tmp_dict_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1435;

                goto dict_build_exception_7;
            }
            tmp_dict_value_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_dict_value_11, tmp_dict_key_19, tmp_dict_value_19);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[327];
            tmp_dict_key_20 = mod_consts[319];
            tmp_dict_value_20 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[249]);

            if (unlikely(tmp_dict_value_20 == NULL)) {
                tmp_dict_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[249]);
            }

            assert(!(tmp_dict_value_20 == NULL));
            tmp_dict_value_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_dict_value_11, tmp_dict_key_20, tmp_dict_value_20);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[328];
            tmp_dict_key_21 = mod_consts[319];
            tmp_dict_value_21 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[251]);

            if (unlikely(tmp_dict_value_21 == NULL)) {
                tmp_dict_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[251]);
            }

            assert(!(tmp_dict_value_21 == NULL));
            tmp_dict_value_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_dict_value_11, tmp_dict_key_21, tmp_dict_value_21);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[329];
            tmp_dict_key_22 = mod_consts[319];
            tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[253]);

            if (unlikely(tmp_dict_value_22 == NULL)) {
                tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[253]);
            }

            assert(!(tmp_dict_value_22 == NULL));
            tmp_dict_value_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_dict_value_11, tmp_dict_key_22, tmp_dict_value_22);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[330];
            tmp_dict_key_23 = mod_consts[319];
            tmp_dict_value_23 = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[255]);

            if (unlikely(tmp_dict_value_23 == NULL)) {
                tmp_dict_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[255]);
            }

            assert(!(tmp_dict_value_23 == NULL));
            tmp_dict_value_11 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_dict_value_11, tmp_dict_key_23, tmp_dict_value_23);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_assign_source_135, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_assign_source_135);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;
        UPDATE_STRING_DICT1(moduledict_matplotlib$_cm, (Nuitka_StringObject *)mod_consts[331], tmp_assign_source_135);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cb36e1886e14f4f65329434515335fac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cb36e1886e14f4f65329434515335fac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cb36e1886e14f4f65329434515335fac, exception_lineno);
    }



    assertFrameObject(frame_cb36e1886e14f4f65329434515335fac);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("matplotlib._cm", false);

    Py_INCREF(module_matplotlib$_cm);
    return module_matplotlib$_cm;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_matplotlib$_cm, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("matplotlib$_cm", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
