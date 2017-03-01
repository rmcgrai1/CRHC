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

// System.Runtime.Serialization.DataContractAttribute
struct DataContractAttribute_t3332255060;
// System.Type
struct Type_t;
// System.Runtime.Serialization.DataMemberAttribute
struct DataMemberAttribute_t2677019114;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t1964060750;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// Newtonsoft.Json.Serialization.NamingStrategy
struct NamingStrategy_t3996993727;
// Newtonsoft.Json.JsonContainerAttribute
struct JsonContainerAttribute_t47210975;
// System.Func`2<System.Object[],System.Object>
struct Func_2_t923111794;
// System.ComponentModel.TypeConverter
struct TypeConverter_t745995970;
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_t2294713146;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "Newtonsoft_Json_Newtonsoft_Json_MemberSerialization687984360.h"
#include "mscorlib_System_Object2689449295.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonContainerAttribu47210975.h"

// System.Runtime.Serialization.DataContractAttribute Newtonsoft.Json.Serialization.JsonTypeReflector::GetDataContractAttribute(System.Type)
extern "C"  DataContractAttribute_t3332255060 * JsonTypeReflector_GetDataContractAttribute_m188678902 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.DataMemberAttribute Newtonsoft.Json.Serialization.JsonTypeReflector::GetDataMemberAttribute(System.Reflection.MemberInfo)
extern "C"  DataMemberAttribute_t2677019114 * JsonTypeReflector_GetDataMemberAttribute_m843413655 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___memberInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.MemberSerialization Newtonsoft.Json.Serialization.JsonTypeReflector::GetObjectMemberSerialization(System.Type,System.Boolean)
extern "C"  int32_t JsonTypeReflector_GetObjectMemberSerialization_m1151032880 (Il2CppObject * __this /* static, unused */, Type_t * ___objectType0, bool ___ignoreSerializableAttribute1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonTypeReflector::GetJsonConverter(System.Object)
extern "C"  JsonConverter_t1964060750 * JsonTypeReflector_GetJsonConverter_m947402735 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___attributeProvider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonTypeReflector::CreateJsonConverterInstance(System.Type,System.Object[])
extern "C"  JsonConverter_t1964060750 * JsonTypeReflector_CreateJsonConverterInstance_m3930138529 (Il2CppObject * __this /* static, unused */, Type_t * ___converterType0, ObjectU5BU5D_t3614634134* ___converterArgs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.NamingStrategy Newtonsoft.Json.Serialization.JsonTypeReflector::CreateNamingStrategyInstance(System.Type,System.Object[])
extern "C"  NamingStrategy_t3996993727 * JsonTypeReflector_CreateNamingStrategyInstance_m3103471837 (Il2CppObject * __this /* static, unused */, Type_t * ___namingStrategyType0, ObjectU5BU5D_t3614634134* ___converterArgs1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.NamingStrategy Newtonsoft.Json.Serialization.JsonTypeReflector::GetContainerNamingStrategy(Newtonsoft.Json.JsonContainerAttribute)
extern "C"  NamingStrategy_t3996993727 * JsonTypeReflector_GetContainerNamingStrategy_m1803251912 (Il2CppObject * __this /* static, unused */, JsonContainerAttribute_t47210975 * ___containerAttribute0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.Object[],System.Object> Newtonsoft.Json.Serialization.JsonTypeReflector::GetCreator(System.Type)
extern "C"  Func_2_t923111794 * JsonTypeReflector_GetCreator_m972465044 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter Newtonsoft.Json.Serialization.JsonTypeReflector::GetTypeConverter(System.Type)
extern "C"  TypeConverter_t745995970 * JsonTypeReflector_GetTypeConverter_m4212603878 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector::GetAssociatedMetadataType(System.Type)
extern "C"  Type_t * JsonTypeReflector_GetAssociatedMetadataType_m675088931 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector::GetAssociateMetadataTypeFromAttribute(System.Type)
extern "C"  Type_t * JsonTypeReflector_GetAssociateMetadataTypeFromAttribute_m94782305 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonTypeReflector::get_FullyTrusted()
extern "C"  bool JsonTypeReflector_get_FullyTrusted_m4028076697 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory Newtonsoft.Json.Serialization.JsonTypeReflector::get_ReflectionDelegateFactory()
extern "C"  ReflectionDelegateFactory_t2294713146 * JsonTypeReflector_get_ReflectionDelegateFactory_m2391908748 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector::.cctor()
extern "C"  void JsonTypeReflector__cctor_m2461516604 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
