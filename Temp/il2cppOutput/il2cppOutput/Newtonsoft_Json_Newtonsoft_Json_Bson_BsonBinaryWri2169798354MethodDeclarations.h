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

// Newtonsoft.Json.Bson.BsonBinaryWriter
struct BsonBinaryWriter_t2169798354;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_t3582361217;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeKind2186819611.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Bson_BsonToken3582361217.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"

// System.DateTimeKind Newtonsoft.Json.Bson.BsonBinaryWriter::get_DateTimeKindHandling()
extern "C"  int32_t BsonBinaryWriter_get_DateTimeKindHandling_m2415087965 (BsonBinaryWriter_t2169798354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::Close()
extern "C"  void BsonBinaryWriter_Close_m2419843833 (BsonBinaryWriter_t2169798354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteToken(Newtonsoft.Json.Bson.BsonToken)
extern "C"  void BsonBinaryWriter_WriteToken_m1536793963 (BsonBinaryWriter_t2169798354 * __this, BsonToken_t3582361217 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteTokenInternal(Newtonsoft.Json.Bson.BsonToken)
extern "C"  void BsonBinaryWriter_WriteTokenInternal_m3960256570 (BsonBinaryWriter_t2169798354 * __this, BsonToken_t3582361217 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteString(System.String,System.Int32,System.Nullable`1<System.Int32>)
extern "C"  void BsonBinaryWriter_WriteString_m951763882 (BsonBinaryWriter_t2169798354 * __this, String_t* ___s0, int32_t ___byteCount1, Nullable_1_t334943763  ___calculatedlengthPrefix2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::WriteUtf8Bytes(System.String,System.Int32)
extern "C"  void BsonBinaryWriter_WriteUtf8Bytes_m2770963999 (BsonBinaryWriter_t2169798354 * __this, String_t* ___s0, int32_t ___byteCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSize(System.Int32)
extern "C"  int32_t BsonBinaryWriter_CalculateSize_m1104202533 (BsonBinaryWriter_t2169798354 * __this, int32_t ___stringByteCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSizeWithLength(System.Int32,System.Boolean)
extern "C"  int32_t BsonBinaryWriter_CalculateSizeWithLength_m4022592076 (BsonBinaryWriter_t2169798354 * __this, int32_t ___stringByteCount0, bool ___includeSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Bson.BsonBinaryWriter::CalculateSize(Newtonsoft.Json.Bson.BsonToken)
extern "C"  int32_t BsonBinaryWriter_CalculateSize_m1924989454 (BsonBinaryWriter_t2169798354 * __this, BsonToken_t3582361217 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonBinaryWriter::.cctor()
extern "C"  void BsonBinaryWriter__cctor_m625253404 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
