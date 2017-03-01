#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object,Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey>
struct Transform_1_t1610273663;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_ConvertU1788482786.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object,Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m545728375_gshared (Transform_1_t1610273663 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m545728375(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t1610273663 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m545728375_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object,Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey>::Invoke(TKey,TValue)
extern "C"  TypeConvertKey_t1788482786  Transform_1_Invoke_m3638210083_gshared (Transform_1_t1610273663 * __this, TypeConvertKey_t1788482786  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m3638210083(__this, ___key0, ___value1, method) ((  TypeConvertKey_t1788482786  (*) (Transform_1_t1610273663 *, TypeConvertKey_t1788482786 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m3638210083_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object,Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1869378498_gshared (Transform_1_t1610273663 * __this, TypeConvertKey_t1788482786  ___key0, Il2CppObject * ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1869378498(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t1610273663 *, TypeConvertKey_t1788482786 , Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1869378498_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object,Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey>::EndInvoke(System.IAsyncResult)
extern "C"  TypeConvertKey_t1788482786  Transform_1_EndInvoke_m716690017_gshared (Transform_1_t1610273663 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m716690017(__this, ___result0, method) ((  TypeConvertKey_t1788482786  (*) (Transform_1_t1610273663 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m716690017_gshared)(__this, ___result0, method)
