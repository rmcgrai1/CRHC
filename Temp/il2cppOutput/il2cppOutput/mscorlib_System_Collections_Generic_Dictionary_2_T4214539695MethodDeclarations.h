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

// System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object,System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>>
struct Transform_1_t4214539695;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_g94122711.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Defa3055062677.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object,System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C"  void Transform_1__ctor_m2030652522_gshared (Transform_1_t4214539695 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method);
#define Transform_1__ctor_m2030652522(__this, ___object0, ___method1, method) ((  void (*) (Transform_1_t4214539695 *, Il2CppObject *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m2030652522_gshared)(__this, ___object0, ___method1, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object,System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>>::Invoke(TKey,TValue)
extern "C"  KeyValuePair_2_t94122711  Transform_1_Invoke_m1045128842_gshared (Transform_1_t4214539695 * __this, TypeNameKey_t3055062677  ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Transform_1_Invoke_m1045128842(__this, ___key0, ___value1, method) ((  KeyValuePair_2_t94122711  (*) (Transform_1_t4214539695 *, TypeNameKey_t3055062677 , Il2CppObject *, const MethodInfo*))Transform_1_Invoke_m1045128842_gshared)(__this, ___key0, ___value1, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object,System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * Transform_1_BeginInvoke_m3184063799_gshared (Transform_1_t4214539695 * __this, TypeNameKey_t3055062677  ___key0, Il2CppObject * ___value1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method);
#define Transform_1_BeginInvoke_m3184063799(__this, ___key0, ___value1, ___callback2, ___object3, method) ((  Il2CppObject * (*) (Transform_1_t4214539695 *, TypeNameKey_t3055062677 , Il2CppObject *, AsyncCallback_t163412349 *, Il2CppObject *, const MethodInfo*))Transform_1_BeginInvoke_m3184063799_gshared)(__this, ___key0, ___value1, ___callback2, ___object3, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object,System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C"  KeyValuePair_2_t94122711  Transform_1_EndInvoke_m36531412_gshared (Transform_1_t4214539695 * __this, Il2CppObject * ___result0, const MethodInfo* method);
#define Transform_1_EndInvoke_m36531412(__this, ___result0, method) ((  KeyValuePair_2_t94122711  (*) (Transform_1_t4214539695 *, Il2CppObject *, const MethodInfo*))Transform_1_EndInvoke_m36531412_gshared)(__this, ___result0, method)
