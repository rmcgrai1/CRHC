#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IList`1<Row/Pair>
struct IList_1_t1838965514;

#include "AssemblyU2DCSharp_IRow3247553901.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Row
struct  Row_t774521500  : public IRow_t3247553901
{
public:
	// System.Single Row::height
	float ___height_1;
	// System.Collections.Generic.IList`1<Row/Pair> Row::items
	Il2CppObject* ___items_2;
	// UnityEngine.Color Row::color
	Color_t2020392075  ___color_3;
	// System.Boolean Row::doXPad
	bool ___doXPad_4;
	// System.Boolean Row::doYPadTop
	bool ___doYPadTop_5;
	// System.Boolean Row::doYPadBottom
	bool ___doYPadBottom_6;

public:
	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(Row_t774521500, ___height_1)); }
	inline float get_height_1() const { return ___height_1; }
	inline float* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(float value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_items_2() { return static_cast<int32_t>(offsetof(Row_t774521500, ___items_2)); }
	inline Il2CppObject* get_items_2() const { return ___items_2; }
	inline Il2CppObject** get_address_of_items_2() { return &___items_2; }
	inline void set_items_2(Il2CppObject* value)
	{
		___items_2 = value;
		Il2CppCodeGenWriteBarrier(&___items_2, value);
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(Row_t774521500, ___color_3)); }
	inline Color_t2020392075  get_color_3() const { return ___color_3; }
	inline Color_t2020392075 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color_t2020392075  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_doXPad_4() { return static_cast<int32_t>(offsetof(Row_t774521500, ___doXPad_4)); }
	inline bool get_doXPad_4() const { return ___doXPad_4; }
	inline bool* get_address_of_doXPad_4() { return &___doXPad_4; }
	inline void set_doXPad_4(bool value)
	{
		___doXPad_4 = value;
	}

	inline static int32_t get_offset_of_doYPadTop_5() { return static_cast<int32_t>(offsetof(Row_t774521500, ___doYPadTop_5)); }
	inline bool get_doYPadTop_5() const { return ___doYPadTop_5; }
	inline bool* get_address_of_doYPadTop_5() { return &___doYPadTop_5; }
	inline void set_doYPadTop_5(bool value)
	{
		___doYPadTop_5 = value;
	}

	inline static int32_t get_offset_of_doYPadBottom_6() { return static_cast<int32_t>(offsetof(Row_t774521500, ___doYPadBottom_6)); }
	inline bool get_doYPadBottom_6() const { return ___doYPadBottom_6; }
	inline bool* get_address_of_doYPadBottom_6() { return &___doYPadBottom_6; }
	inline void set_doYPadBottom_6(bool value)
	{
		___doYPadBottom_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
