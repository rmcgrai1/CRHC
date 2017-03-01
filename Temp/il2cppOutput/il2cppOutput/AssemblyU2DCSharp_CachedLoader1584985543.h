#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WWWLoader
struct WWWLoader_t2069512648;
// System.String
struct String_t;

#include "AssemblyU2DCSharp_ILoader1641484032.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CachedLoader
struct  CachedLoader_t1584985543  : public ILoader_t1641484032
{
public:
	// WWWLoader CachedLoader::loader
	WWWLoader_t2069512648 * ___loader_1;

public:
	inline static int32_t get_offset_of_loader_1() { return static_cast<int32_t>(offsetof(CachedLoader_t1584985543, ___loader_1)); }
	inline WWWLoader_t2069512648 * get_loader_1() const { return ___loader_1; }
	inline WWWLoader_t2069512648 ** get_address_of_loader_1() { return &___loader_1; }
	inline void set_loader_1(WWWLoader_t2069512648 * value)
	{
		___loader_1 = value;
		Il2CppCodeGenWriteBarrier(&___loader_1, value);
	}
};

struct CachedLoader_t1584985543_StaticFields
{
public:
	// System.String CachedLoader::WWW_PREFIX
	String_t* ___WWW_PREFIX_2;
	// System.String CachedLoader::SERVER_PATH
	String_t* ___SERVER_PATH_3;

public:
	inline static int32_t get_offset_of_WWW_PREFIX_2() { return static_cast<int32_t>(offsetof(CachedLoader_t1584985543_StaticFields, ___WWW_PREFIX_2)); }
	inline String_t* get_WWW_PREFIX_2() const { return ___WWW_PREFIX_2; }
	inline String_t** get_address_of_WWW_PREFIX_2() { return &___WWW_PREFIX_2; }
	inline void set_WWW_PREFIX_2(String_t* value)
	{
		___WWW_PREFIX_2 = value;
		Il2CppCodeGenWriteBarrier(&___WWW_PREFIX_2, value);
	}

	inline static int32_t get_offset_of_SERVER_PATH_3() { return static_cast<int32_t>(offsetof(CachedLoader_t1584985543_StaticFields, ___SERVER_PATH_3)); }
	inline String_t* get_SERVER_PATH_3() const { return ___SERVER_PATH_3; }
	inline String_t** get_address_of_SERVER_PATH_3() { return &___SERVER_PATH_3; }
	inline void set_SERVER_PATH_3(String_t* value)
	{
		___SERVER_PATH_3 = value;
		Il2CppCodeGenWriteBarrier(&___SERVER_PATH_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
