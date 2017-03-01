#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Reference`1<UnityEngine.AudioClip>
struct Reference_1_t1425086317;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "AssemblyU2DCSharp_ImageItem1947162666.h"
#include "AssemblyU2DCSharp_Tour_AudioButton_AudioState1529271175.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tour/AudioButton
struct  AudioButton_t1190087241  : public ImageItem_t1947162666
{
public:
	// Reference`1<UnityEngine.AudioClip> Tour/AudioButton::audio
	Reference_1_t1425086317 * ___audio_3;
	// UnityEngine.AudioSource Tour/AudioButton::audioSource
	AudioSource_t1135106623 * ___audioSource_4;
	// Tour/AudioButton/AudioState Tour/AudioButton::state
	int32_t ___state_5;

public:
	inline static int32_t get_offset_of_audio_3() { return static_cast<int32_t>(offsetof(AudioButton_t1190087241, ___audio_3)); }
	inline Reference_1_t1425086317 * get_audio_3() const { return ___audio_3; }
	inline Reference_1_t1425086317 ** get_address_of_audio_3() { return &___audio_3; }
	inline void set_audio_3(Reference_1_t1425086317 * value)
	{
		___audio_3 = value;
		Il2CppCodeGenWriteBarrier(&___audio_3, value);
	}

	inline static int32_t get_offset_of_audioSource_4() { return static_cast<int32_t>(offsetof(AudioButton_t1190087241, ___audioSource_4)); }
	inline AudioSource_t1135106623 * get_audioSource_4() const { return ___audioSource_4; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_4() { return &___audioSource_4; }
	inline void set_audioSource_4(AudioSource_t1135106623 * value)
	{
		___audioSource_4 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_4, value);
	}

	inline static int32_t get_offset_of_state_5() { return static_cast<int32_t>(offsetof(AudioButton_t1190087241, ___state_5)); }
	inline int32_t get_state_5() const { return ___state_5; }
	inline int32_t* get_address_of_state_5() { return &___state_5; }
	inline void set_state_5(int32_t value)
	{
		___state_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
