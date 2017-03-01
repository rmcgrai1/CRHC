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

// Newtonsoft.Json.Converters.RegexConverter
struct RegexConverter_t3589249209;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t1719617802;
// Newtonsoft.Json.Bson.BsonWriter
struct BsonWriter_t101776461;
// System.Text.RegularExpressions.Regex
struct Regex_t1803876613;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1973729997.h"
#include "mscorlib_System_Object2689449295.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonSerializer1719617802.h"
#include "System_System_Text_RegularExpressions_RegexOptions2418259727.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Bson_BsonWriter101776461.h"
#include "System_System_Text_RegularExpressions_Regex1803876613.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader3154730733.h"
#include "mscorlib_System_Type1303803226.h"

// System.Void Newtonsoft.Json.Converters.RegexConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  void RegexConverter_WriteJson_m2503769273 (RegexConverter_t3589249209 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, JsonSerializer_t1719617802 * ___serializer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.RegexConverter::HasFlag(System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.RegexOptions)
extern "C"  bool RegexConverter_HasFlag_m2764837215 (RegexConverter_t3589249209 * __this, int32_t ___options0, int32_t ___flag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.RegexConverter::WriteBson(Newtonsoft.Json.Bson.BsonWriter,System.Text.RegularExpressions.Regex)
extern "C"  void RegexConverter_WriteBson_m1178767088 (RegexConverter_t3589249209 * __this, BsonWriter_t101776461 * ___writer0, Regex_t1803876613 * ___regex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.RegexConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Text.RegularExpressions.Regex,Newtonsoft.Json.JsonSerializer)
extern "C"  void RegexConverter_WriteJson_m2038045883 (RegexConverter_t3589249209 * __this, JsonWriter_t1973729997 * ___writer0, Regex_t1803876613 * ___regex1, JsonSerializer_t1719617802 * ___serializer2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Converters.RegexConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
extern "C"  Il2CppObject * RegexConverter_ReadJson_m3573493454 (RegexConverter_t3589249209 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___objectType1, Il2CppObject * ___existingValue2, JsonSerializer_t1719617802 * ___serializer3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Converters.RegexConverter::ReadRegexString(Newtonsoft.Json.JsonReader)
extern "C"  Il2CppObject * RegexConverter_ReadRegexString_m349554536 (RegexConverter_t3589249209 * __this, JsonReader_t3154730733 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Regex Newtonsoft.Json.Converters.RegexConverter::ReadRegexObject(Newtonsoft.Json.JsonReader,Newtonsoft.Json.JsonSerializer)
extern "C"  Regex_t1803876613 * RegexConverter_ReadRegexObject_m634396441 (RegexConverter_t3589249209 * __this, JsonReader_t3154730733 * ___reader0, JsonSerializer_t1719617802 * ___serializer1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Converters.RegexConverter::CanConvert(System.Type)
extern "C"  bool RegexConverter_CanConvert_m4247933297 (RegexConverter_t3589249209 * __this, Type_t * ___objectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Converters.RegexConverter::.ctor()
extern "C"  void RegexConverter__ctor_m2767471641 (RegexConverter_t3589249209 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
