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

#include "AssemblyU2DCSharp_ImageItem1947162666.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tour/DirectionButton
struct  DirectionButton_t1985908104  : public ImageItem_t1947162666
{
public:
	// Landmark Tour/DirectionButton::landmark
	Landmark_t1862459476 * ___landmark_3;

public:
	inline static int32_t get_offset_of_landmark_3() { return static_cast<int32_t>(offsetof(DirectionButton_t1985908104, ___landmark_3)); }
	inline Landmark_t1862459476 * get_landmark_3() const { return ___landmark_3; }
	inline Landmark_t1862459476 ** get_address_of_landmark_3() { return &___landmark_3; }
	inline void set_landmark_3(Landmark_t1862459476 * value)
	{
		___landmark_3 = value;
		Il2CppCodeGenWriteBarrier(&___landmark_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
