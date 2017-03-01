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

// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "mscorlib_System_DateTime693205669.h"
#include "Newtonsoft_Json_Newtonsoft_Json_DateTimeZoneHandlin478160270.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_StringRe1873850304.h"
#include "mscorlib_System_DateTimeOffset1362988906.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_DateTime1235213504.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "mscorlib_System_DateTimeKind2186819611.h"
#include "mscorlib_System_IO_TextWriter4027217640.h"
#include "Newtonsoft_Json_Newtonsoft_Json_DateFormatHandling147563782.h"
#include "mscorlib_System_Nullable_1_gen1693325264.h"

// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::.cctor()
extern "C"  void DateTimeUtils__cctor_m1038572280 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Newtonsoft.Json.Utilities.DateTimeUtils::GetUtcOffset(System.DateTime)
extern "C"  TimeSpan_t3430258949  DateTimeUtils_GetUtcOffset_m1751279733 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::EnsureDateTime(System.DateTime,Newtonsoft.Json.DateTimeZoneHandling)
extern "C"  DateTime_t693205669  DateTimeUtils_EnsureDateTime_m1741856844 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___value0, int32_t ___timeZone1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::SwitchToLocalTime(System.DateTime)
extern "C"  DateTime_t693205669  DateTimeUtils_SwitchToLocalTime_m3566274725 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::SwitchToUtcTime(System.DateTime)
extern "C"  DateTime_t693205669  DateTimeUtils_SwitchToUtcTime_m1060208122 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ToUniversalTicks(System.DateTime)
extern "C"  int64_t DateTimeUtils_ToUniversalTicks_m767905220 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ToUniversalTicks(System.DateTime,System.TimeSpan)
extern "C"  int64_t DateTimeUtils_ToUniversalTicks_m651850560 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, TimeSpan_t3430258949  ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.TimeSpan)
extern "C"  int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m2461323250 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, TimeSpan_t3430258949  ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::ConvertDateTimeToJavaScriptTicks(System.DateTime,System.Boolean)
extern "C"  int64_t DateTimeUtils_ConvertDateTimeToJavaScriptTicks_m2741966059 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, bool ___convertToUtc1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Utilities.DateTimeUtils::UniversialTicksToJavaScriptTicks(System.Int64)
extern "C"  int64_t DateTimeUtils_UniversialTicksToJavaScriptTicks_m1203972718 (Il2CppObject * __this /* static, unused */, int64_t ___universialTicks0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::ConvertJavaScriptTicksToDateTime(System.Int64)
extern "C"  DateTime_t693205669  DateTimeUtils_ConvertJavaScriptTicksToDateTime_m1592762056 (Il2CppObject * __this /* static, unused */, int64_t ___javaScriptTicks0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeIso(Newtonsoft.Json.Utilities.StringReference,Newtonsoft.Json.DateTimeZoneHandling,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTimeIso_m2173901879 (Il2CppObject * __this /* static, unused */, StringReference_t1873850304  ___text0, int32_t ___dateTimeZoneHandling1, DateTime_t693205669 * ___dt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffsetIso(Newtonsoft.Json.Utilities.StringReference,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffsetIso_m4276702460 (Il2CppObject * __this /* static, unused */, StringReference_t1873850304  ___text0, DateTimeOffset_t1362988906 * ___dt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Utilities.DateTimeUtils::CreateDateTime(Newtonsoft.Json.Utilities.DateTimeParser)
extern "C"  DateTime_t693205669  DateTimeUtils_CreateDateTime_m618640832 (Il2CppObject * __this /* static, unused */, DateTimeParser_t1235213504  ___dateTimeParser0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTime(Newtonsoft.Json.Utilities.StringReference,Newtonsoft.Json.DateTimeZoneHandling,System.String,System.Globalization.CultureInfo,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTime_m3365159398 (Il2CppObject * __this /* static, unused */, StringReference_t1873850304  ___s0, int32_t ___dateTimeZoneHandling1, String_t* ___dateFormatString2, CultureInfo_t3500843524 * ___culture3, DateTime_t693205669 * ___dt4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTime(System.String,Newtonsoft.Json.DateTimeZoneHandling,System.String,System.Globalization.CultureInfo,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTime_m4134498809 (Il2CppObject * __this /* static, unused */, String_t* ___s0, int32_t ___dateTimeZoneHandling1, String_t* ___dateFormatString2, CultureInfo_t3500843524 * ___culture3, DateTime_t693205669 * ___dt4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffset(Newtonsoft.Json.Utilities.StringReference,System.String,System.Globalization.CultureInfo,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffset_m1459894121 (Il2CppObject * __this /* static, unused */, StringReference_t1873850304  ___s0, String_t* ___dateFormatString1, CultureInfo_t3500843524 * ___culture2, DateTimeOffset_t1362988906 * ___dt3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffset(System.String,System.String,System.Globalization.CultureInfo,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffset_m3282624704 (Il2CppObject * __this /* static, unused */, String_t* ___s0, String_t* ___dateFormatString1, CultureInfo_t3500843524 * ___culture2, DateTimeOffset_t1362988906 * ___dt3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseMicrosoftDate(Newtonsoft.Json.Utilities.StringReference,System.Int64&,System.TimeSpan&,System.DateTimeKind&)
extern "C"  bool DateTimeUtils_TryParseMicrosoftDate_m4065592264 (Il2CppObject * __this /* static, unused */, StringReference_t1873850304  ___text0, int64_t* ___ticks1, TimeSpan_t3430258949 * ___offset2, int32_t* ___kind3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeMicrosoft(Newtonsoft.Json.Utilities.StringReference,Newtonsoft.Json.DateTimeZoneHandling,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTimeMicrosoft_m3235248780 (Il2CppObject * __this /* static, unused */, StringReference_t1873850304  ___text0, int32_t ___dateTimeZoneHandling1, DateTime_t693205669 * ___dt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeExact(System.String,Newtonsoft.Json.DateTimeZoneHandling,System.String,System.Globalization.CultureInfo,System.DateTime&)
extern "C"  bool DateTimeUtils_TryParseDateTimeExact_m756786128 (Il2CppObject * __this /* static, unused */, String_t* ___text0, int32_t ___dateTimeZoneHandling1, String_t* ___dateFormatString2, CultureInfo_t3500843524 * ___culture3, DateTime_t693205669 * ___dt4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffsetMicrosoft(Newtonsoft.Json.Utilities.StringReference,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffsetMicrosoft_m660041233 (Il2CppObject * __this /* static, unused */, StringReference_t1873850304  ___text0, DateTimeOffset_t1362988906 * ___dt1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryParseDateTimeOffsetExact(System.String,System.String,System.Globalization.CultureInfo,System.DateTimeOffset&)
extern "C"  bool DateTimeUtils_TryParseDateTimeOffsetExact_m2570960041 (Il2CppObject * __this /* static, unused */, String_t* ___text0, String_t* ___dateFormatString1, CultureInfo_t3500843524 * ___culture2, DateTimeOffset_t1362988906 * ___dt3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeUtils::TryReadOffset(Newtonsoft.Json.Utilities.StringReference,System.Int32,System.TimeSpan&)
extern "C"  bool DateTimeUtils_TryReadOffset_m1024077575 (Il2CppObject * __this /* static, unused */, StringReference_t1873850304  ___offsetText0, int32_t ___startIndex1, TimeSpan_t3430258949 * ___offset2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::WriteDateTimeString(System.IO.TextWriter,System.DateTime,Newtonsoft.Json.DateFormatHandling,System.String,System.Globalization.CultureInfo)
extern "C"  void DateTimeUtils_WriteDateTimeString_m1435395168 (Il2CppObject * __this /* static, unused */, TextWriter_t4027217640 * ___writer0, DateTime_t693205669  ___value1, int32_t ___format2, String_t* ___formatString3, CultureInfo_t3500843524 * ___culture4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.DateTimeUtils::WriteDateTimeString(System.Char[],System.Int32,System.DateTime,System.Nullable`1<System.TimeSpan>,System.DateTimeKind,Newtonsoft.Json.DateFormatHandling)
extern "C"  int32_t DateTimeUtils_WriteDateTimeString_m3706347442 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___chars0, int32_t ___start1, DateTime_t693205669  ___value2, Nullable_1_t1693325264  ___offset3, int32_t ___kind4, int32_t ___format5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.DateTimeUtils::WriteDefaultIsoDate(System.Char[],System.Int32,System.DateTime)
extern "C"  int32_t DateTimeUtils_WriteDefaultIsoDate_m2512864408 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___chars0, int32_t ___start1, DateTime_t693205669  ___dt2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::CopyIntToCharArray(System.Char[],System.Int32,System.Int32,System.Int32)
extern "C"  void DateTimeUtils_CopyIntToCharArray_m161915955 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___chars0, int32_t ___start1, int32_t ___value2, int32_t ___digits3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.DateTimeUtils::WriteDateTimeOffset(System.Char[],System.Int32,System.TimeSpan,Newtonsoft.Json.DateFormatHandling)
extern "C"  int32_t DateTimeUtils_WriteDateTimeOffset_m1618693877 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___chars0, int32_t ___start1, TimeSpan_t3430258949  ___offset2, int32_t ___format3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::WriteDateTimeOffsetString(System.IO.TextWriter,System.DateTimeOffset,Newtonsoft.Json.DateFormatHandling,System.String,System.Globalization.CultureInfo)
extern "C"  void DateTimeUtils_WriteDateTimeOffsetString_m2854976226 (Il2CppObject * __this /* static, unused */, TextWriter_t4027217640 * ___writer0, DateTimeOffset_t1362988906  ___value1, int32_t ___format2, String_t* ___formatString3, CultureInfo_t3500843524 * ___culture4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.DateTimeUtils::GetDateValues(System.DateTime,System.Int32&,System.Int32&,System.Int32&)
extern "C"  void DateTimeUtils_GetDateValues_m2622263554 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___td0, int32_t* ___year1, int32_t* ___month2, int32_t* ___day3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
