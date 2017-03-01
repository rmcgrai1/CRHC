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

// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t2851816542;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2612818049;
// System.Collections.IList
struct IList_t3321498491;
// System.Array
struct Il2CppArray;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Array3829468939.h"

// System.Boolean Newtonsoft.Json.Utilities.CollectionUtils::IsDictionaryType(System.Type)
extern "C"  bool CollectionUtils_IsDictionaryType_m897705489 (Il2CppObject * __this /* static, unused */, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.CollectionUtils::ResolveEnumerableCollectionConstructor(System.Type,System.Type)
extern "C"  ConstructorInfo_t2851816542 * CollectionUtils_ResolveEnumerableCollectionConstructor_m4213576267 (Il2CppObject * __this /* static, unused */, Type_t * ___collectionType0, Type_t * ___collectionItemType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.CollectionUtils::ResolveEnumerableCollectionConstructor(System.Type,System.Type,System.Type)
extern "C"  ConstructorInfo_t2851816542 * CollectionUtils_ResolveEnumerableCollectionConstructor_m1332070450 (Il2CppObject * __this /* static, unused */, Type_t * ___collectionType0, Type_t * ___collectionItemType1, Type_t * ___constructorArgumentType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> Newtonsoft.Json.Utilities.CollectionUtils::GetDimensions(System.Collections.IList,System.Int32)
extern "C"  Il2CppObject* CollectionUtils_GetDimensions_m3057190988 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___values0, int32_t ___dimensionsCount1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.CollectionUtils::CopyFromJaggedToMultidimensionalArray(System.Collections.IList,System.Array,System.Int32[])
extern "C"  void CollectionUtils_CopyFromJaggedToMultidimensionalArray_m1084084105 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___values0, Il2CppArray * ___multidimensionalArray1, Int32U5BU5D_t3030399641* ___indices2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Utilities.CollectionUtils::JaggedArrayGetValue(System.Collections.IList,System.Int32[])
extern "C"  Il2CppObject * CollectionUtils_JaggedArrayGetValue_m3821536927 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___values0, Int32U5BU5D_t3030399641* ___indices1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array Newtonsoft.Json.Utilities.CollectionUtils::ToMultidimensionalArray(System.Collections.IList,System.Type,System.Int32)
extern "C"  Il2CppArray * CollectionUtils_ToMultidimensionalArray_m2480233284 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___values0, Type_t * ___type1, int32_t ___rank2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
