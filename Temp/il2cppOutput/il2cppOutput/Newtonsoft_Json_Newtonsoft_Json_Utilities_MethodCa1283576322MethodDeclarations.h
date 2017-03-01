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

// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_t1283576322;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void MethodCall_2__ctor_m4147939914_gshared (MethodCall_2_t1283576322 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define MethodCall_2__ctor_m4147939914(__this, ___object0, ___method1, method) ((  void (*) (MethodCall_2_t1283576322 *, Il2CppObject *, IntPtr_t, const MethodInfo*))MethodCall_2__ctor_m4147939914_gshared)(__this, ___object0, ___method1, method)
// TResult Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
extern "C"  Il2CppObject * MethodCall_2_Invoke_m3330949966_gshared (MethodCall_2_t1283576322 * __this, Il2CppObject * ___target0, ObjectU5BU5D_t3614634134* ___args1, const MethodInfo* method);
#define MethodCall_2_Invoke_m3330949966(__this, ___target0, ___args1, method) ((  Il2CppObject * (*) (MethodCall_2_t1283576322 *, Il2CppObject *, ObjectU5BU5D_t3614634134*, const MethodInfo*))MethodCall_2_Invoke_m3330949966_gshared)(__this, ___target0, ___args1, method)
// System.IAsyncResult Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::BeginInvoke(T,System.Object[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * MethodCall_2_BeginInvoke_m3503206327_gshared (MethodCall_2_t1283576322 * __this, Il2CppObject * ___target0, ObjectU5BU5D_t3614634134* ___args1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define MethodCall_2_BeginInvoke_m3503206327(__this, ___target0, ___args1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (MethodCall_2_t1283576322 *, Il2CppObject *, ObjectU5BU5D_t3614634134*, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))MethodCall_2_BeginInvoke_m3503206327_gshared)(__this, ___target0, ___args1, ___callback2, ___object3, method)
// TResult Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * MethodCall_2_EndInvoke_m894495426_gshared (MethodCall_2_t1283576322 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define MethodCall_2_EndInvoke_m894495426(__this, ___result0, method) ((  Il2CppObject * (*) (MethodCall_2_t1283576322 *, Il2CppObject *, const MethodInfo*))MethodCall_2_EndInvoke_m894495426_gshared)(__this, ___result0, method)
