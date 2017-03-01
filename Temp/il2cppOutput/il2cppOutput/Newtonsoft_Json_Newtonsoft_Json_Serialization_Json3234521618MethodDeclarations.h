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

// Newtonsoft.Json.Serialization.JsonSerializerInternalWriter
struct JsonSerializerInternalWriter_t3234521618;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_t1719617802;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_t1973729997;
// System.Object
struct Il2CppObject;
// System.Type
struct Type_t;
// Newtonsoft.Json.Serialization.JsonSerializerProxy
struct JsonSerializerProxy_t27144642;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t1566984540;
// Newtonsoft.Json.Serialization.JsonPrimitiveContract
struct JsonPrimitiveContract_t2604782005;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t2712067825;
// Newtonsoft.Json.Serialization.JsonContainerContract
struct JsonContainerContract_t793504011;
// System.String
struct String_t;
// Newtonsoft.Json.Serialization.JsonStringContract
struct JsonStringContract_t2979008531;
// Newtonsoft.Json.Serialization.JsonObjectContract
struct JsonObjectContract_t2091736265;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t1964060750;
// System.Collections.IEnumerable
struct IEnumerable_t2911409499;
// Newtonsoft.Json.Serialization.JsonArrayContract
struct JsonArrayContract_t2625589241;
// System.Array
struct Il2CppArray;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// System.Runtime.Serialization.ISerializable
struct ISerializable_t1245643778;
// Newtonsoft.Json.Serialization.JsonISerializableContract
struct JsonISerializableContract_t122701872;
// System.Collections.IDictionary
struct IDictionary_t596158605;
// Newtonsoft.Json.Serialization.JsonDictionaryContract
struct JsonDictionaryContract_t3573211912;

#include "codegen/il2cpp-codegen.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonSerializer1719617802.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter1973729997.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Type1303803226.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json2604782005.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json2712067825.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_JsonC793504011.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json1566984540.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "mscorlib_System_String2029220233.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json2979008531.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json2091736265.h"
#include "Newtonsoft_Json_Newtonsoft_Json_DefaultValueHandli3457895463.h"
#include "Newtonsoft_Json_Newtonsoft_Json_PreserveReferences3019117943.h"
#include "Newtonsoft_Json_Newtonsoft_Json_TypeNameHandling1331513094.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonConverter1964060750.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json2625589241.h"
#include "mscorlib_System_Array3829468939.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_JsonI122701872.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json3573211912.h"

// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::.ctor(Newtonsoft.Json.JsonSerializer)
extern "C"  void JsonSerializerInternalWriter__ctor_m1490477358 (JsonSerializerInternalWriter_t3234521618 * __this, JsonSerializer_t1719617802 * ___serializer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::Serialize(Newtonsoft.Json.JsonWriter,System.Object,System.Type)
extern "C"  void JsonSerializerInternalWriter_Serialize_m2709138296 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___jsonWriter0, Il2CppObject * ___value1, Type_t * ___objectType2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonSerializerProxy Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::GetInternalSerializer()
extern "C"  JsonSerializerProxy_t27144642 * JsonSerializerInternalWriter_GetInternalSerializer_m1974986262 (JsonSerializerInternalWriter_t3234521618 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::GetContractSafe(System.Object)
extern "C"  JsonContract_t1566984540 * JsonSerializerInternalWriter_GetContractSafe_m1789158620 (JsonSerializerInternalWriter_t3234521618 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializePrimitive(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonPrimitiveContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonSerializerInternalWriter_SerializePrimitive_m892014848 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, JsonPrimitiveContract_t2604782005 * ___contract2, JsonProperty_t2712067825 * ___member3, JsonContainerContract_t793504011 * ___containerContract4, JsonProperty_t2712067825 * ___containerProperty5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeValue(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonSerializerInternalWriter_SerializeValue_m1073995289 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, JsonContract_t1566984540 * ___valueContract2, JsonProperty_t2712067825 * ___member3, JsonContainerContract_t793504011 * ___containerContract4, JsonProperty_t2712067825 * ___containerProperty5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::ResolveIsReference(Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  Nullable_1_t2088641033  JsonSerializerInternalWriter_ResolveIsReference_m3635351980 (JsonSerializerInternalWriter_t3234521618 * __this, JsonContract_t1566984540 * ___contract0, JsonProperty_t2712067825 * ___property1, JsonContainerContract_t793504011 * ___collectionContract2, JsonProperty_t2712067825 * ___containerProperty3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::ShouldWriteReference(System.Object,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  bool JsonSerializerInternalWriter_ShouldWriteReference_m2970799579 (JsonSerializerInternalWriter_t3234521618 * __this, Il2CppObject * ___value0, JsonProperty_t2712067825 * ___property1, JsonContract_t1566984540 * ___valueContract2, JsonContainerContract_t793504011 * ___collectionContract3, JsonProperty_t2712067825 * ___containerProperty4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::ShouldWriteProperty(System.Object,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  bool JsonSerializerInternalWriter_ShouldWriteProperty_m4157967270 (JsonSerializerInternalWriter_t3234521618 * __this, Il2CppObject * ___memberValue0, JsonProperty_t2712067825 * ___property1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::CheckForCircularReference(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  bool JsonSerializerInternalWriter_CheckForCircularReference_m1459216979 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, JsonProperty_t2712067825 * ___property2, JsonContract_t1566984540 * ___contract3, JsonContainerContract_t793504011 * ___containerContract4, JsonProperty_t2712067825 * ___containerProperty5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::WriteReference(Newtonsoft.Json.JsonWriter,System.Object)
extern "C"  void JsonSerializerInternalWriter_WriteReference_m854209833 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::GetReference(Newtonsoft.Json.JsonWriter,System.Object)
extern "C"  String_t* JsonSerializerInternalWriter_GetReference_m1011533691 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::TryConvertToString(System.Object,System.Type,System.String&)
extern "C"  bool JsonSerializerInternalWriter_TryConvertToString_m468844002 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___value0, Type_t * ___type1, String_t** ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeString(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonStringContract)
extern "C"  void JsonSerializerInternalWriter_SerializeString_m2323969254 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, JsonStringContract_t2979008531 * ___contract2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::OnSerializing(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Serialization.JsonContract,System.Object)
extern "C"  void JsonSerializerInternalWriter_OnSerializing_m1832269374 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, JsonContract_t1566984540 * ___contract1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::OnSerialized(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Serialization.JsonContract,System.Object)
extern "C"  void JsonSerializerInternalWriter_OnSerialized_m2190451533 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, JsonContract_t1566984540 * ___contract1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeObject(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonObjectContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonSerializerInternalWriter_SerializeObject_m1011097792 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, JsonObjectContract_t2091736265 * ___contract2, JsonProperty_t2712067825 * ___member3, JsonContainerContract_t793504011 * ___collectionContract4, JsonProperty_t2712067825 * ___containerProperty5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::CalculatePropertyValues(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContract&,System.Object&)
extern "C"  bool JsonSerializerInternalWriter_CalculatePropertyValues_m771503093 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, JsonContainerContract_t793504011 * ___contract2, JsonProperty_t2712067825 * ___member3, JsonProperty_t2712067825 * ___property4, JsonContract_t1566984540 ** ___memberContract5, Il2CppObject ** ___memberValue6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::WriteObjectStart(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonSerializerInternalWriter_WriteObjectStart_m1163222582 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, JsonContract_t1566984540 * ___contract2, JsonProperty_t2712067825 * ___member3, JsonContainerContract_t793504011 * ___collectionContract4, JsonProperty_t2712067825 * ___containerProperty5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::WriteReferenceIdProperty(Newtonsoft.Json.JsonWriter,System.Type,System.Object)
extern "C"  void JsonSerializerInternalWriter_WriteReferenceIdProperty_m1043731730 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Type_t * ___type1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::WriteTypeProperty(Newtonsoft.Json.JsonWriter,System.Type)
extern "C"  void JsonSerializerInternalWriter_WriteTypeProperty_m3317683594 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Type_t * ___type1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::HasFlag(Newtonsoft.Json.DefaultValueHandling,Newtonsoft.Json.DefaultValueHandling)
extern "C"  bool JsonSerializerInternalWriter_HasFlag_m3357189507 (JsonSerializerInternalWriter_t3234521618 * __this, int32_t ___value0, int32_t ___flag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::HasFlag(Newtonsoft.Json.PreserveReferencesHandling,Newtonsoft.Json.PreserveReferencesHandling)
extern "C"  bool JsonSerializerInternalWriter_HasFlag_m3831938275 (JsonSerializerInternalWriter_t3234521618 * __this, int32_t ___value0, int32_t ___flag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::HasFlag(Newtonsoft.Json.TypeNameHandling,Newtonsoft.Json.TypeNameHandling)
extern "C"  bool JsonSerializerInternalWriter_HasFlag_m2925641591 (JsonSerializerInternalWriter_t3234521618 * __this, int32_t ___value0, int32_t ___flag1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeConvertable(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.JsonConverter,System.Object,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonSerializerInternalWriter_SerializeConvertable_m1044639082 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, JsonConverter_t1964060750 * ___converter1, Il2CppObject * ___value2, JsonContract_t1566984540 * ___contract3, JsonContainerContract_t793504011 * ___collectionContract4, JsonProperty_t2712067825 * ___containerProperty5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeList(Newtonsoft.Json.JsonWriter,System.Collections.IEnumerable,Newtonsoft.Json.Serialization.JsonArrayContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonSerializerInternalWriter_SerializeList_m159545956 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___values1, JsonArrayContract_t2625589241 * ___contract2, JsonProperty_t2712067825 * ___member3, JsonContainerContract_t793504011 * ___collectionContract4, JsonProperty_t2712067825 * ___containerProperty5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeMultidimensionalArray(Newtonsoft.Json.JsonWriter,System.Array,Newtonsoft.Json.Serialization.JsonArrayContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonSerializerInternalWriter_SerializeMultidimensionalArray_m221655056 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppArray * ___values1, JsonArrayContract_t2625589241 * ___contract2, JsonProperty_t2712067825 * ___member3, JsonContainerContract_t793504011 * ___collectionContract4, JsonProperty_t2712067825 * ___containerProperty5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeMultidimensionalArray(Newtonsoft.Json.JsonWriter,System.Array,Newtonsoft.Json.Serialization.JsonArrayContract,Newtonsoft.Json.Serialization.JsonProperty,System.Int32,System.Int32[])
extern "C"  void JsonSerializerInternalWriter_SerializeMultidimensionalArray_m239438118 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppArray * ___values1, JsonArrayContract_t2625589241 * ___contract2, JsonProperty_t2712067825 * ___member3, int32_t ___initialDepth4, Int32U5BU5D_t3030399641* ___indices5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::WriteStartArray(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonArrayContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  bool JsonSerializerInternalWriter_WriteStartArray_m2278043421 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___values1, JsonArrayContract_t2625589241 * ___contract2, JsonProperty_t2712067825 * ___member3, JsonContainerContract_t793504011 * ___containerContract4, JsonProperty_t2712067825 * ___containerProperty5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeISerializable(Newtonsoft.Json.JsonWriter,System.Runtime.Serialization.ISerializable,Newtonsoft.Json.Serialization.JsonISerializableContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonSerializerInternalWriter_SerializeISerializable_m286123809 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___value1, JsonISerializableContract_t122701872 * ___contract2, JsonProperty_t2712067825 * ___member3, JsonContainerContract_t793504011 * ___collectionContract4, JsonProperty_t2712067825 * ___containerProperty5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::ShouldWriteType(Newtonsoft.Json.TypeNameHandling,Newtonsoft.Json.Serialization.JsonContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  bool JsonSerializerInternalWriter_ShouldWriteType_m55386245 (JsonSerializerInternalWriter_t3234521618 * __this, int32_t ___typeNameHandlingFlag0, JsonContract_t1566984540 * ___contract1, JsonProperty_t2712067825 * ___member2, JsonContainerContract_t793504011 * ___containerContract3, JsonProperty_t2712067825 * ___containerProperty4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::SerializeDictionary(Newtonsoft.Json.JsonWriter,System.Collections.IDictionary,Newtonsoft.Json.Serialization.JsonDictionaryContract,Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonContainerContract,Newtonsoft.Json.Serialization.JsonProperty)
extern "C"  void JsonSerializerInternalWriter_SerializeDictionary_m2000622009 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___values1, JsonDictionaryContract_t3573211912 * ___contract2, JsonProperty_t2712067825 * ___member3, JsonContainerContract_t793504011 * ___collectionContract4, JsonProperty_t2712067825 * ___containerProperty5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::GetPropertyName(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.Serialization.JsonContract,System.Boolean&)
extern "C"  String_t* JsonSerializerInternalWriter_GetPropertyName_m1913364858 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, Il2CppObject * ___name1, JsonContract_t1566984540 * ___contract2, bool* ___escape3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::HandleError(Newtonsoft.Json.JsonWriter,System.Int32)
extern "C"  void JsonSerializerInternalWriter_HandleError_m1967784702 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, int32_t ___initialDepth1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::ShouldSerialize(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  bool JsonSerializerInternalWriter_ShouldSerialize_m1212097504 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, JsonProperty_t2712067825 * ___property1, Il2CppObject * ___target2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalWriter::IsSpecified(Newtonsoft.Json.JsonWriter,Newtonsoft.Json.Serialization.JsonProperty,System.Object)
extern "C"  bool JsonSerializerInternalWriter_IsSpecified_m2625064731 (JsonSerializerInternalWriter_t3234521618 * __this, JsonWriter_t1973729997 * ___writer0, JsonProperty_t2712067825 * ___property1, Il2CppObject * ___target2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
