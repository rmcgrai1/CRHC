#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Reference`1<System.Byte[]>
struct Reference_1_t2889861700;
// Reference`1<System.String>
struct Reference_1_t1521747920;

#include "AssemblyU2DCSharp_CrchFolder_1_gen2802156644.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Landmark
struct  Landmark_t1862459476  : public CrchFolder_1_t2802156644
{
public:
	// Reference`1<System.Byte[]> Landmark::dat
	Reference_1_t2889861700 * ___dat_8;
	// Reference`1<System.String> Landmark::xml
	Reference_1_t1521747920 * ___xml_9;

public:
	inline static int32_t get_offset_of_dat_8() { return static_cast<int32_t>(offsetof(Landmark_t1862459476, ___dat_8)); }
	inline Reference_1_t2889861700 * get_dat_8() const { return ___dat_8; }
	inline Reference_1_t2889861700 ** get_address_of_dat_8() { return &___dat_8; }
	inline void set_dat_8(Reference_1_t2889861700 * value)
	{
		___dat_8 = value;
		Il2CppCodeGenWriteBarrier(&___dat_8, value);
	}

	inline static int32_t get_offset_of_xml_9() { return static_cast<int32_t>(offsetof(Landmark_t1862459476, ___xml_9)); }
	inline Reference_1_t1521747920 * get_xml_9() const { return ___xml_9; }
	inline Reference_1_t1521747920 ** get_address_of_xml_9() { return &___xml_9; }
	inline void set_xml_9(Reference_1_t1521747920 * value)
	{
		___xml_9 = value;
		Il2CppCodeGenWriteBarrier(&___xml_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
