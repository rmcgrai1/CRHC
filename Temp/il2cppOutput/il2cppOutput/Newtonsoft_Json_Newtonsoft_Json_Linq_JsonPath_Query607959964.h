#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Linq.JsonPath.QueryExpression
struct QueryExpression_t4258759568;

#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JsonPath_PathF337893041.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JsonPath.QueryFilter
struct  QueryFilter_t607959964  : public PathFilter_t337893041
{
public:
	// Newtonsoft.Json.Linq.JsonPath.QueryExpression Newtonsoft.Json.Linq.JsonPath.QueryFilter::<Expression>k__BackingField
	QueryExpression_t4258759568 * ___U3CExpressionU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CExpressionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(QueryFilter_t607959964, ___U3CExpressionU3Ek__BackingField_0)); }
	inline QueryExpression_t4258759568 * get_U3CExpressionU3Ek__BackingField_0() const { return ___U3CExpressionU3Ek__BackingField_0; }
	inline QueryExpression_t4258759568 ** get_address_of_U3CExpressionU3Ek__BackingField_0() { return &___U3CExpressionU3Ek__BackingField_0; }
	inline void set_U3CExpressionU3Ek__BackingField_0(QueryExpression_t4258759568 * value)
	{
		___U3CExpressionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CExpressionU3Ek__BackingField_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
