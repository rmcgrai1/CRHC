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

// Newtonsoft.Json.JsonSerializationException
struct JsonSerializationException_t1492322735;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// Newtonsoft.Json.IJsonLineInfo
struct IJsonLineInfo_t445311913;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader3154730733.h"

// System.Void Newtonsoft.Json.JsonSerializationException::.ctor()
extern "C"  void JsonSerializationException__ctor_m2393699868 (JsonSerializationException_t1492322735 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializationException::.ctor(System.String)
extern "C"  void JsonSerializationException__ctor_m1223010702 (JsonSerializationException_t1492322735 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializationException::.ctor(System.String,System.Exception)
extern "C"  void JsonSerializationException__ctor_m2732701550 (JsonSerializationException_t1492322735 * __this, String_t* ___message0, Exception_t1927440687 * ___innerException1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonSerializationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonSerializationException__ctor_m1184575163 (JsonSerializationException_t1492322735 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonSerializationException Newtonsoft.Json.JsonSerializationException::Create(Newtonsoft.Json.JsonReader,System.String)
extern "C"  JsonSerializationException_t1492322735 * JsonSerializationException_Create_m1971419897 (Il2CppObject * __this /* static, unused */, JsonReader_t3154730733 * ___reader0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonSerializationException Newtonsoft.Json.JsonSerializationException::Create(Newtonsoft.Json.JsonReader,System.String,System.Exception)
extern "C"  JsonSerializationException_t1492322735 * JsonSerializationException_Create_m1372492945 (Il2CppObject * __this /* static, unused */, JsonReader_t3154730733 * ___reader0, String_t* ___message1, Exception_t1927440687 * ___ex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonSerializationException Newtonsoft.Json.JsonSerializationException::Create(Newtonsoft.Json.IJsonLineInfo,System.String,System.String,System.Exception)
extern "C"  JsonSerializationException_t1492322735 * JsonSerializationException_Create_m3776439283 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___lineInfo0, String_t* ___path1, String_t* ___message2, Exception_t1927440687 * ___ex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
