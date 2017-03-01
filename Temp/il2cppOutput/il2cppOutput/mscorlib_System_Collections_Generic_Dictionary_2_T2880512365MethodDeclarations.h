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

// System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object,Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey>
struct Transform_1_t2880512365;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Defa3055062677.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object,Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m3401206923_gshared (Transform_1_t2880512365 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m3401206923(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2880512365 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m3401206923_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object,Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey>::Invoke(TKey,TValue)
extern "C"  TypeNameKey_t3055062677  Transform_1_Invoke_m710362159_gshared (Transform_1_t2880512365 * __this, TypeNameKey_t3055062677  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m710362159(__this, ___key0, ___value1, method) ((  TypeNameKey_t3055062677  (*) (Transform_1_t2880512365 *, TypeNameKey_t3055062677 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m710362159_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object,Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m1222685860_gshared (Transform_1_t2880512365 * __this, TypeNameKey_t3055062677  ___key0, Il2CppObject * ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m1222685860(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2880512365 *, TypeNameKey_t3055062677 , Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m1222685860_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object,Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey>::EndInvoke(System.IAsyncResult)
extern "C"  TypeNameKey_t3055062677  Transform_1_EndInvoke_m1693676493_gshared (Transform_1_t2880512365 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1693676493(__this, ___result0, method) ((  TypeNameKey_t3055062677  (*) (Transform_1_t2880512365 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1693676493_gshared)(__this, ___result0, method)
