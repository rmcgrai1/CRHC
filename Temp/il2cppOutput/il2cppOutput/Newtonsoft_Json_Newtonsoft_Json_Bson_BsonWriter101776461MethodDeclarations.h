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

// Newtonsoft.Json.Bson.BsonWriter
struct BsonWriter_t101776461;
// System.String
struct String_t;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_t3582361217;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Uri
struct Uri_t19570940;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonToken620654565.h"
#include "mscorlib_System_String2029220233.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Bson_BsonToken3582361217.h"
#include "mscorlib_System_Object2689449295.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Bson_BsonType2055433366.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_DateTimeOffset1362988906.h"
#include "mscorlib_System_Guid2533601593.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "System_System_Uri19570940.h"

// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteEnd(Newtonsoft.Json.JsonToken)
extern "C"  void BsonWriter_WriteEnd_m1106647010 (BsonWriter_t101776461 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteComment(System.String)
extern "C"  void BsonWriter_WriteComment_m1112846266 (BsonWriter_t101776461 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartConstructor(System.String)
extern "C"  void BsonWriter_WriteStartConstructor_m1718715271 (BsonWriter_t101776461 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRaw(System.String)
extern "C"  void BsonWriter_WriteRaw_m1863332203 (BsonWriter_t101776461 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRawValue(System.String)
extern "C"  void BsonWriter_WriteRawValue_m1365109408 (BsonWriter_t101776461 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartArray()
extern "C"  void BsonWriter_WriteStartArray_m1154050916 (BsonWriter_t101776461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteStartObject()
extern "C"  void BsonWriter_WriteStartObject_m935900670 (BsonWriter_t101776461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WritePropertyName(System.String)
extern "C"  void BsonWriter_WritePropertyName_m2657808083 (BsonWriter_t101776461 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::Close()
extern "C"  void BsonWriter_Close_m3470001058 (BsonWriter_t101776461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddParent(Newtonsoft.Json.Bson.BsonToken)
extern "C"  void BsonWriter_AddParent_m876661843 (BsonWriter_t101776461 * __this, BsonToken_t3582361217 * ___container0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::RemoveParent()
extern "C"  void BsonWriter_RemoveParent_m4082221428 (BsonWriter_t101776461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddValue(System.Object,Newtonsoft.Json.Bson.BsonType)
extern "C"  void BsonWriter_AddValue_m2323633033 (BsonWriter_t101776461 * __this, Il2CppObject * ___value0, int8_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::AddToken(Newtonsoft.Json.Bson.BsonToken)
extern "C"  void BsonWriter_AddToken_m957884634 (BsonWriter_t101776461 * __this, BsonToken_t3582361217 * ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteNull()
extern "C"  void BsonWriter_WriteNull_m2258637744 (BsonWriter_t101776461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteUndefined()
extern "C"  void BsonWriter_WriteUndefined_m1732461195 (BsonWriter_t101776461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.String)
extern "C"  void BsonWriter_WriteValue_m420533810 (BsonWriter_t101776461 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int32)
extern "C"  void BsonWriter_WriteValue_m2094972043 (BsonWriter_t101776461 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt32)
extern "C"  void BsonWriter_WriteValue_m1036584310 (BsonWriter_t101776461 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int64)
extern "C"  void BsonWriter_WriteValue_m2901541324 (BsonWriter_t101776461 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt64)
extern "C"  void BsonWriter_WriteValue_m2017815277 (BsonWriter_t101776461 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Single)
extern "C"  void BsonWriter_WriteValue_m3218066887 (BsonWriter_t101776461 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Double)
extern "C"  void BsonWriter_WriteValue_m302643486 (BsonWriter_t101776461 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Boolean)
extern "C"  void BsonWriter_WriteValue_m169997697 (BsonWriter_t101776461 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Int16)
extern "C"  void BsonWriter_WriteValue_m4064340445 (BsonWriter_t101776461 * __this, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.UInt16)
extern "C"  void BsonWriter_WriteValue_m754259312 (BsonWriter_t101776461 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Char)
extern "C"  void BsonWriter_WriteValue_m1519806041 (BsonWriter_t101776461 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Byte)
extern "C"  void BsonWriter_WriteValue_m4214415539 (BsonWriter_t101776461 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.SByte)
extern "C"  void BsonWriter_WriteValue_m862564320 (BsonWriter_t101776461 * __this, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Decimal)
extern "C"  void BsonWriter_WriteValue_m436485832 (BsonWriter_t101776461 * __this, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.DateTime)
extern "C"  void BsonWriter_WriteValue_m1325120386 (BsonWriter_t101776461 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.DateTimeOffset)
extern "C"  void BsonWriter_WriteValue_m69133477 (BsonWriter_t101776461 * __this, DateTimeOffset_t1362988906  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Byte[])
extern "C"  void BsonWriter_WriteValue_m3295918325 (BsonWriter_t101776461 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Guid)
extern "C"  void BsonWriter_WriteValue_m2519432342 (BsonWriter_t101776461 * __this, Guid_t2533601593  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.TimeSpan)
extern "C"  void BsonWriter_WriteValue_m3460997390 (BsonWriter_t101776461 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteValue(System.Uri)
extern "C"  void BsonWriter_WriteValue_m1057687651 (BsonWriter_t101776461 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteObjectId(System.Byte[])
extern "C"  void BsonWriter_WriteObjectId_m3282990702 (BsonWriter_t101776461 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRegex(System.String,System.String)
extern "C"  void BsonWriter_WriteRegex_m2915147772 (BsonWriter_t101776461 * __this, String_t* ___pattern0, String_t* ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
