#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Char[]
struct CharU5BU5D_t1328083999;
// Newtonsoft.Json.Utilities.DateTimeParser
struct DateTimeParser_t1235213504;
struct DateTimeParser_t1235213504_marshaled_pinvoke;
struct DateTimeParser_t1235213504_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_DateTime1235213504.h"

// System.Void Newtonsoft.Json.Utilities.DateTimeParser::.cctor()
extern "C"  void DateTimeParser__cctor_m417902444 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::Parse(System.Char[],System.Int32,System.Int32)
extern "C"  bool DateTimeParser_Parse_m93898435 (DateTimeParser_t1235213504 * __this, CharU5BU5D_t1328083999* ___text0, int32_t ___startIndex1, int32_t ___length2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseDate(System.Int32)
extern "C"  bool DateTimeParser_ParseDate_m1939298771 (DateTimeParser_t1235213504 * __this, int32_t ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseTimeAndZoneAndWhitespace(System.Int32)
extern "C"  bool DateTimeParser_ParseTimeAndZoneAndWhitespace_m3098691983 (DateTimeParser_t1235213504 * __this, int32_t ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseTime(System.Int32&)
extern "C"  bool DateTimeParser_ParseTime_m508747414 (DateTimeParser_t1235213504 * __this, int32_t* ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseZone(System.Int32)
extern "C"  bool DateTimeParser_ParseZone_m1488795597 (DateTimeParser_t1235213504 * __this, int32_t ___start0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::Parse4Digit(System.Int32,System.Int32&)
extern "C"  bool DateTimeParser_Parse4Digit_m3838417687 (DateTimeParser_t1235213504 * __this, int32_t ___start0, int32_t* ___num1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::Parse2Digit(System.Int32,System.Int32&)
extern "C"  bool DateTimeParser_Parse2Digit_m1081024017 (DateTimeParser_t1235213504 * __this, int32_t ___start0, int32_t* ___num1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Utilities.DateTimeParser::ParseChar(System.Int32,System.Char)
extern "C"  bool DateTimeParser_ParseChar_m616730816 (DateTimeParser_t1235213504 * __this, int32_t ___start0, Il2CppChar ___ch1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct DateTimeParser_t1235213504;
struct DateTimeParser_t1235213504_marshaled_pinvoke;

extern "C" void DateTimeParser_t1235213504_marshal_pinvoke(const DateTimeParser_t1235213504& unmarshaled, DateTimeParser_t1235213504_marshaled_pinvoke& marshaled);
extern "C" void DateTimeParser_t1235213504_marshal_pinvoke_back(const DateTimeParser_t1235213504_marshaled_pinvoke& marshaled, DateTimeParser_t1235213504& unmarshaled);
extern "C" void DateTimeParser_t1235213504_marshal_pinvoke_cleanup(DateTimeParser_t1235213504_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct DateTimeParser_t1235213504;
struct DateTimeParser_t1235213504_marshaled_com;

extern "C" void DateTimeParser_t1235213504_marshal_com(const DateTimeParser_t1235213504& unmarshaled, DateTimeParser_t1235213504_marshaled_com& marshaled);
extern "C" void DateTimeParser_t1235213504_marshal_com_back(const DateTimeParser_t1235213504_marshaled_com& marshaled, DateTimeParser_t1235213504& unmarshaled);
extern "C" void DateTimeParser_t1235213504_marshal_com_cleanup(DateTimeParser_t1235213504_marshaled_com& marshaled);
