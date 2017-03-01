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

// Newtonsoft.Json.Serialization.JsonPropertyCollection
struct JsonPropertyCollection_t3302934105;
// System.Type
struct Type_t;
// System.String
struct String_t;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t2712067825;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json2712067825.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_StringComparison2376310518.h"

// System.Void Newtonsoft.Json.Serialization.JsonPropertyCollection::.ctor(System.Type)
extern "C"  void JsonPropertyCollection__ctor_m2401958427 (JsonPropertyCollection_t3302934105 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.JsonPropertyCollection::GetKeyForItem(Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  String_t* JsonPropertyCollection_GetKeyForItem_m733020360 (JsonPropertyCollection_t3302934105 * __this, JsonProperty_t2712067825 * ___item0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonPropertyCollection::AddProperty(Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonPropertyCollection_AddProperty_m141155504 (JsonPropertyCollection_t3302934105 * __this, JsonProperty_t2712067825 * ___property0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonPropertyCollection::GetClosestMatchProperty(System.String)
extern "C"  JsonProperty_t2712067825 * JsonPropertyCollection_GetClosestMatchProperty_m2995198670 (JsonPropertyCollection_t3302934105 * __this, String_t* ___propertyName0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonPropertyCollection::TryGetValue(System.String,Newtonsoft.Json.Serialization.JsonProperty&)
extern "C"  bool JsonPropertyCollection_TryGetValue_m1882573762 (JsonPropertyCollection_t3302934105 * __this, String_t* ___key0, JsonProperty_t2712067825 ** ___item1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonPropertyCollection::GetProperty(System.String,System.StringComparison)
extern "C"  JsonProperty_t2712067825 * JsonPropertyCollection_GetProperty_m1360891719 (JsonPropertyCollection_t3302934105 * __this, String_t* ___propertyName0, int32_t ___comparisonType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
