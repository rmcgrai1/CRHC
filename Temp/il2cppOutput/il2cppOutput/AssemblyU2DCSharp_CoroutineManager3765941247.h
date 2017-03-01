#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// CoroutineManager
struct CoroutineManager_t3765941247;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CoroutineManager
struct  CoroutineManager_t3765941247  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct CoroutineManager_t3765941247_StaticFields
{
public:
	// CoroutineManager CoroutineManager::instance
	CoroutineManager_t3765941247 * ___instance_2;
	// System.Int32 CoroutineManager::mainThreadId
	int32_t ___mainThreadId_3;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(CoroutineManager_t3765941247_StaticFields, ___instance_2)); }
	inline CoroutineManager_t3765941247 * get_instance_2() const { return ___instance_2; }
	inline CoroutineManager_t3765941247 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(CoroutineManager_t3765941247 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_mainThreadId_3() { return static_cast<int32_t>(offsetof(CoroutineManager_t3765941247_StaticFields, ___mainThreadId_3)); }
	inline int32_t get_mainThreadId_3() const { return ___mainThreadId_3; }
	inline int32_t* get_address_of_mainThreadId_3() { return &___mainThreadId_3; }
	inline void set_mainThreadId_3(int32_t value)
	{
		___mainThreadId_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
