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

// System.Func`1<Newtonsoft.Json.JsonSerializerSettings>
struct Func_1_t2796780849;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t842388167;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t1719617802;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_FloatFormatHandling898035958.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Decimal724701077.h"
#include "Newtonsoft_Json_Newtonsoft_Json_StringEscapeHandli3827428951.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonSerializerSetti842388167.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonSerializer1719617802.h"

// System.Func`1<Newtonsoft.Json.JsonSerializerSettings> Newtonsoft.Json.JsonConvert::get_DefaultSettings()
extern "C"  Func_1_t2796780849 * JsonConvert_get_DefaultSettings_m798694592 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Boolean)
extern "C"  String_t* JsonConvert_ToString_m3456573802 (Il2CppObject * __this /* static, unused */, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Char)
extern "C"  String_t* JsonConvert_ToString_m157647420 (Il2CppObject * __this /* static, unused */, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Single,Newtonsoft.Json.FloatFormatHandling,System.Char,System.Boolean)
extern "C"  String_t* JsonConvert_ToString_m1225970247 (Il2CppObject * __this /* static, unused */, float ___value0, int32_t ___floatFormatHandling1, Il2CppChar ___quoteChar2, bool ___nullable3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::EnsureFloatFormat(System.Double,System.String,Newtonsoft.Json.FloatFormatHandling,System.Char,System.Boolean)
extern "C"  String_t* JsonConvert_EnsureFloatFormat_m2700405889 (Il2CppObject * __this /* static, unused */, double ___value0, String_t* ___text1, int32_t ___floatFormatHandling2, Il2CppChar ___quoteChar3, bool ___nullable4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Double,Newtonsoft.Json.FloatFormatHandling,System.Char,System.Boolean)
extern "C"  String_t* JsonConvert_ToString_m237875016 (Il2CppObject * __this /* static, unused */, double ___value0, int32_t ___floatFormatHandling1, Il2CppChar ___quoteChar2, bool ___nullable3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::EnsureDecimalPlace(System.Double,System.String)
extern "C"  String_t* JsonConvert_EnsureDecimalPlace_m2167287501 (Il2CppObject * __this /* static, unused */, double ___value0, String_t* ___text1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::EnsureDecimalPlace(System.String)
extern "C"  String_t* JsonConvert_EnsureDecimalPlace_m4197953623 (Il2CppObject * __this /* static, unused */, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.Decimal)
extern "C"  String_t* JsonConvert_ToString_m166671397 (Il2CppObject * __this /* static, unused */, Decimal_t724701077  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.String)
extern "C"  String_t* JsonConvert_ToString_m4044418331 (Il2CppObject * __this /* static, unused */, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.String,System.Char)
extern "C"  String_t* JsonConvert_ToString_m910579696 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppChar ___delimiter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::ToString(System.String,System.Char,Newtonsoft.Json.StringEscapeHandling)
extern "C"  String_t* JsonConvert_ToString_m1760228760 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppChar ___delimiter1, int32_t ___stringEscapeHandling2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object)
extern "C"  String_t* JsonConvert_SerializeObject_m3879886174 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeObject(System.Object,System.Type,Newtonsoft.Json.JsonSerializerSettings)
extern "C"  String_t* JsonConvert_SerializeObject_m1892192651 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Type_t * ___type1, JsonSerializerSettings_t842388167 * ___settings2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonConvert::SerializeObjectInternal(System.Object,System.Type,Newtonsoft.Json.JsonSerializer)
extern "C"  String_t* JsonConvert_SerializeObjectInternal_m979933385 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Type_t * ___type1, JsonSerializer_t1719617802 * ___jsonSerializer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonConvert::DeserializeObject(System.String,System.Type,Newtonsoft.Json.JsonSerializerSettings)
extern "C"  Il2CppObject * JsonConvert_DeserializeObject_m763049426 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Type_t * ___type1, JsonSerializerSettings_t842388167 * ___settings2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonConvert::.cctor()
extern "C"  void JsonConvert__cctor_m55540845 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
