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

// Newtonsoft.Json.JsonWriterException
struct JsonWriterException_t1246029574;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Exception
struct Exception_t1927440687;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Exception1927440687.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1973729997.h"

// System.Void Newtonsoft.Json.JsonWriterException::set_Path(System.String)
extern "C"  void JsonWriterException_set_Path_m1590785743 (JsonWriterException_t1246029574 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriterException::.ctor()
extern "C"  void JsonWriterException__ctor_m3645849357 (JsonWriterException_t1246029574 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriterException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonWriterException__ctor_m883371420 (JsonWriterException_t1246029574 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonWriterException::.ctor(System.String,System.Exception,System.String)
extern "C"  void JsonWriterException__ctor_m3066876329 (JsonWriterException_t1246029574 * __this, String_t* ___message0, Exception_t1927440687 * ___innerException1, String_t* ___path2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonWriterException Newtonsoft.Json.JsonWriterException::Create(Newtonsoft.Json.JsonWriter,System.String,System.Exception)
extern "C"  JsonWriterException_t1246029574 * JsonWriterException_Create_m1017818739 (Il2CppObject * __this /* static, unused */, JsonWriter_t1973729997 * ___writer0, String_t* ___message1, Exception_t1927440687 * ___ex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonWriterException Newtonsoft.Json.JsonWriterException::Create(System.String,System.String,System.Exception)
extern "C"  JsonWriterException_t1246029574 * JsonWriterException_Create_m2279928989 (Il2CppObject * __this /* static, unused */, String_t* ___path0, String_t* ___message1, Exception_t1927440687 * ___ex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
