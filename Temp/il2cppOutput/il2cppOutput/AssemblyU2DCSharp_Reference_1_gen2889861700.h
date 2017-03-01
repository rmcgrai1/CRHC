#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// UnityEngine.WWW
struct WWW_t2919945039;

#include "AssemblyU2DCSharp_Reference3342691873.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Reference`1<System.Byte[]>
struct  Reference_1_t2889861700  : public Reference_t3342691873
{
public:
	// System.String Reference`1::path
	String_t* ___path_0;
	// T Reference`1::data
	ByteU5BU5D_t3397334013* ___data_1;
	// System.Boolean Reference`1::_isLoaded
	bool ____isLoaded_2;
	// System.Int32 Reference`1::references
	int32_t ___references_3;
	// System.Byte[] Reference`1::byteData
	ByteU5BU5D_t3397334013* ___byteData_4;
	// UnityEngine.WWW Reference`1::www
	WWW_t2919945039 * ___www_5;

public:
	inline static int32_t get_offset_of_path_0() { return static_cast<int32_t>(offsetof(Reference_1_t2889861700, ___path_0)); }
	inline String_t* get_path_0() const { return ___path_0; }
	inline String_t** get_address_of_path_0() { return &___path_0; }
	inline void set_path_0(String_t* value)
	{
		___path_0 = value;
		Il2CppCodeGenWriteBarrier(&___path_0, value);
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(Reference_1_t2889861700, ___data_1)); }
	inline ByteU5BU5D_t3397334013* get_data_1() const { return ___data_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(ByteU5BU5D_t3397334013* value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}

	inline static int32_t get_offset_of__isLoaded_2() { return static_cast<int32_t>(offsetof(Reference_1_t2889861700, ____isLoaded_2)); }
	inline bool get__isLoaded_2() const { return ____isLoaded_2; }
	inline bool* get_address_of__isLoaded_2() { return &____isLoaded_2; }
	inline void set__isLoaded_2(bool value)
	{
		____isLoaded_2 = value;
	}

	inline static int32_t get_offset_of_references_3() { return static_cast<int32_t>(offsetof(Reference_1_t2889861700, ___references_3)); }
	inline int32_t get_references_3() const { return ___references_3; }
	inline int32_t* get_address_of_references_3() { return &___references_3; }
	inline void set_references_3(int32_t value)
	{
		___references_3 = value;
	}

	inline static int32_t get_offset_of_byteData_4() { return static_cast<int32_t>(offsetof(Reference_1_t2889861700, ___byteData_4)); }
	inline ByteU5BU5D_t3397334013* get_byteData_4() const { return ___byteData_4; }
	inline ByteU5BU5D_t3397334013** get_address_of_byteData_4() { return &___byteData_4; }
	inline void set_byteData_4(ByteU5BU5D_t3397334013* value)
	{
		___byteData_4 = value;
		Il2CppCodeGenWriteBarrier(&___byteData_4, value);
	}

	inline static int32_t get_offset_of_www_5() { return static_cast<int32_t>(offsetof(Reference_1_t2889861700, ___www_5)); }
	inline WWW_t2919945039 * get_www_5() const { return ___www_5; }
	inline WWW_t2919945039 ** get_address_of_www_5() { return &___www_5; }
	inline void set_www_5(WWW_t2919945039 * value)
	{
		___www_5 = value;
		Il2CppCodeGenWriteBarrier(&___www_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
