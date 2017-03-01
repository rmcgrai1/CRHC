#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Reference`1<UnityEngine.Texture2D>
struct Reference_1_t3035523416;

#include "AssemblyU2DCSharp_IItem1694139212.h"
#include "AssemblyU2DCSharp_AspectType1121078212.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ImageItem
struct  ImageItem_t1947162666  : public IItem_t1694139212
{
public:
	// Reference`1<UnityEngine.Texture2D> ImageItem::texture
	Reference_1_t3035523416 * ___texture_1;
	// AspectType ImageItem::aspectType
	int32_t ___aspectType_2;

public:
	inline static int32_t get_offset_of_texture_1() { return static_cast<int32_t>(offsetof(ImageItem_t1947162666, ___texture_1)); }
	inline Reference_1_t3035523416 * get_texture_1() const { return ___texture_1; }
	inline Reference_1_t3035523416 ** get_address_of_texture_1() { return &___texture_1; }
	inline void set_texture_1(Reference_1_t3035523416 * value)
	{
		___texture_1 = value;
		Il2CppCodeGenWriteBarrier(&___texture_1, value);
	}

	inline static int32_t get_offset_of_aspectType_2() { return static_cast<int32_t>(offsetof(ImageItem_t1947162666, ___aspectType_2)); }
	inline int32_t get_aspectType_2() const { return ___aspectType_2; }
	inline int32_t* get_address_of_aspectType_2() { return &___aspectType_2; }
	inline void set_aspectType_2(int32_t value)
	{
		___aspectType_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
