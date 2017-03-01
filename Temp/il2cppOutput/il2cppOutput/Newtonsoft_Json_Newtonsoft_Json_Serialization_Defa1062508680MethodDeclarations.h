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

// Newtonsoft.Json.Serialization.DefaultReferenceResolver
struct DefaultReferenceResolver_t1062508680;
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object>
struct BidirectionalDictionary_2_t3534731452;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"

// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object> Newtonsoft.Json.Serialization.DefaultReferenceResolver::GetMappings(System.Object)
extern "C"  BidirectionalDictionary_2_t3534731452 * DefaultReferenceResolver_GetMappings_m563984627 (DefaultReferenceResolver_t1062508680 * __this, Il2CppObject * ___context0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.DefaultReferenceResolver::ResolveReference(System.Object,System.String)
extern "C"  Il2CppObject * DefaultReferenceResolver_ResolveReference_m3883234037 (DefaultReferenceResolver_t1062508680 * __this, Il2CppObject * ___context0, String_t* ___reference1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.DefaultReferenceResolver::GetReference(System.Object,System.Object)
extern "C"  String_t* DefaultReferenceResolver_GetReference_m2800180519 (DefaultReferenceResolver_t1062508680 * __this, Il2CppObject * ___context0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultReferenceResolver::AddReference(System.Object,System.String,System.Object)
extern "C"  void DefaultReferenceResolver_AddReference_m2339812579 (DefaultReferenceResolver_t1062508680 * __this, Il2CppObject * ___context0, String_t* ___reference1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultReferenceResolver::IsReferenced(System.Object,System.Object)
extern "C"  bool DefaultReferenceResolver_IsReferenced_m2117036170 (DefaultReferenceResolver_t1062508680 * __this, Il2CppObject * ___context0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.DefaultReferenceResolver::.ctor()
extern "C"  void DefaultReferenceResolver__ctor_m4142006067 (DefaultReferenceResolver_t1062508680 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
