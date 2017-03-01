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

// Newtonsoft.Json.Serialization.JsonArrayContract
struct JsonArrayContract_t2625589241;
// System.Type
struct Type_t;
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_t1997612730;
// Newtonsoft.Json.Utilities.IWrappedCollection
struct IWrappedCollection_t1324248768;
// System.Object
struct Il2CppObject;
// System.Collections.IList
struct IList_t3321498491;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// System.Type Newtonsoft.Json.Serialization.JsonArrayContract::get_CollectionItemType()
extern "C"  Type_t * JsonArrayContract_get_CollectionItemType_m3227280754 (JsonArrayContract_t2625589241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::set_CollectionItemType(System.Type)
extern "C"  void JsonArrayContract_set_CollectionItemType_m2173822015 (JsonArrayContract_t2625589241 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonArrayContract::get_IsMultidimensionalArray()
extern "C"  bool JsonArrayContract_get_IsMultidimensionalArray_m3466280528 (JsonArrayContract_t2625589241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::set_IsMultidimensionalArray(System.Boolean)
extern "C"  void JsonArrayContract_set_IsMultidimensionalArray_m2902798399 (JsonArrayContract_t2625589241 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonArrayContract::get_IsArray()
extern "C"  bool JsonArrayContract_get_IsArray_m227363090 (JsonArrayContract_t2625589241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::set_IsArray(System.Boolean)
extern "C"  void JsonArrayContract_set_IsArray_m1721854815 (JsonArrayContract_t2625589241 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonArrayContract::get_ShouldCreateWrapper()
extern "C"  bool JsonArrayContract_get_ShouldCreateWrapper_m2218261109 (JsonArrayContract_t2625589241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::set_ShouldCreateWrapper(System.Boolean)
extern "C"  void JsonArrayContract_set_ShouldCreateWrapper_m2891759232 (JsonArrayContract_t2625589241 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonArrayContract::get_CanDeserialize()
extern "C"  bool JsonArrayContract_get_CanDeserialize_m95347674 (JsonArrayContract_t2625589241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::set_CanDeserialize(System.Boolean)
extern "C"  void JsonArrayContract_set_CanDeserialize_m2227880339 (JsonArrayContract_t2625589241 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Serialization.JsonArrayContract::get_ParameterizedCreator()
extern "C"  ObjectConstructor_1_t1997612730 * JsonArrayContract_get_ParameterizedCreator_m4059961426 (JsonArrayContract_t2625589241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Serialization.JsonArrayContract::get_OverrideCreator()
extern "C"  ObjectConstructor_1_t1997612730 * JsonArrayContract_get_OverrideCreator_m2066132655 (JsonArrayContract_t2625589241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::set_OverrideCreator(Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>)
extern "C"  void JsonArrayContract_set_OverrideCreator_m2651812488 (JsonArrayContract_t2625589241 * __this, ObjectConstructor_1_t1997612730 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonArrayContract::get_HasParameterizedCreator()
extern "C"  bool JsonArrayContract_get_HasParameterizedCreator_m3962834560 (JsonArrayContract_t2625589241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::set_HasParameterizedCreator(System.Boolean)
extern "C"  void JsonArrayContract_set_HasParameterizedCreator_m3892046333 (JsonArrayContract_t2625589241 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonArrayContract::get_HasParameterizedCreatorInternal()
extern "C"  bool JsonArrayContract_get_HasParameterizedCreatorInternal_m4163072281 (JsonArrayContract_t2625589241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonArrayContract::.ctor(System.Type)
extern "C"  void JsonArrayContract__ctor_m2759944357 (JsonArrayContract_t2625589241 * __this, Type_t * ___underlyingType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.IWrappedCollection Newtonsoft.Json.Serialization.JsonArrayContract::CreateWrapper(System.Object)
extern "C"  Il2CppObject * JsonArrayContract_CreateWrapper_m3074951209 (JsonArrayContract_t2625589241 * __this, Il2CppObject * ___list0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Newtonsoft.Json.Serialization.JsonArrayContract::CreateTemporaryCollection()
extern "C"  Il2CppObject * JsonArrayContract_CreateTemporaryCollection_m2281424399 (JsonArrayContract_t2625589241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
