#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JsonPath.QueryExpression>
struct List_1_t3627880700;

#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JsonPath_Quer4258759568.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JsonPath.CompositeExpression
struct  CompositeExpression_t1978404879  : public QueryExpression_t4258759568
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JsonPath.QueryExpression> Newtonsoft.Json.Linq.JsonPath.CompositeExpression::<Expressions>k__BackingField
	List_1_t3627880700 * ___U3CExpressionsU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CExpressionsU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(CompositeExpression_t1978404879, ___U3CExpressionsU3Ek__BackingField_1)); }
	inline List_1_t3627880700 * get_U3CExpressionsU3Ek__BackingField_1() const { return ___U3CExpressionsU3Ek__BackingField_1; }
	inline List_1_t3627880700 ** get_address_of_U3CExpressionsU3Ek__BackingField_1() { return &___U3CExpressionsU3Ek__BackingField_1; }
	inline void set_U3CExpressionsU3Ek__BackingField_1(List_1_t3627880700 * value)
	{
		___U3CExpressionsU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CExpressionsU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
