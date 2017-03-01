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

// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t2043888884;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Exception
struct Exception_t1927440687;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// Newtonsoft.Json.IJsonLineInfo
struct IJsonLineInfo_t445311913;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Exception1927440687.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader3154730733.h"

// System.Void Newtonsoft.Json.JsonReaderException::set_LineNumber(System.Int32)
extern "C"  void JsonReaderException_set_LineNumber_m2363712180 (JsonReaderException_t2043888884 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::set_LinePosition(System.Int32)
extern "C"  void JsonReaderException_set_LinePosition_m134716834 (JsonReaderException_t2043888884 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::set_Path(System.String)
extern "C"  void JsonReaderException_set_Path_m2155204869 (JsonReaderException_t2043888884 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::.ctor()
extern "C"  void JsonReaderException__ctor_m1614706259 (JsonReaderException_t2043888884 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonReaderException__ctor_m4171808452 (JsonReaderException_t2043888884 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonReaderException::.ctor(System.String,System.Exception,System.String,System.Int32,System.Int32)
extern "C"  void JsonReaderException__ctor_m1340258615 (JsonReaderException_t2043888884 * __this, String_t* ___message0, Exception_t1927440687 * ___innerException1, String_t* ___path2, int32_t ___lineNumber3, int32_t ___linePosition4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonReaderException Newtonsoft.Json.JsonReaderException::Create(Newtonsoft.Json.JsonReader,System.String)
extern "C"  JsonReaderException_t2043888884 * JsonReaderException_Create_m2262836229 (Il2CppObject * __this /* static, unused */, JsonReader_t3154730733 * ___reader0, String_t* ___message1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonReaderException Newtonsoft.Json.JsonReaderException::Create(Newtonsoft.Json.JsonReader,System.String,System.Exception)
extern "C"  JsonReaderException_t2043888884 * JsonReaderException_Create_m3412180909 (Il2CppObject * __this /* static, unused */, JsonReader_t3154730733 * ___reader0, String_t* ___message1, Exception_t1927440687 * ___ex2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonReaderException Newtonsoft.Json.JsonReaderException::Create(Newtonsoft.Json.IJsonLineInfo,System.String,System.String,System.Exception)
extern "C"  JsonReaderException_t2043888884 * JsonReaderException_Create_m832075467 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___lineInfo0, String_t* ___path1, String_t* ___message2, Exception_t1927440687 * ___ex3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
