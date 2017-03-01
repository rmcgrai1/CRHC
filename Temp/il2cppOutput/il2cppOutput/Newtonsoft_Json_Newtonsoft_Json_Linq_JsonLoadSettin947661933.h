#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "mscorlib_System_Object2689449295.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_CommentHandli3545414906.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_LineInfoHandl2747370961.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JsonLoadSettings
struct  JsonLoadSettings_t947661933  : public Il2CppObject
{
public:
	// Newtonsoft.Json.Linq.CommentHandling Newtonsoft.Json.Linq.JsonLoadSettings::_commentHandling
	int32_t ____commentHandling_0;
	// Newtonsoft.Json.Linq.LineInfoHandling Newtonsoft.Json.Linq.JsonLoadSettings::_lineInfoHandling
	int32_t ____lineInfoHandling_1;

public:
	inline static int32_t get_offset_of__commentHandling_0() { return static_cast<int32_t>(offsetof(JsonLoadSettings_t947661933, ____commentHandling_0)); }
	inline int32_t get__commentHandling_0() const { return ____commentHandling_0; }
	inline int32_t* get_address_of__commentHandling_0() { return &____commentHandling_0; }
	inline void set__commentHandling_0(int32_t value)
	{
		____commentHandling_0 = value;
	}

	inline static int32_t get_offset_of__lineInfoHandling_1() { return static_cast<int32_t>(offsetof(JsonLoadSettings_t947661933, ____lineInfoHandling_1)); }
	inline int32_t get__lineInfoHandling_1() const { return ____lineInfoHandling_1; }
	inline int32_t* get_address_of__lineInfoHandling_1() { return &____lineInfoHandling_1; }
	inline void set__lineInfoHandling_1(int32_t value)
	{
		____lineInfoHandling_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
