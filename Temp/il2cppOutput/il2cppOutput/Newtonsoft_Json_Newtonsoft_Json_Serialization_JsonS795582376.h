#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t615697659;
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object>
struct BidirectionalDictionary_2_t3534731452;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t1719617802;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t3194904969;
// Newtonsoft.Json.Serialization.JsonSerializerProxy
struct JsonSerializerProxy_t27144642;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonSerializerInternalBase
struct  JsonSerializerInternalBase_t795582376  : public Il2CppObject
{
public:
	// Newtonsoft.Json.Serialization.ErrorContext Newtonsoft.Json.Serialization.JsonSerializerInternalBase::_currentErrorContext
	ErrorContext_t615697659 * ____currentErrorContext_0;
	// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.Object> Newtonsoft.Json.Serialization.JsonSerializerInternalBase::_mappings
	BidirectionalDictionary_2_t3534731452 * ____mappings_1;
	// Newtonsoft.Json.JsonSerializer Newtonsoft.Json.Serialization.JsonSerializerInternalBase::Serializer
	JsonSerializer_t1719617802 * ___Serializer_2;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.Serialization.JsonSerializerInternalBase::TraceWriter
	Il2CppObject * ___TraceWriter_3;
	// Newtonsoft.Json.Serialization.JsonSerializerProxy Newtonsoft.Json.Serialization.JsonSerializerInternalBase::InternalSerializer
	JsonSerializerProxy_t27144642 * ___InternalSerializer_4;

public:
	inline static int32_t get_offset_of__currentErrorContext_0() { return static_cast<int32_t>(offsetof(JsonSerializerInternalBase_t795582376, ____currentErrorContext_0)); }
	inline ErrorContext_t615697659 * get__currentErrorContext_0() const { return ____currentErrorContext_0; }
	inline ErrorContext_t615697659 ** get_address_of__currentErrorContext_0() { return &____currentErrorContext_0; }
	inline void set__currentErrorContext_0(ErrorContext_t615697659 * value)
	{
		____currentErrorContext_0 = value;
		Il2CppCodeGenWriteBarrier(&____currentErrorContext_0, value);
	}

	inline static int32_t get_offset_of__mappings_1() { return static_cast<int32_t>(offsetof(JsonSerializerInternalBase_t795582376, ____mappings_1)); }
	inline BidirectionalDictionary_2_t3534731452 * get__mappings_1() const { return ____mappings_1; }
	inline BidirectionalDictionary_2_t3534731452 ** get_address_of__mappings_1() { return &____mappings_1; }
	inline void set__mappings_1(BidirectionalDictionary_2_t3534731452 * value)
	{
		____mappings_1 = value;
		Il2CppCodeGenWriteBarrier(&____mappings_1, value);
	}

	inline static int32_t get_offset_of_Serializer_2() { return static_cast<int32_t>(offsetof(JsonSerializerInternalBase_t795582376, ___Serializer_2)); }
	inline JsonSerializer_t1719617802 * get_Serializer_2() const { return ___Serializer_2; }
	inline JsonSerializer_t1719617802 ** get_address_of_Serializer_2() { return &___Serializer_2; }
	inline void set_Serializer_2(JsonSerializer_t1719617802 * value)
	{
		___Serializer_2 = value;
		Il2CppCodeGenWriteBarrier(&___Serializer_2, value);
	}

	inline static int32_t get_offset_of_TraceWriter_3() { return static_cast<int32_t>(offsetof(JsonSerializerInternalBase_t795582376, ___TraceWriter_3)); }
	inline Il2CppObject * get_TraceWriter_3() const { return ___TraceWriter_3; }
	inline Il2CppObject ** get_address_of_TraceWriter_3() { return &___TraceWriter_3; }
	inline void set_TraceWriter_3(Il2CppObject * value)
	{
		___TraceWriter_3 = value;
		Il2CppCodeGenWriteBarrier(&___TraceWriter_3, value);
	}

	inline static int32_t get_offset_of_InternalSerializer_4() { return static_cast<int32_t>(offsetof(JsonSerializerInternalBase_t795582376, ___InternalSerializer_4)); }
	inline JsonSerializerProxy_t27144642 * get_InternalSerializer_4() const { return ___InternalSerializer_4; }
	inline JsonSerializerProxy_t27144642 ** get_address_of_InternalSerializer_4() { return &___InternalSerializer_4; }
	inline void set_InternalSerializer_4(JsonSerializerProxy_t27144642 * value)
	{
		___InternalSerializer_4 = value;
		Il2CppCodeGenWriteBarrier(&___InternalSerializer_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
