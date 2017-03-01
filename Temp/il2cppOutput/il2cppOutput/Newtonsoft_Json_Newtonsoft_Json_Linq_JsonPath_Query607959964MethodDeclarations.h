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

// Newtonsoft.Json.Linq.JsonPath.QueryFilter
struct QueryFilter_t607959964;
// Newtonsoft.Json.Linq.JsonPath.QueryExpression
struct QueryExpression_t4258759568;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t2844771058;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JsonPath_Quer4258759568.h"

// Newtonsoft.Json.Linq.JsonPath.QueryExpression Newtonsoft.Json.Linq.JsonPath.QueryFilter::get_Expression()
extern "C"  QueryExpression_t4258759568 * QueryFilter_get_Expression_m3032768846 (QueryFilter_t607959964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryFilter::set_Expression(Newtonsoft.Json.Linq.JsonPath.QueryExpression)
extern "C"  void QueryFilter_set_Expression_m2702044859 (QueryFilter_t607959964 * __this, QueryExpression_t4258759568 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.QueryFilter::ExecuteFilter(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>,System.Boolean)
extern "C"  Il2CppObject* QueryFilter_ExecuteFilter_m404786735 (QueryFilter_t607959964 * __this, Il2CppObject* ___current0, bool ___errorWhenNoMatch1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JsonPath.QueryFilter::.ctor()
extern "C"  void QueryFilter__ctor_m628057802 (QueryFilter_t607959964 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
