#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Experience
struct Experience_t1974411760;
// Reference`1<UnityEngine.Texture2D>
struct Reference_1_t3035523416;

#include "AssemblyU2DCSharp_ImageItem1947162666.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Landmark/ARButton
struct  ARButton_t1476977038  : public ImageItem_t1947162666
{
public:
	// Experience Landmark/ARButton::exp
	Experience_t1974411760 * ___exp_3;
	// Reference`1<UnityEngine.Texture2D> Landmark/ARButton::tex
	Reference_1_t3035523416 * ___tex_4;

public:
	inline static int32_t get_offset_of_exp_3() { return static_cast<int32_t>(offsetof(ARButton_t1476977038, ___exp_3)); }
	inline Experience_t1974411760 * get_exp_3() const { return ___exp_3; }
	inline Experience_t1974411760 ** get_address_of_exp_3() { return &___exp_3; }
	inline void set_exp_3(Experience_t1974411760 * value)
	{
		___exp_3 = value;
		Il2CppCodeGenWriteBarrier(&___exp_3, value);
	}

	inline static int32_t get_offset_of_tex_4() { return static_cast<int32_t>(offsetof(ARButton_t1476977038, ___tex_4)); }
	inline Reference_1_t3035523416 * get_tex_4() const { return ___tex_4; }
	inline Reference_1_t3035523416 ** get_address_of_tex_4() { return &___tex_4; }
	inline void set_tex_4(Reference_1_t3035523416 * value)
	{
		___tex_4 = value;
		Il2CppCodeGenWriteBarrier(&___tex_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
