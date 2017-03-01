#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Row/Pair[]
struct PairU5BU5D_t3430508492;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<Row/Pair>
struct  List_1_t667146045  : public Il2CppObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PairU5BU5D_t3430508492* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t667146045, ____items_1)); }
	inline PairU5BU5D_t3430508492* get__items_1() const { return ____items_1; }
	inline PairU5BU5D_t3430508492** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PairU5BU5D_t3430508492* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier(&____items_1, value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t667146045, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t667146045, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}
};

struct List_1_t667146045_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::EmptyArray
	PairU5BU5D_t3430508492* ___EmptyArray_4;

public:
	inline static int32_t get_offset_of_EmptyArray_4() { return static_cast<int32_t>(offsetof(List_1_t667146045_StaticFields, ___EmptyArray_4)); }
	inline PairU5BU5D_t3430508492* get_EmptyArray_4() const { return ___EmptyArray_4; }
	inline PairU5BU5D_t3430508492** get_address_of_EmptyArray_4() { return &___EmptyArray_4; }
	inline void set_EmptyArray_4(PairU5BU5D_t3430508492* value)
	{
		___EmptyArray_4 = value;
		Il2CppCodeGenWriteBarrier(&___EmptyArray_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
