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

// System.Attribute
struct Attribute_t542643598;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Attribute[]
struct AttributeU5BU5D_t4255796347;
// System.Reflection.Assembly
struct Assembly_t4268412390;
// System.Reflection.ParameterInfo
struct ParameterInfo_t2249040075;
// System.Reflection.Module
struct Module_t4282841206;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Reflection_Assembly4268412390.h"
#include "mscorlib_System_Reflection_ParameterInfo2249040075.h"
#include "mscorlib_System_Reflection_Module4282841206.h"

// System.Void System.Attribute::.ctor()
extern "C"  void Attribute__ctor_m1730479323 (Attribute_t542643598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Attribute::get_TypeId()
extern "C"  Il2CppObject * Attribute_get_TypeId_m2363730758 (Attribute_t542643598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Attribute::CheckParameters(System.Object,System.Type)
extern "C"  void Attribute_CheckParameters_m1754681684 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___element0, Type_t * ___attributeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type)
extern "C"  Attribute_t542643598 * Attribute_GetCustomAttribute_m2157205805 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___element0, Type_t * ___attributeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute System.Attribute::GetCustomAttribute(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C"  Attribute_t542643598 * Attribute_GetCustomAttribute_m3988539922 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___element0, Type_t * ___attributeType1, bool ___inherit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.Assembly)
extern "C"  AttributeU5BU5D_t4255796347* Attribute_GetCustomAttributes_m3452110163 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___element0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.Assembly,System.Type)
extern "C"  AttributeU5BU5D_t4255796347* Attribute_GetCustomAttributes_m1027548962 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___element0, Type_t * ___attributeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.Assembly,System.Type,System.Boolean)
extern "C"  AttributeU5BU5D_t4255796347* Attribute_GetCustomAttributes_m3188023331 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___element0, Type_t * ___attributeType1, bool ___inherit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.ParameterInfo,System.Type,System.Boolean)
extern "C"  AttributeU5BU5D_t4255796347* Attribute_GetCustomAttributes_m1900696014 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2249040075 * ___element0, Type_t * ___attributeType1, bool ___inherit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.Module,System.Type,System.Boolean)
extern "C"  AttributeU5BU5D_t4255796347* Attribute_GetCustomAttributes_m3847944167 (Il2CppObject * __this /* static, unused */, Module_t4282841206 * ___element0, Type_t * ___attributeType1, bool ___inherit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C"  AttributeU5BU5D_t4255796347* Attribute_GetCustomAttributes_m2468178975 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___element0, Type_t * ___type1, bool ___inherit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.Module,System.Boolean)
extern "C"  AttributeU5BU5D_t4255796347* Attribute_GetCustomAttributes_m2740621604 (Il2CppObject * __this /* static, unused */, Module_t4282841206 * ___element0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.Assembly,System.Boolean)
extern "C"  AttributeU5BU5D_t4255796347* Attribute_GetCustomAttributes_m2778552340 (Il2CppObject * __this /* static, unused */, Assembly_t4268412390 * ___element0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.MemberInfo,System.Boolean)
extern "C"  AttributeU5BU5D_t4255796347* Attribute_GetCustomAttributes_m4082301034 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___element0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.Attribute::GetCustomAttributes(System.Reflection.ParameterInfo,System.Boolean)
extern "C"  AttributeU5BU5D_t4255796347* Attribute_GetCustomAttributes_m1246435837 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2249040075 * ___element0, bool ___inherit1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Attribute::GetHashCode()
extern "C"  int32_t Attribute_GetHashCode_m2653962112 (Attribute_t542643598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefaultAttribute()
extern "C"  bool Attribute_IsDefaultAttribute_m910093198 (Attribute_t542643598 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type)
extern "C"  bool Attribute_IsDefined_m2186700650 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2249040075 * ___element0, Type_t * ___attributeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type)
extern "C"  bool Attribute_IsDefined_m1350918959 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___element0, Type_t * ___attributeType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.MemberInfo,System.Type,System.Boolean)
extern "C"  bool Attribute_IsDefined_m216577166 (Il2CppObject * __this /* static, unused */, MemberInfo_t * ___element0, Type_t * ___attributeType1, bool ___inherit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::IsDefined(System.Reflection.ParameterInfo,System.Type,System.Boolean)
extern "C"  bool Attribute_IsDefined_m2118467641 (Il2CppObject * __this /* static, unused */, ParameterInfo_t2249040075 * ___element0, Type_t * ___attributeType1, bool ___inherit2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Attribute::Equals(System.Object)
extern "C"  bool Attribute_Equals_m3576905816 (Attribute_t542643598 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
