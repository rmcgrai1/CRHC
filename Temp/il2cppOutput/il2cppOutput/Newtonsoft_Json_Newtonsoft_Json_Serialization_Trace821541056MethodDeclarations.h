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

// Newtonsoft.Json.Serialization.TraceJsonWriter
struct TraceJsonWriter_t821541056;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Uri
struct Uri_t19570940;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1973729997.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_Nullable_1_gen1946170751.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_DateTimeOffset1362988906.h"
#include "mscorlib_System_Guid2533601593.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "System_System_Uri19570940.h"

// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::.ctor(Newtonsoft.Json.JsonWriter)
extern "C"  void TraceJsonWriter__ctor_m831300687 (TraceJsonWriter_t821541056 * __this, JsonWriter_t1973729997 * ___innerWriter0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.TraceJsonWriter::GetSerializedJsonMessage()
extern "C"  String_t* TraceJsonWriter_GetSerializedJsonMessage_m4254935873 (TraceJsonWriter_t821541056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Decimal)
extern "C"  void TraceJsonWriter_WriteValue_m2140345681 (TraceJsonWriter_t821541056 * __this, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Boolean)
extern "C"  void TraceJsonWriter_WriteValue_m3756029330 (TraceJsonWriter_t821541056 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Byte)
extern "C"  void TraceJsonWriter_WriteValue_m858957414 (TraceJsonWriter_t821541056 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Nullable`1<System.Byte>)
extern "C"  void TraceJsonWriter_WriteValue_m633107533 (TraceJsonWriter_t821541056 * __this, Nullable_1_t1946170751  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Char)
extern "C"  void TraceJsonWriter_WriteValue_m610132548 (TraceJsonWriter_t821541056 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Byte[])
extern "C"  void TraceJsonWriter_WriteValue_m2583989026 (TraceJsonWriter_t821541056 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.DateTime)
extern "C"  void TraceJsonWriter_WriteValue_m2563251871 (TraceJsonWriter_t821541056 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.DateTimeOffset)
extern "C"  void TraceJsonWriter_WriteValue_m3162141362 (TraceJsonWriter_t821541056 * __this, DateTimeOffset_t1362988906  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Double)
extern "C"  void TraceJsonWriter_WriteValue_m3054043 (TraceJsonWriter_t821541056 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteUndefined()
extern "C"  void TraceJsonWriter_WriteUndefined_m3965269494 (TraceJsonWriter_t821541056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteNull()
extern "C"  void TraceJsonWriter_WriteNull_m2407205253 (TraceJsonWriter_t821541056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Single)
extern "C"  void TraceJsonWriter_WriteValue_m2224090772 (TraceJsonWriter_t821541056 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Guid)
extern "C"  void TraceJsonWriter_WriteValue_m998311457 (TraceJsonWriter_t821541056 * __this, Guid_t2533601593  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Int32)
extern "C"  void TraceJsonWriter_WriteValue_m3014981166 (TraceJsonWriter_t821541056 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Int64)
extern "C"  void TraceJsonWriter_WriteValue_m1852181715 (TraceJsonWriter_t821541056 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.SByte)
extern "C"  void TraceJsonWriter_WriteValue_m2046413779 (TraceJsonWriter_t821541056 * __this, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Int16)
extern "C"  void TraceJsonWriter_WriteValue_m689382272 (TraceJsonWriter_t821541056 * __this, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.String)
extern "C"  void TraceJsonWriter_WriteValue_m118970531 (TraceJsonWriter_t821541056 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.TimeSpan)
extern "C"  void TraceJsonWriter_WriteValue_m3442749135 (TraceJsonWriter_t821541056 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.UInt32)
extern "C"  void TraceJsonWriter_WriteValue_m3626116485 (TraceJsonWriter_t821541056 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.UInt64)
extern "C"  void TraceJsonWriter_WriteValue_m2920303978 (TraceJsonWriter_t821541056 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Uri)
extern "C"  void TraceJsonWriter_WriteValue_m953374224 (TraceJsonWriter_t821541056 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.UInt16)
extern "C"  void TraceJsonWriter_WriteValue_m3908441483 (TraceJsonWriter_t821541056 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteComment(System.String)
extern "C"  void TraceJsonWriter_WriteComment_m4002296987 (TraceJsonWriter_t821541056 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteStartArray()
extern "C"  void TraceJsonWriter_WriteStartArray_m1431663099 (TraceJsonWriter_t821541056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteEndArray()
extern "C"  void TraceJsonWriter_WriteEndArray_m1884624790 (TraceJsonWriter_t821541056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteStartConstructor(System.String)
extern "C"  void TraceJsonWriter_WriteStartConstructor_m3541611414 (TraceJsonWriter_t821541056 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteEndConstructor()
extern "C"  void TraceJsonWriter_WriteEndConstructor_m1965866885 (TraceJsonWriter_t821541056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WritePropertyName(System.String)
extern "C"  void TraceJsonWriter_WritePropertyName_m2846065160 (TraceJsonWriter_t821541056 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WritePropertyName(System.String,System.Boolean)
extern "C"  void TraceJsonWriter_WritePropertyName_m2470051307 (TraceJsonWriter_t821541056 * __this, String_t* ___name0, bool ___escape1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteStartObject()
extern "C"  void TraceJsonWriter_WriteStartObject_m1425347963 (TraceJsonWriter_t821541056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteEndObject()
extern "C"  void TraceJsonWriter_WriteEndObject_m2470464836 (TraceJsonWriter_t821541056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteRawValue(System.String)
extern "C"  void TraceJsonWriter_WriteRawValue_m4218677403 (TraceJsonWriter_t821541056 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteRaw(System.String)
extern "C"  void TraceJsonWriter_WriteRaw_m4274807318 (TraceJsonWriter_t821541056 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::Close()
extern "C"  void TraceJsonWriter_Close_m4120920213 (TraceJsonWriter_t821541056 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
