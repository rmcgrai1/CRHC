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

// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t3985864818;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t3412218392;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo>
struct IEnumerable_1_t547167195;
// System.Collections.Generic.IList`1<System.Reflection.MemberInfo>
struct IList_1_t289070565;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo>
struct IEnumerable_1_t2545856110;
// System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>
struct IList_1_t2794669666;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_PropertyInfo2253729065.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Runtime_Serialization_Formatters_Fo999493661.h"
#include "mscorlib_System_Runtime_Serialization_Serializatio3985864818.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Reflection_BindingFlags1082350898.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"

// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::.cctor()
extern "C"  void ReflectionUtils__cctor_m1662492392 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsVirtual(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsVirtual_m2993796589 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetBaseDefinition(System.Reflection.PropertyInfo)
extern "C"  MethodInfo_t * ReflectionUtils_GetBaseDefinition_m1178929304 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___propertyInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsPublic(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsPublic_m3591214589 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___property0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetObjectType(System.Object)
extern "C"  Type_t * ReflectionUtils_GetObjectType_m4194608096 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.ReflectionUtils::GetTypeName(System.Type,System.Runtime.Serialization.Formatters.FormatterAssemblyStyle,System.Runtime.Serialization.SerializationBinder)
extern "C"  String_t* ReflectionUtils_GetTypeName_m4058960906 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, int32_t ___assemblyFormat1, SerializationBinder_t3985864818 * ___binder2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.ReflectionUtils::RemoveAssemblyDetails(System.String)
extern "C"  String_t* ReflectionUtils_RemoveAssemblyDetails_m1897087320 (Il2CppObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::HasDefaultConstructor(System.Type,System.Boolean)
extern "C"  bool ReflectionUtils_HasDefaultConstructor_m1906518778 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, bool ___nonPublic1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetDefaultConstructor(System.Type)
extern "C"  ConstructorInfo_t2851816542 * ReflectionUtils_GetDefaultConstructor_m1503256486 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetDefaultConstructor(System.Type,System.Boolean)
extern "C"  ConstructorInfo_t2851816542 * ReflectionUtils_GetDefaultConstructor_m358330343 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, bool ___nonPublic1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsNullable(System.Type)
extern "C"  bool ReflectionUtils_IsNullable_m5141129 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsNullableType(System.Type)
extern "C"  bool ReflectionUtils_IsNullableType_m1952073521 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::EnsureNotNullableType(System.Type)
extern "C"  Type_t * ReflectionUtils_EnsureNotNullableType_m749063498 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsGenericDefinition(System.Type,System.Type)
extern "C"  bool ReflectionUtils_IsGenericDefinition_m1064064347 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericInterfaceDefinition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::ImplementsGenericDefinition(System.Type,System.Type)
extern "C"  bool ReflectionUtils_ImplementsGenericDefinition_m3714033717 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericInterfaceDefinition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::ImplementsGenericDefinition(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_ImplementsGenericDefinition_m1592756732 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericInterfaceDefinition1, Type_t ** ___implementingType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinition(System.Type,System.Type)
extern "C"  bool ReflectionUtils_InheritsGenericDefinition_m1236997279 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericClassDefinition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinition(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_InheritsGenericDefinition_m122302930 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___genericClassDefinition1, Type_t ** ___implementingType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::InheritsGenericDefinitionInternal(System.Type,System.Type,System.Type&)
extern "C"  bool ReflectionUtils_InheritsGenericDefinitionInternal_m1388222941 (Il2CppObject * __this /* static, unused */, Type_t * ___currentType0, Type_t * ___genericClassDefinition1, Type_t ** ___implementingType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetCollectionItemType(System.Type)
extern "C"  Type_t * ReflectionUtils_GetCollectionItemType_m2131404479 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetDictionaryKeyValueTypes(System.Type,System.Type&,System.Type&)
extern "C"  void ReflectionUtils_GetDictionaryKeyValueTypes_m3575338623 (Il2CppObject * __this /* static, unused */, Type_t * ___dictionaryType0, Type_t ** ___keyType1, Type_t ** ___valueType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberUnderlyingType(System.Reflection.MemberInfo)
extern "C"  Type_t * ReflectionUtils_GetMemberUnderlyingType_m1551178430 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsIndexedProperty(System.Reflection.MemberInfo)
extern "C"  bool ReflectionUtils_IsIndexedProperty_m2510495915 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsIndexedProperty(System.Reflection.PropertyInfo)
extern "C"  bool ReflectionUtils_IsIndexedProperty_m1359866644 (Il2CppObject * __this /* static, unused */, PropertyInfo_t * ___property0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberValue(System.Reflection.MemberInfo,System.Object)
extern "C"  Il2CppObject * ReflectionUtils_GetMemberValue_m1108820103 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, Il2CppObject * ___target1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::SetMemberValue(System.Reflection.MemberInfo,System.Object,System.Object)
extern "C"  void ReflectionUtils_SetMemberValue_m3134817442 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, Il2CppObject * ___target1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::CanReadMemberValue(System.Reflection.MemberInfo,System.Boolean)
extern "C"  bool ReflectionUtils_CanReadMemberValue_m1471951163 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, bool ___nonPublic1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::CanSetMemberValue(System.Reflection.MemberInfo,System.Boolean,System.Boolean)
extern "C"  bool ReflectionUtils_CanSetMemberValue_m1350063670 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___member0, bool ___nonPublic1, bool ___canSetReadOnly2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetFieldsAndProperties(System.Type,System.Reflection.BindingFlags)
extern "C"  List_1_t3412218392 * ReflectionUtils_GetFieldsAndProperties_m2968660430 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsOverridenGenericMember(System.Reflection.MemberInfo,System.Reflection.BindingFlags)
extern "C"  bool ReflectionUtils_IsOverridenGenericMember_m1359556380 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___memberInfo0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] Newtonsoft.Json.Utilities.ReflectionUtils::GetAttributes(System.Object,System.Type,System.Boolean)
extern "C"  AttributeU5BU5D_t4255796347* ReflectionUtils_GetAttributes_m3650815366 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___attributeProvider0, Type_t * ___attributeType1, bool ___inherit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::SplitFullyQualifiedTypeName(System.String,System.String&,System.String&)
extern "C"  void ReflectionUtils_SplitFullyQualifiedTypeName_m3895103026 (Il2CppObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName0, String_t** ___typeName1, String_t** ___assemblyName2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.Utilities.ReflectionUtils::GetAssemblyDelimiterIndex(System.String)
extern "C"  Nullable_1_t334943763  ReflectionUtils_GetAssemblyDelimiterIndex_m4281428473 (Il2CppObject * __this /* static, unused */, String_t* ___fullyQualifiedTypeName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberInfoFromType(System.Type,System.Reflection.MemberInfo)
extern "C"  MemberInfo_t * ReflectionUtils_GetMemberInfoFromType_m2104111271 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, MemberInfo_t * ___memberInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.FieldInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetFields(System.Type,System.Reflection.BindingFlags)
extern "C"  Il2CppObject* ReflectionUtils_GetFields_m135069139 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetChildPrivateFields(System.Collections.Generic.IList`1<System.Reflection.MemberInfo>,System.Type,System.Reflection.BindingFlags)
extern "C"  void ReflectionUtils_GetChildPrivateFields_m3741033601 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___initialFields0, Type_t * ___targetType1, int32_t ___bindingAttr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> Newtonsoft.Json.Utilities.ReflectionUtils::GetProperties(System.Type,System.Reflection.BindingFlags)
extern "C"  Il2CppObject* ReflectionUtils_GetProperties_m3440088748 (Il2CppObject * __this /* static, unused */, Type_t * ___targetType0, int32_t ___bindingAttr1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.BindingFlags Newtonsoft.Json.Utilities.ReflectionUtils::RemoveFlag(System.Reflection.BindingFlags,System.Reflection.BindingFlags)
extern "C"  int32_t ReflectionUtils_RemoveFlag_m902828796 (Il2CppObject * __this /* static, unused */, int32_t ___bindingAttr0, int32_t ___flag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::GetChildPrivateProperties(System.Collections.Generic.IList`1<System.Reflection.PropertyInfo>,System.Type,System.Reflection.BindingFlags)
extern "C"  void ReflectionUtils_GetChildPrivateProperties_m3750821150 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___initialProperties0, Type_t * ___targetType1, int32_t ___bindingAttr2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::GetDefaultValue(System.Type)
extern "C"  Il2CppObject * ReflectionUtils_GetDefaultValue_m3102513161 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
