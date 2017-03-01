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

// Newtonsoft.Json.Serialization.JsonSerializerInternalReader
struct JsonSerializerInternalReader_t3254279720;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t1719617802;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t1566984540;
// System.Type
struct Type_t;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.JsonReader
struct JsonReader_t3154730733;
// Newtonsoft.Json.Serialization.JsonSerializerProxy
struct JsonSerializerProxy_t27144642;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t2712067825;
// Newtonsoft.Json.Serialization.JsonContainerContract
struct JsonContainerContract_t793504011;
// System.String
struct String_t;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t1964060750;
// Newtonsoft.Json.Linq.JTokenReader
struct JTokenReader_t3330885370;
// Newtonsoft.Json.Serialization.JsonArrayContract
struct JsonArrayContract_t2625589241;
// System.Globalization.CultureInfo
struct CultureInfo_t3500843524;
// System.Collections.IList
struct IList_t3321498491;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// Newtonsoft.Json.Serialization.JsonDictionaryContract
struct JsonDictionaryContract_t3573211912;
// Newtonsoft.Json.Serialization.JsonISerializableContract
struct JsonISerializableContract_t122701872;
// Newtonsoft.Json.Serialization.JsonObjectContract
struct JsonObjectContract_t2091736265;
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_t1997612730;
// System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext>
struct List_1_t2983718432;
// System.Collections.Generic.Dictionary`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct Dictionary_2_t327917146;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonSerializer1719617802.h"
#include "mscorlib_System_Type1303803226.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonReader3154730733.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json1566984540.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json2712067825.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_JsonC793504011.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonConverter1964060750.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JTokenReader3330885370.h"
#include "mscorlib_System_Globalization_CultureInfo3500843524.h"
#include "Newtonsoft_Json_Newtonsoft_Json_DefaultValueHandli3457895463.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json2625589241.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json3573211912.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_JsonI122701872.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json2091736265.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_JsonS220200932.h"

// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::.ctor(Newtonsoft.Json.JsonSerializer)
extern "C"  void JsonSerializerInternalReader__ctor_m2212677618 (JsonSerializerInternalReader_t3254279720 * __this, JsonSerializer_t1719617802 * ___serializer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonSerializerInternalReader::GetContractSafe(System.Type)
extern "C"  JsonContract_t1566984540 * JsonSerializerInternalReader_GetContractSafe_m2142904983 (JsonSerializerInternalReader_t3254279720 * __this, Type_t * ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::Deserialize(Newtonsoft.Json.JsonReader,System.Type,System.Boolean)
extern "C"  Il2CppObject * JsonSerializerInternalReader_Deserialize_m2110863439 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___objectType1, bool ___checkAdditionalContent2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonSerializerProxy Newtonsoft.Json.Serialization.JsonSerializerInternalReader::GetInternalSerializer()
extern "C"  JsonSerializerProxy_t27144642 * JsonSerializerInternalReader_GetInternalSerializer_m2982455310 (JsonSerializerInternalReader_t3254279720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateJToken(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  JToken_t2552644013 * JsonSerializerInternalReader_CreateJToken_m4017909872 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, JsonContract_t1566984540 * ___contract1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateJObject(Newtonsoft.Json.JsonReader)
extern "C"  JToken_t2552644013 * JsonSerializerInternalReader_CreateJObject_m173017263 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateValueInternal(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateValueInternal_m3886641784 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___objectType1, JsonContract_t1566984540 * ___contract2, JsonProperty_t2712067825 * ___member3, JsonContainerContract_t793504011 * ___containerContract4, JsonProperty_t2712067825 * ___containerMember5, Il2CppObject * ___existingValue6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CoerceEmptyStringToNull(System.Type,Newtonsoft.Json.Serialization.JsonContract,System.String)
extern "C"  bool JsonSerializerInternalReader_CoerceEmptyStringToNull_m2322968004 (Il2CppObject * __this /* static, unused */, Type_t * ___objectType0, JsonContract_t1566984540 * ___contract1, String_t* ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader::GetExpectedDescription(Newtonsoft.Json.Serialization.JsonContract)
extern "C"  String_t* JsonSerializerInternalReader_GetExpectedDescription_m3967905329 (JsonSerializerInternalReader_t3254279720 * __this, JsonContract_t1566984540 * ___contract0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonSerializerInternalReader::GetConverter(Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.JsonConverter,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  JsonConverter_t1964060750 * JsonSerializerInternalReader_GetConverter_m1685461217 (JsonSerializerInternalReader_t3254279720 * __this, JsonContract_t1566984540 * ___contract0, JsonConverter_t1964060750 * ___memberConverter1, JsonContainerContract_t793504011 * ___containerContract2, JsonProperty_t2712067825 * ___containerProperty3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateObject(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateObject_m3492281759 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___objectType1, JsonContract_t1566984540 * ___contract2, JsonProperty_t2712067825 * ___member3, JsonContainerContract_t793504011 * ___containerContract4, JsonProperty_t2712067825 * ___containerMember5, Il2CppObject * ___existingValue6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ReadMetadataPropertiesToken(Newtonsoft.Json.Linq.JTokenReader,System.Type&,Newtonsoft.Json.Serialization.JsonContract&,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty,System.Object,System.Object&,System.String&)
extern "C"  bool JsonSerializerInternalReader_ReadMetadataPropertiesToken_m3697261575 (JsonSerializerInternalReader_t3254279720 * __this, JTokenReader_t3330885370 * ___reader0, Type_t ** ___objectType1, JsonContract_t1566984540 ** ___contract2, JsonProperty_t2712067825 * ___member3, JsonContainerContract_t793504011 * ___containerContract4, JsonProperty_t2712067825 * ___containerMember5, Il2CppObject * ___existingValue6, Il2CppObject ** ___newValue7, String_t** ___id8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ReadMetadataProperties(Newtonsoft.Json.JsonReader,System.Type&,Newtonsoft.Json.Serialization.JsonContract&,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty,System.Object,System.Object&,System.String&)
extern "C"  bool JsonSerializerInternalReader_ReadMetadataProperties_m723738577 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, Type_t ** ___objectType1, JsonContract_t1566984540 ** ___contract2, JsonProperty_t2712067825 * ___member3, JsonContainerContract_t793504011 * ___containerContract4, JsonProperty_t2712067825 * ___containerMember5, Il2CppObject * ___existingValue6, Il2CppObject ** ___newValue7, String_t** ___id8, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ResolveTypeName(Newtonsoft.Json.JsonReader,System.Type&,Newtonsoft.Json.Serialization.JsonContract&,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty,System.String)
extern "C"  void JsonSerializerInternalReader_ResolveTypeName_m1163197066 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, Type_t ** ___objectType1, JsonContract_t1566984540 ** ___contract2, JsonProperty_t2712067825 * ___member3, JsonContainerContract_t793504011 * ___containerContract4, JsonProperty_t2712067825 * ___containerMember5, String_t* ___qualifiedTypeName6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonArrayContract Newtonsoft.Json.Serialization.JsonSerializerInternalReader::EnsureArrayContract(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.Serialization.JsonContract)
extern "C"  JsonArrayContract_t2625589241 * JsonSerializerInternalReader_EnsureArrayContract_m3808603417 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___objectType1, JsonContract_t1566984540 * ___contract2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateList(Newtonsoft.Json.JsonReader,System.Type,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,System.Object,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateList_m1122768058 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, Type_t * ___objectType1, JsonContract_t1566984540 * ___contract2, JsonProperty_t2712067825 * ___member3, Il2CppObject * ___existingValue4, String_t* ___id5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::HasNoDefinedType(Newtonsoft.Json.Serialization.JsonContract)
extern "C"  bool JsonSerializerInternalReader_HasNoDefinedType_m3411796866 (JsonSerializerInternalReader_t3254279720 * __this, JsonContract_t1566984540 * ___contract0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::EnsureType(Newtonsoft.Json.JsonReader,System.Object,System.Globalization.CultureInfo,Newtonsoft.Json.Serialization.JsonContract,System.Type)
extern "C"  Il2CppObject * JsonSerializerInternalReader_EnsureType_m619072940 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, Il2CppObject * ___value1, CultureInfo_t3500843524 * ___culture2, JsonContract_t1566984540 * ___contract3, Type_t * ___targetType4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::SetPropertyValue(Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.JsonConverter,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.JsonReader,System.Object)
extern "C"  bool JsonSerializerInternalReader_SetPropertyValue_m2388789266 (JsonSerializerInternalReader_t3254279720 * __this, JsonProperty_t2712067825 * ___property0, JsonConverter_t1964060750 * ___propertyConverter1, JsonContainerContract_t793504011 * ___containerContract2, JsonProperty_t2712067825 * ___containerProperty3, JsonReader_t3154730733 * ___reader4, Il2CppObject * ___target5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CalculatePropertyDetails(Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.JsonConverter&,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.JsonReader,System.Object,System.Boolean&,System.Object&,Newtonsoft.Json.Serialization.JsonContract&,System.Boolean&)
extern "C"  bool JsonSerializerInternalReader_CalculatePropertyDetails_m1540458344 (JsonSerializerInternalReader_t3254279720 * __this, JsonProperty_t2712067825 * ___property0, JsonConverter_t1964060750 ** ___propertyConverter1, JsonContainerContract_t793504011 * ___containerContract2, JsonProperty_t2712067825 * ___containerProperty3, JsonReader_t3154730733 * ___reader4, Il2CppObject * ___target5, bool* ___useExistingValue6, Il2CppObject ** ___currentValue7, JsonContract_t1566984540 ** ___propertyContract8, bool* ___gottenCurrentValue9, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::AddReference(Newtonsoft.Json.JsonReader,System.String,System.Object)
extern "C"  void JsonSerializerInternalReader_AddReference_m642494311 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, String_t* ___id1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::HasFlag(Newtonsoft.Json.DefaultValueHandling,Newtonsoft.Json.DefaultValueHandling)
extern "C"  bool JsonSerializerInternalReader_HasFlag_m1325841945 (JsonSerializerInternalReader_t3254279720 * __this, int32_t ___value0, int32_t ___flag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ShouldSetPropertyValue(Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  bool JsonSerializerInternalReader_ShouldSetPropertyValue_m1945536340 (JsonSerializerInternalReader_t3254279720 * __this, JsonProperty_t2712067825 * ___property0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateNewList(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonArrayContract,System.Boolean&)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateNewList_m1648857056 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, JsonArrayContract_t2625589241 * ___contract1, bool* ___createdFromNonDefaultCreator2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateNewDictionary(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonDictionaryContract,System.Boolean&)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateNewDictionary_m3770651947 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, JsonDictionaryContract_t3573211912 * ___contract1, bool* ___createdFromNonDefaultCreator2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::OnDeserializing(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonContract,System.Object)
extern "C"  void JsonSerializerInternalReader_OnDeserializing_m1569004449 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, JsonContract_t1566984540 * ___contract1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::OnDeserialized(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonContract,System.Object)
extern "C"  void JsonSerializerInternalReader_OnDeserialized_m1230712012 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, JsonContract_t1566984540 * ___contract1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::PopulateDictionary(System.Collections.IDictionary,Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonDictionaryContract,Newtonsoft.Json.Serialization.JsonProperty,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_PopulateDictionary_m2536886000 (JsonSerializerInternalReader_t3254279720 * __this, Il2CppObject * ___dictionary0, JsonReader_t3154730733 * ___reader1, JsonDictionaryContract_t3573211912 * ___contract2, JsonProperty_t2712067825 * ___containerProperty3, String_t* ___id4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::PopulateMultidimensionalArray(System.Collections.IList,Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonArrayContract,Newtonsoft.Json.Serialization.JsonProperty,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_PopulateMultidimensionalArray_m4270637098 (JsonSerializerInternalReader_t3254279720 * __this, Il2CppObject * ___list0, JsonReader_t3154730733 * ___reader1, JsonArrayContract_t2625589241 * ___contract2, JsonProperty_t2712067825 * ___containerProperty3, String_t* ___id4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ThrowUnexpectedEndException(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonContract,System.Object,System.String)
extern "C"  void JsonSerializerInternalReader_ThrowUnexpectedEndException_m1171444755 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, JsonContract_t1566984540 * ___contract1, Il2CppObject * ___currentObject2, String_t* ___message3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::PopulateList(System.Collections.IList,Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonArrayContract,Newtonsoft.Json.Serialization.JsonProperty,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_PopulateList_m2191515961 (JsonSerializerInternalReader_t3254279720 * __this, Il2CppObject * ___list0, JsonReader_t3154730733 * ___reader1, JsonArrayContract_t2625589241 * ___contract2, JsonProperty_t2712067825 * ___containerProperty3, String_t* ___id4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateISerializable(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonISerializableContract,Newtonsoft.Json.Serialization.JsonProperty,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateISerializable_m625746751 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, JsonISerializableContract_t122701872 * ___contract1, JsonProperty_t2712067825 * ___member2, String_t* ___id3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateISerializableItem(Newtonsoft.Json.Linq.JToken,System.Type,Newtonsoft.Json.Serialization.JsonISerializableContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateISerializableItem_m38915875 (JsonSerializerInternalReader_t3254279720 * __this, JToken_t2552644013 * ___token0, Type_t * ___type1, JsonISerializableContract_t122701872 * ___contract2, JsonProperty_t2712067825 * ___member3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateObjectUsingCreatorWithParameters(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonObjectContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateObjectUsingCreatorWithParameters_m2629077928 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, JsonObjectContract_t2091736265 * ___contract1, JsonProperty_t2712067825 * ___containerProperty2, ObjectConstructor_1_t1997612730 * ___creator3, String_t* ___id4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::DeserializeConvertable(Newtonsoft.Json.JsonConverter,Newtonsoft.Json.JsonReader,System.Type,System.Object)
extern "C"  Il2CppObject * JsonSerializerInternalReader_DeserializeConvertable_m754361978 (JsonSerializerInternalReader_t3254279720 * __this, JsonConverter_t1964060750 * ___converter0, JsonReader_t3154730733 * ___reader1, Type_t * ___objectType2, Il2CppObject * ___existingValue3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext> Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ResolvePropertyAndCreatorValues(Newtonsoft.Json.Serialization.JsonObjectContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.JsonReader,System.Type)
extern "C"  List_1_t2983718432 * JsonSerializerInternalReader_ResolvePropertyAndCreatorValues_m620057069 (JsonSerializerInternalReader_t3254279720 * __this, JsonObjectContract_t2091736265 * ___contract0, JsonProperty_t2712067825 * ___containerProperty1, JsonReader_t3154730733 * ___reader2, Type_t * ___objectType3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ReadForType(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonContract,System.Boolean)
extern "C"  bool JsonSerializerInternalReader_ReadForType_m241330218 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, JsonContract_t1566984540 * ___contract1, bool ___hasConverter2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CreateNewObject(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonObjectContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonProperty,System.String,System.Boolean&)
extern "C"  Il2CppObject * JsonSerializerInternalReader_CreateNewObject_m3286336246 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, JsonObjectContract_t2091736265 * ___objectContract1, JsonProperty_t2712067825 * ___containerMember2, JsonProperty_t2712067825 * ___containerProperty3, String_t* ___id4, bool* ___createdFromNonDefaultCreator5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::PopulateObject(System.Object,Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonObjectContract,Newtonsoft.Json.Serialization.JsonProperty,System.String)
extern "C"  Il2CppObject * JsonSerializerInternalReader_PopulateObject_m1838494155 (JsonSerializerInternalReader_t3254279720 * __this, Il2CppObject * ___newObject0, JsonReader_t3154730733 * ___reader1, JsonObjectContract_t2091736265 * ___contract2, JsonProperty_t2712067825 * ___member3, String_t* ___id4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ShouldDeserialize(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  bool JsonSerializerInternalReader_ShouldDeserialize_m3697494281 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, JsonProperty_t2712067825 * ___property1, Il2CppObject * ___target2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader::CheckPropertyName(Newtonsoft.Json.JsonReader,System.String)
extern "C"  bool JsonSerializerInternalReader_CheckPropertyName_m2597506537 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, String_t* ___memberName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::SetExtensionData(Newtonsoft.Json.Serialization.JsonObjectContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.JsonReader,System.String,System.Object)
extern "C"  void JsonSerializerInternalReader_SetExtensionData_m357987792 (JsonSerializerInternalReader_t3254279720 * __this, JsonObjectContract_t2091736265 * ___contract0, JsonProperty_t2712067825 * ___member1, JsonReader_t3154730733 * ___reader2, String_t* ___memberName3, Il2CppObject * ___o4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader::ReadExtensionDataValue(Newtonsoft.Json.Serialization.JsonObjectContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.JsonReader)
extern "C"  Il2CppObject * JsonSerializerInternalReader_ReadExtensionDataValue_m3140907570 (JsonSerializerInternalReader_t3254279720 * __this, JsonObjectContract_t2091736265 * ___contract0, JsonProperty_t2712067825 * ___member1, JsonReader_t3154730733 * ___reader2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::EndProcessProperty(System.Object,Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonObjectContract,System.Int32,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence,System.Boolean)
extern "C"  void JsonSerializerInternalReader_EndProcessProperty_m1408909922 (JsonSerializerInternalReader_t3254279720 * __this, Il2CppObject * ___newObject0, JsonReader_t3154730733 * ___reader1, JsonObjectContract_t2091736265 * ___contract2, int32_t ___initialDepth3, JsonProperty_t2712067825 * ___property4, int32_t ___presence5, bool ___setDefaultValue6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::SetPropertyPresence(Newtonsoft.Json.JsonReader,Newtonsoft.Json.Serialization.JsonProperty,System.Collections.Generic.Dictionary`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>)
extern "C"  void JsonSerializerInternalReader_SetPropertyPresence_m4066176308 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, JsonProperty_t2712067825 * ___property1, Dictionary_2_t327917146 * ___requiredProperties2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader::HandleError(Newtonsoft.Json.JsonReader,System.Boolean,System.Int32)
extern "C"  void JsonSerializerInternalReader_HandleError_m591891537 (JsonSerializerInternalReader_t3254279720 * __this, JsonReader_t3154730733 * ___reader0, bool ___readPastError1, int32_t ___initialDepth2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
