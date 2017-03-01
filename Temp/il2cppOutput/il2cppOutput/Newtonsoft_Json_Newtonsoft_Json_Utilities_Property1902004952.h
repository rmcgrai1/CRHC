#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Utilities.PropertyNameTable/Entry[]
struct EntryU5BU5D_t749043653;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.PropertyNameTable
struct  PropertyNameTable_t1902004952  : public Il2CppObject
{
public:
	// System.Int32 Newtonsoft.Json.Utilities.PropertyNameTable::_count
	int32_t ____count_1;
	// Newtonsoft.Json.Utilities.PropertyNameTable/Entry[] Newtonsoft.Json.Utilities.PropertyNameTable::_entries
	EntryU5BU5D_t749043653* ____entries_2;
	// System.Int32 Newtonsoft.Json.Utilities.PropertyNameTable::_mask
	int32_t ____mask_3;

public:
	inline static int32_t get_offset_of__count_1() { return static_cast<int32_t>(offsetof(PropertyNameTable_t1902004952, ____count_1)); }
	inline int32_t get__count_1() const { return ____count_1; }
	inline int32_t* get_address_of__count_1() { return &____count_1; }
	inline void set__count_1(int32_t value)
	{
		____count_1 = value;
	}

	inline static int32_t get_offset_of__entries_2() { return static_cast<int32_t>(offsetof(PropertyNameTable_t1902004952, ____entries_2)); }
	inline EntryU5BU5D_t749043653* get__entries_2() const { return ____entries_2; }
	inline EntryU5BU5D_t749043653** get_address_of__entries_2() { return &____entries_2; }
	inline void set__entries_2(EntryU5BU5D_t749043653* value)
	{
		____entries_2 = value;
		Il2CppCodeGenWriteBarrier(&____entries_2, value);
	}

	inline static int32_t get_offset_of__mask_3() { return static_cast<int32_t>(offsetof(PropertyNameTable_t1902004952, ____mask_3)); }
	inline int32_t get__mask_3() const { return ____mask_3; }
	inline int32_t* get_address_of__mask_3() { return &____mask_3; }
	inline void set__mask_3(int32_t value)
	{
		____mask_3 = value;
	}
};

struct PropertyNameTable_t1902004952_StaticFields
{
public:
	// System.Int32 Newtonsoft.Json.Utilities.PropertyNameTable::HashCodeRandomizer
	int32_t ___HashCodeRandomizer_0;

public:
	inline static int32_t get_offset_of_HashCodeRandomizer_0() { return static_cast<int32_t>(offsetof(PropertyNameTable_t1902004952_StaticFields, ___HashCodeRandomizer_0)); }
	inline int32_t get_HashCodeRandomizer_0() const { return ___HashCodeRandomizer_0; }
	inline int32_t* get_address_of_HashCodeRandomizer_0() { return &___HashCodeRandomizer_0; }
	inline void set_HashCodeRandomizer_0(int32_t value)
	{
		___HashCodeRandomizer_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
