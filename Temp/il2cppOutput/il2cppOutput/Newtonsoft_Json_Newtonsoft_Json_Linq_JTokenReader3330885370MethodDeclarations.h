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

// Newtonsoft.Json.Linq.JTokenReader
struct JTokenReader_t3330885370;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3538280255;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "mscorlib_System_Nullable_1_gen3178688176.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JContainer3538280255.h"
#include "mscorlib_System_Object2689449295.h"

// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JTokenReader::get_CurrentToken()
extern "C"  JToken_t2552644013 * JTokenReader_get_CurrentToken_m4180118899 (JTokenReader_t3330885370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenReader::.ctor(Newtonsoft.Json.Linq.JToken)
extern "C"  void JTokenReader__ctor_m2056282971 (JTokenReader_t3330885370 * __this, JToken_t2552644013 * ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::Read()
extern "C"  bool JTokenReader_Read_m2984194547 (JTokenReader_t3330885370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::ReadOver(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JTokenReader_ReadOver_m915040383 (JTokenReader_t3330885370 * __this, JToken_t2552644013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::ReadToEnd()
extern "C"  bool JTokenReader_ReadToEnd_m1787917951 (JTokenReader_t3330885370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<Newtonsoft.Json.JsonToken> Newtonsoft.Json.Linq.JTokenReader::GetEndToken(Newtonsoft.Json.Linq.JContainer)
extern "C"  Nullable_1_t3178688176  JTokenReader_GetEndToken_m1071417095 (JTokenReader_t3330885370 * __this, JContainer_t3538280255 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::ReadInto(Newtonsoft.Json.Linq.JContainer)
extern "C"  bool JTokenReader_ReadInto_m2978960093 (JTokenReader_t3330885370 * __this, JContainer_t3538280255 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::SetEnd(Newtonsoft.Json.Linq.JContainer)
extern "C"  bool JTokenReader_SetEnd_m1377579788 (JTokenReader_t3330885370 * __this, JContainer_t3538280255 * ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JTokenReader::SetToken(Newtonsoft.Json.Linq.JToken)
extern "C"  void JTokenReader_SetToken_m3584974206 (JTokenReader_t3330885370 * __this, JToken_t2552644013 * ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JTokenReader::SafeToString(System.Object)
extern "C"  String_t* JTokenReader_SafeToString_m1763600853 (JTokenReader_t3330885370 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JTokenReader::Newtonsoft.Json.IJsonLineInfo.HasLineInfo()
extern "C"  bool JTokenReader_Newtonsoft_Json_IJsonLineInfo_HasLineInfo_m2375159079 (JTokenReader_t3330885370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JTokenReader::Newtonsoft.Json.IJsonLineInfo.get_LineNumber()
extern "C"  int32_t JTokenReader_Newtonsoft_Json_IJsonLineInfo_get_LineNumber_m599097803 (JTokenReader_t3330885370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JTokenReader::Newtonsoft.Json.IJsonLineInfo.get_LinePosition()
extern "C"  int32_t JTokenReader_Newtonsoft_Json_IJsonLineInfo_get_LinePosition_m476652593 (JTokenReader_t3330885370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JTokenReader::get_Path()
extern "C"  String_t* JTokenReader_get_Path_m2437345356 (JTokenReader_t3330885370 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
