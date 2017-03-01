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

// System.Char[]
struct CharU5BU5D_t1328083999;
// Newtonsoft.Json.IArrayPool`1<System.Char>
struct IArrayPool_1_t1662561876;

#include "codegen/il2cpp-codegen.h"

// System.Char[] Newtonsoft.Json.Utilities.BufferUtils::RentBuffer(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
extern "C"  CharU5BU5D_t1328083999* BufferUtils_RentBuffer_m567587815 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___bufferPool0, int32_t ___minSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.BufferUtils::ReturnBuffer(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char[])
extern "C"  void BufferUtils_ReturnBuffer_m2353484450 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___bufferPool0, CharU5BU5D_t1328083999* ___buffer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] Newtonsoft.Json.Utilities.BufferUtils::EnsureBufferSize(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32,System.Char[])
extern "C"  CharU5BU5D_t1328083999* BufferUtils_EnsureBufferSize_m1357837076 (Il2CppObject * __this /* static, unused */, Il2CppObject* ___bufferPool0, int32_t ___size1, CharU5BU5D_t1328083999* ___buffer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
