#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// generic.mobile.ITouch
struct  ITouch_t1873081982  : public Il2CppObject
{
public:

public:
};

struct ITouch_t1873081982_StaticFields
{
public:
	// UnityEngine.Vector2 generic.mobile.ITouch::previousTouchPosition
	Vector2_t2243707579  ___previousTouchPosition_0;
	// UnityEngine.Vector2 generic.mobile.ITouch::touchPosition
	Vector2_t2243707579  ___touchPosition_1;
	// UnityEngine.Vector2 generic.mobile.ITouch::dragVector
	Vector2_t2243707579  ___dragVector_2;
	// System.Boolean generic.mobile.ITouch::_isDown
	bool ____isDown_3;
	// System.Boolean generic.mobile.ITouch::_didTap
	bool ____didTap_4;
	// System.Double generic.mobile.ITouch::startTouchTime
	double ___startTouchTime_5;
	// System.Single generic.mobile.ITouch::dragDistance
	float ___dragDistance_6;
	// System.Single generic.mobile.ITouch::coolDownFrac
	float ___coolDownFrac_7;

public:
	inline static int32_t get_offset_of_previousTouchPosition_0() { return static_cast<int32_t>(offsetof(ITouch_t1873081982_StaticFields, ___previousTouchPosition_0)); }
	inline Vector2_t2243707579  get_previousTouchPosition_0() const { return ___previousTouchPosition_0; }
	inline Vector2_t2243707579 * get_address_of_previousTouchPosition_0() { return &___previousTouchPosition_0; }
	inline void set_previousTouchPosition_0(Vector2_t2243707579  value)
	{
		___previousTouchPosition_0 = value;
	}

	inline static int32_t get_offset_of_touchPosition_1() { return static_cast<int32_t>(offsetof(ITouch_t1873081982_StaticFields, ___touchPosition_1)); }
	inline Vector2_t2243707579  get_touchPosition_1() const { return ___touchPosition_1; }
	inline Vector2_t2243707579 * get_address_of_touchPosition_1() { return &___touchPosition_1; }
	inline void set_touchPosition_1(Vector2_t2243707579  value)
	{
		___touchPosition_1 = value;
	}

	inline static int32_t get_offset_of_dragVector_2() { return static_cast<int32_t>(offsetof(ITouch_t1873081982_StaticFields, ___dragVector_2)); }
	inline Vector2_t2243707579  get_dragVector_2() const { return ___dragVector_2; }
	inline Vector2_t2243707579 * get_address_of_dragVector_2() { return &___dragVector_2; }
	inline void set_dragVector_2(Vector2_t2243707579  value)
	{
		___dragVector_2 = value;
	}

	inline static int32_t get_offset_of__isDown_3() { return static_cast<int32_t>(offsetof(ITouch_t1873081982_StaticFields, ____isDown_3)); }
	inline bool get__isDown_3() const { return ____isDown_3; }
	inline bool* get_address_of__isDown_3() { return &____isDown_3; }
	inline void set__isDown_3(bool value)
	{
		____isDown_3 = value;
	}

	inline static int32_t get_offset_of__didTap_4() { return static_cast<int32_t>(offsetof(ITouch_t1873081982_StaticFields, ____didTap_4)); }
	inline bool get__didTap_4() const { return ____didTap_4; }
	inline bool* get_address_of__didTap_4() { return &____didTap_4; }
	inline void set__didTap_4(bool value)
	{
		____didTap_4 = value;
	}

	inline static int32_t get_offset_of_startTouchTime_5() { return static_cast<int32_t>(offsetof(ITouch_t1873081982_StaticFields, ___startTouchTime_5)); }
	inline double get_startTouchTime_5() const { return ___startTouchTime_5; }
	inline double* get_address_of_startTouchTime_5() { return &___startTouchTime_5; }
	inline void set_startTouchTime_5(double value)
	{
		___startTouchTime_5 = value;
	}

	inline static int32_t get_offset_of_dragDistance_6() { return static_cast<int32_t>(offsetof(ITouch_t1873081982_StaticFields, ___dragDistance_6)); }
	inline float get_dragDistance_6() const { return ___dragDistance_6; }
	inline float* get_address_of_dragDistance_6() { return &___dragDistance_6; }
	inline void set_dragDistance_6(float value)
	{
		___dragDistance_6 = value;
	}

	inline static int32_t get_offset_of_coolDownFrac_7() { return static_cast<int32_t>(offsetof(ITouch_t1873081982_StaticFields, ___coolDownFrac_7)); }
	inline float get_coolDownFrac_7() const { return ___coolDownFrac_7; }
	inline float* get_address_of_coolDownFrac_7() { return &___coolDownFrac_7; }
	inline void set_coolDownFrac_7(float value)
	{
		___coolDownFrac_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
