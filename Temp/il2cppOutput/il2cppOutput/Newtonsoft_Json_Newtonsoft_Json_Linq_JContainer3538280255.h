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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JContainer
struct  JContainer_t3538280255  : public JToken_t2552644013
{
public:
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	Il2CppObject * ____syncRoot_13;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_14;

public:
	inline static int32_t get_offset_of__syncRoot_13() { return static_cast<int32_t>(offsetof(JContainer_t3538280255, ____syncRoot_13)); }
	inline Il2CppObject * get__syncRoot_13() const { return ____syncRoot_13; }
	inline Il2CppObject ** get_address_of__syncRoot_13() { return &____syncRoot_13; }
	inline void set__syncRoot_13(Il2CppObject * value)
	{
		____syncRoot_13 = value;
		Il2CppCodeGenWriteBarrier(&____syncRoot_13, value);
	}

	inline static int32_t get_offset_of__busy_14() { return static_cast<int32_t>(offsetof(JContainer_t3538280255, ____busy_14)); }
	inline bool get__busy_14() const { return ____busy_14; }
	inline bool* get_address_of__busy_14() { return &____busy_14; }
	inline void set__busy_14(bool value)
	{
		____busy_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
