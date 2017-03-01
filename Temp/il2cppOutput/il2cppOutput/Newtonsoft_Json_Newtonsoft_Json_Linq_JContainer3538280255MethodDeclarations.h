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

// Newtonsoft.Json.Linq.JContainer
struct JContainer_t3538280255;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// System.Object
struct Il2CppObject;
// System.Array
struct Il2CppArray;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// Newtonsoft.Json.Linq.JsonLoadSettings
struct JsonLoadSettings_t947661933;
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_t1832626432;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JContainer3538280255.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JEnumerable_13820937473.h"
#include "mscorlib_System_Object2689449295.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "mscorlib_System_Array3829468939.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader3154730733.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JsonLoadSettin947661933.h"

// System.Void Newtonsoft.Json.Linq.JContainer::.ctor()
extern "C"  void JContainer__ctor_m2053512322 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::.ctor(Newtonsoft.Json.Linq.JContainer)
extern "C"  void JContainer__ctor_m2925506182 (JContainer_t3538280255 * __this, JContainer_t3538280255 * ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::CheckReentrancy()
extern "C"  void JContainer_CheckReentrancy_m667029493 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::get_HasValues()
extern "C"  bool JContainer_get_HasValues_m1627437467 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::get_First()
extern "C"  JToken_t2552644013 * JContainer_get_First_m2015929986 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::get_Last()
extern "C"  JToken_t2552644013 * JContainer_get_Last_m871521314 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JContainer::Children()
extern "C"  JEnumerable_1_t3820937473  JContainer_Children_m111576412 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::IsMultiContent(System.Object)
extern "C"  bool JContainer_IsMultiContent_m3335813586 (JContainer_t3538280255 * __this, Il2CppObject * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::EnsureParentToken(Newtonsoft.Json.Linq.JToken,System.Boolean)
extern "C"  JToken_t2552644013 * JContainer_EnsureParentToken_m3147290761 (JContainer_t3538280255 * __this, JToken_t2552644013 * ___item0, bool ___skipParentCheck1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::InsertItem(System.Int32,Newtonsoft.Json.Linq.JToken,System.Boolean)
extern "C"  void JContainer_InsertItem_m2170213730 (JContainer_t3538280255 * __this, int32_t ___index0, JToken_t2552644013 * ___item1, bool ___skipParentCheck2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::RemoveItemAt(System.Int32)
extern "C"  void JContainer_RemoveItemAt_m1656807519 (JContainer_t3538280255 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::RemoveItem(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JContainer_RemoveItem_m308226257 (JContainer_t3538280255 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::GetItem(System.Int32)
extern "C"  JToken_t2552644013 * JContainer_GetItem_m3749059455 (JContainer_t3538280255 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::SetItem(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_SetItem_m486707268 (JContainer_t3538280255 * __this, int32_t ___index0, JToken_t2552644013 * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ClearItems()
extern "C"  void JContainer_ClearItems_m3942767631 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ReplaceItem(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_ReplaceItem_m3377281101 (JContainer_t3538280255 * __this, JToken_t2552644013 * ___existing0, JToken_t2552644013 * ___replacement1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::ContainsItem(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JContainer_ContainsItem_m100455560 (JContainer_t3538280255 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::CopyItemsTo(System.Array,System.Int32)
extern "C"  void JContainer_CopyItemsTo_m868777043 (JContainer_t3538280255 * __this, Il2CppArray * ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::IsTokenUnchanged(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken)
extern "C"  bool JContainer_IsTokenUnchanged_m2093009200 (Il2CppObject * __this /* static, unused */, JToken_t2552644013 * ___currentValue0, JToken_t2552644013 * ___newValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ValidateToken(Newtonsoft.Json.Linq.JToken,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_ValidateToken_m401744321 (JContainer_t3538280255 * __this, JToken_t2552644013 * ___o0, JToken_t2552644013 * ___existing1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::Add(System.Object)
extern "C"  void JContainer_Add_m90576863 (JContainer_t3538280255 * __this, Il2CppObject * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::AddAndSkipParentCheck(Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_AddAndSkipParentCheck_m2894373555 (JContainer_t3538280255 * __this, JToken_t2552644013 * ___token0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::AddInternal(System.Int32,System.Object,System.Boolean)
extern "C"  void JContainer_AddInternal_m4214407098 (JContainer_t3538280255 * __this, int32_t ___index0, Il2CppObject * ___content1, bool ___skipParentCheck2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::CreateFromContent(System.Object)
extern "C"  JToken_t2552644013 * JContainer_CreateFromContent_m351812674 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___content0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::RemoveAll()
extern "C"  void JContainer_RemoveAll_m2739764935 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ReadTokenFrom(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Linq.JsonLoadSettings)
extern "C"  void JContainer_ReadTokenFrom_m1369942253 (JContainer_t3538280255 * __this, JsonReader_t3154730733 * ___reader0, JsonLoadSettings_t947661933 * ___options1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::ReadContentFrom(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Linq.JsonLoadSettings)
extern "C"  void JContainer_ReadContentFrom_m2852547815 (JContainer_t3538280255 * __this, JsonReader_t3154730733 * ___r0, JsonLoadSettings_t947661933 * ___settings1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.IndexOf(Newtonsoft.Json.Linq.JToken)
extern "C"  int32_t JContainer_System_Collections_Generic_IListU3CNewtonsoft_Json_Linq_JTokenU3E_IndexOf_m3231782309 (JContainer_t3538280255 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.Insert(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_System_Collections_Generic_IListU3CNewtonsoft_Json_Linq_JTokenU3E_Insert_m801537028 (JContainer_t3538280255 * __this, int32_t ___index0, JToken_t2552644013 * ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.RemoveAt(System.Int32)
extern "C"  void JContainer_System_Collections_Generic_IListU3CNewtonsoft_Json_Linq_JTokenU3E_RemoveAt_m488084592 (JContainer_t3538280255 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.get_Item(System.Int32)
extern "C"  JToken_t2552644013 * JContainer_System_Collections_Generic_IListU3CNewtonsoft_Json_Linq_JTokenU3E_get_Item_m1572807940 (JContainer_t3538280255 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.IList<Newtonsoft.Json.Linq.JToken>.set_Item(System.Int32,Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_System_Collections_Generic_IListU3CNewtonsoft_Json_Linq_JTokenU3E_set_Item_m3544757049 (JContainer_t3538280255 * __this, int32_t ___index0, JToken_t2552644013 * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Add(Newtonsoft.Json.Linq.JToken)
extern "C"  void JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_Add_m3519980777 (JContainer_t3538280255 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Clear()
extern "C"  void JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_Clear_m527080299 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Contains(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_Contains_m1950221963 (JContainer_t3538280255 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.CopyTo(Newtonsoft.Json.Linq.JToken[],System.Int32)
extern "C"  void JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_CopyTo_m924469085 (JContainer_t3538280255 * __this, JTokenU5BU5D_t1832626432* ___array0, int32_t ___arrayIndex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.get_IsReadOnly()
extern "C"  bool JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_get_IsReadOnly_m3005841839 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.Generic.ICollection<Newtonsoft.Json.Linq.JToken>.Remove(Newtonsoft.Json.Linq.JToken)
extern "C"  bool JContainer_System_Collections_Generic_ICollectionU3CNewtonsoft_Json_Linq_JTokenU3E_Remove_m3906126470 (JContainer_t3538280255 * __this, JToken_t2552644013 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JContainer::EnsureValue(System.Object)
extern "C"  JToken_t2552644013 * JContainer_EnsureValue_m4293312860 (JContainer_t3538280255 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::System.Collections.IList.Add(System.Object)
extern "C"  int32_t JContainer_System_Collections_IList_Add_m360509570 (JContainer_t3538280255 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.IList.Clear()
extern "C"  void JContainer_System_Collections_IList_Clear_m4079103392 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.IList.Contains(System.Object)
extern "C"  bool JContainer_System_Collections_IList_Contains_m2348166448 (JContainer_t3538280255 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::System.Collections.IList.IndexOf(System.Object)
extern "C"  int32_t JContainer_System_Collections_IList_IndexOf_m1201895324 (JContainer_t3538280255 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C"  void JContainer_System_Collections_IList_Insert_m3600881717 (JContainer_t3538280255 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.IList.get_IsFixedSize()
extern "C"  bool JContainer_System_Collections_IList_get_IsFixedSize_m1148544309 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.IList.get_IsReadOnly()
extern "C"  bool JContainer_System_Collections_IList_get_IsReadOnly_m776107794 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.IList.Remove(System.Object)
extern "C"  void JContainer_System_Collections_IList_Remove_m2863499885 (JContainer_t3538280255 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.IList.RemoveAt(System.Int32)
extern "C"  void JContainer_System_Collections_IList_RemoveAt_m1704061911 (JContainer_t3538280255 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Linq.JContainer::System.Collections.IList.get_Item(System.Int32)
extern "C"  Il2CppObject * JContainer_System_Collections_IList_get_Item_m1435182141 (JContainer_t3538280255 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C"  void JContainer_System_Collections_IList_set_Item_m1194847496 (JContainer_t3538280255 * __this, int32_t ___index0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JContainer::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void JContainer_System_Collections_ICollection_CopyTo_m523728490 (JContainer_t3538280255 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Linq.JContainer::get_Count()
extern "C"  int32_t JContainer_get_Count_m269519266 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JContainer::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool JContainer_System_Collections_ICollection_get_IsSynchronized_m287551878 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Linq.JContainer::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * JContainer_System_Collections_ICollection_get_SyncRoot_m490486244 (JContainer_t3538280255 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
