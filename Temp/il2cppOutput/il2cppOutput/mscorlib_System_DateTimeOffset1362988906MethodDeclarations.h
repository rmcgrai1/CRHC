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

// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IFormatProvider
struct IFormatProvider_t2849799027;
// System.String[]
struct StringU5BU5D_t1642385972;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t2187473504;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTimeOffset1362988906.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Globalization_DateTimeStyles370343085.h"
#include "mscorlib_System_Globalization_DateTimeFormatInfo2187473504.h"
#include "mscorlib_System_DayOfWeek721777893.h"

// System.Void System.DateTimeOffset::.ctor(System.DateTime)
extern "C"  void DateTimeOffset__ctor_m428942261 (DateTimeOffset_t1362988906 * __this, DateTime_t693205669  ___dateTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.DateTime,System.TimeSpan)
extern "C"  void DateTimeOffset__ctor_m2870721395 (DateTimeOffset_t1362988906 * __this, DateTime_t693205669  ___dateTime0, TimeSpan_t3430258949  ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Int64,System.TimeSpan)
extern "C"  void DateTimeOffset__ctor_m2110004919 (DateTimeOffset_t1362988906 * __this, int64_t ___ticks0, TimeSpan_t3430258949  ___offset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.TimeSpan)
extern "C"  void DateTimeOffset__ctor_m3367021128 (DateTimeOffset_t1362988906 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___millisecond6, TimeSpan_t3430258949  ___offset7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DateTimeOffset__ctor_m1796624924 (DateTimeOffset_t1362988906 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::.cctor()
extern "C"  void DateTimeOffset__cctor_m2475500670 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::System.IComparable.CompareTo(System.Object)
extern "C"  int32_t DateTimeOffset_System_IComparable_CompareTo_m1775227279 (DateTimeOffset_t1362988906 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void DateTimeOffset_System_Runtime_Serialization_ISerializable_GetObjectData_m1430367682 (DateTimeOffset_t1362988906 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DateTimeOffset::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C"  void DateTimeOffset_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m1059347059 (DateTimeOffset_t1362988906 * __this, Il2CppObject * ___sender0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset System.DateTimeOffset::AddSeconds(System.Double)
extern "C"  DateTimeOffset_t1362988906  DateTimeOffset_AddSeconds_m2380500939 (DateTimeOffset_t1362988906 * __this, double ___seconds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::CompareTo(System.DateTimeOffset)
extern "C"  int32_t DateTimeOffset_CompareTo_m441053436 (DateTimeOffset_t1362988906 * __this, DateTimeOffset_t1362988906  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.DateTimeOffset)
extern "C"  bool DateTimeOffset_Equals_m3728302791 (DateTimeOffset_t1362988906 * __this, DateTimeOffset_t1362988906  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::Equals(System.Object)
extern "C"  bool DateTimeOffset_Equals_m3467127074 (DateTimeOffset_t1362988906 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::GetHashCode()
extern "C"  int32_t DateTimeOffset_GetHashCode_m3312197462 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset System.DateTimeOffset::Parse(System.String,System.IFormatProvider)
extern "C"  DateTimeOffset_t1362988906  DateTimeOffset_Parse_m181945946 (Il2CppObject * __this /* static, unused */, String_t* ___input0, Il2CppObject * ___formatProvider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset System.DateTimeOffset::Parse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C"  DateTimeOffset_t1362988906  DateTimeOffset_Parse_m3918146509 (Il2CppObject * __this /* static, unused */, String_t* ___input0, Il2CppObject * ___formatProvider1, int32_t ___styles2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset System.DateTimeOffset::ParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C"  DateTimeOffset_t1362988906  DateTimeOffset_ParseExact_m559434870 (Il2CppObject * __this /* static, unused */, String_t* ___input0, String_t* ___format1, Il2CppObject * ___formatProvider2, int32_t ___styles3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset System.DateTimeOffset::ParseExact(System.String,System.String[],System.IFormatProvider,System.Globalization.DateTimeStyles)
extern "C"  DateTimeOffset_t1362988906  DateTimeOffset_ParseExact_m3841940202 (Il2CppObject * __this /* static, unused */, String_t* ___input0, StringU5BU5D_t1642385972* ___formats1, Il2CppObject * ___formatProvider2, int32_t ___styles3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::ParseExact(System.String,System.String[],System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles,System.DateTimeOffset&)
extern "C"  bool DateTimeOffset_ParseExact_m413770283 (Il2CppObject * __this /* static, unused */, String_t* ___input0, StringU5BU5D_t1642385972* ___formats1, DateTimeFormatInfo_t2187473504 * ___dfi2, int32_t ___styles3, DateTimeOffset_t1362988906 * ___ret4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::DoParse(System.String,System.String,System.Boolean,System.DateTimeOffset&,System.Globalization.DateTimeFormatInfo,System.Globalization.DateTimeStyles)
extern "C"  bool DateTimeOffset_DoParse_m678502990 (Il2CppObject * __this /* static, unused */, String_t* ___input0, String_t* ___format1, bool ___exact2, DateTimeOffset_t1362988906 * ___result3, DateTimeFormatInfo_t2187473504 * ___dfi4, int32_t ___styles5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::ParseNumber(System.String,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32&)
extern "C"  int32_t DateTimeOffset_ParseNumber_m455044132 (Il2CppObject * __this /* static, unused */, String_t* ___input0, int32_t ___pos1, int32_t ___digits2, bool ___leading_zero3, bool ___allow_leading_white4, int32_t* ___result5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::ParseNumber(System.String,System.Int32,System.Int32,System.Boolean,System.Boolean,System.Int32&,System.Int32&)
extern "C"  int32_t DateTimeOffset_ParseNumber_m3792722485 (Il2CppObject * __this /* static, unused */, String_t* ___input0, int32_t ___pos1, int32_t ___digits2, bool ___leading_zero3, bool ___allow_leading_white4, int32_t* ___result5, int32_t* ___digit_parsed6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::ParseEnum(System.String,System.Int32,System.String[],System.Boolean,System.Int32&)
extern "C"  int32_t DateTimeOffset_ParseEnum_m3760383942 (Il2CppObject * __this /* static, unused */, String_t* ___input0, int32_t ___pos1, StringU5BU5D_t1642385972* ___enums2, bool ___allow_leading_white3, int32_t* ___result4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::ParseChar(System.String,System.Int32,System.Char,System.Boolean,System.Int32&)
extern "C"  int32_t DateTimeOffset_ParseChar_m104526900 (Il2CppObject * __this /* static, unused */, String_t* ___input0, int32_t ___pos1, Il2CppChar ___c2, bool ___allow_leading_white3, int32_t* ___result4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTimeOffset::ToFileTime()
extern "C"  int64_t DateTimeOffset_ToFileTime_m544615750 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset System.DateTimeOffset::ToLocalTime()
extern "C"  DateTimeOffset_t1362988906  DateTimeOffset_ToLocalTime_m3270261134 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString()
extern "C"  String_t* DateTimeOffset_ToString_m2511385248 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* DateTimeOffset_ToString_m2121173678 (DateTimeOffset_t1362988906 * __this, String_t* ___format0, Il2CppObject * ___formatProvider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset System.DateTimeOffset::ToUniversalTime()
extern "C"  DateTimeOffset_t1362988906  DateTimeOffset_ToUniversalTime_m3836057040 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::TryParse(System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTimeOffset&)
extern "C"  bool DateTimeOffset_TryParse_m2651348239 (Il2CppObject * __this /* static, unused */, String_t* ___input0, Il2CppObject * ___formatProvider1, int32_t ___styles2, DateTimeOffset_t1362988906 * ___result3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.DateTimeOffset::TryParseExact(System.String,System.String,System.IFormatProvider,System.Globalization.DateTimeStyles,System.DateTimeOffset&)
extern "C"  bool DateTimeOffset_TryParseExact_m1231270494 (Il2CppObject * __this /* static, unused */, String_t* ___input0, String_t* ___format1, Il2CppObject * ___formatProvider2, int32_t ___styles3, DateTimeOffset_t1362988906 * ___result4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_Date()
extern "C"  DateTime_t693205669  DateTimeOffset_get_Date_m1004135183 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_DateTime()
extern "C"  DateTime_t693205669  DateTimeOffset_get_DateTime_m229084964 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::get_Day()
extern "C"  int32_t DateTimeOffset_get_Day_m2705467006 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DayOfWeek System.DateTimeOffset::get_DayOfWeek()
extern "C"  int32_t DateTimeOffset_get_DayOfWeek_m3437966598 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::get_DayOfYear()
extern "C"  int32_t DateTimeOffset_get_DayOfYear_m3789437054 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::get_Hour()
extern "C"  int32_t DateTimeOffset_get_Hour_m2138165284 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_LocalDateTime()
extern "C"  DateTime_t693205669  DateTimeOffset_get_LocalDateTime_m4121736447 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::get_Millisecond()
extern "C"  int32_t DateTimeOffset_get_Millisecond_m4022643301 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::get_Minute()
extern "C"  int32_t DateTimeOffset_get_Minute_m3848153202 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::get_Month()
extern "C"  int32_t DateTimeOffset_get_Month_m477218518 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTimeOffset::get_Offset()
extern "C"  TimeSpan_t3430258949  DateTimeOffset_get_Offset_m2335492074 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::get_Second()
extern "C"  int32_t DateTimeOffset_get_Second_m452363206 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTimeOffset::get_Ticks()
extern "C"  int64_t DateTimeOffset_get_Ticks_m2629881933 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.DateTimeOffset::get_TimeOfDay()
extern "C"  TimeSpan_t3430258949  DateTimeOffset_get_TimeOfDay_m1694491531 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.DateTimeOffset::get_UtcDateTime()
extern "C"  DateTime_t693205669  DateTimeOffset_get_UtcDateTime_m3162550774 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.DateTimeOffset::get_UtcTicks()
extern "C"  int64_t DateTimeOffset_get_UtcTicks_m356216043 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.DateTimeOffset::get_Year()
extern "C"  int32_t DateTimeOffset_get_Year_m2326952039 (DateTimeOffset_t1362988906 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset System.DateTimeOffset::op_Implicit(System.DateTime)
extern "C"  DateTimeOffset_t1362988906  DateTimeOffset_op_Implicit_m3072392326 (Il2CppObject * __this /* static, unused */, DateTime_t693205669  ___dateTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
