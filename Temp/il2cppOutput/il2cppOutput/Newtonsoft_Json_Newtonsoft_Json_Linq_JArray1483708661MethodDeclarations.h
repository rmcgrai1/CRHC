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

// Newtonsoft.Json.Linq.JArray
struct JArray_t1483708661;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t3093584614;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// Newtonsoft.Json.Linq.JsonLoadSettings
struct JsonLoadSettings_t947661933;
// System.String
struct String_t;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t3128012475;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerator_1_t28167840;
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_t1832626432;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JTokenType1307827213.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JArray1483708661.h"
#include "mscorlib_System_Object2689449295.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader3154730733.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JsonLoadSettin947661933.h"
#include "mscorlib_System_String2029220233.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1973729997.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JToken2552644013.h"

// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::get_ChildrenTokens()
extern "C"  Il2CppObject* JArray_get_ChildrenTokens_m1887165570 (JArray_t1483708661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JArray::get_Type()
extern "C"  int32_t JArray_get_Type_m3385846996 (JArray_t1483708661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::.ctor()
extern "C"  void JArray__ctor_m1099436084 (JArray_t1483708661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::.ctor(Newtonsoft.Json.Linq.JArray)
extern "C"  void JArray__ctor_m3885567150 (JArray_t1483708661 * __this, JArray_t1483708661 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::.ctor(System.Object)
extern "C"  void JArray__ctor_m3630678468 (JArray_t1483708661 * __this, Il2CppObject * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JArray::CloneToken()
extern "C"  JToken_t2552644013 * JArray_CloneToken_m2654627515 (JArray_t1483708661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JArray Newtonsoft.Json.Linq.JArray::Load(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Linq.JsonLoadSettings)
extern "C"  JArray_t1483708661 * JArray_Load_m2819304161 (Il2CppObject * __this /* static, unused */, JsonReader_t3154730733 * ___reader0, JsonLoadSettings_t947661933 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JArray Newtonsoft.Json.Linq.JArray::Parse(System.String)
extern "C"  JArray_t1483708661 * JArray_Parse_m2988669444 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JArray Newtonsoft.Json.Linq.JArray::Parse(System.String,Newtonsoft.Json.Linq.JsonLoadSettings)
extern "C"  JArray_t1483708661 * JArray_Parse_m3971447552 (Il2CppObject * __this /* static, unused */, String_t* ___json0, JsonLoadSettings_t947661933 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[])
extern "C"  void JArray_WriteTo_m3784575869 (JArray_t1483708661 * __this, JsonWriter_t1973729997 * ___writer0, JsonConverterU5BU5D_t3128012475* ___converters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JArray::get_Item(System.Object)
extern "C"  JToken_t2552644013 * JArray_get_Item_m745759185 (JArray_t1483708661 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JArray::get_Item(System.Int32)
extern "C"  JToken_t2552644013 * JArray_get_Item_m1524389706 (JArray_t1483708661 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::set_Item(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JArray_set_Item_m1193787285 (JArray_t1483708661 * __this, int32_t ___index0, JToken_t2552644013 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JArray::IndexOfItem(Newtonsoft.Json.Linq.JToken)
extern "C"  int32_t JArray_IndexOfItem_m3312784268 (JArray_t1483708661 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JArray::IndexOf(Newtonsoft.Json.Linq.JToken)
extern "C"  int32_t JArray_IndexOf_m3239121993 (JArray_t1483708661 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::Insert(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JArray_Insert_m550804442 (JArray_t1483708661 * __this, int32_t ___index0, JToken_t2552644013 * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::RemoveAt(System.Int32)
extern "C"  void JArray_RemoveAt_m1867688326 (JArray_t1483708661 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::GetEnumerator()
extern "C"  Il2CppObject* JArray_GetEnumerator_m3531602180 (JArray_t1483708661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::Add(Newtonsoft.Json.Linq.JToken)
extern "C"  void JArray_Add_m3203272325 (JArray_t1483708661 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::Clear()
extern "C"  void JArray_Clear_m4276689119 (JArray_t1483708661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JArray::Contains(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JArray_Contains_m4193250607 (JArray_t1483708661 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JArray::CopyTo(Newtonsoft.Json.Linq.JToken[],System.Int32)
extern "C"  void JArray_CopyTo_m4110897537 (JArray_t1483708661 * __this, JTokenU5BU5D_t1832626432* ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JArray::get_IsReadOnly()
extern "C"  bool JArray_get_IsReadOnly_m3965251995 (JArray_t1483708661 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JArray::Remove(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JArray_Remove_m1472857396 (JArray_t1483708661 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
