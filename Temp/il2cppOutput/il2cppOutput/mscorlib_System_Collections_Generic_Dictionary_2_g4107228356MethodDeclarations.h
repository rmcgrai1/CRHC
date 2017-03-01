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

// System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct Dictionary_2_t4107228356;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1902082073;
// System.Collections.Generic.IDictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct IDictionary_2_t2106311777;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>[]
struct KeyValuePair_2U5BU5D_t565043215;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>>
struct IEnumerator_1_t3635064701;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct KeyCollection_t2295758831;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct ValueCollection_t2810288199;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_21864573578.h"
#include "mscorlib_System_Array3829468939.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_JsonS220200932.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E1132285762.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::.ctor()
extern "C"  void Dictionary_2__ctor_m668057229_gshared (Dictionary_2_t4107228356 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m668057229(__this, method) ((  void (*) (Dictionary_2_t4107228356 *, const MethodInfo*))Dictionary_2__ctor_m668057229_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m1084086142_gshared (Dictionary_2_t4107228356 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m1084086142(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t4107228356 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m1084086142_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m3471180991_gshared (Dictionary_2_t4107228356 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m3471180991(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t4107228356 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m3471180991_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m4023777306_gshared (Dictionary_2_t4107228356 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m4023777306(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t4107228356 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m4023777306_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m510708650_gshared (Dictionary_2_t4107228356 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m510708650(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t4107228356 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m510708650_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m3079724112_gshared (Dictionary_2_t4107228356 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m3079724112(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t4107228356 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m3079724112_gshared)(__this, ___info0, ___context1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::System.Collections.IDictionary.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1462227663_gshared (Dictionary_2_t4107228356 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1462227663(__this, method) ((  bool (*) (Dictionary_2_t4107228356 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m1462227663_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m1017001461_gshared (Dictionary_2_t4107228356 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m1017001461(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t4107228356 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m1017001461_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m3624476216_gshared (Dictionary_2_t4107228356 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m3624476216(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t4107228356 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m3624476216_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m3657245895_gshared (Dictionary_2_t4107228356 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m3657245895(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t4107228356 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m3657245895_gshared)(__this, ___key0, ___value1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m2471383347_gshared (Dictionary_2_t4107228356 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m2471383347(__this, ___key0, method) ((  bool (*) (Dictionary_2_t4107228356 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m2471383347_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m2907914508_gshared (Dictionary_2_t4107228356 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m2907914508(__this, ___key0, method) ((  void (*) (Dictionary_2_t4107228356 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m2907914508_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1797573057_gshared (Dictionary_2_t4107228356 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1797573057(__this, method) ((  bool (*) (Dictionary_2_t4107228356 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m1797573057_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2258841501_gshared (Dictionary_2_t4107228356 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2258841501(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t4107228356 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2258841501_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3118046283_gshared (Dictionary_2_t4107228356 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3118046283(__this, method) ((  bool (*) (Dictionary_2_t4107228356 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3118046283_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m629704534_gshared (Dictionary_2_t4107228356 * __this, KeyValuePair_2_t1864573578  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m629704534(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t4107228356 *, KeyValuePair_2_t1864573578 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m629704534_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1033074154_gshared (Dictionary_2_t4107228356 * __this, KeyValuePair_2_t1864573578  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1033074154(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t4107228356 *, KeyValuePair_2_t1864573578 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m1033074154_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2601282114_gshared (Dictionary_2_t4107228356 * __this, KeyValuePair_2U5BU5D_t565043215* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2601282114(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t4107228356 *, KeyValuePair_2U5BU5D_t565043215*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2601282114_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2263667365_gshared (Dictionary_2_t4107228356 * __this, KeyValuePair_2_t1864573578  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2263667365(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t4107228356 *, KeyValuePair_2_t1864573578 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m2263667365_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m2247492093_gshared (Dictionary_2_t4107228356 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m2247492093(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t4107228356 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m2247492093_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4213651972_gshared (Dictionary_2_t4107228356 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4213651972(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t4107228356 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m4213651972_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1624892867_gshared (Dictionary_2_t4107228356 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1624892867(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t4107228356 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m1624892867_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3771263326_gshared (Dictionary_2_t4107228356 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3771263326(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t4107228356 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m3771263326_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m3192371329_gshared (Dictionary_2_t4107228356 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m3192371329(__this, method) ((  int32_t (*) (Dictionary_2_t4107228356 *, const MethodInfo*))Dictionary_2_get_Count_m3192371329_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::get_Item(TKey)
extern "C"  int32_t Dictionary_2_get_Item_m3750486342_gshared (Dictionary_2_t4107228356 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m3750486342(__this, ___key0, method) ((  int32_t (*) (Dictionary_2_t4107228356 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m3750486342_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m2219486461_gshared (Dictionary_2_t4107228356 * __this, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m2219486461(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t4107228356 *, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m2219486461_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m3765254529_gshared (Dictionary_2_t4107228356 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m3765254529(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t4107228356 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m3765254529_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m2202005962_gshared (Dictionary_2_t4107228356 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m2202005962(__this, ___size0, method) ((  void (*) (Dictionary_2_t4107228356 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m2202005962_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m4152126548_gshared (Dictionary_2_t4107228356 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m4152126548(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t4107228356 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m4152126548_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t1864573578  Dictionary_2_make_pair_m103263974_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m103263974(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t1864573578  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m103263974_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m4189972732_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m4189972732(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m4189972732_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::pick_value(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_value_m1122109964_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m1122109964(__this /* static, unused */, ___key0, ___value1, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m1122109964_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m93328105_gshared (Dictionary_2_t4107228356 * __this, KeyValuePair_2U5BU5D_t565043215* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m93328105(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t4107228356 *, KeyValuePair_2U5BU5D_t565043215*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m93328105_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::Resize()
extern "C"  void Dictionary_2_Resize_m3228126639_gshared (Dictionary_2_t4107228356 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m3228126639(__this, method) ((  void (*) (Dictionary_2_t4107228356 *, const MethodInfo*))Dictionary_2_Resize_m3228126639_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m2075719558_gshared (Dictionary_2_t4107228356 * __this, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m2075719558(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t4107228356 *, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_Add_m2075719558_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::Clear()
extern "C"  void Dictionary_2_Clear_m2618633242_gshared (Dictionary_2_t4107228356 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m2618633242(__this, method) ((  void (*) (Dictionary_2_t4107228356 *, const MethodInfo*))Dictionary_2_Clear_m2618633242_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m2703384478_gshared (Dictionary_2_t4107228356 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m2703384478(__this, ___key0, method) ((  bool (*) (Dictionary_2_t4107228356 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m2703384478_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m194358990_gshared (Dictionary_2_t4107228356 * __this, int32_t ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m194358990(__this, ___value0, method) ((  bool (*) (Dictionary_2_t4107228356 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m194358990_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m1131892937_gshared (Dictionary_2_t4107228356 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m1131892937(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t4107228356 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m1131892937_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m2029492429_gshared (Dictionary_2_t4107228356 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m2029492429(__this, ___sender0, method) ((  void (*) (Dictionary_2_t4107228356 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m2029492429_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m2858401170_gshared (Dictionary_2_t4107228356 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m2858401170(__this, ___key0, method) ((  bool (*) (Dictionary_2_t4107228356 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m2858401170_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m2045392349_gshared (Dictionary_2_t4107228356 * __this, Il2CppObject * ___key0, int32_t* ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m2045392349(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t4107228356 *, Il2CppObject *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m2045392349_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::get_Keys()
extern "C"  KeyCollection_t2295758831 * Dictionary_2_get_Keys_m1320880914_gshared (Dictionary_2_t4107228356 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1320880914(__this, method) ((  KeyCollection_t2295758831 * (*) (Dictionary_2_t4107228356 *, const MethodInfo*))Dictionary_2_get_Keys_m1320880914_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::get_Values()
extern "C"  ValueCollection_t2810288199 * Dictionary_2_get_Values_m2991098394_gshared (Dictionary_2_t4107228356 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m2991098394(__this, method) ((  ValueCollection_t2810288199 * (*) (Dictionary_2_t4107228356 *, const MethodInfo*))Dictionary_2_get_Values_m2991098394_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m3444752047_gshared (Dictionary_2_t4107228356 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m3444752047(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t4107228356 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m3444752047_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::ToTValue(System.Object)
extern "C"  int32_t Dictionary_2_ToTValue_m3470950295_gshared (Dictionary_2_t4107228356 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m3470950295(__this, ___value0, method) ((  int32_t (*) (Dictionary_2_t4107228356 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m3470950295_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m1591265637_gshared (Dictionary_2_t4107228356 * __this, KeyValuePair_2_t1864573578  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m1591265637(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t4107228356 *, KeyValuePair_2_t1864573578 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m1591265637_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::GetEnumerator()
extern "C"  Enumerator_t1132285762  Dictionary_2_GetEnumerator_m127831198_gshared (Dictionary_2_t4107228356 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m127831198(__this, method) ((  Enumerator_t1132285762  (*) (Dictionary_2_t4107228356 *, const MethodInfo*))Dictionary_2_GetEnumerator_m127831198_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__0_m2583368319_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m2583368319(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m2583368319_gshared)(__this /* static, unused */, ___key0, ___value1, method)
