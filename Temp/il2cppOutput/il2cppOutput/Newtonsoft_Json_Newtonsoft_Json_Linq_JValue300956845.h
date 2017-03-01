#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;

#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JTokenType1307827213.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JValue
struct  JValue_t300956845  : public JToken_t2552644013
{
public:
	// Newtonsoft.Json.Linq.JTokenType Newtonsoft.Json.Linq.JValue::_valueType
	int32_t ____valueType_13;
	// System.Object Newtonsoft.Json.Linq.JValue::_value
	Il2CppObject * ____value_14;

public:
	inline static int32_t get_offset_of__valueType_13() { return static_cast<int32_t>(offsetof(JValue_t300956845, ____valueType_13)); }
	inline int32_t get__valueType_13() const { return ____valueType_13; }
	inline int32_t* get_address_of__valueType_13() { return &____valueType_13; }
	inline void set__valueType_13(int32_t value)
	{
		____valueType_13 = value;
	}

	inline static int32_t get_offset_of__value_14() { return static_cast<int32_t>(offsetof(JValue_t300956845, ____value_14)); }
	inline Il2CppObject * get__value_14() const { return ____value_14; }
	inline Il2CppObject ** get_address_of__value_14() { return &____value_14; }
	inline void set__value_14(Il2CppObject * value)
	{
		____value_14 = value;
		Il2CppCodeGenWriteBarrier(&____value_14, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
