#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;
// UnityEngine.GUIContent
struct GUIContent_t4210063000;

#include "AssemblyU2DCSharp_IItem1694139212.h"
#include "AssemblyU2DCSharp_TextVerticalAlignment3379317350.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TextItem
struct  TextItem_t1720843696  : public IItem_t1694139212
{
public:
	// UnityEngine.GUIStyle TextItem::style
	GUIStyle_t1799908754 * ___style_1;
	// UnityEngine.GUIContent TextItem::content
	GUIContent_t4210063000 * ___content_2;
	// TextVerticalAlignment TextItem::verticalAlignment
	int32_t ___verticalAlignment_3;

public:
	inline static int32_t get_offset_of_style_1() { return static_cast<int32_t>(offsetof(TextItem_t1720843696, ___style_1)); }
	inline GUIStyle_t1799908754 * get_style_1() const { return ___style_1; }
	inline GUIStyle_t1799908754 ** get_address_of_style_1() { return &___style_1; }
	inline void set_style_1(GUIStyle_t1799908754 * value)
	{
		___style_1 = value;
		Il2CppCodeGenWriteBarrier(&___style_1, value);
	}

	inline static int32_t get_offset_of_content_2() { return static_cast<int32_t>(offsetof(TextItem_t1720843696, ___content_2)); }
	inline GUIContent_t4210063000 * get_content_2() const { return ___content_2; }
	inline GUIContent_t4210063000 ** get_address_of_content_2() { return &___content_2; }
	inline void set_content_2(GUIContent_t4210063000 * value)
	{
		___content_2 = value;
		Il2CppCodeGenWriteBarrier(&___content_2, value);
	}

	inline static int32_t get_offset_of_verticalAlignment_3() { return static_cast<int32_t>(offsetof(TextItem_t1720843696, ___verticalAlignment_3)); }
	inline int32_t get_verticalAlignment_3() const { return ___verticalAlignment_3; }
	inline int32_t* get_address_of_verticalAlignment_3() { return &___verticalAlignment_3; }
	inline void set_verticalAlignment_3(int32_t value)
	{
		___verticalAlignment_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
