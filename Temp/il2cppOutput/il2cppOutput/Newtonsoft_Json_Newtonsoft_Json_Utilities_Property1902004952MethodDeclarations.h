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

// Newtonsoft.Json.Utilities.PropertyNameTable
struct PropertyNameTable_t1902004952;
// System.String
struct String_t;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Newtonsoft.Json.Utilities.PropertyNameTable::.cctor()
extern "C"  void PropertyNameTable__cctor_m2906877120 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.PropertyNameTable::.ctor()
extern "C"  void PropertyNameTable__ctor_m3468246443 (PropertyNameTable_t1902004952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.PropertyNameTable::Get(System.Char[],System.Int32,System.Int32)
extern "C"  String_t* PropertyNameTable_Get_m3701298949 (PropertyNameTable_t1902004952 * __this, CharU5BU5D_t1328083999* ___key0, int32_t ___start1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.PropertyNameTable::Add(System.String)
extern "C"  String_t* PropertyNameTable_Add_m1214517805 (PropertyNameTable_t1902004952 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.PropertyNameTable::AddEntry(System.String,System.Int32)
extern "C"  String_t* PropertyNameTable_AddEntry_m74796914 (PropertyNameTable_t1902004952 * __this, String_t* ___str0, int32_t ___hashCode1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.PropertyNameTable::Grow()
extern "C"  void PropertyNameTable_Grow_m3332910318 (PropertyNameTable_t1902004952 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.PropertyNameTable::TextEquals(System.String,System.Char[],System.Int32,System.Int32)
extern "C"  bool PropertyNameTable_TextEquals_m1464055630 (Il2CppObject * __this /* static, unused */, String_t* ___str10, CharU5BU5D_t1328083999* ___str21, int32_t ___str2Start2, int32_t ___str2Length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
