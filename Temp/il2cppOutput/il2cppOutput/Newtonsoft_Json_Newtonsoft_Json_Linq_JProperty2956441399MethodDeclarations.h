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

// Newtonsoft.Json.Linq.JProperty
struct JProperty_t2956441399;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t3093584614;
// System.String
struct String_t;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t3128012475;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// Newtonsoft.Json.Linq.JsonLoadSettings
struct JsonLoadSettings_t947661933;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JProperty2956441399.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JTokenType1307827213.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1973729997.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader3154730733.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JsonLoadSettin947661933.h"

// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JProperty::get_ChildrenTokens()
extern "C"  Il2CppObject* JProperty_get_ChildrenTokens_m3321645134 (JProperty_t2956441399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JProperty::get_Name()
extern "C"  String_t* JProperty_get_Name_m2701421031 (JProperty_t2956441399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty::get_Value()
extern "C"  JToken_t2552644013 * JProperty_get_Value_m1095428091 (JProperty_t2956441399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::set_Value(Newtonsoft.Json.Linq.JToken)
extern "C"  void JProperty_set_Value_m1427062480 (JProperty_t2956441399 * __this, JToken_t2552644013 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::.ctor(Newtonsoft.Json.Linq.JProperty)
extern "C"  void JProperty__ctor_m2970551422 (JProperty_t2956441399 * __this, JProperty_t2956441399 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty::GetItem(System.Int32)
extern "C"  JToken_t2552644013 * JProperty_GetItem_m3532833267 (JProperty_t2956441399 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::SetItem(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JProperty_SetItem_m1950316838 (JProperty_t2956441399 * __this, int32_t ___index0, JToken_t2552644013 * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JProperty::RemoveItem(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JProperty_RemoveItem_m3980881845 (JProperty_t2956441399 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::RemoveItemAt(System.Int32)
extern "C"  void JProperty_RemoveItemAt_m235470591 (JProperty_t2956441399 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JProperty::IndexOfItem(Newtonsoft.Json.Linq.JToken)
extern "C"  int32_t JProperty_IndexOfItem_m1759305880 (JProperty_t2956441399 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::InsertItem(System.Int32,Newtonsoft.Json.Linq.JToken,System.Boolean)
extern "C"  void JProperty_InsertItem_m2091888008 (JProperty_t2956441399 * __this, int32_t ___index0, JToken_t2552644013 * ___item1, bool ___skipParentCheck2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JProperty::ContainsItem(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JProperty_ContainsItem_m264074138 (JProperty_t2956441399 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::ClearItems()
extern "C"  void JProperty_ClearItems_m4070953071 (JProperty_t2956441399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty::CloneToken()
extern "C"  JToken_t2552644013 * JProperty_CloneToken_m1344110997 (JProperty_t2956441399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JProperty::get_Type()
extern "C"  int32_t JProperty_get_Type_m2114526738 (JProperty_t2956441399 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::.ctor(System.String)
extern "C"  void JProperty__ctor_m3434020126 (JProperty_t2956441399 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::.ctor(System.String,System.Object)
extern "C"  void JProperty__ctor_m3343926164 (JProperty_t2956441399 * __this, String_t* ___name0, Il2CppObject * ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JProperty::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[])
extern "C"  void JProperty_WriteTo_m2532310055 (JProperty_t2956441399 * __this, JsonWriter_t1973729997 * ___writer0, JsonConverterU5BU5D_t3128012475* ___converters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JProperty Newtonsoft.Json.Linq.JProperty::Load(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Linq.JsonLoadSettings)
extern "C"  JProperty_t2956441399 * JProperty_Load_m3446664893 (Il2CppObject * __this /* static, unused */, JsonReader_t3154730733 * ___reader0, JsonLoadSettings_t947661933 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
