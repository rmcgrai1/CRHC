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
// System.IFormatProvider
struct IFormatProvider_t2849799027;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t3614634134;
// System.IO.StringWriter
struct StringWriter_t4139609088;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m2157778407 (Il2CppObject * __this /* static, unused */, String_t* ___format0, Il2CppObject * ___provider1, Il2CppObject * ___arg02, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m3608957081 (Il2CppObject * __this /* static, unused */, String_t* ___format0, Il2CppObject * ___provider1, Il2CppObject * ___arg02, Il2CppObject * ___arg13, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m4026350631 (Il2CppObject * __this /* static, unused */, String_t* ___format0, Il2CppObject * ___provider1, Il2CppObject * ___arg02, Il2CppObject * ___arg13, Il2CppObject * ___arg24, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object,System.Object,System.Object)
extern "C"  String_t* StringUtils_FormatWith_m1809383129 (Il2CppObject * __this /* static, unused */, String_t* ___format0, Il2CppObject * ___provider1, Il2CppObject * ___arg02, Il2CppObject * ___arg13, Il2CppObject * ___arg24, Il2CppObject * ___arg35, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object[])
extern "C"  String_t* StringUtils_FormatWith_m282568793 (Il2CppObject * __this /* static, unused */, String_t* ___format0, Il2CppObject * ___provider1, ObjectU5BU5D_t3614634134* ___args2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.StringWriter Newtonsoft.Json.Utilities.StringUtils::CreateStringWriter(System.Int32)
extern "C"  StringWriter_t4139609088 * StringUtils_CreateStringWriter_m3259887542 (Il2CppObject * __this /* static, unused */, int32_t ___capacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringUtils::ToCharAsUnicode(System.Char,System.Char[])
extern "C"  void StringUtils_ToCharAsUnicode_m3430462003 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, CharU5BU5D_t1328083999* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::IsHighSurrogate(System.Char)
extern "C"  bool StringUtils_IsHighSurrogate_m1835143636 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::IsLowSurrogate(System.Char)
extern "C"  bool StringUtils_IsLowSurrogate_m613166546 (Il2CppObject * __this /* static, unused */, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::StartsWith(System.String,System.Char)
extern "C"  bool StringUtils_StartsWith_m2273632519 (Il2CppObject * __this /* static, unused */, String_t* ___source0, Il2CppChar ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::EndsWith(System.String,System.Char)
extern "C"  bool StringUtils_EndsWith_m2859705380 (Il2CppObject * __this /* static, unused */, String_t* ___source0, Il2CppChar ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
