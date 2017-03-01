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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MapServer
struct  MapServer_t4172556483  : public Il2CppObject
{
public:

public:
};

struct MapServer_t4172556483_StaticFields
{
public:
	// System.String MapServer::BASE_URL
	String_t* ___BASE_URL_0;
	// System.Boolean MapServer::isOpen
	bool ___isOpen_1;

public:
	inline static int32_t get_offset_of_BASE_URL_0() { return static_cast<int32_t>(offsetof(MapServer_t4172556483_StaticFields, ___BASE_URL_0)); }
	inline String_t* get_BASE_URL_0() const { return ___BASE_URL_0; }
	inline String_t** get_address_of_BASE_URL_0() { return &___BASE_URL_0; }
	inline void set_BASE_URL_0(String_t* value)
	{
		___BASE_URL_0 = value;
		Il2CppCodeGenWriteBarrier(&___BASE_URL_0, value);
	}

	inline static int32_t get_offset_of_isOpen_1() { return static_cast<int32_t>(offsetof(MapServer_t4172556483_StaticFields, ___isOpen_1)); }
	inline bool get_isOpen_1() const { return ___isOpen_1; }
	inline bool* get_address_of_isOpen_1() { return &___isOpen_1; }
	inline void set_isOpen_1(bool value)
	{
		___isOpen_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
