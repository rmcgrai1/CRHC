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

#include "AssemblyU2DCSharp_CrchFolder_1_gen2723766394.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Server
struct  Server_t2724320767  : public CrchFolder_1_t2723766394
{
public:
	// System.String Server::url
	String_t* ___url_8;

public:
	inline static int32_t get_offset_of_url_8() { return static_cast<int32_t>(offsetof(Server_t2724320767, ___url_8)); }
	inline String_t* get_url_8() const { return ___url_8; }
	inline String_t** get_address_of_url_8() { return &___url_8; }
	inline void set_url_8(String_t* value)
	{
		___url_8 = value;
		Il2CppCodeGenWriteBarrier(&___url_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
