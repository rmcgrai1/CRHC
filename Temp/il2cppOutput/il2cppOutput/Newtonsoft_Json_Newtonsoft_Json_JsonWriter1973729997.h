#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_t2725846494;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t56459381;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;

#include "mscorlib_System_Object2689449295.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonPosition687338249.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter_State3285832914.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Formatting4009318759.h"
#include "Newtonsoft_Json_Newtonsoft_Json_DateFormatHandling147563782.h"
#include "Newtonsoft_Json_Newtonsoft_Json_DateTimeZoneHandlin478160270.h"
#include "Newtonsoft_Json_Newtonsoft_Json_StringEscapeHandli3827428951.h"
#include "Newtonsoft_Json_Newtonsoft_Json_FloatFormatHandling898035958.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.JsonWriter
struct  JsonWriter_t1973729997  : public Il2CppObject
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t56459381 * ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_t687338249  ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter/State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_7;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_8;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_9;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_10;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t3500843524 * ____culture_12;

public:
	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_t1973729997, ____stack_2)); }
	inline List_1_t56459381 * get__stack_2() const { return ____stack_2; }
	inline List_1_t56459381 ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(List_1_t56459381 * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier(&____stack_2, value);
	}

	inline static int32_t get_offset_of__currentPosition_3() { return static_cast<int32_t>(offsetof(JsonWriter_t1973729997, ____currentPosition_3)); }
	inline JsonPosition_t687338249  get__currentPosition_3() const { return ____currentPosition_3; }
	inline JsonPosition_t687338249 * get_address_of__currentPosition_3() { return &____currentPosition_3; }
	inline void set__currentPosition_3(JsonPosition_t687338249  value)
	{
		____currentPosition_3 = value;
	}

	inline static int32_t get_offset_of__currentState_4() { return static_cast<int32_t>(offsetof(JsonWriter_t1973729997, ____currentState_4)); }
	inline int32_t get__currentState_4() const { return ____currentState_4; }
	inline int32_t* get_address_of__currentState_4() { return &____currentState_4; }
	inline void set__currentState_4(int32_t value)
	{
		____currentState_4 = value;
	}

	inline static int32_t get_offset_of__formatting_5() { return static_cast<int32_t>(offsetof(JsonWriter_t1973729997, ____formatting_5)); }
	inline int32_t get__formatting_5() const { return ____formatting_5; }
	inline int32_t* get_address_of__formatting_5() { return &____formatting_5; }
	inline void set__formatting_5(int32_t value)
	{
		____formatting_5 = value;
	}

	inline static int32_t get_offset_of_U3CCloseOutputU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JsonWriter_t1973729997, ___U3CCloseOutputU3Ek__BackingField_6)); }
	inline bool get_U3CCloseOutputU3Ek__BackingField_6() const { return ___U3CCloseOutputU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CCloseOutputU3Ek__BackingField_6() { return &___U3CCloseOutputU3Ek__BackingField_6; }
	inline void set_U3CCloseOutputU3Ek__BackingField_6(bool value)
	{
		___U3CCloseOutputU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_7() { return static_cast<int32_t>(offsetof(JsonWriter_t1973729997, ____dateFormatHandling_7)); }
	inline int32_t get__dateFormatHandling_7() const { return ____dateFormatHandling_7; }
	inline int32_t* get_address_of__dateFormatHandling_7() { return &____dateFormatHandling_7; }
	inline void set__dateFormatHandling_7(int32_t value)
	{
		____dateFormatHandling_7 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_8() { return static_cast<int32_t>(offsetof(JsonWriter_t1973729997, ____dateTimeZoneHandling_8)); }
	inline int32_t get__dateTimeZoneHandling_8() const { return ____dateTimeZoneHandling_8; }
	inline int32_t* get_address_of__dateTimeZoneHandling_8() { return &____dateTimeZoneHandling_8; }
	inline void set__dateTimeZoneHandling_8(int32_t value)
	{
		____dateTimeZoneHandling_8 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_9() { return static_cast<int32_t>(offsetof(JsonWriter_t1973729997, ____stringEscapeHandling_9)); }
	inline int32_t get__stringEscapeHandling_9() const { return ____stringEscapeHandling_9; }
	inline int32_t* get_address_of__stringEscapeHandling_9() { return &____stringEscapeHandling_9; }
	inline void set__stringEscapeHandling_9(int32_t value)
	{
		____stringEscapeHandling_9 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_10() { return static_cast<int32_t>(offsetof(JsonWriter_t1973729997, ____floatFormatHandling_10)); }
	inline int32_t get__floatFormatHandling_10() const { return ____floatFormatHandling_10; }
	inline int32_t* get_address_of__floatFormatHandling_10() { return &____floatFormatHandling_10; }
	inline void set__floatFormatHandling_10(int32_t value)
	{
		____floatFormatHandling_10 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_11() { return static_cast<int32_t>(offsetof(JsonWriter_t1973729997, ____dateFormatString_11)); }
	inline String_t* get__dateFormatString_11() const { return ____dateFormatString_11; }
	inline String_t** get_address_of__dateFormatString_11() { return &____dateFormatString_11; }
	inline void set__dateFormatString_11(String_t* value)
	{
		____dateFormatString_11 = value;
		Il2CppCodeGenWriteBarrier(&____dateFormatString_11, value);
	}

	inline static int32_t get_offset_of__culture_12() { return static_cast<int32_t>(offsetof(JsonWriter_t1973729997, ____culture_12)); }
	inline CultureInfo_t3500843524 * get__culture_12() const { return ____culture_12; }
	inline CultureInfo_t3500843524 ** get_address_of__culture_12() { return &____culture_12; }
	inline void set__culture_12(CultureInfo_t3500843524 * value)
	{
		____culture_12 = value;
		Il2CppCodeGenWriteBarrier(&____culture_12, value);
	}
};

struct JsonWriter_t1973729997_StaticFields
{
public:
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_t2725846494* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter/State[][] Newtonsoft.Json.JsonWriter::StateArrayTempate
	StateU5BU5DU5BU5D_t2725846494* ___StateArrayTempate_1;

public:
	inline static int32_t get_offset_of_StateArray_0() { return static_cast<int32_t>(offsetof(JsonWriter_t1973729997_StaticFields, ___StateArray_0)); }
	inline StateU5BU5DU5BU5D_t2725846494* get_StateArray_0() const { return ___StateArray_0; }
	inline StateU5BU5DU5BU5D_t2725846494** get_address_of_StateArray_0() { return &___StateArray_0; }
	inline void set_StateArray_0(StateU5BU5DU5BU5D_t2725846494* value)
	{
		___StateArray_0 = value;
		Il2CppCodeGenWriteBarrier(&___StateArray_0, value);
	}

	inline static int32_t get_offset_of_StateArrayTempate_1() { return static_cast<int32_t>(offsetof(JsonWriter_t1973729997_StaticFields, ___StateArrayTempate_1)); }
	inline StateU5BU5DU5BU5D_t2725846494* get_StateArrayTempate_1() const { return ___StateArrayTempate_1; }
	inline StateU5BU5DU5BU5D_t2725846494** get_address_of_StateArrayTempate_1() { return &___StateArrayTempate_1; }
	inline void set_StateArrayTempate_1(StateU5BU5DU5BU5D_t2725846494* value)
	{
		___StateArrayTempate_1 = value;
		Il2CppCodeGenWriteBarrier(&___StateArrayTempate_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
