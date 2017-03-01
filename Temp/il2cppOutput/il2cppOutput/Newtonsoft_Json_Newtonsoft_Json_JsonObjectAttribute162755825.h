#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "Newtonsoft_Json_Newtonsoft_Json_JsonContainerAttribu47210975.h"
#include "Newtonsoft_Json_Newtonsoft_Json_MemberSerialization687984360.h"
#include "mscorlib_System_Nullable_1_gen1224954036.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonObjectAttribute
struct  JsonObjectAttribute_t162755825  : public JsonContainerAttribute_t47210975
{
public:
	// Newtonsoft.Json.MemberSerialization Newtonsoft.Json.JsonObjectAttribute::_memberSerialization
	int32_t ____memberSerialization_9;
	// System.Nullable`1<Newtonsoft.Json.Required> Newtonsoft.Json.JsonObjectAttribute::_itemRequired
	Nullable_1_t1224954036  ____itemRequired_10;

public:
	inline static int32_t get_offset_of__memberSerialization_9() { return static_cast<int32_t>(offsetof(JsonObjectAttribute_t162755825, ____memberSerialization_9)); }
	inline int32_t get__memberSerialization_9() const { return ____memberSerialization_9; }
	inline int32_t* get_address_of__memberSerialization_9() { return &____memberSerialization_9; }
	inline void set__memberSerialization_9(int32_t value)
	{
		____memberSerialization_9 = value;
	}

	inline static int32_t get_offset_of__itemRequired_10() { return static_cast<int32_t>(offsetof(JsonObjectAttribute_t162755825, ____itemRequired_10)); }
	inline Nullable_1_t1224954036  get__itemRequired_10() const { return ____itemRequired_10; }
	inline Nullable_1_t1224954036 * get_address_of__itemRequired_10() { return &____itemRequired_10; }
	inline void set__itemRequired_10(Nullable_1_t1224954036  value)
	{
		____itemRequired_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
