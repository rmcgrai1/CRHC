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

// System.Boolean[]
struct BooleanU5BU5D_t3568034315;
// System.String
struct String_t;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// Newtonsoft.Json.IArrayPool`1<System.Char>
struct IArrayPool_1_t1662561876;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_StringEscapeHandli3827428951.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_IO_TextWriter4027217640.h"

// System.Void Newtonsoft.Json.Utilities.JavaScriptUtils::.cctor()
extern "C"  void JavaScriptUtils__cctor_m568657070 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean[] Newtonsoft.Json.Utilities.JavaScriptUtils::GetCharEscapeFlags(Newtonsoft.Json.StringEscapeHandling,System.Char)
extern "C"  BooleanU5BU5D_t3568034315* JavaScriptUtils_GetCharEscapeFlags_m4017192528 (Il2CppObject * __this /* static, unused */, int32_t ___stringEscapeHandling0, Il2CppChar ___quoteChar1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.JavaScriptUtils::ShouldEscapeJavaScriptString(System.String,System.Boolean[])
extern "C"  bool JavaScriptUtils_ShouldEscapeJavaScriptString_m926784044 (Il2CppObject * __this /* static, unused */, String_t* ___s0, BooleanU5BU5D_t3568034315* ___charEscapeFlags1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.JavaScriptUtils::WriteEscapedJavaScriptString(System.IO.TextWriter,System.String,System.Char,System.Boolean,System.Boolean[],Newtonsoft.Json.StringEscapeHandling,Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char[]&)
extern "C"  void JavaScriptUtils_WriteEscapedJavaScriptString_m349909445 (Il2CppObject * __this /* static, unused */, TextWriter_t4027217640 * ___writer0, String_t* ___s1, Il2CppChar ___delimiter2, bool ___appendDelimiters3, BooleanU5BU5D_t3568034315* ___charEscapeFlags4, int32_t ___stringEscapeHandling5, Il2CppObject* ___bufferPool6, CharU5BU5D_t1328083999** ___writeBuffer7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.JavaScriptUtils::ToEscapedJavaScriptString(System.String,System.Char,System.Boolean,Newtonsoft.Json.StringEscapeHandling)
extern "C"  String_t* JavaScriptUtils_ToEscapedJavaScriptString_m4206625202 (Il2CppObject * __this /* static, unused */, String_t* ___value0, Il2CppChar ___delimiter1, bool ___appendDelimiters2, int32_t ___stringEscapeHandling3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
