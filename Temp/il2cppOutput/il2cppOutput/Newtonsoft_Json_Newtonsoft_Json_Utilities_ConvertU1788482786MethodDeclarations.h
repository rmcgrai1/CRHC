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

// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t1788482786;
struct TypeConvertKey_t1788482786_marshaled_pinvoke;
struct TypeConvertKey_t1788482786_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_ConvertU1788482786.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::get_InitialType()
extern "C"  Type_t * TypeConvertKey_get_InitialType_m2407353397 (TypeConvertKey_t1788482786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::get_TargetType()
extern "C"  Type_t * TypeConvertKey_get_TargetType_m1306869422 (TypeConvertKey_t1788482786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::.ctor(System.Type,System.Type)
extern "C"  void TypeConvertKey__ctor_m2656598064 (TypeConvertKey_t1788482786 * __this, Type_t * ___initialType0, Type_t * ___targetType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::GetHashCode()
extern "C"  int32_t TypeConvertKey_GetHashCode_m684609717 (TypeConvertKey_t1788482786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::Equals(System.Object)
extern "C"  bool TypeConvertKey_Equals_m2951854959 (TypeConvertKey_t1788482786 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::Equals(Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey)
extern "C"  bool TypeConvertKey_Equals_m2262100465 (TypeConvertKey_t1788482786 * __this, TypeConvertKey_t1788482786  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TypeConvertKey_t1788482786;
struct TypeConvertKey_t1788482786_marshaled_pinvoke;

extern "C" void TypeConvertKey_t1788482786_marshal_pinvoke(const TypeConvertKey_t1788482786& unmarshaled, TypeConvertKey_t1788482786_marshaled_pinvoke& marshaled);
extern "C" void TypeConvertKey_t1788482786_marshal_pinvoke_back(const TypeConvertKey_t1788482786_marshaled_pinvoke& marshaled, TypeConvertKey_t1788482786& unmarshaled);
extern "C" void TypeConvertKey_t1788482786_marshal_pinvoke_cleanup(TypeConvertKey_t1788482786_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct TypeConvertKey_t1788482786;
struct TypeConvertKey_t1788482786_marshaled_com;

extern "C" void TypeConvertKey_t1788482786_marshal_com(const TypeConvertKey_t1788482786& unmarshaled, TypeConvertKey_t1788482786_marshaled_com& marshaled);
extern "C" void TypeConvertKey_t1788482786_marshal_com_back(const TypeConvertKey_t1788482786_marshaled_com& marshaled, TypeConvertKey_t1788482786& unmarshaled);
extern "C" void TypeConvertKey_t1788482786_marshal_com_cleanup(TypeConvertKey_t1788482786_marshaled_com& marshaled);
