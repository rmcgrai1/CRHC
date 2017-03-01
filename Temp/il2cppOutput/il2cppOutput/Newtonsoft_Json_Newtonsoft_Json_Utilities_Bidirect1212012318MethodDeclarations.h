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

// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>
struct BidirectionalDictionary_2_t1212012318;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1902082073;
// System.String
struct String_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TFirst>,System.Collections.Generic.IEqualityComparer`1<TSecond>)
extern "C"  void BidirectionalDictionary_2__ctor_m3063061286_gshared (BidirectionalDictionary_2_t1212012318 * __this, Il2CppObject* ___firstEqualityComparer0, Il2CppObject* ___secondEqualityComparer1, const MethodInfo* method);
#define BidirectionalDictionary_2__ctor_m3063061286(__this, ___firstEqualityComparer0, ___secondEqualityComparer1, method) ((  void (*) (BidirectionalDictionary_2_t1212012318 *, Il2CppObject*, Il2CppObject*, const MethodInfo*))BidirectionalDictionary_2__ctor_m3063061286_gshared)(__this, ___firstEqualityComparer0, ___secondEqualityComparer1, method)
// System.Void Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TFirst>,System.Collections.Generic.IEqualityComparer`1<TSecond>,System.String,System.String)
extern "C"  void BidirectionalDictionary_2__ctor_m2069033062_gshared (BidirectionalDictionary_2_t1212012318 * __this, Il2CppObject* ___firstEqualityComparer0, Il2CppObject* ___secondEqualityComparer1, String_t* ___duplicateFirstErrorMessage2, String_t* ___duplicateSecondErrorMessage3, const MethodInfo* method);
#define BidirectionalDictionary_2__ctor_m2069033062(__this, ___firstEqualityComparer0, ___secondEqualityComparer1, ___duplicateFirstErrorMessage2, ___duplicateSecondErrorMessage3, method) ((  void (*) (BidirectionalDictionary_2_t1212012318 *, Il2CppObject*, Il2CppObject*, String_t*, String_t*, const MethodInfo*))BidirectionalDictionary_2__ctor_m2069033062_gshared)(__this, ___firstEqualityComparer0, ___secondEqualityComparer1, ___duplicateFirstErrorMessage2, ___duplicateSecondErrorMessage3, method)
// System.Void Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::Set(TFirst,TSecond)
extern "C"  void BidirectionalDictionary_2_Set_m196403406_gshared (BidirectionalDictionary_2_t1212012318 * __this, Il2CppObject * ___first0, Il2CppObject * ___second1, const MethodInfo* method);
#define BidirectionalDictionary_2_Set_m196403406(__this, ___first0, ___second1, method) ((  void (*) (BidirectionalDictionary_2_t1212012318 *, Il2CppObject *, Il2CppObject *, const MethodInfo*))BidirectionalDictionary_2_Set_m196403406_gshared)(__this, ___first0, ___second1, method)
// System.Boolean Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::TryGetByFirst(TFirst,TSecond&)
extern "C"  bool BidirectionalDictionary_2_TryGetByFirst_m3866719394_gshared (BidirectionalDictionary_2_t1212012318 * __this, Il2CppObject * ___first0, Il2CppObject ** ___second1, const MethodInfo* method);
#define BidirectionalDictionary_2_TryGetByFirst_m3866719394(__this, ___first0, ___second1, method) ((  bool (*) (BidirectionalDictionary_2_t1212012318 *, Il2CppObject *, Il2CppObject **, const MethodInfo*))BidirectionalDictionary_2_TryGetByFirst_m3866719394_gshared)(__this, ___first0, ___second1, method)
// System.Boolean Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.Object,System.Object>::TryGetBySecond(TSecond,TFirst&)
extern "C"  bool BidirectionalDictionary_2_TryGetBySecond_m3074883102_gshared (BidirectionalDictionary_2_t1212012318 * __this, Il2CppObject * ___second0, Il2CppObject ** ___first1, const MethodInfo* method);
#define BidirectionalDictionary_2_TryGetBySecond_m3074883102(__this, ___second0, ___first1, method) ((  bool (*) (BidirectionalDictionary_2_t1212012318 *, Il2CppObject *, Il2CppObject **, const MethodInfo*))BidirectionalDictionary_2_TryGetBySecond_m3074883102_gshared)(__this, ___second0, ___first1, method)
