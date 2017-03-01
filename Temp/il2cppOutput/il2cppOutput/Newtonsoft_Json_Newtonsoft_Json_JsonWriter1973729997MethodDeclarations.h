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

// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_t2725846494;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// System.Object
struct Il2CppObject;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Uri
struct Uri_t19570940;
// Newtonsoft.Json.JsonWriterException
struct JsonWriterException_t1246029574;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_WriteState1009238728.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Formatting4009318759.h"
#include "Newtonsoft_Json_Newtonsoft_Json_DateFormatHandling147563782.h"
#include "Newtonsoft_Json_Newtonsoft_Json_DateTimeZoneHandlin478160270.h"
#include "Newtonsoft_Json_Newtonsoft_Json_StringEscapeHandli3827428951.h"
#include "Newtonsoft_Json_Newtonsoft_Json_FloatFormatHandling898035958.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonContainerType1137362403.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader3154730733.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonToken620654565.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_DateTimeOffset1362988906.h"
#include "mscorlib_System_Guid2533601593.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Nullable_1_gen412748336.h"
#include "mscorlib_System_Nullable_1_gen3467111648.h"
#include "mscorlib_System_Nullable_1_gen1172263229.h"
#include "mscorlib_System_Nullable_1_gen339576247.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Nullable_1_gen2304312229.h"
#include "mscorlib_System_Nullable_1_gen3544916222.h"
#include "mscorlib_System_Nullable_1_gen1717547653.h"
#include "mscorlib_System_Nullable_1_gen1946170751.h"
#include "mscorlib_System_Nullable_1_gen3012451160.h"
#include "mscorlib_System_Nullable_1_gen3282734688.h"
#include "mscorlib_System_Nullable_1_gen3251239280.h"
#include "mscorlib_System_Nullable_1_gen3921022517.h"
#include "mscorlib_System_Nullable_1_gen796667908.h"
#include "mscorlib_System_Nullable_1_gen1693325264.h"
#include "System_System_Uri19570940.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1973729997.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_Primitiv2593001762.h"

// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::BuildStateArray()
extern "C"  StateU5BU5DU5BU5D_t2725846494* JsonWriter_BuildStateArray_m3798571653 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::.cctor()
extern "C"  void JsonWriter__cctor_m2111886257 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonWriter::get_CloseOutput()
extern "C"  bool JsonWriter_get_CloseOutput_m338732664 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_CloseOutput(System.Boolean)
extern "C"  void JsonWriter_set_CloseOutput_m3368415569 (JsonWriter_t1973729997 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonWriter::get_Top()
extern "C"  int32_t JsonWriter_get_Top_m1806879094 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.WriteState Newtonsoft.Json.JsonWriter::get_WriteState()
extern "C"  int32_t JsonWriter_get_WriteState_m1774527975 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonWriter::get_ContainerPath()
extern "C"  String_t* JsonWriter_get_ContainerPath_m3983251058 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonWriter::get_Path()
extern "C"  String_t* JsonWriter_get_Path_m3601844631 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::get_Formatting()
extern "C"  int32_t JsonWriter_get_Formatting_m3729462043 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_Formatting(Newtonsoft.Json.Formatting)
extern "C"  void JsonWriter_set_Formatting_m240278916 (JsonWriter_t1973729997 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::get_DateFormatHandling()
extern "C"  int32_t JsonWriter_get_DateFormatHandling_m3076769823 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_DateFormatHandling(Newtonsoft.Json.DateFormatHandling)
extern "C"  void JsonWriter_set_DateFormatHandling_m664672406 (JsonWriter_t1973729997 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::get_DateTimeZoneHandling()
extern "C"  int32_t JsonWriter_get_DateTimeZoneHandling_m3360729759 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_DateTimeZoneHandling(Newtonsoft.Json.DateTimeZoneHandling)
extern "C"  void JsonWriter_set_DateTimeZoneHandling_m1321147494 (JsonWriter_t1973729997 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::get_StringEscapeHandling()
extern "C"  int32_t JsonWriter_get_StringEscapeHandling_m3405429347 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_StringEscapeHandling(Newtonsoft.Json.StringEscapeHandling)
extern "C"  void JsonWriter_set_StringEscapeHandling_m366709436 (JsonWriter_t1973729997 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::OnStringEscapeHandlingChanged()
extern "C"  void JsonWriter_OnStringEscapeHandlingChanged_m3500632240 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::get_FloatFormatHandling()
extern "C"  int32_t JsonWriter_get_FloatFormatHandling_m1732898683 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_FloatFormatHandling(Newtonsoft.Json.FloatFormatHandling)
extern "C"  void JsonWriter_set_FloatFormatHandling_m2145389252 (JsonWriter_t1973729997 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonWriter::get_DateFormatString()
extern "C"  String_t* JsonWriter_get_DateFormatString_m1354506174 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_DateFormatString(System.String)
extern "C"  void JsonWriter_set_DateFormatString_m870313703 (JsonWriter_t1973729997 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::get_Culture()
extern "C"  CultureInfo_t3500843524 * JsonWriter_get_Culture_m41246410 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::set_Culture(System.Globalization.CultureInfo)
extern "C"  void JsonWriter_set_Culture_m273708689 (JsonWriter_t1973729997 * __this, CultureInfo_t3500843524 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::.ctor()
extern "C"  void JsonWriter__ctor_m999350942 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::UpdateScopeWithFinishedValue()
extern "C"  void JsonWriter_UpdateScopeWithFinishedValue_m201765266 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::Push(Newtonsoft.Json.JsonContainerType)
extern "C"  void JsonWriter_Push_m3814112192 (JsonWriter_t1973729997 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonWriter::Pop()
extern "C"  int32_t JsonWriter_Pop_m405198408 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonWriter::Peek()
extern "C"  int32_t JsonWriter_Peek_m2979110204 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::Close()
extern "C"  void JsonWriter_Close_m1782192458 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteStartObject()
extern "C"  void JsonWriter_WriteStartObject_m3890176730 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEndObject()
extern "C"  void JsonWriter_WriteEndObject_m3879128853 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteStartArray()
extern "C"  void JsonWriter_WriteStartArray_m3137074620 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEndArray()
extern "C"  void JsonWriter_WriteEndArray_m2487701725 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteStartConstructor(System.String)
extern "C"  void JsonWriter_WriteStartConstructor_m415419837 (JsonWriter_t1973729997 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEndConstructor()
extern "C"  void JsonWriter_WriteEndConstructor_m1945444978 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String)
extern "C"  void JsonWriter_WritePropertyName_m4093803625 (JsonWriter_t1973729997 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String,System.Boolean)
extern "C"  void JsonWriter_WritePropertyName_m2712388602 (JsonWriter_t1973729997 * __this, String_t* ___name0, bool ___escape1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEnd()
extern "C"  void JsonWriter_WriteEnd_m3839699704 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonReader)
extern "C"  void JsonWriter_WriteToken_m2753230420 (JsonWriter_t1973729997 * __this, JsonReader_t3154730733 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonReader,System.Boolean)
extern "C"  void JsonWriter_WriteToken_m1212288485 (JsonWriter_t1973729997 * __this, JsonReader_t3154730733 * ___reader0, bool ___writeChildren1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonToken,System.Object)
extern "C"  void JsonWriter_WriteToken_m2756605664 (JsonWriter_t1973729997 * __this, int32_t ___token0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonReader,System.Boolean,System.Boolean,System.Boolean)
extern "C"  void JsonWriter_WriteToken_m2051409013 (JsonWriter_t1973729997 * __this, JsonReader_t3154730733 * ___reader0, bool ___writeChildren1, bool ___writeDateConstructorAsDate2, bool ___writeComments3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteConstructorDate(Newtonsoft.Json.JsonReader)
extern "C"  void JsonWriter_WriteConstructorDate_m1739308001 (JsonWriter_t1973729997 * __this, JsonReader_t3154730733 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEnd(Newtonsoft.Json.JsonContainerType)
extern "C"  void JsonWriter_WriteEnd_m2611601840 (JsonWriter_t1973729997 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::AutoCompleteAll()
extern "C"  void JsonWriter_AutoCompleteAll_m3259542293 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonWriter::GetCloseTokenForType(Newtonsoft.Json.JsonContainerType)
extern "C"  int32_t JsonWriter_GetCloseTokenForType_m214772013 (JsonWriter_t1973729997 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::AutoCompleteClose(Newtonsoft.Json.JsonContainerType)
extern "C"  void JsonWriter_AutoCompleteClose_m3990337146 (JsonWriter_t1973729997 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteEnd(Newtonsoft.Json.JsonToken)
extern "C"  void JsonWriter_WriteEnd_m429341890 (JsonWriter_t1973729997 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteIndent()
extern "C"  void JsonWriter_WriteIndent_m1297222551 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValueDelimiter()
extern "C"  void JsonWriter_WriteValueDelimiter_m3984690371 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteIndentSpace()
extern "C"  void JsonWriter_WriteIndentSpace_m52891195 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::AutoComplete(Newtonsoft.Json.JsonToken)
extern "C"  void JsonWriter_AutoComplete_m730886874 (JsonWriter_t1973729997 * __this, int32_t ___tokenBeingWritten0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteNull()
extern "C"  void JsonWriter_WriteNull_m2509699344 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteUndefined()
extern "C"  void JsonWriter_WriteUndefined_m3842266213 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteRaw(System.String)
extern "C"  void JsonWriter_WriteRaw_m3420687717 (JsonWriter_t1973729997 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteRawValue(System.String)
extern "C"  void JsonWriter_WriteRawValue_m1754101708 (JsonWriter_t1973729997 * __this, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String)
extern "C"  void JsonWriter_WriteValue_m3720958754 (JsonWriter_t1973729997 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int32)
extern "C"  void JsonWriter_WriteValue_m2490267277 (JsonWriter_t1973729997 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt32)
extern "C"  void JsonWriter_WriteValue_m2673319666 (JsonWriter_t1973729997 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int64)
extern "C"  void JsonWriter_WriteValue_m3471498244 (JsonWriter_t1973729997 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt64)
extern "C"  void JsonWriter_WriteValue_m1866750575 (JsonWriter_t1973729997 * __this, uint64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single)
extern "C"  void JsonWriter_WriteValue_m3748711685 (JsonWriter_t1973729997 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Double)
extern "C"  void JsonWriter_WriteValue_m3768963738 (JsonWriter_t1973729997 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Boolean)
extern "C"  void JsonWriter_WriteValue_m3483469175 (JsonWriter_t1973729997 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int16)
extern "C"  void JsonWriter_WriteValue_m2772592283 (JsonWriter_t1973729997 * __this, int16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt16)
extern "C"  void JsonWriter_WriteValue_m703951132 (JsonWriter_t1973729997 * __this, uint16_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Char)
extern "C"  void JsonWriter_WriteValue_m2525964159 (JsonWriter_t1973729997 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Byte)
extern "C"  void JsonWriter_WriteValue_m1464181141 (JsonWriter_t1973729997 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.SByte)
extern "C"  void JsonWriter_WriteValue_m2054155316 (JsonWriter_t1973729997 * __this, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Decimal)
extern "C"  void JsonWriter_WriteValue_m2438987588 (JsonWriter_t1973729997 * __this, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.DateTime)
extern "C"  void JsonWriter_WriteValue_m580595662 (JsonWriter_t1973729997 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.DateTimeOffset)
extern "C"  void JsonWriter_WriteValue_m2387632135 (JsonWriter_t1973729997 * __this, DateTimeOffset_t1362988906  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Guid)
extern "C"  void JsonWriter_WriteValue_m785472038 (JsonWriter_t1973729997 * __this, Guid_t2533601593  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.TimeSpan)
extern "C"  void JsonWriter_WriteValue_m3890601166 (JsonWriter_t1973729997 * __this, TimeSpan_t3430258949  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Int32>)
extern "C"  void JsonWriter_WriteValue_m3118320166 (JsonWriter_t1973729997 * __this, Nullable_1_t334943763  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.UInt32>)
extern "C"  void JsonWriter_WriteValue_m3632568381 (JsonWriter_t1973729997 * __this, Nullable_1_t412748336  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Int64>)
extern "C"  void JsonWriter_WriteValue_m1048195215 (JsonWriter_t1973729997 * __this, Nullable_1_t3467111648  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.UInt64>)
extern "C"  void JsonWriter_WriteValue_m3914893290 (JsonWriter_t1973729997 * __this, Nullable_1_t1172263229  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Single>)
extern "C"  void JsonWriter_WriteValue_m130423928 (JsonWriter_t1973729997 * __this, Nullable_1_t339576247  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Double>)
extern "C"  void JsonWriter_WriteValue_m1437952191 (JsonWriter_t1973729997 * __this, Nullable_1_t2341081996  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Boolean>)
extern "C"  void JsonWriter_WriteValue_m1826015938 (JsonWriter_t1973729997 * __this, Nullable_1_t2088641033  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Int16>)
extern "C"  void JsonWriter_WriteValue_m1431276832 (JsonWriter_t1973729997 * __this, Nullable_1_t2304312229  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.UInt16>)
extern "C"  void JsonWriter_WriteValue_m4197218447 (JsonWriter_t1973729997 * __this, Nullable_1_t3544916222  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Char>)
extern "C"  void JsonWriter_WriteValue_m375412412 (JsonWriter_t1973729997 * __this, Nullable_1_t1717547653  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Byte>)
extern "C"  void JsonWriter_WriteValue_m1416802290 (JsonWriter_t1973729997 * __this, Nullable_1_t1946170751  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.SByte>)
extern "C"  void JsonWriter_WriteValue_m2759909295 (JsonWriter_t1973729997 * __this, Nullable_1_t3012451160  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Decimal>)
extern "C"  void JsonWriter_WriteValue_m4068836205 (JsonWriter_t1973729997 * __this, Nullable_1_t3282734688  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.DateTime>)
extern "C"  void JsonWriter_WriteValue_m289532299 (JsonWriter_t1973729997 * __this, Nullable_1_t3251239280  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.DateTimeOffset>)
extern "C"  void JsonWriter_WriteValue_m3770751746 (JsonWriter_t1973729997 * __this, Nullable_1_t3921022517  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Guid>)
extern "C"  void JsonWriter_WriteValue_m3166260145 (JsonWriter_t1973729997 * __this, Nullable_1_t796667908  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.TimeSpan>)
extern "C"  void JsonWriter_WriteValue_m795152379 (JsonWriter_t1973729997 * __this, Nullable_1_t1693325264  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Byte[])
extern "C"  void JsonWriter_WriteValue_m3876122455 (JsonWriter_t1973729997 * __this, ByteU5BU5D_t3397334013* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Uri)
extern "C"  void JsonWriter_WriteValue_m303025873 (JsonWriter_t1973729997 * __this, Uri_t19570940 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteComment(System.String)
extern "C"  void JsonWriter_WriteComment_m4068808106 (JsonWriter_t1973729997 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::System.IDisposable.Dispose()
extern "C"  void JsonWriter_System_IDisposable_Dispose_m10169869 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::Dispose(System.Boolean)
extern "C"  void JsonWriter_Dispose_m4015777898 (JsonWriter_t1973729997 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Utilities.PrimitiveTypeCode,System.Object)
extern "C"  void JsonWriter_WriteValue_m3893316713 (Il2CppObject * __this /* static, unused */, JsonWriter_t1973729997 * ___writer0, int32_t ___typeCode1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonWriterException Newtonsoft.Json.JsonWriter::CreateUnsupportedTypeException(Newtonsoft.Json.JsonWriter,System.Object)
extern "C"  JsonWriterException_t1246029574 * JsonWriter_CreateUnsupportedTypeException_m185183892 (Il2CppObject * __this /* static, unused */, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::InternalWriteEnd(Newtonsoft.Json.JsonContainerType)
extern "C"  void JsonWriter_InternalWriteEnd_m159492691 (JsonWriter_t1973729997 * __this, int32_t ___container0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::InternalWritePropertyName(System.String)
extern "C"  void JsonWriter_InternalWritePropertyName_m1658984526 (JsonWriter_t1973729997 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::InternalWriteRaw()
extern "C"  void JsonWriter_InternalWriteRaw_m3477804050 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::InternalWriteStart(Newtonsoft.Json.JsonToken,Newtonsoft.Json.JsonContainerType)
extern "C"  void JsonWriter_InternalWriteStart_m263710164 (JsonWriter_t1973729997 * __this, int32_t ___token0, int32_t ___container1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::InternalWriteValue(Newtonsoft.Json.JsonToken)
extern "C"  void JsonWriter_InternalWriteValue_m3190955063 (JsonWriter_t1973729997 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriter::InternalWriteComment()
extern "C"  void JsonWriter_InternalWriteComment_m2639238759 (JsonWriter_t1973729997 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
