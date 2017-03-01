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

// Newtonsoft.Json.JsonTextReader
struct JsonTextReader_t726416198;
// System.IO.TextReader
struct TextReader_t1561828458;
// System.Char[]
struct CharU5BU5D_t1328083999;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonReaderException
struct JsonReaderException_t2043888884;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextReader1561828458.h"
#include "Newtonsoft_Json_Newtonsoft_Json_ReadType2202027848.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"
#include "mscorlib_System_Nullable_1_gen3251239280.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_Nullable_1_gen3921022517.h"
#include "mscorlib_System_Nullable_1_gen3282734688.h"
#include "mscorlib_System_Nullable_1_gen2341081996.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Newtonsoft.Json.JsonTextReader::.ctor(System.IO.TextReader)
extern "C"  void JsonTextReader__ctor_m3880718744 (JsonTextReader_t726416198 * __this, TextReader_t1561828458 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::EnsureBufferNotEmpty()
extern "C"  void JsonTextReader_EnsureBufferNotEmpty_m1294290915 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::OnNewLine(System.Int32)
extern "C"  void JsonTextReader_OnNewLine_m1477725975 (JsonTextReader_t726416198 * __this, int32_t ___pos0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseString(System.Char,Newtonsoft.Json.ReadType)
extern "C"  void JsonTextReader_ParseString_m4281374691 (JsonTextReader_t726416198 * __this, Il2CppChar ___quote0, int32_t ___readType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::BlockCopyChars(System.Char[],System.Int32,System.Char[],System.Int32,System.Int32)
extern "C"  void JsonTextReader_BlockCopyChars_m3093788803 (Il2CppObject * __this /* static, unused */, CharU5BU5D_t1328083999* ___src0, int32_t ___srcOffset1, CharU5BU5D_t1328083999* ___dst2, int32_t ___dstOffset3, int32_t ___count4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ShiftBufferIfNeeded()
extern "C"  void JsonTextReader_ShiftBufferIfNeeded_m899649737 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonTextReader::ReadData(System.Boolean)
extern "C"  int32_t JsonTextReader_ReadData_m389786086 (JsonTextReader_t726416198 * __this, bool ___append0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonTextReader::ReadData(System.Boolean,System.Int32)
extern "C"  int32_t JsonTextReader_ReadData_m1685822975 (JsonTextReader_t726416198 * __this, bool ___append0, int32_t ___charsRequired1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::EnsureChars(System.Int32,System.Boolean)
extern "C"  bool JsonTextReader_EnsureChars_m1135356268 (JsonTextReader_t726416198 * __this, int32_t ___relativePosition0, bool ___append1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ReadChars(System.Int32,System.Boolean)
extern "C"  bool JsonTextReader_ReadChars_m3560351270 (JsonTextReader_t726416198 * __this, int32_t ___relativePosition0, bool ___append1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::Read()
extern "C"  bool JsonTextReader_Read_m1391338795 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonTextReader::ReadAsInt32()
extern "C"  Nullable_1_t334943763  JsonTextReader_ReadAsInt32_m2538985784 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTime> Newtonsoft.Json.JsonTextReader::ReadAsDateTime()
extern "C"  Nullable_1_t3251239280  JsonTextReader_ReadAsDateTime_m2999252650 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.JsonTextReader::ReadAsString()
extern "C"  String_t* JsonTextReader_ReadAsString_m1836809981 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Newtonsoft.Json.JsonTextReader::ReadAsBytes()
extern "C"  ByteU5BU5D_t3397334013* JsonTextReader_ReadAsBytes_m3546920980 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonTextReader::ReadStringValue(Newtonsoft.Json.ReadType)
extern "C"  Il2CppObject * JsonTextReader_ReadStringValue_m157824605 (JsonTextReader_t726416198 * __this, int32_t ___readType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonReaderException Newtonsoft.Json.JsonTextReader::CreateUnexpectedCharacterException(System.Char)
extern "C"  JsonReaderException_t2043888884 * JsonTextReader_CreateUnexpectedCharacterException_m2968866623 (JsonTextReader_t726416198 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonTextReader::ReadAsBoolean()
extern "C"  Nullable_1_t2088641033  JsonTextReader_ReadAsBoolean_m3734443676 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ProcessValueComma()
extern "C"  void JsonTextReader_ProcessValueComma_m908476442 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonTextReader::ReadNumberValue(Newtonsoft.Json.ReadType)
extern "C"  Il2CppObject * JsonTextReader_ReadNumberValue_m2217026095 (JsonTextReader_t726416198 * __this, int32_t ___readType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.DateTimeOffset> Newtonsoft.Json.JsonTextReader::ReadAsDateTimeOffset()
extern "C"  Nullable_1_t3921022517  JsonTextReader_ReadAsDateTimeOffset_m1426129482 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Decimal> Newtonsoft.Json.JsonTextReader::ReadAsDecimal()
extern "C"  Nullable_1_t3282734688  JsonTextReader_ReadAsDecimal_m3561533758 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Double> Newtonsoft.Json.JsonTextReader::ReadAsDouble()
extern "C"  Nullable_1_t2341081996  JsonTextReader_ReadAsDouble_m796703530 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::HandleNull()
extern "C"  void JsonTextReader_HandleNull_m1540181076 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ReadFinished()
extern "C"  void JsonTextReader_ReadFinished_m2427771349 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ReadNullChar()
extern "C"  bool JsonTextReader_ReadNullChar_m2921628618 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::EnsureBuffer()
extern "C"  void JsonTextReader_EnsureBuffer_m2869154695 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ReadStringIntoBuffer(System.Char)
extern "C"  void JsonTextReader_ReadStringIntoBuffer_m2843604841 (JsonTextReader_t726416198 * __this, Il2CppChar ___quote0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::WriteCharToBuffer(System.Char,System.Int32,System.Int32)
extern "C"  void JsonTextReader_WriteCharToBuffer_m1306191738 (JsonTextReader_t726416198 * __this, Il2CppChar ___writeChar0, int32_t ___lastWritePosition1, int32_t ___writeToPosition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char Newtonsoft.Json.JsonTextReader::ParseUnicode()
extern "C"  Il2CppChar JsonTextReader_ParseUnicode_m2732781547 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ReadNumberIntoBuffer()
extern "C"  void JsonTextReader_ReadNumberIntoBuffer_m4206841166 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ClearRecentString()
extern "C"  void JsonTextReader_ClearRecentString_m2668805240 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ParsePostValue()
extern "C"  bool JsonTextReader_ParsePostValue_m3295338315 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ParseObject()
extern "C"  bool JsonTextReader_ParseObject_m1559133365 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ParseProperty()
extern "C"  bool JsonTextReader_ParseProperty_m2168390827 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ValidIdentifierChar(System.Char)
extern "C"  bool JsonTextReader_ValidIdentifierChar_m3105096527 (JsonTextReader_t726416198 * __this, Il2CppChar ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseUnquotedProperty()
extern "C"  void JsonTextReader_ParseUnquotedProperty_m2648884498 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::ParseValue()
extern "C"  bool JsonTextReader_ParseValue_m2368281263 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ProcessLineFeed()
extern "C"  void JsonTextReader_ProcessLineFeed_m3645654696 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ProcessCarriageReturn(System.Boolean)
extern "C"  void JsonTextReader_ProcessCarriageReturn_m924964991 (JsonTextReader_t726416198 * __this, bool ___append0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::EatWhitespace(System.Boolean)
extern "C"  bool JsonTextReader_EatWhitespace_m2606878633 (JsonTextReader_t726416198 * __this, bool ___oneOrMore0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseConstructor()
extern "C"  void JsonTextReader_ParseConstructor_m2138260598 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseNumber(Newtonsoft.Json.ReadType)
extern "C"  void JsonTextReader_ParseNumber_m523809454 (JsonTextReader_t726416198 * __this, int32_t ___readType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseComment(System.Boolean)
extern "C"  void JsonTextReader_ParseComment_m567150450 (JsonTextReader_t726416198 * __this, bool ___setToken0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::EndComment(System.Boolean,System.Int32,System.Int32)
extern "C"  void JsonTextReader_EndComment_m1961174342 (JsonTextReader_t726416198 * __this, bool ___setToken0, int32_t ___initialPosition1, int32_t ___endPosition2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::MatchValue(System.String)
extern "C"  bool JsonTextReader_MatchValue_m2613089335 (JsonTextReader_t726416198 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::MatchValueWithTrailingSeparator(System.String)
extern "C"  bool JsonTextReader_MatchValueWithTrailingSeparator_m3416021220 (JsonTextReader_t726416198 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::IsSeparator(System.Char)
extern "C"  bool JsonTextReader_IsSeparator_m2971717565 (JsonTextReader_t726416198 * __this, Il2CppChar ___c0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseTrue()
extern "C"  void JsonTextReader_ParseTrue_m1588843588 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseNull()
extern "C"  void JsonTextReader_ParseNull_m3054949027 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseUndefined()
extern "C"  void JsonTextReader_ParseUndefined_m784449234 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::ParseFalse()
extern "C"  void JsonTextReader_ParseFalse_m271267917 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonTextReader::ParseNumberNegativeInfinity(Newtonsoft.Json.ReadType)
extern "C"  Il2CppObject * JsonTextReader_ParseNumberNegativeInfinity_m30226748 (JsonTextReader_t726416198 * __this, int32_t ___readType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonTextReader::ParseNumberPositiveInfinity(Newtonsoft.Json.ReadType)
extern "C"  Il2CppObject * JsonTextReader_ParseNumberPositiveInfinity_m1354431916 (JsonTextReader_t726416198 * __this, int32_t ___readType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.JsonTextReader::ParseNumberNaN(Newtonsoft.Json.ReadType)
extern "C"  Il2CppObject * JsonTextReader_ParseNumberNaN_m1244784852 (JsonTextReader_t726416198 * __this, int32_t ___readType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.JsonTextReader::Close()
extern "C"  void JsonTextReader_Close_m51159183 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.JsonTextReader::HasLineInfo()
extern "C"  bool JsonTextReader_HasLineInfo_m3206286723 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonTextReader::get_LineNumber()
extern "C"  int32_t JsonTextReader_get_LineNumber_m3737287335 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Newtonsoft.Json.JsonTextReader::get_LinePosition()
extern "C"  int32_t JsonTextReader_get_LinePosition_m2175763817 (JsonTextReader_t726416198 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
