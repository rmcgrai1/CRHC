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
// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken>
struct List_1_t1921765145;

#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JContainer3538280255.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JConstructor
struct  JConstructor_t3123819808  : public JContainer_t3538280255
{
public:
	// System.String Newtonsoft.Json.Linq.JConstructor::_name
	String_t* ____name_15;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JConstructor::_values
	List_1_t1921765145 * ____values_16;

public:
	inline static int32_t get_offset_of__name_15() { return static_cast<int32_t>(offsetof(JConstructor_t3123819808, ____name_15)); }
	inline String_t* get__name_15() const { return ____name_15; }
	inline String_t** get_address_of__name_15() { return &____name_15; }
	inline void set__name_15(String_t* value)
	{
		____name_15 = value;
		Il2CppCodeGenWriteBarrier(&____name_15, value);
	}

	inline static int32_t get_offset_of__values_16() { return static_cast<int32_t>(offsetof(JConstructor_t3123819808, ____values_16)); }
	inline List_1_t1921765145 * get__values_16() const { return ____values_16; }
	inline List_1_t1921765145 ** get_address_of__values_16() { return &____values_16; }
	inline void set__values_16(List_1_t1921765145 * value)
	{
		____values_16 = value;
		Il2CppCodeGenWriteBarrier(&____values_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
