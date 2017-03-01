#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JsonPath.PathFilter>
struct List_1_t4001981469;
// Newtonsoft.Json.Linq.JValue
struct JValue_t300956845;

#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JsonPath_Quer4258759568.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression
struct  BooleanQueryExpression_t3023864960  : public QueryExpression_t4258759568
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JsonPath.PathFilter> Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression::<Path>k__BackingField
	List_1_t4001981469 * ___U3CPathU3Ek__BackingField_1;
	// Newtonsoft.Json.Linq.JValue Newtonsoft.Json.Linq.JsonPath.BooleanQueryExpression::<Value>k__BackingField
	JValue_t300956845 * ___U3CValueU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(BooleanQueryExpression_t3023864960, ___U3CPathU3Ek__BackingField_1)); }
	inline List_1_t4001981469 * get_U3CPathU3Ek__BackingField_1() const { return ___U3CPathU3Ek__BackingField_1; }
	inline List_1_t4001981469 ** get_address_of_U3CPathU3Ek__BackingField_1() { return &___U3CPathU3Ek__BackingField_1; }
	inline void set_U3CPathU3Ek__BackingField_1(List_1_t4001981469 * value)
	{
		___U3CPathU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPathU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CValueU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(BooleanQueryExpression_t3023864960, ___U3CValueU3Ek__BackingField_2)); }
	inline JValue_t300956845 * get_U3CValueU3Ek__BackingField_2() const { return ___U3CValueU3Ek__BackingField_2; }
	inline JValue_t300956845 ** get_address_of_U3CValueU3Ek__BackingField_2() { return &___U3CValueU3Ek__BackingField_2; }
	inline void set_U3CValueU3Ek__BackingField_2(JValue_t300956845 * value)
	{
		___U3CValueU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CValueU3Ek__BackingField_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
