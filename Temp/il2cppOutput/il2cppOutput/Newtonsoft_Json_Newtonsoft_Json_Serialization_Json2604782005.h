#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,Newtonsoft.Json.ReadType>
struct Dictionary_2_t4139385745;

#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json1566984540.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_Primitiv2593001762.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonPrimitiveContract
struct  JsonPrimitiveContract_t2604782005  : public JsonContract_t1566984540
{
public:
	// Newtonsoft.Json.Utilities.PrimitiveTypeCode Newtonsoft.Json.Serialization.JsonPrimitiveContract::<TypeCode>k__BackingField
	int32_t ___U3CTypeCodeU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_U3CTypeCodeU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(JsonPrimitiveContract_t2604782005, ___U3CTypeCodeU3Ek__BackingField_21)); }
	inline int32_t get_U3CTypeCodeU3Ek__BackingField_21() const { return ___U3CTypeCodeU3Ek__BackingField_21; }
	inline int32_t* get_address_of_U3CTypeCodeU3Ek__BackingField_21() { return &___U3CTypeCodeU3Ek__BackingField_21; }
	inline void set_U3CTypeCodeU3Ek__BackingField_21(int32_t value)
	{
		___U3CTypeCodeU3Ek__BackingField_21 = value;
	}
};

struct JsonPrimitiveContract_t2604782005_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,Newtonsoft.Json.ReadType> Newtonsoft.Json.Serialization.JsonPrimitiveContract::ReadTypeMap
	Dictionary_2_t4139385745 * ___ReadTypeMap_22;

public:
	inline static int32_t get_offset_of_ReadTypeMap_22() { return static_cast<int32_t>(offsetof(JsonPrimitiveContract_t2604782005_StaticFields, ___ReadTypeMap_22)); }
	inline Dictionary_2_t4139385745 * get_ReadTypeMap_22() const { return ___ReadTypeMap_22; }
	inline Dictionary_2_t4139385745 ** get_address_of_ReadTypeMap_22() { return &___ReadTypeMap_22; }
	inline void set_ReadTypeMap_22(Dictionary_2_t4139385745 * value)
	{
		___ReadTypeMap_22 = value;
		Il2CppCodeGenWriteBarrier(&___ReadTypeMap_22, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
