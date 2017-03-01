#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t3943999495;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JsonChildList/JsonChild
struct  JsonChild_t2476909483  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.String> JsonChildList/JsonChild::dict
	Dictionary_2_t3943999495 * ___dict_0;
	// System.Boolean JsonChildList/JsonChild::disposedValue
	bool ___disposedValue_1;

public:
	inline static int32_t get_offset_of_dict_0() { return static_cast<int32_t>(offsetof(JsonChild_t2476909483, ___dict_0)); }
	inline Dictionary_2_t3943999495 * get_dict_0() const { return ___dict_0; }
	inline Dictionary_2_t3943999495 ** get_address_of_dict_0() { return &___dict_0; }
	inline void set_dict_0(Dictionary_2_t3943999495 * value)
	{
		___dict_0 = value;
		Il2CppCodeGenWriteBarrier(&___dict_0, value);
	}

	inline static int32_t get_offset_of_disposedValue_1() { return static_cast<int32_t>(offsetof(JsonChild_t2476909483, ___disposedValue_1)); }
	inline bool get_disposedValue_1() const { return ___disposedValue_1; }
	inline bool* get_address_of_disposedValue_1() { return &___disposedValue_1; }
	inline void set_disposedValue_1(bool value)
	{
		___disposedValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
