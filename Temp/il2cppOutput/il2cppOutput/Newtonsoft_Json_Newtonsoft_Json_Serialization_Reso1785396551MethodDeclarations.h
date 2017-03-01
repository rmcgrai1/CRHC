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
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Serialization.ResolverContractKey
struct ResolverContractKey_t1785396551;
struct ResolverContractKey_t1785396551_marshaled_pinvoke;
struct ResolverContractKey_t1785396551_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Reso1785396551.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Newtonsoft.Json.Serialization.ResolverContractKey::.ctor(System.Type,System.Type)
extern "C"  void ResolverContractKey__ctor_m982415316 (ResolverContractKey_t1785396551 * __this, Type_t * ___resolverType0, Type_t * ___contractType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Serialization.ResolverContractKey::GetHashCode()
extern "C"  int32_t ResolverContractKey_GetHashCode_m1666510753 (ResolverContractKey_t1785396551 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.ResolverContractKey::Equals(System.Object)
extern "C"  bool ResolverContractKey_Equals_m2252638579 (ResolverContractKey_t1785396551 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.ResolverContractKey::Equals(Newtonsoft.Json.Serialization.ResolverContractKey)
extern "C"  bool ResolverContractKey_Equals_m223908273 (ResolverContractKey_t1785396551 * __this, ResolverContractKey_t1785396551  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct ResolverContractKey_t1785396551;
struct ResolverContractKey_t1785396551_marshaled_pinvoke;

extern "C" void ResolverContractKey_t1785396551_marshal_pinvoke(const ResolverContractKey_t1785396551& unmarshaled, ResolverContractKey_t1785396551_marshaled_pinvoke& marshaled);
extern "C" void ResolverContractKey_t1785396551_marshal_pinvoke_back(const ResolverContractKey_t1785396551_marshaled_pinvoke& marshaled, ResolverContractKey_t1785396551& unmarshaled);
extern "C" void ResolverContractKey_t1785396551_marshal_pinvoke_cleanup(ResolverContractKey_t1785396551_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct ResolverContractKey_t1785396551;
struct ResolverContractKey_t1785396551_marshaled_com;

extern "C" void ResolverContractKey_t1785396551_marshal_com(const ResolverContractKey_t1785396551& unmarshaled, ResolverContractKey_t1785396551_marshaled_com& marshaled);
extern "C" void ResolverContractKey_t1785396551_marshal_com_back(const ResolverContractKey_t1785396551_marshaled_com& marshaled, ResolverContractKey_t1785396551& unmarshaled);
extern "C" void ResolverContractKey_t1785396551_marshal_com_cleanup(ResolverContractKey_t1785396551_marshaled_com& marshaled);
