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

// Newtonsoft.Json.Linq.JValue
struct JValue_t300956845;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t3128012475;
// System.IFormatProvider
struct IFormatProvider_t2849799027;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JTokenType1307827213.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JValue300956845.h"
#include "mscorlib_System_DateTime693205669.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Nullable_1_gen3865860824.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1973729997.h"
#include "mscorlib_System_TypeCode2536926201.h"
#include "mscorlib_System_Decimal724701077.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.Object,Newtonsoft.Json.Linq.JTokenType)
extern "C"  void JValue__ctor_m871902452 (JValue_t300956845 * __this, Il2CppObject * ___value0, int32_t ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(Newtonsoft.Json.Linq.JValue)
extern "C"  void JValue__ctor_m1950261654 (JValue_t300956845 * __this, JValue_t300956845 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.DateTime)
extern "C"  void JValue__ctor_m3265115446 (JValue_t300956845 * __this, DateTime_t693205669  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.String)
extern "C"  void JValue__ctor_m3588923362 (JValue_t300956845 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::.ctor(System.Object)
extern "C"  void JValue__ctor_m1850693832 (JValue_t300956845 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JValue::get_HasValues()
extern "C"  bool JValue_get_HasValues_m1093972563 (JValue_t300956845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::Compare(Newtonsoft.Json.Linq.JTokenType,System.Object,System.Object)
extern "C"  int32_t JValue_Compare_m2283347667 (Il2CppObject * __this /* static, unused */, int32_t ___valueType0, Il2CppObject * ___objA1, Il2CppObject * ___objB2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::CompareFloat(System.Object,System.Object)
extern "C"  int32_t JValue_CompareFloat_m2719587149 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___objA0, Il2CppObject * ___objB1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JValue::CloneToken()
extern "C"  JToken_t2552644013 * JValue_CloneToken_m3944058657 (JValue_t300956845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JValue Newtonsoft.Json.Linq.JValue::CreateComment(System.String)
extern "C"  JValue_t300956845 * JValue_CreateComment_m2458204942 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JValue Newtonsoft.Json.Linq.JValue::CreateNull()
extern "C"  JValue_t300956845 * JValue_CreateNull_m1518983624 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JValue Newtonsoft.Json.Linq.JValue::CreateUndefined()
extern "C"  JValue_t300956845 * JValue_CreateUndefined_m1002420567 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JValue::GetValueType(System.Nullable`1<Newtonsoft.Json.Linq.JTokenType>,System.Object)
extern "C"  int32_t JValue_GetValueType_m1632017801 (Il2CppObject * __this /* static, unused */, Nullable_1_t3865860824  ___current0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JValue::GetStringValueType(System.Nullable`1<Newtonsoft.Json.Linq.JTokenType>)
extern "C"  int32_t JValue_GetStringValueType_m4855918 (Il2CppObject * __this /* static, unused */, Nullable_1_t3865860824  ___current0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JValue::get_Type()
extern "C"  int32_t JValue_get_Type_m2039062136 (JValue_t300956845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Linq.JValue::get_Value()
extern "C"  Il2CppObject * JValue_get_Value_m615315111 (JValue_t300956845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JValue::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[])
extern "C"  void JValue_WriteTo_m3020398463 (JValue_t300956845 * __this, JsonWriter_t1973729997 * ___writer0, JsonConverterU5BU5D_t3128012475* ___converters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JValue::ValuesEquals(Newtonsoft.Json.Linq.JValue,Newtonsoft.Json.Linq.JValue)
extern "C"  bool JValue_ValuesEquals_m1474733587 (Il2CppObject * __this /* static, unused */, JValue_t300956845 * ___v10, JValue_t300956845 * ___v21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JValue::Equals(Newtonsoft.Json.Linq.JValue)
extern "C"  bool JValue_Equals_m657470097 (JValue_t300956845 * __this, JValue_t300956845 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JValue::Equals(System.Object)
extern "C"  bool JValue_Equals_m3109869837 (JValue_t300956845 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::GetHashCode()
extern "C"  int32_t JValue_GetHashCode_m3513623223 (JValue_t300956845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JValue::ToString()
extern "C"  String_t* JValue_ToString_m3743896471 (JValue_t300956845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JValue::ToString(System.IFormatProvider)
extern "C"  String_t* JValue_ToString_m3147477995 (JValue_t300956845 * __this, Il2CppObject * ___formatProvider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JValue::ToString(System.String,System.IFormatProvider)
extern "C"  String_t* JValue_ToString_m3920546701 (JValue_t300956845 * __this, String_t* ___format0, Il2CppObject * ___formatProvider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::System.IComparable.CompareTo(System.Object)
extern "C"  int32_t JValue_System_IComparable_CompareTo_m1733772854 (JValue_t300956845 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::CompareTo(Newtonsoft.Json.Linq.JValue)
extern "C"  int32_t JValue_CompareTo_m3269340340 (JValue_t300956845 * __this, JValue_t300956845 * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode Newtonsoft.Json.Linq.JValue::System.IConvertible.GetTypeCode()
extern "C"  int32_t JValue_System_IConvertible_GetTypeCode_m2068617607 (JValue_t300956845 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JValue::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C"  bool JValue_System_IConvertible_ToBoolean_m3207738276 (JValue_t300956845 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.Linq.JValue::System.IConvertible.ToChar(System.IFormatProvider)
extern "C"  Il2CppChar JValue_System_IConvertible_ToChar_m2947627652 (JValue_t300956845 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte Newtonsoft.Json.Linq.JValue::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C"  int8_t JValue_System_IConvertible_ToSByte_m2562674558 (JValue_t300956845 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Newtonsoft.Json.Linq.JValue::System.IConvertible.ToByte(System.IFormatProvider)
extern "C"  uint8_t JValue_System_IConvertible_ToByte_m2627632388 (JValue_t300956845 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 Newtonsoft.Json.Linq.JValue::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C"  int16_t JValue_System_IConvertible_ToInt16_m1063542116 (JValue_t300956845 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 Newtonsoft.Json.Linq.JValue::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C"  uint16_t JValue_System_IConvertible_ToUInt16_m2584825444 (JValue_t300956845 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JValue::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C"  int32_t JValue_System_IConvertible_ToInt32_m1675032780 (JValue_t300956845 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Newtonsoft.Json.Linq.JValue::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C"  uint32_t JValue_System_IConvertible_ToUInt32_m370187940 (JValue_t300956845 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 Newtonsoft.Json.Linq.JValue::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C"  int64_t JValue_System_IConvertible_ToInt64_m4216513678 (JValue_t300956845 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 Newtonsoft.Json.Linq.JValue::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C"  uint64_t JValue_System_IConvertible_ToUInt64_m1809931204 (JValue_t300956845 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Newtonsoft.Json.Linq.JValue::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C"  float JValue_System_IConvertible_ToSingle_m3731033476 (JValue_t300956845 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Newtonsoft.Json.Linq.JValue::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C"  double JValue_System_IConvertible_ToDouble_m779787684 (JValue_t300956845 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal Newtonsoft.Json.Linq.JValue::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C"  Decimal_t724701077  JValue_System_IConvertible_ToDecimal_m3442773078 (JValue_t300956845 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Newtonsoft.Json.Linq.JValue::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C"  DateTime_t693205669  JValue_System_IConvertible_ToDateTime_m2209036036 (JValue_t300956845 * __this, Il2CppObject * ___provider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Linq.JValue::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C"  Il2CppObject * JValue_System_IConvertible_ToType_m1775797658 (JValue_t300956845 * __this, Type_t * ___conversionType0, Il2CppObject * ___provider1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
