#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Utilities.ReflectionObject
struct ReflectionObject_t1424089768;

#include "Newtonsoft_Json_Newtonsoft_Json_JsonConverter1964060750.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Converters.BinaryConverter
struct  BinaryConverter_t3398462695  : public JsonConverter_t1964060750
{
public:
	// Newtonsoft.Json.Utilities.ReflectionObject Newtonsoft.Json.Converters.BinaryConverter::_reflectionObject
	ReflectionObject_t1424089768 * ____reflectionObject_0;

public:
	inline static int32_t get_offset_of__reflectionObject_0() { return static_cast<int32_t>(offsetof(BinaryConverter_t3398462695, ____reflectionObject_0)); }
	inline ReflectionObject_t1424089768 * get__reflectionObject_0() const { return ____reflectionObject_0; }
	inline ReflectionObject_t1424089768 ** get_address_of__reflectionObject_0() { return &____reflectionObject_0; }
	inline void set__reflectionObject_0(ReflectionObject_t1424089768 * value)
	{
		____reflectionObject_0 = value;
		Il2CppCodeGenWriteBarrier(&____reflectionObject_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
