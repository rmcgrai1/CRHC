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

// Newtonsoft.Json.Linq.JsonPath.CompositeExpression
struct CompositeExpression_t1978404879;
// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JsonPath.QueryExpression>
struct List_1_t3627880700;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JToken2552644013.h"

// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JsonPath.QueryExpression> Newtonsoft.Json.Linq.JsonPath.CompositeExpression::get_Expressions()
extern "C"  List_1_t3627880700 * CompositeExpression_get_Expressions_m3949710844 (CompositeExpression_t1978404879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JsonPath.CompositeExpression::set_Expressions(System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JsonPath.QueryExpression>)
extern "C"  void CompositeExpression_set_Expressions_m2937495395 (CompositeExpression_t1978404879 * __this, List_1_t3627880700 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JsonPath.CompositeExpression::.ctor()
extern "C"  void CompositeExpression__ctor_m3436728269 (CompositeExpression_t1978404879 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Linq.JsonPath.CompositeExpression::IsMatch(Newtonsoft.Json.Linq.JToken)
extern "C"  bool CompositeExpression_IsMatch_m863617588 (CompositeExpression_t1978404879 * __this, JToken_t2552644013 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
