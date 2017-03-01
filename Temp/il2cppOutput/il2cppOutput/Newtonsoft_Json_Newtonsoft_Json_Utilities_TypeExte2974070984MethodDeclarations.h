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

// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberTypes3343038963.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"

// System.Reflection.MemberTypes Newtonsoft.Json.Utilities.TypeExtensions::MemberType(System.Reflection.MemberInfo)
extern "C"  int32_t TypeExtensions_MemberType_m2192645245 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___memberInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::ContainsGenericParameters(System.Type)
extern "C"  bool TypeExtensions_ContainsGenericParameters_m673199492 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsInterface(System.Type)
extern "C"  bool TypeExtensions_IsInterface_m4027938127 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsGenericType(System.Type)
extern "C"  bool TypeExtensions_IsGenericType_m2573949791 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsGenericTypeDefinition(System.Type)
extern "C"  bool TypeExtensions_IsGenericTypeDefinition_m1841056122 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.TypeExtensions::BaseType(System.Type)
extern "C"  Type_t * TypeExtensions_BaseType_m3858355017 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsEnum(System.Type)
extern "C"  bool TypeExtensions_IsEnum_m3232841617 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsClass(System.Type)
extern "C"  bool TypeExtensions_IsClass_m1190811054 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsSealed(System.Type)
extern "C"  bool TypeExtensions_IsSealed_m1812217042 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsAbstract(System.Type)
extern "C"  bool TypeExtensions_IsAbstract_m3133236508 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsValueType(System.Type)
extern "C"  bool TypeExtensions_IsValueType_m2298155509 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::AssignableToTypeName(System.Type,System.String,System.Type&)
extern "C"  bool TypeExtensions_AssignableToTypeName_m2010856624 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___fullTypeName1, Type_t ** ___match2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::AssignableToTypeName(System.Type,System.String)
extern "C"  bool TypeExtensions_AssignableToTypeName_m494314593 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, String_t* ___fullTypeName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::ImplementInterface(System.Type,System.Type)
extern "C"  bool TypeExtensions_ImplementInterface_m257112361 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, Type_t * ___interfaceType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
