#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Landmark
struct Landmark_t1862459476;

#include "AssemblyU2DCSharp_RectItem1720926083.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Landmark/BackButton
struct  BackButton_t2597280886  : public RectItem_t1720926083
{
public:
	// Landmark Landmark/BackButton::owner
	Landmark_t1862459476 * ___owner_2;

public:
	inline static int32_t get_offset_of_owner_2() { return static_cast<int32_t>(offsetof(BackButton_t2597280886, ___owner_2)); }
	inline Landmark_t1862459476 * get_owner_2() const { return ___owner_2; }
	inline Landmark_t1862459476 ** get_address_of_owner_2() { return &___owner_2; }
	inline void set_owner_2(Landmark_t1862459476 * value)
	{
		___owner_2 = value;
		Il2CppCodeGenWriteBarrier(&___owner_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
