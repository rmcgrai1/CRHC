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

// System.Object
struct Il2CppObject;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t279959794;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// System.Boolean Newtonsoft.Json.Utilities.MiscellaneousUtils::ValueEquals(System.Object,System.Object)
extern "C"  bool MiscellaneousUtils_ValueEquals_m2333263074 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___objA0, Il2CppObject * ___objB1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ArgumentOutOfRangeException Newtonsoft.Json.Utilities.MiscellaneousUtils::CreateArgumentOutOfRangeException(System.String,System.Object,System.String)
extern "C"  ArgumentOutOfRangeException_t279959794 * MiscellaneousUtils_CreateArgumentOutOfRangeException_m4097621156 (Il2CppObject * __this /* static, unused */, String_t* ___paramName0, Il2CppObject * ___actualValue1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.MiscellaneousUtils::ToString(System.Object)
extern "C"  String_t* MiscellaneousUtils_ToString_m803301885 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.MiscellaneousUtils::ByteArrayCompare(System.Byte[],System.Byte[])
extern "C"  int32_t MiscellaneousUtils_ByteArrayCompare_m3864060926 (Il2CppObject * __this /* static, unused */, ByteU5BU5D_t3397334013* ___a10, ByteU5BU5D_t3397334013* ___a21, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.MiscellaneousUtils::FormatValueForPrint(System.Object)
extern "C"  String_t* MiscellaneousUtils_FormatValueForPrint_m210569177 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
