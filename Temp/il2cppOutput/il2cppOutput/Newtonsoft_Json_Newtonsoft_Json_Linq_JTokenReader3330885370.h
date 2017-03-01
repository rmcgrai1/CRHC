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
// System.String
struct String_t;

#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader3154730733.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JTokenReader
struct  JTokenReader_t3330885370  : public JsonReader_t3154730733
{
public:
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JTokenReader::_root
	JToken_t2552644013 * ____root_15;
	// System.String Newtonsoft.Json.Linq.JTokenReader::_initialPath
	String_t* ____initialPath_16;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JTokenReader::_parent
	JToken_t2552644013 * ____parent_17;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JTokenReader::_current
	JToken_t2552644013 * ____current_18;

public:
	inline static int32_t get_offset_of__root_15() { return static_cast<int32_t>(offsetof(JTokenReader_t3330885370, ____root_15)); }
	inline JToken_t2552644013 * get__root_15() const { return ____root_15; }
	inline JToken_t2552644013 ** get_address_of__root_15() { return &____root_15; }
	inline void set__root_15(JToken_t2552644013 * value)
	{
		____root_15 = value;
		Il2CppCodeGenWriteBarrier(&____root_15, value);
	}

	inline static int32_t get_offset_of__initialPath_16() { return static_cast<int32_t>(offsetof(JTokenReader_t3330885370, ____initialPath_16)); }
	inline String_t* get__initialPath_16() const { return ____initialPath_16; }
	inline String_t** get_address_of__initialPath_16() { return &____initialPath_16; }
	inline void set__initialPath_16(String_t* value)
	{
		____initialPath_16 = value;
		Il2CppCodeGenWriteBarrier(&____initialPath_16, value);
	}

	inline static int32_t get_offset_of__parent_17() { return static_cast<int32_t>(offsetof(JTokenReader_t3330885370, ____parent_17)); }
	inline JToken_t2552644013 * get__parent_17() const { return ____parent_17; }
	inline JToken_t2552644013 ** get_address_of__parent_17() { return &____parent_17; }
	inline void set__parent_17(JToken_t2552644013 * value)
	{
		____parent_17 = value;
		Il2CppCodeGenWriteBarrier(&____parent_17, value);
	}

	inline static int32_t get_offset_of__current_18() { return static_cast<int32_t>(offsetof(JTokenReader_t3330885370, ____current_18)); }
	inline JToken_t2552644013 * get__current_18() const { return ____current_18; }
	inline JToken_t2552644013 ** get_address_of__current_18() { return &____current_18; }
	inline void set__current_18(JToken_t2552644013 * value)
	{
		____current_18 = value;
		Il2CppCodeGenWriteBarrier(&____current_18, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
