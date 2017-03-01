#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct  JPropertyList_t572931806  : public Il2CppObject
{
public:
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty/JPropertyList::_token
	JToken_t2552644013 * ____token_0;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(JPropertyList_t572931806, ____token_0)); }
	inline JToken_t2552644013 * get__token_0() const { return ____token_0; }
	inline JToken_t2552644013 ** get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(JToken_t2552644013 * value)
	{
		____token_0 = value;
		Il2CppCodeGenWriteBarrier(&____token_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
