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

// System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t2874325086;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Defa3055062677.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m1575691540_gshared (Transform_1_t2874325086 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m1575691540(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t2874325086 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m1575691540_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Transform_1_Invoke_m2847095676_gshared (Transform_1_t2874325086 * __this, TypeNameKey_t3055062677  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m2847095676(__this, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Transform_1_t2874325086 *, TypeNameKey_t3055062677 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m2847095676_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m2203528219_gshared (Transform_1_t2874325086 * __this, TypeNameKey_t3055062677  ___key0, Il2CppObject * ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m2203528219(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t2874325086 *, TypeNameKey_t3055062677 , Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m2203528219_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C"  DictionaryEntry_t3048875398  Transform_1_EndInvoke_m1019606674_gshared (Transform_1_t2874325086 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m1019606674(__this, ___result0, method) ((  DictionaryEntry_t3048875398  (*) (Transform_1_t2874325086 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m1019606674_gshared)(__this, ___result0, method)
