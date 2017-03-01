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

// Newtonsoft.Json.JsonTextWriter
struct JsonTextWriter_t2524035668;
// Newtonsoft.Json.Utilities.Base64Encoder
struct Base64Encoder_t2682770749;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Uri
struct Uri_t19570940;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextWriter4027217640.h"
#include "mscorlib_System_String2029220233.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonToken620654565.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_DateTimeOffset1362988906.h"
#include "mscorlib_System_Guid2533601593.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "System_System_Uri19570940.h"

// Newtonsoft.Json.Utilities.Base64Encoder Newtonsoft.Json.JsonTextWriter::get_Base64Encoder()
extern "C"  Base64Encoder_t2682770749 * JsonTextWriter_get_Base64Encoder_m2199163878 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.JsonTextWriter::get_QuoteChar()
extern "C"  Il2CppChar JsonTextWriter_get_QuoteChar_m2552578258 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::.ctor(System.IO.TextWriter)
extern "C"  void JsonTextWriter__ctor_m388932440 (JsonTextWriter_t2524035668 * __this, TextWriter_t4027217640 * ___textWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::Close()
extern "C"  void JsonTextWriter_Close_m4208354001 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteStartObject()
extern "C"  void JsonTextWriter_WriteStartObject_m910316843 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteStartArray()
extern "C"  void JsonTextWriter_WriteStartArray_m1483824619 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteStartConstructor(System.String)
extern "C"  void JsonTextWriter_WriteStartConstructor_m681404294 (JsonTextWriter_t2524035668 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteEnd(Newtonsoft.Json.JsonToken)
extern "C"  void JsonTextWriter_WriteEnd_m1383751857 (JsonTextWriter_t2524035668 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WritePropertyName(System.String)
extern "C"  void JsonTextWriter_WritePropertyName_m3816187176 (JsonTextWriter_t2524035668 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WritePropertyName(System.String,System.Boolean)
extern "C"  void JsonTextWriter_WritePropertyName_m1661374051 (JsonTextWriter_t2524035668 * __this, String_t* ___name0, bool ___escape1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::OnStringEscapeHandlingChanged()
extern "C"  void JsonTextWriter_OnStringEscapeHandlingChanged_m4182026535 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::UpdateCharEscapeFlags()
extern "C"  void JsonTextWriter_UpdateCharEscapeFlags_m3367140158 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteIndent()
extern "C"  void JsonTextWriter_WriteIndent_m625938982 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValueDelimiter()
extern "C"  void JsonTextWriter_WriteValueDelimiter_m2873826466 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteIndentSpace()
extern "C"  void JsonTextWriter_WriteIndentSpace_m3668752778 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValueInternal(System.String,Newtonsoft.Json.JsonToken)
extern "C"  void JsonTextWriter_WriteValueInternal_m3168868708 (JsonTextWriter_t2524035668 * __this, String_t* ___value0, int32_t ___token1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteNull()
extern "C"  void JsonTextWriter_WriteNull_m3064336657 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteUndefined()
extern "C"  void JsonTextWriter_WriteUndefined_m3079084174 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteRaw(System.String)
extern "C"  void JsonTextWriter_WriteRaw_m1245344494 (JsonTextWriter_t2524035668 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.String)
extern "C"  void JsonTextWriter_WriteValue_m4031166451 (JsonTextWriter_t2524035668 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteEscapedString(System.String,System.Boolean)
extern "C"  void JsonTextWriter_WriteEscapedString_m2701804015 (JsonTextWriter_t2524035668 * __this, String_t* ___value0, bool ___quote1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Int32)
extern "C"  void JsonTextWriter_WriteValue_m2146939438 (JsonTextWriter_t2524035668 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.UInt32)
extern "C"  void JsonTextWriter_WriteValue_m794155793 (JsonTextWriter_t2524035668 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Int64)
extern "C"  void JsonTextWriter_WriteValue_m36408467 (JsonTextWriter_t2524035668 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.UInt64)
extern "C"  void JsonTextWriter_WriteValue_m4282554134 (JsonTextWriter_t2524035668 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Single)
extern "C"  void JsonTextWriter_WriteValue_m1560111668 (JsonTextWriter_t2524035668 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Nullable`1<System.Single>)
extern "C"  void JsonTextWriter_WriteValue_m3472694777 (JsonTextWriter_t2524035668 * __this, Nullable_1_t339576247  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Double)
extern "C"  void JsonTextWriter_WriteValue_m1863230283 (JsonTextWriter_t2524035668 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Nullable`1<System.Double>)
extern "C"  void JsonTextWriter_WriteValue_m3220407646 (JsonTextWriter_t2524035668 * __this, Nullable_1_t2341081996  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Boolean)
extern "C"  void JsonTextWriter_WriteValue_m4051016062 (JsonTextWriter_t2524035668 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Int16)
extern "C"  void JsonTextWriter_WriteValue_m2429264436 (JsonTextWriter_t2524035668 * __this, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.UInt16)
extern "C"  void JsonTextWriter_WriteValue_m3119754555 (JsonTextWriter_t2524035668 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Char)
extern "C"  void JsonTextWriter_WriteValue_m3619349496 (JsonTextWriter_t2524035668 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Byte)
extern "C"  void JsonTextWriter_WriteValue_m2355536854 (JsonTextWriter_t2524035668 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.SByte)
extern "C"  void JsonTextWriter_WriteValue_m2536275595 (JsonTextWriter_t2524035668 * __this, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Decimal)
extern "C"  void JsonTextWriter_WriteValue_m4249653141 (JsonTextWriter_t2524035668 * __this, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.DateTime)
extern "C"  void JsonTextWriter_WriteValue_m3116613015 (JsonTextWriter_t2524035668 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Byte[])
extern "C"  void JsonTextWriter_WriteValue_m2963974270 (JsonTextWriter_t2524035668 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.DateTimeOffset)
extern "C"  void JsonTextWriter_WriteValue_m1853628734 (JsonTextWriter_t2524035668 * __this, DateTimeOffset_t1362988906  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Guid)
extern "C"  void JsonTextWriter_WriteValue_m2839636237 (JsonTextWriter_t2524035668 * __this, Guid_t2533601593  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.TimeSpan)
extern "C"  void JsonTextWriter_WriteValue_m464720823 (JsonTextWriter_t2524035668 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteValue(System.Uri)
extern "C"  void JsonTextWriter_WriteValue_m3149613384 (JsonTextWriter_t2524035668 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteComment(System.String)
extern "C"  void JsonTextWriter_WriteComment_m3430096299 (JsonTextWriter_t2524035668 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::EnsureWriteBuffer()
extern "C"  void JsonTextWriter_EnsureWriteBuffer_m3963703572 (JsonTextWriter_t2524035668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteIntegerValue(System.Int64)
extern "C"  void JsonTextWriter_WriteIntegerValue_m3708328389 (JsonTextWriter_t2524035668 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextWriter::WriteIntegerValue(System.UInt64)
extern "C"  void JsonTextWriter_WriteIntegerValue_m3399960222 (JsonTextWriter_t2524035668 * __this, uint64_t ___uvalue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
