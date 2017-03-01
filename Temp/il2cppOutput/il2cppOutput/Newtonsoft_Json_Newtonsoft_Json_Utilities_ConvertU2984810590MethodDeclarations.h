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

// System.Type
struct Type_t;
// Newtonsoft.Json.Utilities.TypeInformation
struct TypeInformation_t1531269270;
// System.IConvertible
struct IConvertible_t908092482;
// System.String
struct String_t;
// System.Func`2<System.Object,System.Object>
struct Func_2_t2825504181;
// System.Object
struct Il2CppObject;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.ComponentModel.TypeConverter
struct TypeConverter_t745995970;
// System.Version
struct Version_t1755874712;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_Primitiv2593001762.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_TimeSpan3430258949.h"
#include "mscorlib_System_String2029220233.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_ConvertU1788482786.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_ConvertU2285525878.h"
#include "mscorlib_System_Version1755874712.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_ParseRes3601995942.h"
#include "mscorlib_System_Guid2533601593.h"

// Newtonsoft.Json.Utilities.PrimitiveTypeCode Newtonsoft.Json.Utilities.ConvertUtils::GetTypeCode(System.Type)
extern "C"  int32_t ConvertUtils_GetTypeCode_m1177375997 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.PrimitiveTypeCode Newtonsoft.Json.Utilities.ConvertUtils::GetTypeCode(System.Type,System.Boolean&)
extern "C"  int32_t ConvertUtils_GetTypeCode_m917529700 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, bool* ___isEnum1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.TypeInformation Newtonsoft.Json.Utilities.ConvertUtils::GetTypeInformation(System.IConvertible)
extern "C"  TypeInformation_t1531269270 * ConvertUtils_GetTypeInformation_m3345041664 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___convertable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::IsConvertible(System.Type)
extern "C"  bool ConvertUtils_IsConvertible_m2947831297 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan Newtonsoft.Json.Utilities.ConvertUtils::ParseTimeSpan(System.String)
extern "C"  TimeSpan_t3430258949  ConvertUtils_ParseTimeSpan_m3194551008 (Il2CppObject * __this /* static, unused */, String_t* ___input0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ConvertUtils::CreateCastConverter(Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey)
extern "C"  Func_2_t2825504181 * ConvertUtils_CreateCastConverter_m2117291528 (Il2CppObject * __this /* static, unused */, TypeConvertKey_t1788482786  ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::TryConvert(System.Object,System.Globalization.CultureInfo,System.Type,System.Object&)
extern "C"  bool ConvertUtils_TryConvert_m2149682494 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___initialValue0, CultureInfo_t3500843524 * ___culture1, Type_t * ___targetType2, Il2CppObject ** ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ConvertUtils/ConvertResult Newtonsoft.Json.Utilities.ConvertUtils::TryConvertInternal(System.Object,System.Globalization.CultureInfo,System.Type,System.Object&)
extern "C"  int32_t ConvertUtils_TryConvertInternal_m3758107408 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___initialValue0, CultureInfo_t3500843524 * ___culture1, Type_t * ___targetType2, Il2CppObject ** ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ConvertUtils::ConvertOrCast(System.Object,System.Globalization.CultureInfo,System.Type)
extern "C"  Il2CppObject * ConvertUtils_ConvertOrCast_m3798520780 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___initialValue0, CultureInfo_t3500843524 * ___culture1, Type_t * ___targetType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.ConvertUtils::EnsureTypeAssignable(System.Object,System.Type,System.Type)
extern "C"  Il2CppObject * ConvertUtils_EnsureTypeAssignable_m2208027899 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Type_t * ___initialType1, Type_t * ___targetType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter Newtonsoft.Json.Utilities.ConvertUtils::GetConverter(System.Type)
extern "C"  TypeConverter_t745995970 * ConvertUtils_GetConverter_m3711377960 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::VersionTryParse(System.String,System.Version&)
extern "C"  bool ConvertUtils_VersionTryParse_m660167878 (Il2CppObject * __this /* static, unused */, String_t* ___input0, Version_t1755874712 ** ___result1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::IsInteger(System.Object)
extern "C"  bool ConvertUtils_IsInteger_m3596203515 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ParseResult Newtonsoft.Json.Utilities.ConvertUtils::Int32TryParse(System.Char[],System.Int32,System.Int32,System.Int32&)
extern "C"  int32_t ConvertUtils_Int32TryParse_m4283984055 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___chars0, int32_t ___start1, int32_t ___length2, int32_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Utilities.ParseResult Newtonsoft.Json.Utilities.ConvertUtils::Int64TryParse(System.Char[],System.Int32,System.Int32,System.Int64&)
extern "C"  int32_t ConvertUtils_Int64TryParse_m1460425539 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___chars0, int32_t ___start1, int32_t ___length2, int64_t* ___value3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils::TryConvertGuid(System.String,System.Guid&)
extern "C"  bool ConvertUtils_TryConvertGuid_m2185942888 (Il2CppObject * __this /* static, unused */, String_t* ___s0, Guid_t2533601593 * ___g1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.ConvertUtils::HexTextToInt(System.Char[],System.Int32,System.Int32)
extern "C"  int32_t ConvertUtils_HexTextToInt_m1490804038 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___text0, int32_t ___start1, int32_t ___end2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.ConvertUtils::HexCharToInt(System.Char)
extern "C"  int32_t ConvertUtils_HexCharToInt_m2871892125 (Il2CppObject * __this /* static, unused */, Il2CppChar ___ch0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.ConvertUtils::.cctor()
extern "C"  void ConvertUtils__cctor_m442861122 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
