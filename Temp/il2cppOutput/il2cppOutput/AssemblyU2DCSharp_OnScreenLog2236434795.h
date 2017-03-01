#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.LinkedList`1<System.String>
struct LinkedList_1_t2333928462;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// OnScreenLog
struct  OnScreenLog_t2236434795  : public Il2CppObject
{
public:
	// System.Collections.Generic.LinkedList`1<System.String> OnScreenLog::log
	LinkedList_1_t2333928462 * ___log_0;

public:
	inline static int32_t get_offset_of_log_0() { return static_cast<int32_t>(offsetof(OnScreenLog_t2236434795, ___log_0)); }
	inline LinkedList_1_t2333928462 * get_log_0() const { return ___log_0; }
	inline LinkedList_1_t2333928462 ** get_address_of_log_0() { return &___log_0; }
	inline void set_log_0(LinkedList_1_t2333928462 * value)
	{
		___log_0 = value;
		Il2CppCodeGenWriteBarrier(&___log_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
