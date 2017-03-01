#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<Newtonsoft.Json.Serialization.ResolverContractKey,Newtonsoft.Json.Serialization.JsonContract>
struct Dictionary_2_t1187399524;
// Newtonsoft.Json.Utilities.PropertyNameTable
struct PropertyNameTable_t1902004952;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.DefaultContractResolverState
struct  DefaultContractResolverState_t3395990442  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<Newtonsoft.Json.Serialization.ResolverContractKey,Newtonsoft.Json.Serialization.JsonContract> Newtonsoft.Json.Serialization.DefaultContractResolverState::ContractCache
	Dictionary_2_t1187399524 * ___ContractCache_0;
	// Newtonsoft.Json.Utilities.PropertyNameTable Newtonsoft.Json.Serialization.DefaultContractResolverState::NameTable
	PropertyNameTable_t1902004952 * ___NameTable_1;

public:
	inline static int32_t get_offset_of_ContractCache_0() { return static_cast<int32_t>(offsetof(DefaultContractResolverState_t3395990442, ___ContractCache_0)); }
	inline Dictionary_2_t1187399524 * get_ContractCache_0() const { return ___ContractCache_0; }
	inline Dictionary_2_t1187399524 ** get_address_of_ContractCache_0() { return &___ContractCache_0; }
	inline void set_ContractCache_0(Dictionary_2_t1187399524 * value)
	{
		___ContractCache_0 = value;
		Il2CppCodeGenWriteBarrier(&___ContractCache_0, value);
	}

	inline static int32_t get_offset_of_NameTable_1() { return static_cast<int32_t>(offsetof(DefaultContractResolverState_t3395990442, ___NameTable_1)); }
	inline PropertyNameTable_t1902004952 * get_NameTable_1() const { return ___NameTable_1; }
	inline PropertyNameTable_t1902004952 ** get_address_of_NameTable_1() { return &___NameTable_1; }
	inline void set_NameTable_1(PropertyNameTable_t1902004952 * value)
	{
		___NameTable_1 = value;
		Il2CppCodeGenWriteBarrier(&___NameTable_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
