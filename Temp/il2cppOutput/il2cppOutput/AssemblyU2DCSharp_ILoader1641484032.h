#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IDictionary`2<System.String,Reference>
struct IDictionary_2_t3256554556;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ILoader
struct  ILoader_t1641484032  : public Il2CppObject
{
public:
	// System.Collections.Generic.IDictionary`2<System.String,Reference> ILoader::runTimeCache
	Il2CppObject* ___runTimeCache_0;

public:
	inline static int32_t get_offset_of_runTimeCache_0() { return static_cast<int32_t>(offsetof(ILoader_t1641484032, ___runTimeCache_0)); }
	inline Il2CppObject* get_runTimeCache_0() const { return ___runTimeCache_0; }
	inline Il2CppObject** get_address_of_runTimeCache_0() { return &___runTimeCache_0; }
	inline void set_runTimeCache_0(Il2CppObject* value)
	{
		___runTimeCache_0 = value;
		Il2CppCodeGenWriteBarrier(&___runTimeCache_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
