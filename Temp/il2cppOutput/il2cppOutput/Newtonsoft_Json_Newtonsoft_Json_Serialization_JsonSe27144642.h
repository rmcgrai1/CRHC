#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Serialization.JsonSerializerInternalReader
struct JsonSerializerInternalReader_t3254279720;
// Newtonsoft.Json.Serialization.JsonSerializerInternalWriter
struct JsonSerializerInternalWriter_t3234521618;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t1719617802;

#include "Newtonsoft_Json_Newtonsoft_Json_JsonSerializer1719617802.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonSerializerProxy
struct  JsonSerializerProxy_t27144642  : public JsonSerializer_t1719617802
{
public:
	// Newtonsoft.Json.Serialization.JsonSerializerInternalReader Newtonsoft.Json.Serialization.JsonSerializerProxy::_serializerReader
	JsonSerializerInternalReader_t3254279720 * ____serializerReader_31;
	// Newtonsoft.Json.Serialization.JsonSerializerInternalWriter Newtonsoft.Json.Serialization.JsonSerializerProxy::_serializerWriter
	JsonSerializerInternalWriter_t3234521618 * ____serializerWriter_32;
	// Newtonsoft.Json.JsonSerializer Newtonsoft.Json.Serialization.JsonSerializerProxy::_serializer
	JsonSerializer_t1719617802 * ____serializer_33;

public:
	inline static int32_t get_offset_of__serializerReader_31() { return static_cast<int32_t>(offsetof(JsonSerializerProxy_t27144642, ____serializerReader_31)); }
	inline JsonSerializerInternalReader_t3254279720 * get__serializerReader_31() const { return ____serializerReader_31; }
	inline JsonSerializerInternalReader_t3254279720 ** get_address_of__serializerReader_31() { return &____serializerReader_31; }
	inline void set__serializerReader_31(JsonSerializerInternalReader_t3254279720 * value)
	{
		____serializerReader_31 = value;
		Il2CppCodeGenWriteBarrier(&____serializerReader_31, value);
	}

	inline static int32_t get_offset_of__serializerWriter_32() { return static_cast<int32_t>(offsetof(JsonSerializerProxy_t27144642, ____serializerWriter_32)); }
	inline JsonSerializerInternalWriter_t3234521618 * get__serializerWriter_32() const { return ____serializerWriter_32; }
	inline JsonSerializerInternalWriter_t3234521618 ** get_address_of__serializerWriter_32() { return &____serializerWriter_32; }
	inline void set__serializerWriter_32(JsonSerializerInternalWriter_t3234521618 * value)
	{
		____serializerWriter_32 = value;
		Il2CppCodeGenWriteBarrier(&____serializerWriter_32, value);
	}

	inline static int32_t get_offset_of__serializer_33() { return static_cast<int32_t>(offsetof(JsonSerializerProxy_t27144642, ____serializer_33)); }
	inline JsonSerializer_t1719617802 * get__serializer_33() const { return ____serializer_33; }
	inline JsonSerializer_t1719617802 ** get_address_of__serializer_33() { return &____serializer_33; }
	inline void set__serializer_33(JsonSerializer_t1719617802 * value)
	{
		____serializer_33 = value;
		Il2CppCodeGenWriteBarrier(&____serializer_33, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
