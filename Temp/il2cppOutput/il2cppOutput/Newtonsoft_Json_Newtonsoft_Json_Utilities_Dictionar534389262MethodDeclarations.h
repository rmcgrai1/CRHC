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

// Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>
struct DictionaryWrapper_2_t534389262;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2854920344;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t1809345768;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t259680273;
// System.Array
struct Il2CppArray;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_g38854645.h"
#include "mscorlib_System_Array3829468939.h"

// System.Void Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C"  void DictionaryWrapper_2_Add_m3686737643_gshared (DictionaryWrapper_2_t534389262 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define DictionaryWrapper_2_Add_m3686737643(__this, ___key0, ___value1, method) ((  void (*) (DictionaryWrapper_2_t534389262 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))DictionaryWrapper_2_Add_m3686737643_gshared)(__this, ___key0, ___value1, method)
// System.Boolean Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C"  bool DictionaryWrapper_2_ContainsKey_m1965623705_gshared (DictionaryWrapper_2_t534389262 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define DictionaryWrapper_2_ContainsKey_m1965623705(__this, ___key0, method) ((  bool (*) (DictionaryWrapper_2_t534389262 *, Il2CppObject *, const MethodInfo*))DictionaryWrapper_2_ContainsKey_m1965623705_gshared)(__this, ___key0, method)
// System.Boolean Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::Remove(TKey)
extern "C"  bool DictionaryWrapper_2_Remove_m1156754979_gshared (DictionaryWrapper_2_t534389262 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define DictionaryWrapper_2_Remove_m1156754979(__this, ___key0, method) ((  bool (*) (DictionaryWrapper_2_t534389262 *, Il2CppObject *, const MethodInfo*))DictionaryWrapper_2_Remove_m1156754979_gshared)(__this, ___key0, method)
// System.Boolean Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C"  bool DictionaryWrapper_2_TryGetValue_m801329798_gshared (DictionaryWrapper_2_t534389262 * __this, Il2CppObject * ___key0, Il2CppObject ** ___value1, const MethodInfo* method);
#define DictionaryWrapper_2_TryGetValue_m801329798(__this, ___key0, ___value1, method) ((  bool (*) (DictionaryWrapper_2_t534389262 *, Il2CppObject *, Il2CppObject **, const MethodInfo*))DictionaryWrapper_2_TryGetValue_m801329798_gshared)(__this, ___key0, ___value1, method)
// TValue Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::get_Item(TKey)
extern "C"  Il2CppObject * DictionaryWrapper_2_get_Item_m1082824177_gshared (DictionaryWrapper_2_t534389262 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define DictionaryWrapper_2_get_Item_m1082824177(__this, ___key0, method) ((  Il2CppObject * (*) (DictionaryWrapper_2_t534389262 *, Il2CppObject *, const MethodInfo*))DictionaryWrapper_2_get_Item_m1082824177_gshared)(__this, ___key0, method)
// System.Void Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C"  void DictionaryWrapper_2_set_Item_m3013806018_gshared (DictionaryWrapper_2_t534389262 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define DictionaryWrapper_2_set_Item_m3013806018(__this, ___key0, ___value1, method) ((  void (*) (DictionaryWrapper_2_t534389262 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))DictionaryWrapper_2_set_Item_m3013806018_gshared)(__this, ___key0, ___value1, method)
// System.Void Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  void DictionaryWrapper_2_Add_m1979540610_gshared (DictionaryWrapper_2_t534389262 * __this, KeyValuePair_2_t38854645  ___item0, const MethodInfo* method);
#define DictionaryWrapper_2_Add_m1979540610(__this, ___item0, method) ((  void (*) (DictionaryWrapper_2_t534389262 *, KeyValuePair_2_t38854645 , const MethodInfo*))DictionaryWrapper_2_Add_m1979540610_gshared)(__this, ___item0, method)
// System.Void Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::Clear()
extern "C"  void DictionaryWrapper_2_Clear_m832349547_gshared (DictionaryWrapper_2_t534389262 * __this, const MethodInfo* method);
#define DictionaryWrapper_2_Clear_m832349547(__this, method) ((  void (*) (DictionaryWrapper_2_t534389262 *, const MethodInfo*))DictionaryWrapper_2_Clear_m832349547_gshared)(__this, method)
// System.Boolean Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool DictionaryWrapper_2_Contains_m1832734182_gshared (DictionaryWrapper_2_t534389262 * __this, KeyValuePair_2_t38854645  ___item0, const MethodInfo* method);
#define DictionaryWrapper_2_Contains_m1832734182(__this, ___item0, method) ((  bool (*) (DictionaryWrapper_2_t534389262 *, KeyValuePair_2_t38854645 , const MethodInfo*))DictionaryWrapper_2_Contains_m1832734182_gshared)(__this, ___item0, method)
// System.Void Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C"  void DictionaryWrapper_2_CopyTo_m1700247622_gshared (DictionaryWrapper_2_t534389262 * __this, KeyValuePair_2U5BU5D_t2854920344* ___array0, int32_t ___arrayIndex1, const MethodInfo* method);
#define DictionaryWrapper_2_CopyTo_m1700247622(__this, ___array0, ___arrayIndex1, method) ((  void (*) (DictionaryWrapper_2_t534389262 *, KeyValuePair_2U5BU5D_t2854920344*, int32_t, const MethodInfo*))DictionaryWrapper_2_CopyTo_m1700247622_gshared)(__this, ___array0, ___arrayIndex1, method)
// System.Int32 Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::get_Count()
extern "C"  int32_t DictionaryWrapper_2_get_Count_m3364737124_gshared (DictionaryWrapper_2_t534389262 * __this, const MethodInfo* method);
#define DictionaryWrapper_2_get_Count_m3364737124(__this, method) ((  int32_t (*) (DictionaryWrapper_2_t534389262 *, const MethodInfo*))DictionaryWrapper_2_get_Count_m3364737124_gshared)(__this, method)
// System.Boolean Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::get_IsReadOnly()
extern "C"  bool DictionaryWrapper_2_get_IsReadOnly_m3748127951_gshared (DictionaryWrapper_2_t534389262 * __this, const MethodInfo* method);
#define DictionaryWrapper_2_get_IsReadOnly_m3748127951(__this, method) ((  bool (*) (DictionaryWrapper_2_t534389262 *, const MethodInfo*))DictionaryWrapper_2_get_IsReadOnly_m3748127951_gshared)(__this, method)
// System.Boolean Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C"  bool DictionaryWrapper_2_Remove_m279679905_gshared (DictionaryWrapper_2_t534389262 * __this, KeyValuePair_2_t38854645  ___item0, const MethodInfo* method);
#define DictionaryWrapper_2_Remove_m279679905(__this, ___item0, method) ((  bool (*) (DictionaryWrapper_2_t534389262 *, KeyValuePair_2_t38854645 , const MethodInfo*))DictionaryWrapper_2_Remove_m279679905_gshared)(__this, ___item0, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::GetEnumerator()
extern "C"  Il2CppObject* DictionaryWrapper_2_GetEnumerator_m3065606503_gshared (DictionaryWrapper_2_t534389262 * __this, const MethodInfo* method);
#define DictionaryWrapper_2_GetEnumerator_m3065606503(__this, method) ((  Il2CppObject* (*) (DictionaryWrapper_2_t534389262 *, const MethodInfo*))DictionaryWrapper_2_GetEnumerator_m3065606503_gshared)(__this, method)
// System.Collections.IEnumerator Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * DictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3984517971_gshared (DictionaryWrapper_2_t534389262 * __this, const MethodInfo* method);
#define DictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3984517971(__this, method) ((  Il2CppObject * (*) (DictionaryWrapper_2_t534389262 *, const MethodInfo*))DictionaryWrapper_2_System_Collections_IEnumerable_GetEnumerator_m3984517971_gshared)(__this, method)
// System.Void Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C"  void DictionaryWrapper_2_System_Collections_IDictionary_Add_m2856669754_gshared (DictionaryWrapper_2_t534389262 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define DictionaryWrapper_2_System_Collections_IDictionary_Add_m2856669754(__this, ___key0, ___value1, method) ((  void (*) (DictionaryWrapper_2_t534389262 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))DictionaryWrapper_2_System_Collections_IDictionary_Add_m2856669754_gshared)(__this, ___key0, ___value1, method)
// System.Object Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C"  Il2CppObject * DictionaryWrapper_2_System_Collections_IDictionary_get_Item_m2524309380_gshared (DictionaryWrapper_2_t534389262 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define DictionaryWrapper_2_System_Collections_IDictionary_get_Item_m2524309380(__this, ___key0, method) ((  Il2CppObject * (*) (DictionaryWrapper_2_t534389262 *, Il2CppObject *, const MethodInfo*))DictionaryWrapper_2_System_Collections_IDictionary_get_Item_m2524309380_gshared)(__this, ___key0, method)
// System.Void Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C"  void DictionaryWrapper_2_System_Collections_IDictionary_set_Item_m401489185_gshared (DictionaryWrapper_2_t534389262 * __this, Il2CppObject * ___key0, Il2CppObject * ___value1, const MethodInfo* method);
#define DictionaryWrapper_2_System_Collections_IDictionary_set_Item_m401489185(__this, ___key0, ___value1, method) ((  void (*) (DictionaryWrapper_2_t534389262 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))DictionaryWrapper_2_System_Collections_IDictionary_set_Item_m401489185_gshared)(__this, ___key0, ___value1, method)
// System.Collections.IDictionaryEnumerator Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C"  Il2CppObject * DictionaryWrapper_2_System_Collections_IDictionary_GetEnumerator_m1949079865_gshared (DictionaryWrapper_2_t534389262 * __this, const MethodInfo* method);
#define DictionaryWrapper_2_System_Collections_IDictionary_GetEnumerator_m1949079865(__this, method) ((  Il2CppObject * (*) (DictionaryWrapper_2_t534389262 *, const MethodInfo*))DictionaryWrapper_2_System_Collections_IDictionary_GetEnumerator_m1949079865_gshared)(__this, method)
// System.Boolean Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C"  bool DictionaryWrapper_2_System_Collections_IDictionary_Contains_m836306478_gshared (DictionaryWrapper_2_t534389262 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define DictionaryWrapper_2_System_Collections_IDictionary_Contains_m836306478(__this, ___key0, method) ((  bool (*) (DictionaryWrapper_2_t534389262 *, Il2CppObject *, const MethodInfo*))DictionaryWrapper_2_System_Collections_IDictionary_Contains_m836306478_gshared)(__this, ___key0, method)
// System.Void Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::Remove(System.Object)
extern "C"  void DictionaryWrapper_2_Remove_m743288514_gshared (DictionaryWrapper_2_t534389262 * __this, Il2CppObject * ___key0, const MethodInfo* method);
#define DictionaryWrapper_2_Remove_m743288514(__this, ___key0, method) ((  void (*) (DictionaryWrapper_2_t534389262 *, Il2CppObject *, const MethodInfo*))DictionaryWrapper_2_Remove_m743288514_gshared)(__this, ___key0, method)
// System.Void Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C"  void DictionaryWrapper_2_System_Collections_ICollection_CopyTo_m468394008_gshared (DictionaryWrapper_2_t534389262 * __this, Il2CppArray * ___array0, int32_t ___index1, const MethodInfo* method);
#define DictionaryWrapper_2_System_Collections_ICollection_CopyTo_m468394008(__this, ___array0, ___index1, method) ((  void (*) (DictionaryWrapper_2_t534389262 *, Il2CppArray *, int32_t, const MethodInfo*))DictionaryWrapper_2_System_Collections_ICollection_CopyTo_m468394008_gshared)(__this, ___array0, ___index1, method)
// System.Boolean Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C"  bool DictionaryWrapper_2_System_Collections_ICollection_get_IsSynchronized_m534723940_gshared (DictionaryWrapper_2_t534389262 * __this, const MethodInfo* method);
#define DictionaryWrapper_2_System_Collections_ICollection_get_IsSynchronized_m534723940(__this, method) ((  bool (*) (DictionaryWrapper_2_t534389262 *, const MethodInfo*))DictionaryWrapper_2_System_Collections_ICollection_get_IsSynchronized_m534723940_gshared)(__this, method)
// System.Object Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C"  Il2CppObject * DictionaryWrapper_2_System_Collections_ICollection_get_SyncRoot_m3335863000_gshared (DictionaryWrapper_2_t534389262 * __this, const MethodInfo* method);
#define DictionaryWrapper_2_System_Collections_ICollection_get_SyncRoot_m3335863000(__this, method) ((  Il2CppObject * (*) (DictionaryWrapper_2_t534389262 *, const MethodInfo*))DictionaryWrapper_2_System_Collections_ICollection_get_SyncRoot_m3335863000_gshared)(__this, method)
// System.Object Newtonsoft.Json.Utilities.DictionaryWrapper`2<System.Object,System.Object>::get_UnderlyingDictionary()
extern "C"  Il2CppObject * DictionaryWrapper_2_get_UnderlyingDictionary_m3110631007_gshared (DictionaryWrapper_2_t534389262 * __this, const MethodInfo* method);
#define DictionaryWrapper_2_get_UnderlyingDictionary_m3110631007(__this, method) ((  Il2CppObject * (*) (DictionaryWrapper_2_t534389262 *, const MethodInfo*))DictionaryWrapper_2_get_UnderlyingDictionary_m3110631007_gshared)(__this, method)
