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

// Newtonsoft.Json.Serialization.JsonFormatterConverter
struct JsonFormatterConverter_t3196859494;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader
struct JsonSerializerInternalReader_t3254279720;
// Newtonsoft.Json.Serialization.JsonISerializableContract
struct JsonISerializableContract_t122701872;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t2712067825;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json3254279720.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_JsonI122701872.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json2712067825.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void Newtonsoft.Json.Serialization.JsonFormatterConverter::.ctor(Newtonsoft.Json.Serialization.JsonSerializerInternalReader,Newtonsoft.Json.Serialization.JsonISerializableContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonFormatterConverter__ctor_m4128751433 (JsonFormatterConverter_t3196859494 * __this, JsonSerializerInternalReader_t3254279720 * ___reader0, JsonISerializableContract_t122701872 * ___contract1, JsonProperty_t2712067825 * ___member2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonFormatterConverter::Convert(System.Object,System.Type)
extern "C"  Il2CppObject * JsonFormatterConverter_Convert_m131314576 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonFormatterConverter::ToBoolean(System.Object)
extern "C"  bool JsonFormatterConverter_ToBoolean_m2777206316 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Newtonsoft.Json.Serialization.JsonFormatterConverter::ToInt16(System.Object)
extern "C"  int16_t JsonFormatterConverter_ToInt16_m2638727660 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Serialization.JsonFormatterConverter::ToInt32(System.Object)
extern "C"  int32_t JsonFormatterConverter_ToInt32_m2910869804 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Serialization.JsonFormatterConverter::ToInt64(System.Object)
extern "C"  int64_t JsonFormatterConverter_ToInt64_m2111024780 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.JsonFormatterConverter::ToString(System.Object)
extern "C"  String_t* JsonFormatterConverter_ToString_m2754472274 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Newtonsoft.Json.Serialization.JsonFormatterConverter::ToUInt32(System.Object)
extern "C"  uint32_t JsonFormatterConverter_ToUInt32_m4134417886 (JsonFormatterConverter_t3196859494 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
