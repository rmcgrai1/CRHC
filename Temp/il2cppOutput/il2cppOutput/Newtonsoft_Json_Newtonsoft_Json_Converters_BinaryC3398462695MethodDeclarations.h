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

// Newtonsoft.Json.Converters.BinaryConverter
struct BinaryConverter_t3398462695;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t1719617802;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Type
struct Type_t;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1973729997.h"
#include "mscorlib_System_Object2689449295.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonSerializer1719617802.h"
#include "mscorlib_System_Type1303803226.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader3154730733.h"

// System.Void Newtonsoft.Json.Converters.BinaryConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  void BinaryConverter_WriteJson_m2702359235 (BinaryConverter_t3398462695 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, JsonSerializer_t1719617802 * ___serializer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.Converters.BinaryConverter::GetByteArray(System.Object)
extern "C"  ByteU5BU5D_t3397334013* BinaryConverter_GetByteArray_m3355189626 (BinaryConverter_t3398462695 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.BinaryConverter::EnsureReflectionObject(System.Type)
extern "C"  void BinaryConverter_EnsureReflectionObject_m4110738098 (BinaryConverter_t3398462695 * __this, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Converters.BinaryConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  Il2CppObject * BinaryConverter_ReadJson_m1940893836 (BinaryConverter_t3398462695 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___objectType1, Il2CppObject * ___existingValue2, JsonSerializer_t1719617802 * ___serializer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.Converters.BinaryConverter::ReadByteArray(Newtonsoft.Json.JsonReader)
extern "C"  ByteU5BU5D_t3397334013* BinaryConverter_ReadByteArray_m2117695038 (BinaryConverter_t3398462695 * __this, JsonReader_t3154730733 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.BinaryConverter::CanConvert(System.Type)
extern "C"  bool BinaryConverter_CanConvert_m666379795 (BinaryConverter_t3398462695 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.BinaryConverter::.ctor()
extern "C"  void BinaryConverter__ctor_m223955947 (BinaryConverter_t3398462695 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
