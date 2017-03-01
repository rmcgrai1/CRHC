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

// Newtonsoft.Json.Serialization.ReflectionValueProvider
struct ReflectionValueProvider_t879419187;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_MemberInfo4043097260.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Newtonsoft.Json.Serialization.ReflectionValueProvider::.ctor(System.Reflection.MemberInfo)
extern "C"  void ReflectionValueProvider__ctor_m831061778 (ReflectionValueProvider_t879419187 * __this, MemberInfo_t * ___memberInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ReflectionValueProvider::SetValue(System.Object,System.Object)
extern "C"  void ReflectionValueProvider_SetValue_m2588562765 (ReflectionValueProvider_t879419187 * __this, Il2CppObject * ___target0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.ReflectionValueProvider::GetValue(System.Object)
extern "C"  Il2CppObject * ReflectionValueProvider_GetValue_m2177401072 (ReflectionValueProvider_t879419187 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
