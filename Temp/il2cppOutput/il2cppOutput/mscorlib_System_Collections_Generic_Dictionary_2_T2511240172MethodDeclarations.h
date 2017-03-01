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

// System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object,System.Object>
struct Transform_1_t2511240172;
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

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3264512721_gshared (Transform_1_t2511240172 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3264512721(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2511240172 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3264512721_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object,System.Object>::Invoke(TKey,TValue)
extern "C"  Il2CppObject * Transform_1_Invoke_m360659445_gshared (Transform_1_t2511240172 * __this, TypeConvertKey_t1788482786  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m360659445(__this, ___key0, ___value1, method) ((  Il2CppObject * (*) (Transform_1_t2511240172 *, TypeConvertKey_t1788482786 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m360659445_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1743736878_gshared (Transform_1_t2511240172 * __this, TypeConvertKey_t1788482786  ___key0, Il2CppObject * ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1743736878(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2511240172 *, TypeConvertKey_t1788482786 , Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1743736878_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * Transform_1_EndInvoke_m1324415403_gshared (Transform_1_t2511240172 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1324415403(__this, ___result0, method) ((  Il2CppObject * (*) (Transform_1_t2511240172 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1324415403_gshared)(__this, ___result0, method)
