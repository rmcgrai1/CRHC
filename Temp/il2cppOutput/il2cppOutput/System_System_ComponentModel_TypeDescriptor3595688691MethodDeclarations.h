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

// System.ComponentModel.AttributeCollection
struct AttributeCollection_t1925812292;
// System.Type
struct Type_t;
// System.Collections.ArrayList
struct ArrayList_t4252133567;
// System.ComponentModel.TypeConverter
struct TypeConverter_t745995970;
// System.ComponentModel.TypeInfo
struct TypeInfo_t1029530608;
// System.ComponentModel.IComponent
struct IComponent_t1000253244;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_String2029220233.h"

// System.Void System.ComponentModel.TypeDescriptor::.cctor()
extern "C"  void TypeDescriptor__cctor_m203489455 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Type)
extern "C"  AttributeCollection_t1925812292 * TypeDescriptor_GetAttributes_m164131000 (Il2CppObject * __this /* static, unused */, Type_t * ___componentType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::get_DefaultConverters()
extern "C"  ArrayList_t4252133567 * TypeDescriptor_get_DefaultConverters_m3008219029 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Type)
extern "C"  TypeConverter_t745995970 * TypeDescriptor_GetConverter_m1788154595 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::FindDefaultConverterType(System.Type)
extern "C"  Type_t * TypeDescriptor_FindDefaultConverterType_m1939082393 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeInfo System.ComponentModel.TypeDescriptor::GetTypeInfo(System.Type)
extern "C"  TypeInfo_t1029530608 * TypeDescriptor_GetTypeInfo_m2320573979 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetTypeFromName(System.ComponentModel.IComponent,System.String)
extern "C"  Type_t * TypeDescriptor_GetTypeFromName_m3955750754 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___component0, String_t* ___typeName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
