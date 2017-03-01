#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken>
struct List_1_t1921765145;

#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JContainer3538280255.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JArray
struct  JArray_t1483708661  : public JContainer_t3538280255
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::_values
	List_1_t1921765145 * ____values_15;

public:
	inline static int32_t get_offset_of__values_15() { return static_cast<int32_t>(offsetof(JArray_t1483708661, ____values_15)); }
	inline List_1_t1921765145 * get__values_15() const { return ____values_15; }
	inline List_1_t1921765145 ** get_address_of__values_15() { return &____values_15; }
	inline void set__values_15(List_1_t1921765145 * value)
	{
		____values_15 = value;
		Il2CppCodeGenWriteBarrier(&____values_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
