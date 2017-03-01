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

// System.ComponentModel.UInt32Converter
struct UInt32Converter_t1748821239;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t104580544;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Globalization_NumberFormatInfo104580544.h"

// System.Boolean System.ComponentModel.UInt32Converter::get_SupportHex()
extern "C"  bool UInt32Converter_get_SupportHex_m1655161699 (UInt32Converter_t1748821239 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.UInt32Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Il2CppObject * UInt32Converter_ConvertFromString_m1237024361 (UInt32Converter_t1748821239 * __this, String_t* ___value0, NumberFormatInfo_t104580544 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.UInt32Converter::ConvertFromString(System.String,System.Int32)
extern "C"  Il2CppObject * UInt32Converter_ConvertFromString_m1872675352 (UInt32Converter_t1748821239 * __this, String_t* ___value0, int32_t ___fromBase1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
