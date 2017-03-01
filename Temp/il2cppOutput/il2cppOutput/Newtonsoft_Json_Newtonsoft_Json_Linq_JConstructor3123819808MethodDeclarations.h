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

// Newtonsoft.Json.Linq.JConstructor
struct JConstructor_t3123819808;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t3093584614;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// System.String
struct String_t;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t3128012475;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// Newtonsoft.Json.Linq.JsonLoadSettings
struct JsonLoadSettings_t947661933;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JTokenType1307827213.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JConstructor3123819808.h"
#include "mscorlib_System_String2029220233.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1973729997.h"
#include "mscorlib_System_Object2689449295.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader3154730733.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JsonLoadSettin947661933.h"

// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JConstructor::get_ChildrenTokens()
extern "C"  Il2CppObject* JConstructor_get_ChildrenTokens_m1979046615 (JConstructor_t3123819808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JConstructor::IndexOfItem(Newtonsoft.Json.Linq.JToken)
extern "C"  int32_t JConstructor_IndexOfItem_m2774226045 (JConstructor_t3123819808 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JConstructor::get_Name()
extern "C"  String_t* JConstructor_get_Name_m2203585742 (JConstructor_t3123819808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JConstructor::get_Type()
extern "C"  int32_t JConstructor_get_Type_m2152095103 (JConstructor_t3123819808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JConstructor::.ctor(Newtonsoft.Json.Linq.JConstructor)
extern "C"  void JConstructor__ctor_m3789863124 (JConstructor_t3123819808 * __this, JConstructor_t3123819808 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JConstructor::.ctor(System.String)
extern "C"  void JConstructor__ctor_m1507071573 (JConstructor_t3123819808 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JConstructor::CloneToken()
extern "C"  JToken_t2552644013 * JConstructor_CloneToken_m2270986726 (JConstructor_t3123819808 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JConstructor::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[])
extern "C"  void JConstructor_WriteTo_m2178061682 (JConstructor_t3123819808 * __this, JsonWriter_t1973729997 * ___writer0, JsonConverterU5BU5D_t3128012475* ___converters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JConstructor::get_Item(System.Object)
extern "C"  JToken_t2552644013 * JConstructor_get_Item_m1404736806 (JConstructor_t3123819808 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JConstructor Newtonsoft.Json.Linq.JConstructor::Load(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Linq.JsonLoadSettings)
extern "C"  JConstructor_t3123819808 * JConstructor_Load_m1991740673 (Il2CppObject * __this /* static, unused */, JsonReader_t3154730733 * ___reader0, JsonLoadSettings_t947661933 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
