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

#include "Newtonsoft_Json_Newtonsoft_Json_JsonException2657548905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonWriterException
struct  JsonWriterException_t1246029574  : public JsonException_t2657548905
{
public:
	// System.String Newtonsoft.Json.JsonWriterException::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_11;

public:
	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(JsonWriterException_t1246029574, ___U3CPathU3Ek__BackingField_11)); }
	inline String_t* get_U3CPathU3Ek__BackingField_11() const { return ___U3CPathU3Ek__BackingField_11; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_11() { return &___U3CPathU3Ek__BackingField_11; }
	inline void set_U3CPathU3Ek__BackingField_11(String_t* value)
	{
		___U3CPathU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier(&___U3CPathU3Ek__BackingField_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
