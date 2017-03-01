#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// VuforiaManager
struct VuforiaManager_t189047469;
// UnityEngine.Shader
struct Shader_t2430389951;
// Reference`1<UnityEngine.Texture2D>
struct Reference_1_t3035523416;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// Experience
struct Experience_t1974411760;
// System.String
struct String_t;
// Vuforia.ObjectTracker
struct ObjectTracker_t1568044035;
// Vuforia.DataSet
struct DataSet_t626511550;
// System.Collections.Generic.IDictionary`2<Experience,Vuforia.DataSet>
struct IDictionary_2_t2734459638;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// VuforiaManager
struct  VuforiaManager_t189047469  : public Il2CppObject
{
public:
	// UnityEngine.Shader VuforiaManager::shader
	Shader_t2430389951 * ___shader_1;
	// Reference`1<UnityEngine.Texture2D> VuforiaManager::img
	Reference_1_t3035523416 * ___img_2;
	// Reference`1<UnityEngine.Texture2D> VuforiaManager::outline
	Reference_1_t3035523416 * ___outline_3;
	// Reference`1<UnityEngine.Texture2D> VuforiaManager::overlay
	Reference_1_t3035523416 * ___overlay_4;
	// UnityEngine.GameObject VuforiaManager::planeGroup
	GameObject_t1756533147 * ___planeGroup_5;
	// UnityEngine.GameObject VuforiaManager::outlinePlane
	GameObject_t1756533147 * ___outlinePlane_6;
	// UnityEngine.GameObject VuforiaManager::overlayPlane
	GameObject_t1756533147 * ___overlayPlane_7;
	// System.Boolean VuforiaManager::isSetup
	bool ___isSetup_8;
	// System.Boolean VuforiaManager::isMatching
	bool ___isMatching_9;
	// System.Boolean VuforiaManager::didMatch
	bool ___didMatch_10;
	// System.Single VuforiaManager::alphaAngle
	float ___alphaAngle_11;
	// System.Single VuforiaManager::frameAlpha
	float ___frameAlpha_12;
	// Experience VuforiaManager::exp
	Experience_t1974411760 * ___exp_13;
	// System.String VuforiaManager::debugMessage
	String_t* ___debugMessage_14;
	// Vuforia.ObjectTracker VuforiaManager::t
	ObjectTracker_t1568044035 * ___t_15;
	// Vuforia.DataSet VuforiaManager::ds
	DataSet_t626511550 * ___ds_16;
	// System.Collections.Generic.IDictionary`2<Experience,Vuforia.DataSet> VuforiaManager::dataSets
	Il2CppObject* ___dataSets_17;

public:
	inline static int32_t get_offset_of_shader_1() { return static_cast<int32_t>(offsetof(VuforiaManager_t189047469, ___shader_1)); }
	inline Shader_t2430389951 * get_shader_1() const { return ___shader_1; }
	inline Shader_t2430389951 ** get_address_of_shader_1() { return &___shader_1; }
	inline void set_shader_1(Shader_t2430389951 * value)
	{
		___shader_1 = value;
		Il2CppCodeGenWriteBarrier(&___shader_1, value);
	}

	inline static int32_t get_offset_of_img_2() { return static_cast<int32_t>(offsetof(VuforiaManager_t189047469, ___img_2)); }
	inline Reference_1_t3035523416 * get_img_2() const { return ___img_2; }
	inline Reference_1_t3035523416 ** get_address_of_img_2() { return &___img_2; }
	inline void set_img_2(Reference_1_t3035523416 * value)
	{
		___img_2 = value;
		Il2CppCodeGenWriteBarrier(&___img_2, value);
	}

	inline static int32_t get_offset_of_outline_3() { return static_cast<int32_t>(offsetof(VuforiaManager_t189047469, ___outline_3)); }
	inline Reference_1_t3035523416 * get_outline_3() const { return ___outline_3; }
	inline Reference_1_t3035523416 ** get_address_of_outline_3() { return &___outline_3; }
	inline void set_outline_3(Reference_1_t3035523416 * value)
	{
		___outline_3 = value;
		Il2CppCodeGenWriteBarrier(&___outline_3, value);
	}

	inline static int32_t get_offset_of_overlay_4() { return static_cast<int32_t>(offsetof(VuforiaManager_t189047469, ___overlay_4)); }
	inline Reference_1_t3035523416 * get_overlay_4() const { return ___overlay_4; }
	inline Reference_1_t3035523416 ** get_address_of_overlay_4() { return &___overlay_4; }
	inline void set_overlay_4(Reference_1_t3035523416 * value)
	{
		___overlay_4 = value;
		Il2CppCodeGenWriteBarrier(&___overlay_4, value);
	}

	inline static int32_t get_offset_of_planeGroup_5() { return static_cast<int32_t>(offsetof(VuforiaManager_t189047469, ___planeGroup_5)); }
	inline GameObject_t1756533147 * get_planeGroup_5() const { return ___planeGroup_5; }
	inline GameObject_t1756533147 ** get_address_of_planeGroup_5() { return &___planeGroup_5; }
	inline void set_planeGroup_5(GameObject_t1756533147 * value)
	{
		___planeGroup_5 = value;
		Il2CppCodeGenWriteBarrier(&___planeGroup_5, value);
	}

	inline static int32_t get_offset_of_outlinePlane_6() { return static_cast<int32_t>(offsetof(VuforiaManager_t189047469, ___outlinePlane_6)); }
	inline GameObject_t1756533147 * get_outlinePlane_6() const { return ___outlinePlane_6; }
	inline GameObject_t1756533147 ** get_address_of_outlinePlane_6() { return &___outlinePlane_6; }
	inline void set_outlinePlane_6(GameObject_t1756533147 * value)
	{
		___outlinePlane_6 = value;
		Il2CppCodeGenWriteBarrier(&___outlinePlane_6, value);
	}

	inline static int32_t get_offset_of_overlayPlane_7() { return static_cast<int32_t>(offsetof(VuforiaManager_t189047469, ___overlayPlane_7)); }
	inline GameObject_t1756533147 * get_overlayPlane_7() const { return ___overlayPlane_7; }
	inline GameObject_t1756533147 ** get_address_of_overlayPlane_7() { return &___overlayPlane_7; }
	inline void set_overlayPlane_7(GameObject_t1756533147 * value)
	{
		___overlayPlane_7 = value;
		Il2CppCodeGenWriteBarrier(&___overlayPlane_7, value);
	}

	inline static int32_t get_offset_of_isSetup_8() { return static_cast<int32_t>(offsetof(VuforiaManager_t189047469, ___isSetup_8)); }
	inline bool get_isSetup_8() const { return ___isSetup_8; }
	inline bool* get_address_of_isSetup_8() { return &___isSetup_8; }
	inline void set_isSetup_8(bool value)
	{
		___isSetup_8 = value;
	}

	inline static int32_t get_offset_of_isMatching_9() { return static_cast<int32_t>(offsetof(VuforiaManager_t189047469, ___isMatching_9)); }
	inline bool get_isMatching_9() const { return ___isMatching_9; }
	inline bool* get_address_of_isMatching_9() { return &___isMatching_9; }
	inline void set_isMatching_9(bool value)
	{
		___isMatching_9 = value;
	}

	inline static int32_t get_offset_of_didMatch_10() { return static_cast<int32_t>(offsetof(VuforiaManager_t189047469, ___didMatch_10)); }
	inline bool get_didMatch_10() const { return ___didMatch_10; }
	inline bool* get_address_of_didMatch_10() { return &___didMatch_10; }
	inline void set_didMatch_10(bool value)
	{
		___didMatch_10 = value;
	}

	inline static int32_t get_offset_of_alphaAngle_11() { return static_cast<int32_t>(offsetof(VuforiaManager_t189047469, ___alphaAngle_11)); }
	inline float get_alphaAngle_11() const { return ___alphaAngle_11; }
	inline float* get_address_of_alphaAngle_11() { return &___alphaAngle_11; }
	inline void set_alphaAngle_11(float value)
	{
		___alphaAngle_11 = value;
	}

	inline static int32_t get_offset_of_frameAlpha_12() { return static_cast<int32_t>(offsetof(VuforiaManager_t189047469, ___frameAlpha_12)); }
	inline float get_frameAlpha_12() const { return ___frameAlpha_12; }
	inline float* get_address_of_frameAlpha_12() { return &___frameAlpha_12; }
	inline void set_frameAlpha_12(float value)
	{
		___frameAlpha_12 = value;
	}

	inline static int32_t get_offset_of_exp_13() { return static_cast<int32_t>(offsetof(VuforiaManager_t189047469, ___exp_13)); }
	inline Experience_t1974411760 * get_exp_13() const { return ___exp_13; }
	inline Experience_t1974411760 ** get_address_of_exp_13() { return &___exp_13; }
	inline void set_exp_13(Experience_t1974411760 * value)
	{
		___exp_13 = value;
		Il2CppCodeGenWriteBarrier(&___exp_13, value);
	}

	inline static int32_t get_offset_of_debugMessage_14() { return static_cast<int32_t>(offsetof(VuforiaManager_t189047469, ___debugMessage_14)); }
	inline String_t* get_debugMessage_14() const { return ___debugMessage_14; }
	inline String_t** get_address_of_debugMessage_14() { return &___debugMessage_14; }
	inline void set_debugMessage_14(String_t* value)
	{
		___debugMessage_14 = value;
		Il2CppCodeGenWriteBarrier(&___debugMessage_14, value);
	}

	inline static int32_t get_offset_of_t_15() { return static_cast<int32_t>(offsetof(VuforiaManager_t189047469, ___t_15)); }
	inline ObjectTracker_t1568044035 * get_t_15() const { return ___t_15; }
	inline ObjectTracker_t1568044035 ** get_address_of_t_15() { return &___t_15; }
	inline void set_t_15(ObjectTracker_t1568044035 * value)
	{
		___t_15 = value;
		Il2CppCodeGenWriteBarrier(&___t_15, value);
	}

	inline static int32_t get_offset_of_ds_16() { return static_cast<int32_t>(offsetof(VuforiaManager_t189047469, ___ds_16)); }
	inline DataSet_t626511550 * get_ds_16() const { return ___ds_16; }
	inline DataSet_t626511550 ** get_address_of_ds_16() { return &___ds_16; }
	inline void set_ds_16(DataSet_t626511550 * value)
	{
		___ds_16 = value;
		Il2CppCodeGenWriteBarrier(&___ds_16, value);
	}

	inline static int32_t get_offset_of_dataSets_17() { return static_cast<int32_t>(offsetof(VuforiaManager_t189047469, ___dataSets_17)); }
	inline Il2CppObject* get_dataSets_17() const { return ___dataSets_17; }
	inline Il2CppObject** get_address_of_dataSets_17() { return &___dataSets_17; }
	inline void set_dataSets_17(Il2CppObject* value)
	{
		___dataSets_17 = value;
		Il2CppCodeGenWriteBarrier(&___dataSets_17, value);
	}
};

struct VuforiaManager_t189047469_StaticFields
{
public:
	// VuforiaManager VuforiaManager::instance
	VuforiaManager_t189047469 * ___instance_0;

public:
	inline static int32_t get_offset_of_instance_0() { return static_cast<int32_t>(offsetof(VuforiaManager_t189047469_StaticFields, ___instance_0)); }
	inline VuforiaManager_t189047469 * get_instance_0() const { return ___instance_0; }
	inline VuforiaManager_t189047469 ** get_address_of_instance_0() { return &___instance_0; }
	inline void set_instance_0(VuforiaManager_t189047469 * value)
	{
		___instance_0 = value;
		Il2CppCodeGenWriteBarrier(&___instance_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
