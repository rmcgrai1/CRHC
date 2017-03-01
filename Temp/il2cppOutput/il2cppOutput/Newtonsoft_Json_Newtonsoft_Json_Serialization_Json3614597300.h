#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t2712067825;
// System.Object
struct Il2CppObject;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen2778234543.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext
struct  CreatorPropertyContext_t3614597300  : public Il2CppObject
{
public:
	// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Name
	String_t* ___Name_0;
	// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Property
	JsonProperty_t2712067825 * ___Property_1;
	// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::ConstructorProperty
	JsonProperty_t2712067825 * ___ConstructorProperty_2;
	// System.Nullable`1<Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence> Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Presence
	Nullable_1_t2778234543  ___Presence_3;
	// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Value
	Il2CppObject * ___Value_4;
	// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext::Used
	bool ___Used_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t3614597300, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier(&___Name_0, value);
	}

	inline static int32_t get_offset_of_Property_1() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t3614597300, ___Property_1)); }
	inline JsonProperty_t2712067825 * get_Property_1() const { return ___Property_1; }
	inline JsonProperty_t2712067825 ** get_address_of_Property_1() { return &___Property_1; }
	inline void set_Property_1(JsonProperty_t2712067825 * value)
	{
		___Property_1 = value;
		Il2CppCodeGenWriteBarrier(&___Property_1, value);
	}

	inline static int32_t get_offset_of_ConstructorProperty_2() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t3614597300, ___ConstructorProperty_2)); }
	inline JsonProperty_t2712067825 * get_ConstructorProperty_2() const { return ___ConstructorProperty_2; }
	inline JsonProperty_t2712067825 ** get_address_of_ConstructorProperty_2() { return &___ConstructorProperty_2; }
	inline void set_ConstructorProperty_2(JsonProperty_t2712067825 * value)
	{
		___ConstructorProperty_2 = value;
		Il2CppCodeGenWriteBarrier(&___ConstructorProperty_2, value);
	}

	inline static int32_t get_offset_of_Presence_3() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t3614597300, ___Presence_3)); }
	inline Nullable_1_t2778234543  get_Presence_3() const { return ___Presence_3; }
	inline Nullable_1_t2778234543 * get_address_of_Presence_3() { return &___Presence_3; }
	inline void set_Presence_3(Nullable_1_t2778234543  value)
	{
		___Presence_3 = value;
	}

	inline static int32_t get_offset_of_Value_4() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t3614597300, ___Value_4)); }
	inline Il2CppObject * get_Value_4() const { return ___Value_4; }
	inline Il2CppObject ** get_address_of_Value_4() { return &___Value_4; }
	inline void set_Value_4(Il2CppObject * value)
	{
		___Value_4 = value;
		Il2CppCodeGenWriteBarrier(&___Value_4, value);
	}

	inline static int32_t get_offset_of_Used_5() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t3614597300, ___Used_5)); }
	inline bool get_Used_5() const { return ___Used_5; }
	inline bool* get_address_of_Used_5() { return &___Used_5; }
	inline void set_Used_5(bool value)
	{
		___Used_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
