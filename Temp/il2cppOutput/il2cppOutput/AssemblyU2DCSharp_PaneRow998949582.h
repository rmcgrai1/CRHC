#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Row
struct Row_t774521500;
// IMenu
struct IMenu_t2695572612;

#include "AssemblyU2DCSharp_IRow3247553901.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PaneRow
struct  PaneRow_t998949582  : public IRow_t3247553901
{
public:
	// Row PaneRow::headRow
	Row_t774521500 * ___headRow_1;
	// IMenu PaneRow::subMenu
	IMenu_t2695572612 * ___subMenu_2;
	// System.Single PaneRow::openFrac
	float ___openFrac_3;
	// System.Single PaneRow::toFrac
	float ___toFrac_4;
	// UnityEngine.Color PaneRow::openColor
	Color_t2020392075  ___openColor_5;
	// UnityEngine.Color PaneRow::closedColor
	Color_t2020392075  ___closedColor_6;

public:
	inline static int32_t get_offset_of_headRow_1() { return static_cast<int32_t>(offsetof(PaneRow_t998949582, ___headRow_1)); }
	inline Row_t774521500 * get_headRow_1() const { return ___headRow_1; }
	inline Row_t774521500 ** get_address_of_headRow_1() { return &___headRow_1; }
	inline void set_headRow_1(Row_t774521500 * value)
	{
		___headRow_1 = value;
		Il2CppCodeGenWriteBarrier(&___headRow_1, value);
	}

	inline static int32_t get_offset_of_subMenu_2() { return static_cast<int32_t>(offsetof(PaneRow_t998949582, ___subMenu_2)); }
	inline IMenu_t2695572612 * get_subMenu_2() const { return ___subMenu_2; }
	inline IMenu_t2695572612 ** get_address_of_subMenu_2() { return &___subMenu_2; }
	inline void set_subMenu_2(IMenu_t2695572612 * value)
	{
		___subMenu_2 = value;
		Il2CppCodeGenWriteBarrier(&___subMenu_2, value);
	}

	inline static int32_t get_offset_of_openFrac_3() { return static_cast<int32_t>(offsetof(PaneRow_t998949582, ___openFrac_3)); }
	inline float get_openFrac_3() const { return ___openFrac_3; }
	inline float* get_address_of_openFrac_3() { return &___openFrac_3; }
	inline void set_openFrac_3(float value)
	{
		___openFrac_3 = value;
	}

	inline static int32_t get_offset_of_toFrac_4() { return static_cast<int32_t>(offsetof(PaneRow_t998949582, ___toFrac_4)); }
	inline float get_toFrac_4() const { return ___toFrac_4; }
	inline float* get_address_of_toFrac_4() { return &___toFrac_4; }
	inline void set_toFrac_4(float value)
	{
		___toFrac_4 = value;
	}

	inline static int32_t get_offset_of_openColor_5() { return static_cast<int32_t>(offsetof(PaneRow_t998949582, ___openColor_5)); }
	inline Color_t2020392075  get_openColor_5() const { return ___openColor_5; }
	inline Color_t2020392075 * get_address_of_openColor_5() { return &___openColor_5; }
	inline void set_openColor_5(Color_t2020392075  value)
	{
		___openColor_5 = value;
	}

	inline static int32_t get_offset_of_closedColor_6() { return static_cast<int32_t>(offsetof(PaneRow_t998949582, ___closedColor_6)); }
	inline Color_t2020392075  get_closedColor_6() const { return ___closedColor_6; }
	inline Color_t2020392075 * get_address_of_closedColor_6() { return &___closedColor_6; }
	inline void set_closedColor_6(Color_t2020392075  value)
	{
		___closedColor_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
