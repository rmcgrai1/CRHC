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

// Newtonsoft.Json.Bson.BsonObject
struct BsonObject_t2841166125;
// System.String
struct String_t;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_t3582361217;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty>
struct IEnumerator_1_t3261552898;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Bson_BsonToken3582361217.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Bson_BsonType2055433366.h"

// System.Void Newtonsoft.Json.Bson.BsonObject::Add(System.String,Newtonsoft.Json.Bson.BsonToken)
extern "C"  void BsonObject_Add_m1849411847 (BsonObject_t2841166125 * __this, String_t* ___name0, BsonToken_t3582361217 * ___token1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Bson.BsonType Newtonsoft.Json.Bson.BsonObject::get_Type()
extern "C"  int8_t BsonObject_get_Type_m3642458909 (BsonObject_t2841166125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Bson.BsonProperty> Newtonsoft.Json.Bson.BsonObject::GetEnumerator()
extern "C"  Il2CppObject* BsonObject_GetEnumerator_m3289645786 (BsonObject_t2841166125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Newtonsoft.Json.Bson.BsonObject::System.Collections.IEnumerable.GetEnumerator()
extern "C"  Il2CppObject * BsonObject_System_Collections_IEnumerable_GetEnumerator_m760524799 (BsonObject_t2841166125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Bson.BsonObject::.ctor()
extern "C"  void BsonObject__ctor_m2116523154 (BsonObject_t2841166125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
