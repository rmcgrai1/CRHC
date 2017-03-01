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

// Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression
struct BooleanQueryExpression_t3023864960;
// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JsonPath.PathFilter>
struct List_1_t4001981469;
// Newtonsoft.Json.Linq.JValue
struct JValue_t300956845;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JValue300956845.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JToken2552644013.h"

// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JsonPath.PathFilter> Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression::get_Path()
extern "C"  List_1_t4001981469 * BooleanQueryExpression_get_Path_m2941250140 (BooleanQueryExpression_t3023864960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression::set_Path(System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JsonPath.PathFilter>)
extern "C"  void BooleanQueryExpression_set_Path_m1123695553 (BooleanQueryExpression_t3023864960 * __this, List_1_t4001981469 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JValue Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression::get_Value()
extern "C"  JValue_t300956845 * BooleanQueryExpression_get_Value_m412141373 (BooleanQueryExpression_t3023864960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression::set_Value(Newtonsoft.Json.Linq.JValue)
extern "C"  void BooleanQueryExpression_set_Value_m3751877784 (BooleanQueryExpression_t3023864960 * __this, JValue_t300956845 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression::IsMatch(Newtonsoft.Json.Linq.JToken)
extern "C"  bool BooleanQueryExpression_IsMatch_m664760713 (BooleanQueryExpression_t3023864960 * __this, JToken_t2552644013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression::EqualsWithStringCoercion(Newtonsoft.Json.Linq.JValue,Newtonsoft.Json.Linq.JValue)
extern "C"  bool BooleanQueryExpression_EqualsWithStringCoercion_m3247641688 (BooleanQueryExpression_t3023864960 * __this, JValue_t300956845 * ___value0, JValue_t300956845 * ___queryValue1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression::.ctor()
extern "C"  void BooleanQueryExpression__ctor_m691247128 (BooleanQueryExpression_t3023864960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
