#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Char[]
struct CharU5BU5D_t1328083999;

#include "mscorlib_System_ValueType3507792607.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.StringBuffer
struct  StringBuffer_t2484172789 
{
public:
	// System.Char[] Newtonsoft.Json.Utilities.StringBuffer::_buffer
	CharU5BU5D_t1328083999* ____buffer_0;
	// System.Int32 Newtonsoft.Json.Utilities.StringBuffer::_position
	int32_t ____position_1;

public:
	inline static int32_t get_offset_of__buffer_0() { return static_cast<int32_t>(offsetof(StringBuffer_t2484172789, ____buffer_0)); }
	inline CharU5BU5D_t1328083999* get__buffer_0() const { return ____buffer_0; }
	inline CharU5BU5D_t1328083999** get_address_of__buffer_0() { return &____buffer_0; }
	inline void set__buffer_0(CharU5BU5D_t1328083999* value)
	{
		____buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&____buffer_0, value);
	}

	inline static int32_t get_offset_of__position_1() { return static_cast<int32_t>(offsetof(StringBuffer_t2484172789, ____position_1)); }
	inline int32_t get__position_1() const { return ____position_1; }
	inline int32_t* get_address_of__position_1() { return &____position_1; }
	inline void set__position_1(int32_t value)
	{
		____position_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Newtonsoft.Json.Utilities.StringBuffer
struct StringBuffer_t2484172789_marshaled_pinvoke
{
	uint8_t* ____buffer_0;
	int32_t ____position_1;
};
// Native definition for COM marshalling of Newtonsoft.Json.Utilities.StringBuffer
struct StringBuffer_t2484172789_marshaled_com
{
	uint8_t* ____buffer_0;
	int32_t ____position_1;
};
