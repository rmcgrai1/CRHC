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

// System.String
struct String_t;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey
struct TypeNameKey_t3055062677;
struct TypeNameKey_t3055062677_marshaled_pinvoke;
struct TypeNameKey_t3055062677_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Defa3055062677.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::.ctor(System.String,System.String)
extern "C"  void TypeNameKey__ctor_m2873861113 (TypeNameKey_t3055062677 * __this, String_t* ___assemblyName0, String_t* ___typeName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::GetHashCode()
extern "C"  int32_t TypeNameKey_GetHashCode_m3289922284 (TypeNameKey_t3055062677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::Equals(System.Object)
extern "C"  bool TypeNameKey_Equals_m1132635248 (TypeNameKey_t3055062677 * __this, Il2CppObject * ___obj0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::Equals(Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey)
extern "C"  bool TypeNameKey_Equals_m3219418833 (TypeNameKey_t3055062677 * __this, TypeNameKey_t3055062677  ___other0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct TypeNameKey_t3055062677;
struct TypeNameKey_t3055062677_marshaled_pinvoke;

extern "C" void TypeNameKey_t3055062677_marshal_pinvoke(const TypeNameKey_t3055062677& unmarshaled, TypeNameKey_t3055062677_marshaled_pinvoke& marshaled);
extern "C" void TypeNameKey_t3055062677_marshal_pinvoke_back(const TypeNameKey_t3055062677_marshaled_pinvoke& marshaled, TypeNameKey_t3055062677& unmarshaled);
extern "C" void TypeNameKey_t3055062677_marshal_pinvoke_cleanup(TypeNameKey_t3055062677_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct TypeNameKey_t3055062677;
struct TypeNameKey_t3055062677_marshaled_com;

extern "C" void TypeNameKey_t3055062677_marshal_com(const TypeNameKey_t3055062677& unmarshaled, TypeNameKey_t3055062677_marshaled_com& marshaled);
extern "C" void TypeNameKey_t3055062677_marshal_com_back(const TypeNameKey_t3055062677_marshaled_com& marshaled, TypeNameKey_t3055062677& unmarshaled);
extern "C" void TypeNameKey_t3055062677_marshal_com_cleanup(TypeNameKey_t3055062677_marshaled_com& marshaled);
