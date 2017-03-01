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

// Newtonsoft.Json.Utilities.ReflectionObject
struct ReflectionObject_t1424089768;
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_t1997612730;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>
struct IDictionary_2_t4136161484;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Reflection.MethodBase
struct MethodBase_t904190842;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_MethodBase904190842.h"

// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Utilities.ReflectionObject::get_Creator()
extern "C"  ObjectConstructor_1_t1997612730 * ReflectionObject_get_Creator_m3558535968 (ReflectionObject_t1424089768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionObject::set_Creator(Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>)
extern "C"  void ReflectionObject_set_Creator_m3388855541 (ReflectionObject_t1424089768 * __this, ObjectConstructor_1_t1997612730 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember> Newtonsoft.Json.Utilities.ReflectionObject::get_Members()
extern "C"  Il2CppObject* ReflectionObject_get_Members_m2127406134 (ReflectionObject_t1424089768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionObject::set_Members(System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>)
extern "C"  void ReflectionObject_set_Members_m4034020977 (ReflectionObject_t1424089768 * __this, Il2CppObject* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionObject::.ctor()
extern "C"  void ReflectionObject__ctor_m2209907547 (ReflectionObject_t1424089768 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ReflectionObject::GetValue(System.Object,System.String)
extern "C"  Il2CppObject * ReflectionObject_GetValue_m3746447183 (ReflectionObject_t1424089768 * __this, Il2CppObject * ___target0, String_t* ___member1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionObject::GetType(System.String)
extern "C"  Type_t * ReflectionObject_GetType_m1626363475 (ReflectionObject_t1424089768 * __this, String_t* ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ReflectionObject Newtonsoft.Json.Utilities.ReflectionObject::Create(System.Type,System.String[])
extern "C"  ReflectionObject_t1424089768 * ReflectionObject_Create_m2359509532 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, StringU5BU5D_t1642385972* ___memberNames1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ReflectionObject Newtonsoft.Json.Utilities.ReflectionObject::Create(System.Type,System.Reflection.MethodBase,System.String[])
extern "C"  ReflectionObject_t1424089768 * ReflectionObject_Create_m152623496 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, MethodBase_t904190842 * ___creator1, StringU5BU5D_t1642385972* ___memberNames2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
