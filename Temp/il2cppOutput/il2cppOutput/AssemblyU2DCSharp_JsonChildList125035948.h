#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<JsonChildList/JsonChild>
struct List_1_t1846030615;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// JsonChildList
struct  JsonChildList_t125035948  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<JsonChildList/JsonChild> JsonChildList::children
	List_1_t1846030615 * ___children_0;
	// System.Boolean JsonChildList::disposedValue
	bool ___disposedValue_1;

public:
	inline static int32_t get_offset_of_children_0() { return static_cast<int32_t>(offsetof(JsonChildList_t125035948, ___children_0)); }
	inline List_1_t1846030615 * get_children_0() const { return ___children_0; }
	inline List_1_t1846030615 ** get_address_of_children_0() { return &___children_0; }
	inline void set_children_0(List_1_t1846030615 * value)
	{
		___children_0 = value;
		Il2CppCodeGenWriteBarrier(&___children_0, value);
	}

	inline static int32_t get_offset_of_disposedValue_1() { return static_cast<int32_t>(offsetof(JsonChildList_t125035948, ___disposedValue_1)); }
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
