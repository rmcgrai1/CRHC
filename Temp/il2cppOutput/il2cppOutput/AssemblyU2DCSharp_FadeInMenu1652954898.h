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

#include "AssemblyU2DCSharp_IMenu2695572612.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// FadeInMenu
struct  FadeInMenu_t1652954898  : public IMenu_t2695572612
{
public:
	// IMenu FadeInMenu::menu
	IMenu_t2695572612 * ___menu_1;
	// System.Single FadeInMenu::fadeInAmount
	float ___fadeInAmount_2;
	// System.Single FadeInMenu::fadeSpeed
	float ___fadeSpeed_3;
	// UnityEngine.Color FadeInMenu::color
	Color_t2020392075  ___color_4;

public:
	inline static int32_t get_offset_of_menu_1() { return static_cast<int32_t>(offsetof(FadeInMenu_t1652954898, ___menu_1)); }
	inline IMenu_t2695572612 * get_menu_1() const { return ___menu_1; }
	inline IMenu_t2695572612 ** get_address_of_menu_1() { return &___menu_1; }
	inline void set_menu_1(IMenu_t2695572612 * value)
	{
		___menu_1 = value;
		Il2CppCodeGenWriteBarrier(&___menu_1, value);
	}

	inline static int32_t get_offset_of_fadeInAmount_2() { return static_cast<int32_t>(offsetof(FadeInMenu_t1652954898, ___fadeInAmount_2)); }
	inline float get_fadeInAmount_2() const { return ___fadeInAmount_2; }
	inline float* get_address_of_fadeInAmount_2() { return &___fadeInAmount_2; }
	inline void set_fadeInAmount_2(float value)
	{
		___fadeInAmount_2 = value;
	}

	inline static int32_t get_offset_of_fadeSpeed_3() { return static_cast<int32_t>(offsetof(FadeInMenu_t1652954898, ___fadeSpeed_3)); }
	inline float get_fadeSpeed_3() const { return ___fadeSpeed_3; }
	inline float* get_address_of_fadeSpeed_3() { return &___fadeSpeed_3; }
	inline void set_fadeSpeed_3(float value)
	{
		___fadeSpeed_3 = value;
	}

	inline static int32_t get_offset_of_color_4() { return static_cast<int32_t>(offsetof(FadeInMenu_t1652954898, ___color_4)); }
	inline Color_t2020392075  get_color_4() const { return ___color_4; }
	inline Color_t2020392075 * get_address_of_color_4() { return &___color_4; }
	inline void set_color_4(Color_t2020392075  value)
	{
		___color_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
