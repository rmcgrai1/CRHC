#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IList`1<IRow>
struct IList_1_t3788494502;

#include "AssemblyU2DCSharp_IMenu2695572612.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Menu
struct  Menu_t4261767481  : public IMenu_t2695572612
{
public:
	// System.Collections.Generic.IList`1<IRow> Menu::rows
	Il2CppObject* ___rows_1;
	// UnityEngine.Color Menu::color
	Color_t2020392075  ___color_2;

public:
	inline static int32_t get_offset_of_rows_1() { return static_cast<int32_t>(offsetof(Menu_t4261767481, ___rows_1)); }
	inline Il2CppObject* get_rows_1() const { return ___rows_1; }
	inline Il2CppObject** get_address_of_rows_1() { return &___rows_1; }
	inline void set_rows_1(Il2CppObject* value)
	{
		___rows_1 = value;
		Il2CppCodeGenWriteBarrier(&___rows_1, value);
	}

	inline static int32_t get_offset_of_color_2() { return static_cast<int32_t>(offsetof(Menu_t4261767481, ___color_2)); }
	inline Color_t2020392075  get_color_2() const { return ___color_2; }
	inline Color_t2020392075 * get_address_of_color_2() { return &___color_2; }
	inline void set_color_2(Color_t2020392075  value)
	{
		___color_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
