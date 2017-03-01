#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JsonPath.PathFilter>
struct List_1_t4001981469;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JsonPath.JPath
struct  JPath_t2124135247  : public Il2CppObject
{
public:
	// System.String Newtonsoft.Json.Linq.JsonPath.JPath::_expression
	String_t* ____expression_0;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JsonPath.PathFilter> Newtonsoft.Json.Linq.JsonPath.JPath::<Filters>k__BackingField
	List_1_t4001981469 * ___U3CFiltersU3Ek__BackingField_1;
	// System.Int32 Newtonsoft.Json.Linq.JsonPath.JPath::_currentIndex
	int32_t ____currentIndex_2;

public:
	inline static int32_t get_offset_of__expression_0() { return static_cast<int32_t>(offsetof(JPath_t2124135247, ____expression_0)); }
	inline String_t* get__expression_0() const { return ____expression_0; }
	inline String_t** get_address_of__expression_0() { return &____expression_0; }
	inline void set__expression_0(String_t* value)
	{
		____expression_0 = value;
		Il2CppCodeGenWriteBarrier(&____expression_0, value);
	}

	inline static int32_t get_offset_of_U3CFiltersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(JPath_t2124135247, ___U3CFiltersU3Ek__BackingField_1)); }
	inline List_1_t4001981469 * get_U3CFiltersU3Ek__BackingField_1() const { return ___U3CFiltersU3Ek__BackingField_1; }
	inline List_1_t4001981469 ** get_address_of_U3CFiltersU3Ek__BackingField_1() { return &___U3CFiltersU3Ek__BackingField_1; }
	inline void set_U3CFiltersU3Ek__BackingField_1(List_1_t4001981469 * value)
	{
		___U3CFiltersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CFiltersU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of__currentIndex_2() { return static_cast<int32_t>(offsetof(JPath_t2124135247, ____currentIndex_2)); }
	inline int32_t get__currentIndex_2() const { return ____currentIndex_2; }
	inline int32_t* get_address_of__currentIndex_2() { return &____currentIndex_2; }
	inline void set__currentIndex_2(int32_t value)
	{
		____currentIndex_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
