#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Utilities.ReflectionObject>
struct ThreadSafeStore_2_t808324009;

#include "Newtonsoft_Json_Newtonsoft_Json_JsonConverter1964060750.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Converters.KeyValuePairConverter
struct  KeyValuePairConverter_t575953290  : public JsonConverter_t1964060750
{
public:

public:
};

struct KeyValuePairConverter_t575953290_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,Newtonsoft.Json.Utilities.ReflectionObject> Newtonsoft.Json.Converters.KeyValuePairConverter::ReflectionObjectPerType
	ThreadSafeStore_2_t808324009 * ___ReflectionObjectPerType_0;

public:
	inline static int32_t get_offset_of_ReflectionObjectPerType_0() { return static_cast<int32_t>(offsetof(KeyValuePairConverter_t575953290_StaticFields, ___ReflectionObjectPerType_0)); }
	inline ThreadSafeStore_2_t808324009 * get_ReflectionObjectPerType_0() const { return ___ReflectionObjectPerType_0; }
	inline ThreadSafeStore_2_t808324009 ** get_address_of_ReflectionObjectPerType_0() { return &___ReflectionObjectPerType_0; }
	inline void set_ReflectionObjectPerType_0(ThreadSafeStore_2_t808324009 * value)
	{
		___ReflectionObjectPerType_0 = value;
		Il2CppCodeGenWriteBarrier(&___ReflectionObjectPerType_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
