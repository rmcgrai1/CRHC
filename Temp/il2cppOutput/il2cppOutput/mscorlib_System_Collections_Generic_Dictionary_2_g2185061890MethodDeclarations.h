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

// System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>
struct Dictionary_2_t2185061890;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1902082073;
// System.Collections.Generic.IDictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>
struct IDictionary_2_t184145311;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t228987430;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>[]
struct KeyValuePair_2U5BU5D_t1682693145;
// System.Array
struct Il2CppArray;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>>
struct IEnumerator_1_t1712898235;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>
struct KeyCollection_t373592365;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>
struct ValueCollection_t888121733;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_Serialization228987430.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_24237374408.h"
#include "mscorlib_System_Array3829468939.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_Primitiv2593001762.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_E3505086592.h"
#include "mscorlib_System_Collections_DictionaryEntry3048875398.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::.ctor()
extern "C"  void Dictionary_2__ctor_m3940990942_gshared (Dictionary_2_t2185061890 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m3940990942(__this, method) ((  void (*) (Dictionary_2_t2185061890 *, const MethodInfo*))Dictionary_2__ctor_m3940990942_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m2570782169_gshared (Dictionary_2_t2185061890 * __this, Il2CppObject* ___comparer0, const MethodInfo* method);
#define Dictionary_2__ctor_m2570782169(__this, ___comparer0, method) ((  void (*) (Dictionary_2_t2185061890 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m2570782169_gshared)(__this, ___comparer0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void Dictionary_2__ctor_m164054140_gshared (Dictionary_2_t2185061890 * __this, Il2CppObject* ___dictionary0, const MethodInfo* method);
#define Dictionary_2__ctor_m164054140(__this, ___dictionary0, method) ((  void (*) (Dictionary_2_t2185061890 *, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m164054140_gshared)(__this, ___dictionary0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::.ctor(System.Int32)
extern "C"  void Dictionary_2__ctor_m185923199_gshared (Dictionary_2_t2185061890 * __this, int32_t ___capacity0, const MethodInfo* method);
#define Dictionary_2__ctor_m185923199(__this, ___capacity0, method) ((  void (*) (Dictionary_2_t2185061890 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m185923199_gshared)(__this, ___capacity0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2__ctor_m289032207_gshared (Dictionary_2_t2185061890 * __this, Il2CppObject* ___dictionary0, Il2CppObject* ___comparer1, const MethodInfo* method);
#define Dictionary_2__ctor_m289032207(__this, ___dictionary0, ___comparer1, method) ((  void (*) (Dictionary_2_t2185061890 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))Dictionary_2__ctor_m289032207_gshared)(__this, ___dictionary0, ___comparer1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2__ctor_m407029165_gshared (Dictionary_2_t2185061890 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2__ctor_m407029165(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t2185061890 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2__ctor_m407029165_gshared)(__this, ___info0, ___context1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::System.Collections.IDictionary.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m2406890630_gshared (Dictionary_2_t2185061890 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m2406890630(__this, method) ((  bool (*) (Dictionary_2_t2185061890 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_IsReadOnly_m2406890630_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_get_Item_m668190374_gshared (Dictionary_2_t2185061890 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m668190374(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t2185061890 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m668190374_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_set_Item_m3958406913_gshared (Dictionary_2_t2185061890 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m3958406913(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2185061890 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m3958406913_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Add_m679358244_gshared (Dictionary_2_t2185061890 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m679358244(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2185061890 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m679358244_gshared)(__this, ___key0, ___value1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool Dictionary_2_System_Collections_IDictionary_Contains_m3849566908_gshared (Dictionary_2_t2185061890 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m3849566908(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2185061890 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m3849566908_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::System.Collections.IDictionary.Remove(System.Object)
extern "C"  void Dictionary_2_System_Collections_IDictionary_Remove_m3031807453_gshared (Dictionary_2_t2185061890 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m3031807453(__this, ___key0, method) ((  void (*) (Dictionary_2_t2185061890 *, Il2CppObject *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m3031807453_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3688936638_gshared (Dictionary_2_t2185061890 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3688936638(__this, method) ((  bool (*) (Dictionary_2_t2185061890 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m3688936638_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2609939994_gshared (Dictionary_2_t2185061890 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2609939994(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2185061890 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m2609939994_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3634782608_gshared (Dictionary_2_t2185061890 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3634782608(__this, method) ((  bool (*) (Dictionary_2_t2185061890 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m3634782608_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3127853765_gshared (Dictionary_2_t2185061890 * __this, KeyValuePair_2_t4237374408  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3127853765(__this, ___keyValuePair0, method) ((  void (*) (Dictionary_2_t2185061890 *, KeyValuePair_2_t4237374408 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m3127853765_gshared)(__this, ___keyValuePair0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3039222155_gshared (Dictionary_2_t2185061890 * __this, KeyValuePair_2_t4237374408  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3039222155(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t2185061890 *, KeyValuePair_2_t4237374408 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m3039222155_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2744358633_gshared (Dictionary_2_t2185061890 * __this, KeyValuePair_2U5BU5D_t1682693145* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2744358633(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2185061890 *, KeyValuePair_2U5BU5D_t1682693145*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m2744358633_gshared)(__this, ___array0, ___index1, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m705853402_gshared (Dictionary_2_t2185061890 * __this, KeyValuePair_2_t4237374408  ___keyValuePair0, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m705853402(__this, ___keyValuePair0, method) ((  bool (*) (Dictionary_2_t2185061890 *, KeyValuePair_2_t4237374408 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m705853402_gshared)(__this, ___keyValuePair0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void Dictionary_2_System_Collections_ICollection_CopyTo_m3104457754_gshared (Dictionary_2_t2185061890 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m3104457754(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2185061890 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m3104457754_gshared)(__this, ___array0, ___index1, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2525593851_gshared (Dictionary_2_t2185061890 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2525593851(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2185061890 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m2525593851_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C"  Il2CppObject* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m383372488_gshared (Dictionary_2_t2185061890 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m383372488(__this, method) ((  Il2CppObject* (*) (Dictionary_2_t2185061890 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m383372488_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m4027761853_gshared (Dictionary_2_t2185061890 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m4027761853(__this, method) ((  Il2CppObject * (*) (Dictionary_2_t2185061890 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m4027761853_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::get_Count()
extern "C"  int32_t Dictionary_2_get_Count_m166985278_gshared (Dictionary_2_t2185061890 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m166985278(__this, method) ((  int32_t (*) (Dictionary_2_t2185061890 *, const MethodInfo*))Dictionary_2_get_Count_m166985278_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::get_Item(TKey)
extern "C"  int32_t Dictionary_2_get_Item_m472200709_gshared (Dictionary_2_t2185061890 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_get_Item_m472200709(__this, ___key0, method) ((  int32_t (*) (Dictionary_2_t2185061890 *, Il2CppObject *, const MethodInfo*))Dictionary_2_get_Item_m472200709_gshared)(__this, ___key0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::set_Item(TKey,TValue)
extern "C"  void Dictionary_2_set_Item_m823462560_gshared (Dictionary_2_t2185061890 * __this, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_set_Item_m823462560(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2185061890 *, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m823462560_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C"  void Dictionary_2_Init_m1374628934_gshared (Dictionary_2_t2185061890 * __this, int32_t ___capacity0, Il2CppObject* ___hcp1, const MethodInfo* method);
#define Dictionary_2_Init_m1374628934(__this, ___capacity0, ___hcp1, method) ((  void (*) (Dictionary_2_t2185061890 *, int32_t, Il2CppObject*, const MethodInfo*))Dictionary_2_Init_m1374628934_gshared)(__this, ___capacity0, ___hcp1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::InitArrays(System.Int32)
extern "C"  void Dictionary_2_InitArrays_m794929715_gshared (Dictionary_2_t2185061890 * __this, int32_t ___size0, const MethodInfo* method);
#define Dictionary_2_InitArrays_m794929715(__this, ___size0, method) ((  void (*) (Dictionary_2_t2185061890 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m794929715_gshared)(__this, ___size0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::CopyToCheck(System.Array,System.Int32)
extern "C"  void Dictionary_2_CopyToCheck_m1724610469_gshared (Dictionary_2_t2185061890 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m1724610469(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2185061890 *, Il2CppArray *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m1724610469_gshared)(__this, ___array0, ___index1, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::make_pair(TKey,TValue)
extern "C"  KeyValuePair_2_t4237374408  Dictionary_2_make_pair_m4234639647_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_make_pair_m4234639647(__this /* static, unused */, ___key0, ___value1, method) ((  KeyValuePair_2_t4237374408  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m4234639647_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::pick_key(TKey,TValue)
extern "C"  Il2CppObject * Dictionary_2_pick_key_m2367049503_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_key_m2367049503(__this /* static, unused */, ___key0, ___value1, method) ((  Il2CppObject * (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m2367049503_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::pick_value(TKey,TValue)
extern "C"  int32_t Dictionary_2_pick_value_m304293263_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_pick_value_m304293263(__this /* static, unused */, ___key0, ___value1, method) ((  int32_t (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m304293263_gshared)(__this /* static, unused */, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void Dictionary_2_CopyTo_m3952253252_gshared (Dictionary_2_t2185061890 * __this, KeyValuePair_2U5BU5D_t1682693145* ___array0, int32_t ___index1, const MethodInfo* method);
#define Dictionary_2_CopyTo_m3952253252(__this, ___array0, ___index1, method) ((  void (*) (Dictionary_2_t2185061890 *, KeyValuePair_2U5BU5D_t1682693145*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m3952253252_gshared)(__this, ___array0, ___index1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::Resize()
extern "C"  void Dictionary_2_Resize_m1454764156_gshared (Dictionary_2_t2185061890 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m1454764156(__this, method) ((  void (*) (Dictionary_2_t2185061890 *, const MethodInfo*))Dictionary_2_Resize_m1454764156_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::Add(TKey,TValue)
extern "C"  void Dictionary_2_Add_m818881091_gshared (Dictionary_2_t2185061890 * __this, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_Add_m818881091(__this, ___key0, ___value1, method) ((  void (*) (Dictionary_2_t2185061890 *, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_Add_m818881091_gshared)(__this, ___key0, ___value1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::Clear()
extern "C"  void Dictionary_2_Clear_m1966326179_gshared (Dictionary_2_t2185061890 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m1966326179(__this, method) ((  void (*) (Dictionary_2_t2185061890 *, const MethodInfo*))Dictionary_2_Clear_m1966326179_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::ContainsKey(TKey)
extern "C"  bool Dictionary_2_ContainsKey_m3143116061_gshared (Dictionary_2_t2185061890 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m3143116061(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2185061890 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ContainsKey_m3143116061_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::ContainsValue(TValue)
extern "C"  bool Dictionary_2_ContainsValue_m3436428109_gshared (Dictionary_2_t2185061890 * __this, int32_t ___value0, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m3436428109(__this, ___value0, method) ((  bool (*) (Dictionary_2_t2185061890 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m3436428109_gshared)(__this, ___value0, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C"  void Dictionary_2_GetObjectData_m3373591918_gshared (Dictionary_2_t2185061890 * __this, SerializationInfo_t228987430 * ___info0, StreamingContext_t1417235061  ___context1, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m3373591918(__this, ___info0, ___context1, method) ((  void (*) (Dictionary_2_t2185061890 *, SerializationInfo_t228987430 *, StreamingContext_t1417235061 , const MethodInfo*))Dictionary_2_GetObjectData_m3373591918_gshared)(__this, ___info0, ___context1, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::OnDeserialization(System.Object)
extern "C"  void Dictionary_2_OnDeserialization_m540693984_gshared (Dictionary_2_t2185061890 * __this, Il2CppObject * ___sender0, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m540693984(__this, ___sender0, method) ((  void (*) (Dictionary_2_t2185061890 *, Il2CppObject *, const MethodInfo*))Dictionary_2_OnDeserialization_m540693984_gshared)(__this, ___sender0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::Remove(TKey)
extern "C"  bool Dictionary_2_Remove_m1750192275_gshared (Dictionary_2_t2185061890 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_Remove_m1750192275(__this, ___key0, method) ((  bool (*) (Dictionary_2_t2185061890 *, Il2CppObject *, const MethodInfo*))Dictionary_2_Remove_m1750192275_gshared)(__this, ___key0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::TryGetValue(TKey,TValue&)
extern "C"  bool Dictionary_2_TryGetValue_m460423068_gshared (Dictionary_2_t2185061890 * __this, Il2CppObject * ___key0, int32_t* ___value1, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m460423068(__this, ___key0, ___value1, method) ((  bool (*) (Dictionary_2_t2185061890 *, Il2CppObject *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m460423068_gshared)(__this, ___key0, ___value1, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::get_Keys()
extern "C"  KeyCollection_t373592365 * Dictionary_2_get_Keys_m1698967001_gshared (Dictionary_2_t2185061890 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m1698967001(__this, method) ((  KeyCollection_t373592365 * (*) (Dictionary_2_t2185061890 *, const MethodInfo*))Dictionary_2_get_Keys_m1698967001_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::get_Values()
extern "C"  ValueCollection_t888121733 * Dictionary_2_get_Values_m773151537_gshared (Dictionary_2_t2185061890 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m773151537(__this, method) ((  ValueCollection_t888121733 * (*) (Dictionary_2_t2185061890 *, const MethodInfo*))Dictionary_2_get_Values_m773151537_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::ToTKey(System.Object)
extern "C"  Il2CppObject * Dictionary_2_ToTKey_m876044186_gshared (Dictionary_2_t2185061890 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define Dictionary_2_ToTKey_m876044186(__this, ___key0, method) ((  Il2CppObject * (*) (Dictionary_2_t2185061890 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTKey_m876044186_gshared)(__this, ___key0, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::ToTValue(System.Object)
extern "C"  int32_t Dictionary_2_ToTValue_m3387045842_gshared (Dictionary_2_t2185061890 * __this, Il2CppObject * ___value0, const MethodInfo* method);
#define Dictionary_2_ToTValue_m3387045842(__this, ___value0, method) ((  int32_t (*) (Dictionary_2_t2185061890 *, Il2CppObject *, const MethodInfo*))Dictionary_2_ToTValue_m3387045842_gshared)(__this, ___value0, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool Dictionary_2_ContainsKeyValuePair_m3676930756_gshared (Dictionary_2_t2185061890 * __this, KeyValuePair_2_t4237374408  ___pair0, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m3676930756(__this, ___pair0, method) ((  bool (*) (Dictionary_2_t2185061890 *, KeyValuePair_2_t4237374408 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m3676930756_gshared)(__this, ___pair0, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::GetEnumerator()
extern "C"  Enumerator_t3505086592  Dictionary_2_GetEnumerator_m2486998251_gshared (Dictionary_2_t2185061890 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m2486998251(__this, method) ((  Enumerator_t3505086592  (*) (Dictionary_2_t2185061890 *, const MethodInfo*))Dictionary_2_GetEnumerator_m2486998251_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,Newtonsoft.Json.Utilities.PrimitiveTypeCode>::<CopyTo>m__0(TKey,TValue)
extern "C"  DictionaryEntry_t3048875398  Dictionary_2_U3CCopyToU3Em__0_m1495611002_gshared (Il2CppObject * __this /* static, unused */, Il2CppObject * ___key0, int32_t ___value1, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m1495611002(__this /* static, unused */, ___key0, ___value1, method) ((  DictionaryEntry_t3048875398  (*) (Il2CppObject * /* static, unused */, Il2CppObject *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m1495611002_gshared)(__this /* static, unused */, ___key0, ___value1, method)
