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

// Newtonsoft.Json.Linq.JObject
struct JObject_t278519297;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t3093584614;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// Newtonsoft.Json.Linq.JProperty
struct JProperty_t2956441399;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JProperty>
struct IEnumerable_1_t3248568444;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// Newtonsoft.Json.Linq.JsonLoadSettings
struct JsonLoadSettings_t947661933;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t3128012475;
// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>[]
struct KeyValuePair_2U5BU5D_t1550931756;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>>
struct IEnumerator_1_t3995259620;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JObject278519297.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JProperty2956441399.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JTokenType1307827213.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader3154730733.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JsonLoadSettin947661933.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1973729997.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_22224768497.h"

// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject::get_ChildrenTokens()
extern "C"  Il2CppObject* JObject_get_ChildrenTokens_m526341652 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::.ctor()
extern "C"  void JObject__ctor_m3342928170 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::.ctor(Newtonsoft.Json.Linq.JObject)
extern "C"  void JObject__ctor_m2577624574 (JObject_t278519297 * __this, JObject_t278519297 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JObject::IndexOfItem(Newtonsoft.Json.Linq.JToken)
extern "C"  int32_t JObject_IndexOfItem_m391115030 (JObject_t278519297 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::InsertItem(System.Int32,Newtonsoft.Json.Linq.JToken,System.Boolean)
extern "C"  void JObject_InsertItem_m833034994 (JObject_t278519297 * __this, int32_t ___index0, JToken_t2552644013 * ___item1, bool ___skipParentCheck2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::ValidateToken(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken)
extern "C"  void JObject_ValidateToken_m17021283 (JObject_t278519297 * __this, JToken_t2552644013 * ___o0, JToken_t2552644013 * ___existing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::InternalPropertyChanged(Newtonsoft.Json.Linq.JProperty)
extern "C"  void JObject_InternalPropertyChanged_m1646553032 (JObject_t278519297 * __this, JProperty_t2956441399 * ___childProperty0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::InternalPropertyChanging(Newtonsoft.Json.Linq.JProperty)
extern "C"  void JObject_InternalPropertyChanging_m3009642575 (JObject_t278519297 * __this, JProperty_t2956441399 * ___childProperty0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::CloneToken()
extern "C"  JToken_t2552644013 * JObject_CloneToken_m1672153915 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JObject::get_Type()
extern "C"  int32_t JObject_get_Type_m1400764232 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JProperty> Newtonsoft.Json.Linq.JObject::Properties()
extern "C"  Il2CppObject* JObject_Properties_m1194829353 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JProperty Newtonsoft.Json.Linq.JObject::Property(System.String)
extern "C"  JProperty_t2956441399 * JObject_Property_m3421618020 (JObject_t278519297 * __this, String_t* ___name0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::get_Item(System.Object)
extern "C"  JToken_t2552644013 * JObject_get_Item_m4289931149 (JObject_t278519297 * __this, Il2CppObject * ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JObject::get_Item(System.String)
extern "C"  JToken_t2552644013 * JObject_get_Item_m3511342441 (JObject_t278519297 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::set_Item(System.String,Newtonsoft.Json.Linq.JToken)
extern "C"  void JObject_set_Item_m2242358660 (JObject_t278519297 * __this, String_t* ___propertyName0, JToken_t2552644013 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Load(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Linq.JsonLoadSettings)
extern "C"  JObject_t278519297 * JObject_Load_m92124977 (Il2CppObject * __this /* static, unused */, JsonReader_t3154730733 * ___reader0, JsonLoadSettings_t947661933 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String)
extern "C"  JObject_t278519297 * JObject_Parse_m4259391636 (Il2CppObject * __this /* static, unused */, String_t* ___json0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject::Parse(System.String,Newtonsoft.Json.Linq.JsonLoadSettings)
extern "C"  JObject_t278519297 * JObject_Parse_m3683551576 (Il2CppObject * __this /* static, unused */, String_t* ___json0, JsonLoadSettings_t947661933 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::WriteTo(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter[])
extern "C"  void JObject_WriteTo_m2685601773 (JObject_t278519297 * __this, JsonWriter_t1973729997 * ___writer0, JsonConverterU5BU5D_t3128012475* ___converters1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::Add(System.String,Newtonsoft.Json.Linq.JToken)
extern "C"  void JObject_Add_m2068639155 (JObject_t278519297 * __this, String_t* ___propertyName0, JToken_t2552644013 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JObject::System.Collections.Generic.IDictionary<System.String,Newtonsoft.Json.Linq.JToken>.ContainsKey(System.String)
extern "C"  bool JObject_System_Collections_Generic_IDictionaryU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3E_ContainsKey_m1675138076 (JObject_t278519297 * __this, String_t* ___key0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JObject::Remove(System.String)
extern "C"  bool JObject_Remove_m2072042294 (JObject_t278519297 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JObject::TryGetValue(System.String,Newtonsoft.Json.Linq.JToken&)
extern "C"  bool JObject_TryGetValue_m2048332992 (JObject_t278519297 * __this, String_t* ___propertyName0, JToken_t2552644013 ** ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Add(System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>)
extern "C"  void JObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_Add_m3665692725 (JObject_t278519297 * __this, KeyValuePair_2_t2224768497  ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Clear()
extern "C"  void JObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_Clear_m368272278 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Contains(System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>)
extern "C"  bool JObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_Contains_m1868211235 (JObject_t278519297 * __this, KeyValuePair_2_t2224768497  ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.CopyTo(System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>[],System.Int32)
extern "C"  void JObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_CopyTo_m2165926425 (JObject_t278519297 * __this, KeyValuePair_2U5BU5D_t1550931756* ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.get_IsReadOnly()
extern "C"  bool JObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_get_IsReadOnly_m4203834692 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JObject::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.Remove(System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>)
extern "C"  bool JObject_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_Remove_m2910010318 (JObject_t278519297 * __this, KeyValuePair_2_t2224768497  ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>> Newtonsoft.Json.Linq.JObject::GetEnumerator()
extern "C"  Il2CppObject* JObject_GetEnumerator_m2164176479 (JObject_t278519297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JObject::OnPropertyChanged(System.String)
extern "C"  void JObject_OnPropertyChanged_m3538667044 (JObject_t278519297 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
