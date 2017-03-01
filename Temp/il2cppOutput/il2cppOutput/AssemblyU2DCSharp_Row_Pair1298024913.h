#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IItem
struct IItem_t1694139212;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Row/Pair
struct  Pair_t1298024913 
{
public:
	// IItem Row/Pair::item
	IItem_t1694139212 * ___item_0;
	// System.Single Row/Pair::priority
	float ___priority_1;

public:
	inline static int32_t get_offset_of_item_0() { return static_cast<int32_t>(offsetof(Pair_t1298024913, ___item_0)); }
	inline IItem_t1694139212 * get_item_0() const { return ___item_0; }
	inline IItem_t1694139212 ** get_address_of_item_0() { return &___item_0; }
	inline void set_item_0(IItem_t1694139212 * value)
	{
		___item_0 = value;
		Il2CppCodeGenWriteBarrier(&___item_0, value);
	}

	inline static int32_t get_offset_of_priority_1() { return static_cast<int32_t>(offsetof(Pair_t1298024913, ___priority_1)); }
	inline float get_priority_1() const { return ___priority_1; }
	inline float* get_address_of_priority_1() { return &___priority_1; }
	inline void set_priority_1(float value)
	{
		___priority_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Row/Pair
struct Pair_t1298024913_marshaled_pinvoke
{
	IItem_t1694139212 * ___item_0;
	float ___priority_1;
};
// Native definition for COM marshalling of Row/Pair
struct Pair_t1298024913_marshaled_com
{
	IItem_t1694139212 * ___item_0;
	float ___priority_1;
};
