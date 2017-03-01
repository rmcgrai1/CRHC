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

// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t2043888884;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader_State2444238258.h"
#include "Newtonsoft_Json_Newtonsoft_Json_DateTimeZoneHandlin478160270.h"
#include "Newtonsoft_Json_Newtonsoft_Json_DateParseHandling822016916.h"
#include "Newtonsoft_Json_Newtonsoft_Json_FloatParseHandling1928971464.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonToken620654565.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonPosition687338249.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonContainerType1137362403.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Nullable_1_gen3282734688.h"
#include "mscorlib_System_Nullable_1_gen3251239280.h"
#include "mscorlib_System_Nullable_1_gen3921022517.h"
#include "mscorlib_System_Object2689449295.h"

// Newtonsoft.Json.JsonReader/State Newtonsoft.Json.JsonReader::get_CurrentState()
extern "C"  int32_t JsonReader_get_CurrentState_m1521403784 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonReader::get_CloseInput()
extern "C"  bool JsonReader_get_CloseInput_m1380167033 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_CloseInput(System.Boolean)
extern "C"  void JsonReader_set_CloseInput_m791940648 (JsonReader_t3154730733 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonReader::get_SupportMultipleContent()
extern "C"  bool JsonReader_get_SupportMultipleContent_m40615527 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_SupportMultipleContent(System.Boolean)
extern "C"  void JsonReader_set_SupportMultipleContent_m737630716 (JsonReader_t3154730733 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::get_DateTimeZoneHandling()
extern "C"  int32_t JsonReader_get_DateTimeZoneHandling_m4153484841 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_DateTimeZoneHandling(Newtonsoft.Json.DateTimeZoneHandling)
extern "C"  void JsonReader_set_DateTimeZoneHandling_m1795876186 (JsonReader_t3154730733 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::get_DateParseHandling()
extern "C"  int32_t JsonReader_get_DateParseHandling_m279432393 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_DateParseHandling(Newtonsoft.Json.DateParseHandling)
extern "C"  void JsonReader_set_DateParseHandling_m2963380128 (JsonReader_t3154730733 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::get_FloatParseHandling()
extern "C"  int32_t JsonReader_get_FloatParseHandling_m553999173 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_FloatParseHandling(Newtonsoft.Json.FloatParseHandling)
extern "C"  void JsonReader_set_FloatParseHandling_m207227282 (JsonReader_t3154730733 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonReader::get_DateFormatString()
extern "C"  String_t* JsonReader_get_DateFormatString_m2937160626 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_DateFormatString(System.String)
extern "C"  void JsonReader_set_DateFormatString_m325367293 (JsonReader_t3154730733 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::get_MaxDepth()
extern "C"  Nullable_1_t334943763  JsonReader_get_MaxDepth_m1834273799 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_MaxDepth(System.Nullable`1<System.Int32>)
extern "C"  void JsonReader_set_MaxDepth_m3375470696 (JsonReader_t3154730733 * __this, Nullable_1_t334943763  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType()
extern "C"  int32_t JsonReader_get_TokenType_m867648053 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonReader::get_Value()
extern "C"  Il2CppObject * JsonReader_get_Value_m1221852739 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.JsonReader::get_ValueType()
extern "C"  Type_t * JsonReader_get_ValueType_m3078789598 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonReader::get_Depth()
extern "C"  int32_t JsonReader_get_Depth_m4111050752 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonReader::get_Path()
extern "C"  String_t* JsonReader_get_Path_m3497467421 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::get_Culture()
extern "C"  CultureInfo_t3500843524 * JsonReader_get_Culture_m1547643406 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::set_Culture(System.Globalization.CultureInfo)
extern "C"  void JsonReader_set_Culture_m661642019 (JsonReader_t3154730733 * __this, CultureInfo_t3500843524 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::GetPosition(System.Int32)
extern "C"  JsonPosition_t687338249  JsonReader_GetPosition_m172512423 (JsonReader_t3154730733 * __this, int32_t ___depth0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::.ctor()
extern "C"  void JsonReader__ctor_m3842911810 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::Push(Newtonsoft.Json.JsonContainerType)
extern "C"  void JsonReader_Push_m1314579812 (JsonReader_t3154730733 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonReader::Pop()
extern "C"  int32_t JsonReader_Pop_m1481685704 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonReader::Peek()
extern "C"  int32_t JsonReader_Peek_m35407060 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::ReadAsInt32()
extern "C"  Nullable_1_t334943763  JsonReader_ReadAsInt32_m4180904761 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::ReadInt32String(System.String)
extern "C"  Nullable_1_t334943763  JsonReader_ReadInt32String_m946947278 (JsonReader_t3154730733 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonReader::ReadAsString()
extern "C"  String_t* JsonReader_ReadAsString_m1009387996 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.JsonReader::ReadAsBytes()
extern "C"  ByteU5BU5D_t3397334013* JsonReader_ReadAsBytes_m759364893 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.JsonReader::ReadArrayIntoByteArray()
extern "C"  ByteU5BU5D_t3397334013* JsonReader_ReadArrayIntoByteArray_m2781794746 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double> Newtonsoft.Json.JsonReader::ReadAsDouble()
extern "C"  Nullable_1_t2341081996  JsonReader_ReadAsDouble_m2718667461 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double> Newtonsoft.Json.JsonReader::ReadDoubleString(System.String)
extern "C"  Nullable_1_t2341081996  JsonReader_ReadDoubleString_m2908053918 (JsonReader_t3154730733 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonReader::ReadAsBoolean()
extern "C"  Nullable_1_t2088641033  JsonReader_ReadAsBoolean_m1374728469 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonReader::ReadBooleanString(System.String)
extern "C"  Nullable_1_t2088641033  JsonReader_ReadBooleanString_m2840380274 (JsonReader_t3154730733 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Decimal> Newtonsoft.Json.JsonReader::ReadAsDecimal()
extern "C"  Nullable_1_t3282734688  JsonReader_ReadAsDecimal_m2452362533 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Decimal> Newtonsoft.Json.JsonReader::ReadDecimalString(System.String)
extern "C"  Nullable_1_t3282734688  JsonReader_ReadDecimalString_m4263915112 (JsonReader_t3154730733 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Newtonsoft.Json.JsonReader::ReadAsDateTime()
extern "C"  Nullable_1_t3251239280  JsonReader_ReadAsDateTime_m936941925 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Newtonsoft.Json.JsonReader::ReadDateTimeString(System.String)
extern "C"  Nullable_1_t3251239280  JsonReader_ReadDateTimeString_m4240319230 (JsonReader_t3154730733 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTimeOffset> Newtonsoft.Json.JsonReader::ReadAsDateTimeOffset()
extern "C"  Nullable_1_t3921022517  JsonReader_ReadAsDateTimeOffset_m553762661 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTimeOffset> Newtonsoft.Json.JsonReader::ReadDateTimeOffsetString(System.String)
extern "C"  Nullable_1_t3921022517  JsonReader_ReadDateTimeOffsetString_m2878243038 (JsonReader_t3154730733 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::ReaderReadAndAssert()
extern "C"  void JsonReader_ReaderReadAndAssert_m4043570844 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonReaderException Newtonsoft.Json.JsonReader::CreateUnexpectedEndException()
extern "C"  JsonReaderException_t2043888884 * JsonReader_CreateUnexpectedEndException_m262910155 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::ReadIntoWrappedTypeObject()
extern "C"  void JsonReader_ReadIntoWrappedTypeObject_m3957436926 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::Skip()
extern "C"  void JsonReader_Skip_m2062500449 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::SetToken(Newtonsoft.Json.JsonToken)
extern "C"  void JsonReader_SetToken_m3808332337 (JsonReader_t3154730733 * __this, int32_t ___newToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::SetToken(Newtonsoft.Json.JsonToken,System.Object)
extern "C"  void JsonReader_SetToken_m1943322147 (JsonReader_t3154730733 * __this, int32_t ___newToken0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::SetToken(Newtonsoft.Json.JsonToken,System.Object,System.Boolean)
extern "C"  void JsonReader_SetToken_m353365698 (JsonReader_t3154730733 * __this, int32_t ___newToken0, Il2CppObject * ___value1, bool ___updateIndex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::SetPostValueState(System.Boolean)
extern "C"  void JsonReader_SetPostValueState_m3662228173 (JsonReader_t3154730733 * __this, bool ___updateIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::UpdateScopeWithFinishedValue()
extern "C"  void JsonReader_UpdateScopeWithFinishedValue_m3735519774 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::ValidateEnd(Newtonsoft.Json.JsonToken)
extern "C"  void JsonReader_ValidateEnd_m412806537 (JsonReader_t3154730733 * __this, int32_t ___endToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::SetStateBasedOnCurrent()
extern "C"  void JsonReader_SetStateBasedOnCurrent_m2097997402 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::SetFinished()
extern "C"  void JsonReader_SetFinished_m3302502732 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonReader::GetTypeForCloseToken(Newtonsoft.Json.JsonToken)
extern "C"  int32_t JsonReader_GetTypeForCloseToken_m1025264627 (JsonReader_t3154730733 * __this, int32_t ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::System.IDisposable.Dispose()
extern "C"  void JsonReader_System_IDisposable_Dispose_m3193978423 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::Dispose(System.Boolean)
extern "C"  void JsonReader_Dispose_m3587675286 (JsonReader_t3154730733 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::Close()
extern "C"  void JsonReader_Close_m3579207862 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReader::ReadAndAssert()
extern "C"  void JsonReader_ReadAndAssert_m401753499 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonReader::ReadAndMoveToContent()
extern "C"  bool JsonReader_ReadAndMoveToContent_m861156258 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonReader::MoveToContent()
extern "C"  bool JsonReader_MoveToContent_m2805584643 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::GetContentToken()
extern "C"  int32_t JsonReader_GetContentToken_m3776370371 (JsonReader_t3154730733 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
