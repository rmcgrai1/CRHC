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

// Newtonsoft.Json.IArrayPool`1<System.Char>
struct IArrayPool_1_t1662561876;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;
// Newtonsoft.Json.Utilities.StringBuffer
struct StringBuffer_t2484172789;
struct StringBuffer_t2484172789_marshaled_pinvoke;
struct StringBuffer_t2484172789_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_StringBu2484172789.h"

// System.Int32 Newtonsoft.Json.Utilities.StringBuffer::get_Position()
extern "C"  int32_t StringBuffer_get_Position_m2165238534 (StringBuffer_t2484172789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::set_Position(System.Int32)
extern "C"  void StringBuffer_set_Position_m164325637 (StringBuffer_t2484172789 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.StringBuffer::get_IsEmpty()
extern "C"  bool StringBuffer_get_IsEmpty_m2064517116 (StringBuffer_t2484172789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::.ctor(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
extern "C"  void StringBuffer__ctor_m55458746 (StringBuffer_t2484172789 * __this, Il2CppObject* ___bufferPool0, int32_t ___initalSize1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::.ctor(System.Char[])
extern "C"  void StringBuffer__ctor_m1128116153 (StringBuffer_t2484172789 * __this, CharU5BU5D_t1328083999* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Append(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char)
extern "C"  void StringBuffer_Append_m1538974178 (StringBuffer_t2484172789 * __this, Il2CppObject* ___bufferPool0, Il2CppChar ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Append(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char[],System.Int32,System.Int32)
extern "C"  void StringBuffer_Append_m1382521736 (StringBuffer_t2484172789 * __this, Il2CppObject* ___bufferPool0, CharU5BU5D_t1328083999* ___buffer1, int32_t ___startIndex2, int32_t ___count3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Clear(Newtonsoft.Json.IArrayPool`1<System.Char>)
extern "C"  void StringBuffer_Clear_m2728963920 (StringBuffer_t2484172789 * __this, Il2CppObject* ___bufferPool0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringBuffer::EnsureSize(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
extern "C"  void StringBuffer_EnsureSize_m2788268905 (StringBuffer_t2484172789 * __this, Il2CppObject* ___bufferPool0, int32_t ___appendLength1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringBuffer::ToString()
extern "C"  String_t* StringBuffer_ToString_m1070456547 (StringBuffer_t2484172789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringBuffer::ToString(System.Int32,System.Int32)
extern "C"  String_t* StringBuffer_ToString_m3486543647 (StringBuffer_t2484172789 * __this, int32_t ___start0, int32_t ___length1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] Newtonsoft.Json.Utilities.StringBuffer::get_InternalBuffer()
extern "C"  CharU5BU5D_t1328083999* StringBuffer_get_InternalBuffer_m339238344 (StringBuffer_t2484172789 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct StringBuffer_t2484172789;
struct StringBuffer_t2484172789_marshaled_pinvoke;

extern "C" void StringBuffer_t2484172789_marshal_pinvoke(const StringBuffer_t2484172789& unmarshaled, StringBuffer_t2484172789_marshaled_pinvoke& marshaled);
extern "C" void StringBuffer_t2484172789_marshal_pinvoke_back(const StringBuffer_t2484172789_marshaled_pinvoke& marshaled, StringBuffer_t2484172789& unmarshaled);
extern "C" void StringBuffer_t2484172789_marshal_pinvoke_cleanup(StringBuffer_t2484172789_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct StringBuffer_t2484172789;
struct StringBuffer_t2484172789_marshaled_com;

extern "C" void StringBuffer_t2484172789_marshal_com(const StringBuffer_t2484172789& unmarshaled, StringBuffer_t2484172789_marshaled_com& marshaled);
extern "C" void StringBuffer_t2484172789_marshal_com_back(const StringBuffer_t2484172789_marshaled_com& marshaled, StringBuffer_t2484172789& unmarshaled);
extern "C" void StringBuffer_t2484172789_marshal_com_cleanup(StringBuffer_t2484172789_marshaled_com& marshaled);
