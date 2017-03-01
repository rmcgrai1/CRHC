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

// System.ComponentModel.SingleConverter
struct SingleConverter_t3693313828;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t104580544;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Globalization_NumberFormatInfo104580544.h"

// System.Boolean System.ComponentModel.SingleConverter::get_SupportHex()
extern "C"  bool SingleConverter_get_SupportHex_m3607340200 (SingleConverter_t3693313828 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.SingleConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C"  Il2CppObject * SingleConverter_ConvertFromString_m1051908048 (SingleConverter_t3693313828 * __this, String_t* ___value0, NumberFormatInfo_t104580544 * ___format1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
