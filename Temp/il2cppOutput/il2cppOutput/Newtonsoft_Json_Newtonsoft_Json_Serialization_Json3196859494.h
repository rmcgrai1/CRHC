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
// Newtonsoft.Json.Serialization.JsonISerializableContract
struct JsonISerializableContract_t122701872;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t2712067825;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonFormatterConverter
struct  JsonFormatterConverter_t3196859494  : public Il2CppObject
{
public:
	// Newtonsoft.Json.Serialization.JsonSerializerInternalReader Newtonsoft.Json.Serialization.JsonFormatterConverter::_reader
	JsonSerializerInternalReader_t3254279720 * ____reader_0;
	// Newtonsoft.Json.Serialization.JsonISerializableContract Newtonsoft.Json.Serialization.JsonFormatterConverter::_contract
	JsonISerializableContract_t122701872 * ____contract_1;
	// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonFormatterConverter::_member
	JsonProperty_t2712067825 * ____member_2;

public:
	inline static int32_t get_offset_of__reader_0() { return static_cast<int32_t>(offsetof(JsonFormatterConverter_t3196859494, ____reader_0)); }
	inline JsonSerializerInternalReader_t3254279720 * get__reader_0() const { return ____reader_0; }
	inline JsonSerializerInternalReader_t3254279720 ** get_address_of__reader_0() { return &____reader_0; }
	inline void set__reader_0(JsonSerializerInternalReader_t3254279720 * value)
	{
		____reader_0 = value;
		Il2CppCodeGenWriteBarrier(&____reader_0, value);
	}

	inline static int32_t get_offset_of__contract_1() { return static_cast<int32_t>(offsetof(JsonFormatterConverter_t3196859494, ____contract_1)); }
	inline JsonISerializableContract_t122701872 * get__contract_1() const { return ____contract_1; }
	inline JsonISerializableContract_t122701872 ** get_address_of__contract_1() { return &____contract_1; }
	inline void set__contract_1(JsonISerializableContract_t122701872 * value)
	{
		____contract_1 = value;
		Il2CppCodeGenWriteBarrier(&____contract_1, value);
	}

	inline static int32_t get_offset_of__member_2() { return static_cast<int32_t>(offsetof(JsonFormatterConverter_t3196859494, ____member_2)); }
	inline JsonProperty_t2712067825 * get__member_2() const { return ____member_2; }
	inline JsonProperty_t2712067825 ** get_address_of__member_2() { return &____member_2; }
	inline void set__member_2(JsonProperty_t2712067825 * value)
	{
		____member_2 = value;
		Il2CppCodeGenWriteBarrier(&____member_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
