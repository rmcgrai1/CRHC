#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Type
struct Type_t;
// System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.JsonProperty>
struct List_1_t2081188957;

#include "mscorlib_System_Collections_ObjectModel_KeyedColle3639397801.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonPropertyCollection
struct  JsonPropertyCollection_t3302934105  : public KeyedCollection_2_t3639397801
{
public:
	// System.Type Newtonsoft.Json.Serialization.JsonPropertyCollection::_type
	Type_t * ____type_5;
	// System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.JsonProperty> Newtonsoft.Json.Serialization.JsonPropertyCollection::_list
	List_1_t2081188957 * ____list_6;

public:
	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(JsonPropertyCollection_t3302934105, ____type_5)); }
	inline Type_t * get__type_5() const { return ____type_5; }
	inline Type_t ** get_address_of__type_5() { return &____type_5; }
	inline void set__type_5(Type_t * value)
	{
		____type_5 = value;
		Il2CppCodeGenWriteBarrier(&____type_5, value);
	}

	inline static int32_t get_offset_of__list_6() { return static_cast<int32_t>(offsetof(JsonPropertyCollection_t3302934105, ____list_6)); }
	inline List_1_t2081188957 * get__list_6() const { return ____list_6; }
	inline List_1_t2081188957 ** get_address_of__list_6() { return &____list_6; }
	inline void set__list_6(List_1_t2081188957 * value)
	{
		____list_6 = value;
		Il2CppCodeGenWriteBarrier(&____list_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
