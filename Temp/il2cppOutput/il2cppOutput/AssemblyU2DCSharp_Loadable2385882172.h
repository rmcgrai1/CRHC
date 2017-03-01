#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.ICollection`1<LoadableObserver>
struct ICollection_1_t877717331;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Loadable
struct  Loadable_t2385882172  : public Il2CppObject
{
public:
	// System.Collections.Generic.ICollection`1<LoadableObserver> Loadable::observers
	Il2CppObject* ___observers_0;
	// System.Boolean Loadable::_isLoaded
	bool ____isLoaded_1;

public:
	inline static int32_t get_offset_of_observers_0() { return static_cast<int32_t>(offsetof(Loadable_t2385882172, ___observers_0)); }
	inline Il2CppObject* get_observers_0() const { return ___observers_0; }
	inline Il2CppObject** get_address_of_observers_0() { return &___observers_0; }
	inline void set_observers_0(Il2CppObject* value)
	{
		___observers_0 = value;
		Il2CppCodeGenWriteBarrier(&___observers_0, value);
	}

	inline static int32_t get_offset_of__isLoaded_1() { return static_cast<int32_t>(offsetof(Loadable_t2385882172, ____isLoaded_1)); }
	inline bool get__isLoaded_1() const { return ____isLoaded_1; }
	inline bool* get_address_of__isLoaded_1() { return &____isLoaded_1; }
	inline void set__isLoaded_1(bool value)
	{
		____isLoaded_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
