#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// IMenu
struct IMenu_t2695572612;
// Reference`1<UnityEngine.Texture2D>
struct Reference_1_t3035523416;

#include "AssemblyU2DCSharp_IMenu2695572612.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TourMenu
struct  TourMenu_t849766617  : public IMenu_t2695572612
{
public:
	// IMenu TourMenu::menu
	IMenu_t2695572612 * ___menu_1;
	// Reference`1<UnityEngine.Texture2D> TourMenu::bg
	Reference_1_t3035523416 * ___bg_2;

public:
	inline static int32_t get_offset_of_menu_1() { return static_cast<int32_t>(offsetof(TourMenu_t849766617, ___menu_1)); }
	inline IMenu_t2695572612 * get_menu_1() const { return ___menu_1; }
	inline IMenu_t2695572612 ** get_address_of_menu_1() { return &___menu_1; }
	inline void set_menu_1(IMenu_t2695572612 * value)
	{
		___menu_1 = value;
		Il2CppCodeGenWriteBarrier(&___menu_1, value);
	}

	inline static int32_t get_offset_of_bg_2() { return static_cast<int32_t>(offsetof(TourMenu_t849766617, ___bg_2)); }
	inline Reference_1_t3035523416 * get_bg_2() const { return ___bg_2; }
	inline Reference_1_t3035523416 ** get_address_of_bg_2() { return &___bg_2; }
	inline void set_bg_2(Reference_1_t3035523416 * value)
	{
		___bg_2 = value;
		Il2CppCodeGenWriteBarrier(&___bg_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
