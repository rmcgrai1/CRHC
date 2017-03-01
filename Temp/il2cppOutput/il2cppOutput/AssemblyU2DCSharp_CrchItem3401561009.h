#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CrchItem
struct CrchItem_t3401561009;
// JsonChildList/JsonChild
struct JsonChild_t2476909483;

#include "AssemblyU2DCSharp_Loadable2385882172.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CrchItem
struct  CrchItem_t3401561009  : public Loadable_t2385882172
{
public:
	// CrchItem CrchItem::parent
	CrchItem_t3401561009 * ___parent_2;
	// JsonChildList/JsonChild CrchItem::data
	JsonChild_t2476909483 * ___data_3;
	// System.Boolean CrchItem::disposedValue
	bool ___disposedValue_4;

public:
	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(CrchItem_t3401561009, ___parent_2)); }
	inline CrchItem_t3401561009 * get_parent_2() const { return ___parent_2; }
	inline CrchItem_t3401561009 ** get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(CrchItem_t3401561009 * value)
	{
		___parent_2 = value;
		Il2CppCodeGenWriteBarrier(&___parent_2, value);
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(CrchItem_t3401561009, ___data_3)); }
	inline JsonChild_t2476909483 * get_data_3() const { return ___data_3; }
	inline JsonChild_t2476909483 ** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(JsonChild_t2476909483 * value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier(&___data_3, value);
	}

	inline static int32_t get_offset_of_disposedValue_4() { return static_cast<int32_t>(offsetof(CrchItem_t3401561009, ___disposedValue_4)); }
	inline bool get_disposedValue_4() const { return ___disposedValue_4; }
	inline bool* get_address_of_disposedValue_4() { return &___disposedValue_4; }
	inline void set_disposedValue_4(bool value)
	{
		___disposedValue_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
