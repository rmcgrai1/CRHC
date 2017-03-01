#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t1566984540;

#include "mscorlib_System_ValueType3507792607.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Reso1785396551.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<Newtonsoft.Json.Serialization.ResolverContractKey,Newtonsoft.Json.Serialization.JsonContract>
struct  KeyValuePair_2_t3239712042 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	ResolverContractKey_t1785396551  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JsonContract_t1566984540 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3239712042, ___key_0)); }
	inline ResolverContractKey_t1785396551  get_key_0() const { return ___key_0; }
	inline ResolverContractKey_t1785396551 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(ResolverContractKey_t1785396551  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3239712042, ___value_1)); }
	inline JsonContract_t1566984540 * get_value_1() const { return ___value_1; }
	inline JsonContract_t1566984540 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JsonContract_t1566984540 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier(&___value_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
