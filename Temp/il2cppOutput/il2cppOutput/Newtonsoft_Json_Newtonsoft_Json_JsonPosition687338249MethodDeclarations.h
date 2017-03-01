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

// System.Text.StringBuilder
struct StringBuilder_t1221177846;
// System.String
struct String_t;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t56459381;
// Newtonsoft.Json.IJsonLineInfo
struct IJsonLineInfo_t445311913;
// Newtonsoft.Json.JsonPosition
struct JsonPosition_t687338249;
struct JsonPosition_t687338249_marshaled_pinvoke;
struct JsonPosition_t687338249_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonPosition687338249.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonContainerType1137362403.h"
#include "mscorlib_System_Text_StringBuilder1221177846.h"
#include "mscorlib_System_Nullable_1_gen3245371860.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Newtonsoft.Json.JsonPosition::.ctor(Newtonsoft.Json.JsonContainerType)
extern "C"  void JsonPosition__ctor_m3833774378 (JsonPosition_t687338249 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonPosition::CalculateLength()
extern "C"  int32_t JsonPosition_CalculateLength_m1532549650 (JsonPosition_t687338249 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonPosition::WriteTo(System.Text.StringBuilder)
extern "C"  void JsonPosition_WriteTo_m223387278 (JsonPosition_t687338249 * __this, StringBuilder_t1221177846 * ___sb0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonPosition::TypeHasIndex(Newtonsoft.Json.JsonContainerType)
extern "C"  bool JsonPosition_TypeHasIndex_m493071448 (Il2CppObject * __this /* static, unused */, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonPosition::BuildPath(System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>,System.Nullable`1<Newtonsoft.Json.JsonPosition>)
extern "C"  String_t* JsonPosition_BuildPath_m3177087945 (Il2CppObject * __this /* static, unused */, List_1_t56459381 * ___positions0, Nullable_1_t3245371860  ___currentPosition1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonPosition::FormatMessage(Newtonsoft.Json.IJsonLineInfo,System.String,System.String)
extern "C"  String_t* JsonPosition_FormatMessage_m3096416947 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___lineInfo0, String_t* ___path1, String_t* ___message2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonPosition::.cctor()
extern "C"  void JsonPosition__cctor_m1893519183 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct JsonPosition_t687338249;
struct JsonPosition_t687338249_marshaled_pinvoke;

extern "C" void JsonPosition_t687338249_marshal_pinvoke(const JsonPosition_t687338249& unmarshaled, JsonPosition_t687338249_marshaled_pinvoke& marshaled);
extern "C" void JsonPosition_t687338249_marshal_pinvoke_back(const JsonPosition_t687338249_marshaled_pinvoke& marshaled, JsonPosition_t687338249& unmarshaled);
extern "C" void JsonPosition_t687338249_marshal_pinvoke_cleanup(JsonPosition_t687338249_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct JsonPosition_t687338249;
struct JsonPosition_t687338249_marshaled_com;

extern "C" void JsonPosition_t687338249_marshal_com(const JsonPosition_t687338249& unmarshaled, JsonPosition_t687338249_marshaled_com& marshaled);
extern "C" void JsonPosition_t687338249_marshal_com_back(const JsonPosition_t687338249_marshaled_com& marshaled, JsonPosition_t687338249& unmarshaled);
extern "C" void JsonPosition_t687338249_marshal_com_cleanup(JsonPosition_t687338249_marshaled_com& marshaled);
