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
// System.String
struct String_t;
// Newtonsoft.Json.Utilities.StringReference
struct StringReference_t1873850304;
struct StringReference_t1873850304_marshaled_pinvoke;
struct StringReference_t1873850304_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_StringRe1873850304.h"

// System.Char Newtonsoft.Json.Utilities.StringReference::get_Item(System.Int32)
extern "C"  Il2CppChar StringReference_get_Item_m395816280 (StringReference_t1873850304 * __this, int32_t ___i0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] Newtonsoft.Json.Utilities.StringReference::get_Chars()
extern "C"  CharU5BU5D_t1328083999* StringReference_get_Chars_m1908699287 (StringReference_t1873850304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.StringReference::get_StartIndex()
extern "C"  int32_t StringReference_get_StartIndex_m1490521704 (StringReference_t1873850304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Utilities.StringReference::get_Length()
extern "C"  int32_t StringReference_get_Length_m976735280 (StringReference_t1873850304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.StringReference::.ctor(System.Char[],System.Int32,System.Int32)
extern "C"  void StringReference__ctor_m814259320 (StringReference_t1873850304 * __this, CharU5BU5D_t1328083999* ___chars0, int32_t ___startIndex1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Utilities.StringReference::ToString()
extern "C"  String_t* StringReference_ToString_m2319348590 (StringReference_t1873850304 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct StringReference_t1873850304;
struct StringReference_t1873850304_marshaled_pinvoke;

extern "C" void StringReference_t1873850304_marshal_pinvoke(const StringReference_t1873850304& unmarshaled, StringReference_t1873850304_marshaled_pinvoke& marshaled);
extern "C" void StringReference_t1873850304_marshal_pinvoke_back(const StringReference_t1873850304_marshaled_pinvoke& marshaled, StringReference_t1873850304& unmarshaled);
extern "C" void StringReference_t1873850304_marshal_pinvoke_cleanup(StringReference_t1873850304_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct StringReference_t1873850304;
struct StringReference_t1873850304_marshaled_com;

extern "C" void StringReference_t1873850304_marshal_com(const StringReference_t1873850304& unmarshaled, StringReference_t1873850304_marshaled_com& marshaled);
extern "C" void StringReference_t1873850304_marshal_com_back(const StringReference_t1873850304_marshaled_com& marshaled, StringReference_t1873850304& unmarshaled);
extern "C" void StringReference_t1873850304_marshal_com_cleanup(StringReference_t1873850304_marshaled_com& marshaled);
