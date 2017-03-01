#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Serialization.DefaultSerializationBinder
struct DefaultSerializationBinder_t2461993261;
// Newtonsoft.Json.Utilities.ThreadSafeStore`2<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Type>
struct ThreadSafeStore_2_t2692975060;

#include "mscorlib_System_Runtime_Serialization_Serializatio3985864818.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.DefaultSerializationBinder
struct  DefaultSerializationBinder_t2461993261  : public SerializationBinder_t3985864818
{
public:
	// Newtonsoft.Json.Utilities.ThreadSafeStore`2<Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey,System.Type> Newtonsoft.Json.Serialization.DefaultSerializationBinder::_typeCache
	ThreadSafeStore_2_t2692975060 * ____typeCache_1;

public:
	inline static int32_t get_offset_of__typeCache_1() { return static_cast<int32_t>(offsetof(DefaultSerializationBinder_t2461993261, ____typeCache_1)); }
	inline ThreadSafeStore_2_t2692975060 * get__typeCache_1() const { return ____typeCache_1; }
	inline ThreadSafeStore_2_t2692975060 ** get_address_of__typeCache_1() { return &____typeCache_1; }
	inline void set__typeCache_1(ThreadSafeStore_2_t2692975060 * value)
	{
		____typeCache_1 = value;
		Il2CppCodeGenWriteBarrier(&____typeCache_1, value);
	}
};

struct DefaultSerializationBinder_t2461993261_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.DefaultSerializationBinder Newtonsoft.Json.Serialization.DefaultSerializationBinder::Instance
	DefaultSerializationBinder_t2461993261 * ___Instance_0;

public:
	inline static int32_t get_offset_of_Instance_0() { return static_cast<int32_t>(offsetof(DefaultSerializationBinder_t2461993261_StaticFields, ___Instance_0)); }
	inline DefaultSerializationBinder_t2461993261 * get_Instance_0() const { return ___Instance_0; }
	inline DefaultSerializationBinder_t2461993261 ** get_address_of_Instance_0() { return &___Instance_0; }
	inline void set_Instance_0(DefaultSerializationBinder_t2461993261 * value)
	{
		___Instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___Instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
