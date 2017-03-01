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

// Newtonsoft.Json.Linq.JsonPath.JPath
struct JPath_t2124135247;
// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JsonPath.PathFilter>
struct List_1_t4001981469;
// System.String
struct String_t;
// Newtonsoft.Json.Linq.JsonPath.PathFilter
struct PathFilter_t337893041;
// Newtonsoft.Json.Linq.JsonPath.QueryExpression
struct QueryExpression_t4258759568;
// System.Object
struct Il2CppObject;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t2844771058;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JsonPath_Quer3689602974.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JToken2552644013.h"

// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JsonPath.PathFilter> Newtonsoft.Json.Linq.JsonPath.JPath::get_Filters()
extern "C"  List_1_t4001981469 * JPath_get_Filters_m853774203 (JPath_t2124135247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JsonPath.JPath::set_Filters(System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JsonPath.PathFilter>)
extern "C"  void JPath_set_Filters_m1443160362 (JPath_t2124135247 * __this, List_1_t4001981469 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JsonPath.JPath::.ctor(System.String)
extern "C"  void JPath__ctor_m3106479563 (JPath_t2124135247 * __this, String_t* ___expression0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JsonPath.JPath::ParseMain()
extern "C"  void JPath_ParseMain_m4065243607 (JPath_t2124135247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JsonPath.JPath::ParsePath(System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JsonPath.PathFilter>,System.Int32,System.Boolean)
extern "C"  bool JPath_ParsePath_m1104353752 (JPath_t2124135247 * __this, List_1_t4001981469 * ___filters0, int32_t ___currentPartStartIndex1, bool ___query2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JsonPath.PathFilter Newtonsoft.Json.Linq.JsonPath.JPath::ParseIndexer(System.Char)
extern "C"  PathFilter_t337893041 * JPath_ParseIndexer_m1666019468 (JPath_t2124135247 * __this, Il2CppChar ___indexerOpenChar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JsonPath.PathFilter Newtonsoft.Json.Linq.JsonPath.JPath::ParseArrayIndexer(System.Char)
extern "C"  PathFilter_t337893041 * JPath_ParseArrayIndexer_m1393977769 (JPath_t2124135247 * __this, Il2CppChar ___indexerCloseChar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JsonPath.JPath::EatWhitespace()
extern "C"  void JPath_EatWhitespace_m3915181132 (JPath_t2124135247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JsonPath.PathFilter Newtonsoft.Json.Linq.JsonPath.JPath::ParseQuery(System.Char)
extern "C"  PathFilter_t337893041 * JPath_ParseQuery_m1838401907 (JPath_t2124135247 * __this, Il2CppChar ___indexerCloseChar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JsonPath.QueryExpression Newtonsoft.Json.Linq.JsonPath.JPath::ParseExpression()
extern "C"  QueryExpression_t4258759568 * JPath_ParseExpression_m4113461293 (JPath_t2124135247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Linq.JsonPath.JPath::ParseValue()
extern "C"  Il2CppObject * JPath_ParseValue_m4047986938 (JPath_t2124135247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Linq.JsonPath.JPath::ReadQuotedString()
extern "C"  String_t* JPath_ReadQuotedString_m999634533 (JPath_t2124135247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JsonPath.JPath::Match(System.String)
extern "C"  bool JPath_Match_m4201239068 (JPath_t2124135247 * __this, String_t* ___s0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JsonPath.QueryOperator Newtonsoft.Json.Linq.JsonPath.JPath::ParseOperator()
extern "C"  int32_t JPath_ParseOperator_m2038415417 (JPath_t2124135247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JsonPath.PathFilter Newtonsoft.Json.Linq.JsonPath.JPath::ParseQuotedField(System.Char)
extern "C"  PathFilter_t337893041 * JPath_ParseQuotedField_m2262272233 (JPath_t2124135247 * __this, Il2CppChar ___indexerCloseChar0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JsonPath.JPath::EnsureLength(System.String)
extern "C"  void JPath_EnsureLength_m2757015957 (JPath_t2124135247 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.JPath::Evaluate(Newtonsoft.Json.Linq.JToken,System.Boolean)
extern "C"  Il2CppObject* JPath_Evaluate_m1949993317 (JPath_t2124135247 * __this, JToken_t2552644013 * ___t0, bool ___errorWhenNoMatch1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.JPath::Evaluate(System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JsonPath.PathFilter>,Newtonsoft.Json.Linq.JToken,System.Boolean)
extern "C"  Il2CppObject* JPath_Evaluate_m1992874996 (Il2CppObject * __this /* static, unused */, List_1_t4001981469 * ___filters0, JToken_t2552644013 * ___t1, bool ___errorWhenNoMatch2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
