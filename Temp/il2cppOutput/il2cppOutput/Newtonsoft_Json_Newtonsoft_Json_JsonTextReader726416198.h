#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.TextReader
struct TextReader_t1561828458;
// System.Char[]
struct CharU5BU5D_t1328083999;
// Newtonsoft.Json.IArrayPool`1<System.Char>
struct IArrayPool_1_t1662561876;
// Newtonsoft.Json.Utilities.PropertyNameTable
struct PropertyNameTable_t1902004952;

#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader3154730733.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_StringBu2484172789.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_StringRe1873850304.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonTextReader
struct  JsonTextReader_t726416198  : public JsonReader_t3154730733
{
public:
	// System.IO.TextReader Newtonsoft.Json.JsonTextReader::_reader
	TextReader_t1561828458 * ____reader_15;
	// System.Char[] Newtonsoft.Json.JsonTextReader::_chars
	CharU5BU5D_t1328083999* ____chars_16;
	// System.Int32 Newtonsoft.Json.JsonTextReader::_charsUsed
	int32_t ____charsUsed_17;
	// System.Int32 Newtonsoft.Json.JsonTextReader::_charPos
	int32_t ____charPos_18;
	// System.Int32 Newtonsoft.Json.JsonTextReader::_lineStartPos
	int32_t ____lineStartPos_19;
	// System.Int32 Newtonsoft.Json.JsonTextReader::_lineNumber
	int32_t ____lineNumber_20;
	// System.Boolean Newtonsoft.Json.JsonTextReader::_isEndOfFile
	bool ____isEndOfFile_21;
	// Newtonsoft.Json.Utilities.StringBuffer Newtonsoft.Json.JsonTextReader::_stringBuffer
	StringBuffer_t2484172789  ____stringBuffer_22;
	// Newtonsoft.Json.Utilities.StringReference Newtonsoft.Json.JsonTextReader::_stringReference
	StringReference_t1873850304  ____stringReference_23;
	// Newtonsoft.Json.IArrayPool`1<System.Char> Newtonsoft.Json.JsonTextReader::_arrayPool
	Il2CppObject* ____arrayPool_24;
	// Newtonsoft.Json.Utilities.PropertyNameTable Newtonsoft.Json.JsonTextReader::NameTable
	PropertyNameTable_t1902004952 * ___NameTable_25;

public:
	inline static int32_t get_offset_of__reader_15() { return static_cast<int32_t>(offsetof(JsonTextReader_t726416198, ____reader_15)); }
	inline TextReader_t1561828458 * get__reader_15() const { return ____reader_15; }
	inline TextReader_t1561828458 ** get_address_of__reader_15() { return &____reader_15; }
	inline void set__reader_15(TextReader_t1561828458 * value)
	{
		____reader_15 = value;
		Il2CppCodeGenWriteBarrier(&____reader_15, value);
	}

	inline static int32_t get_offset_of__chars_16() { return static_cast<int32_t>(offsetof(JsonTextReader_t726416198, ____chars_16)); }
	inline CharU5BU5D_t1328083999* get__chars_16() const { return ____chars_16; }
	inline CharU5BU5D_t1328083999** get_address_of__chars_16() { return &____chars_16; }
	inline void set__chars_16(CharU5BU5D_t1328083999* value)
	{
		____chars_16 = value;
		Il2CppCodeGenWriteBarrier(&____chars_16, value);
	}

	inline static int32_t get_offset_of__charsUsed_17() { return static_cast<int32_t>(offsetof(JsonTextReader_t726416198, ____charsUsed_17)); }
	inline int32_t get__charsUsed_17() const { return ____charsUsed_17; }
	inline int32_t* get_address_of__charsUsed_17() { return &____charsUsed_17; }
	inline void set__charsUsed_17(int32_t value)
	{
		____charsUsed_17 = value;
	}

	inline static int32_t get_offset_of__charPos_18() { return static_cast<int32_t>(offsetof(JsonTextReader_t726416198, ____charPos_18)); }
	inline int32_t get__charPos_18() const { return ____charPos_18; }
	inline int32_t* get_address_of__charPos_18() { return &____charPos_18; }
	inline void set__charPos_18(int32_t value)
	{
		____charPos_18 = value;
	}

	inline static int32_t get_offset_of__lineStartPos_19() { return static_cast<int32_t>(offsetof(JsonTextReader_t726416198, ____lineStartPos_19)); }
	inline int32_t get__lineStartPos_19() const { return ____lineStartPos_19; }
	inline int32_t* get_address_of__lineStartPos_19() { return &____lineStartPos_19; }
	inline void set__lineStartPos_19(int32_t value)
	{
		____lineStartPos_19 = value;
	}

	inline static int32_t get_offset_of__lineNumber_20() { return static_cast<int32_t>(offsetof(JsonTextReader_t726416198, ____lineNumber_20)); }
	inline int32_t get__lineNumber_20() const { return ____lineNumber_20; }
	inline int32_t* get_address_of__lineNumber_20() { return &____lineNumber_20; }
	inline void set__lineNumber_20(int32_t value)
	{
		____lineNumber_20 = value;
	}

	inline static int32_t get_offset_of__isEndOfFile_21() { return static_cast<int32_t>(offsetof(JsonTextReader_t726416198, ____isEndOfFile_21)); }
	inline bool get__isEndOfFile_21() const { return ____isEndOfFile_21; }
	inline bool* get_address_of__isEndOfFile_21() { return &____isEndOfFile_21; }
	inline void set__isEndOfFile_21(bool value)
	{
		____isEndOfFile_21 = value;
	}

	inline static int32_t get_offset_of__stringBuffer_22() { return static_cast<int32_t>(offsetof(JsonTextReader_t726416198, ____stringBuffer_22)); }
	inline StringBuffer_t2484172789  get__stringBuffer_22() const { return ____stringBuffer_22; }
	inline StringBuffer_t2484172789 * get_address_of__stringBuffer_22() { return &____stringBuffer_22; }
	inline void set__stringBuffer_22(StringBuffer_t2484172789  value)
	{
		____stringBuffer_22 = value;
	}

	inline static int32_t get_offset_of__stringReference_23() { return static_cast<int32_t>(offsetof(JsonTextReader_t726416198, ____stringReference_23)); }
	inline StringReference_t1873850304  get__stringReference_23() const { return ____stringReference_23; }
	inline StringReference_t1873850304 * get_address_of__stringReference_23() { return &____stringReference_23; }
	inline void set__stringReference_23(StringReference_t1873850304  value)
	{
		____stringReference_23 = value;
	}

	inline static int32_t get_offset_of__arrayPool_24() { return static_cast<int32_t>(offsetof(JsonTextReader_t726416198, ____arrayPool_24)); }
	inline Il2CppObject* get__arrayPool_24() const { return ____arrayPool_24; }
	inline Il2CppObject** get_address_of__arrayPool_24() { return &____arrayPool_24; }
	inline void set__arrayPool_24(Il2CppObject* value)
	{
		____arrayPool_24 = value;
		Il2CppCodeGenWriteBarrier(&____arrayPool_24, value);
	}

	inline static int32_t get_offset_of_NameTable_25() { return static_cast<int32_t>(offsetof(JsonTextReader_t726416198, ___NameTable_25)); }
	inline PropertyNameTable_t1902004952 * get_NameTable_25() const { return ___NameTable_25; }
	inline PropertyNameTable_t1902004952 ** get_address_of_NameTable_25() { return &___NameTable_25; }
	inline void set_NameTable_25(PropertyNameTable_t1902004952 * value)
	{
		___NameTable_25 = value;
		Il2CppCodeGenWriteBarrier(&___NameTable_25, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
