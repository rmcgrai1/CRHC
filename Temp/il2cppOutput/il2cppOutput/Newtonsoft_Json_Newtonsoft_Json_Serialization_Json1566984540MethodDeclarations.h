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

// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t1566984540;
// System.Type
struct Type_t;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t1964060750;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationCallback>
struct IList_1_t1622821128;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationErrorCallback>
struct IList_1_t226538472;
// System.Func`1<System.Object>
struct Func_1_t348874681;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t615697659;
// Newtonsoft.Json.Serialization.SerializationCallback
struct SerializationCallback_t1081880527;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Newtonsoft.Json.Serialization.SerializationErrorCallback
struct SerializationErrorCallback_t3980565167;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Type1303803226.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonConverter1964060750.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Error615697659.h"
#include "mscorlib_System_Reflection_MethodInfo3330546337.h"

// System.Type Newtonsoft.Json.Serialization.JsonContract::get_UnderlyingType()
extern "C"  Type_t * JsonContract_get_UnderlyingType_m1370000407 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_UnderlyingType(System.Type)
extern "C"  void JsonContract_set_UnderlyingType_m1537247526 (JsonContract_t1566984540 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Newtonsoft.Json.Serialization.JsonContract::get_CreatedType()
extern "C"  Type_t * JsonContract_get_CreatedType_m623176330 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_CreatedType(System.Type)
extern "C"  void JsonContract_set_CreatedType_m1360206021 (JsonContract_t1566984540 * __this, Type_t * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonContract::get_IsReference()
extern "C"  Nullable_1_t2088641033  JsonContract_get_IsReference_m184229494 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_IsReference(System.Nullable`1<System.Boolean>)
extern "C"  void JsonContract_set_IsReference_m3957338773 (JsonContract_t1566984540 * __this, Nullable_1_t2088641033  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonContract::get_Converter()
extern "C"  JsonConverter_t1964060750 * JsonContract_get_Converter_m2812033598 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_Converter(Newtonsoft.Json.JsonConverter)
extern "C"  void JsonContract_set_Converter_m2628966193 (JsonContract_t1566984540 * __this, JsonConverter_t1964060750 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonContract::get_InternalConverter()
extern "C"  JsonConverter_t1964060750 * JsonContract_get_InternalConverter_m2229198429 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_InternalConverter(Newtonsoft.Json.JsonConverter)
extern "C"  void JsonContract_set_InternalConverter_m2943496904 (JsonContract_t1566984540 * __this, JsonConverter_t1964060750 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationCallback> Newtonsoft.Json.Serialization.JsonContract::get_OnDeserializedCallbacks()
extern "C"  Il2CppObject* JsonContract_get_OnDeserializedCallbacks_m1339018414 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationCallback> Newtonsoft.Json.Serialization.JsonContract::get_OnDeserializingCallbacks()
extern "C"  Il2CppObject* JsonContract_get_OnDeserializingCallbacks_m2915864595 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationCallback> Newtonsoft.Json.Serialization.JsonContract::get_OnSerializedCallbacks()
extern "C"  Il2CppObject* JsonContract_get_OnSerializedCallbacks_m4154866211 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationCallback> Newtonsoft.Json.Serialization.JsonContract::get_OnSerializingCallbacks()
extern "C"  Il2CppObject* JsonContract_get_OnSerializingCallbacks_m3533034334 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Serialization.SerializationErrorCallback> Newtonsoft.Json.Serialization.JsonContract::get_OnErrorCallbacks()
extern "C"  Il2CppObject* JsonContract_get_OnErrorCallbacks_m1772435297 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Func`1<System.Object> Newtonsoft.Json.Serialization.JsonContract::get_DefaultCreator()
extern "C"  Func_1_t348874681 * JsonContract_get_DefaultCreator_m1889930012 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_DefaultCreator(System.Func`1<System.Object>)
extern "C"  void JsonContract_set_DefaultCreator_m348540221 (JsonContract_t1566984540 * __this, Func_1_t348874681 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.JsonContract::get_DefaultCreatorNonPublic()
extern "C"  bool JsonContract_get_DefaultCreatorNonPublic_m2777629119 (JsonContract_t1566984540 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::set_DefaultCreatorNonPublic(System.Boolean)
extern "C"  void JsonContract_set_DefaultCreatorNonPublic_m3010498406 (JsonContract_t1566984540 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::.ctor(System.Type)
extern "C"  void JsonContract__ctor_m2094325884 (JsonContract_t1566984540 * __this, Type_t * ___underlyingType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::InvokeOnSerializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonContract_InvokeOnSerializing_m2607577877 (JsonContract_t1566984540 * __this, Il2CppObject * ___o0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::InvokeOnSerialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonContract_InvokeOnSerialized_m1469967878 (JsonContract_t1566984540 * __this, Il2CppObject * ___o0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::InvokeOnDeserializing(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonContract_InvokeOnDeserializing_m2108060010 (JsonContract_t1566984540 * __this, Il2CppObject * ___o0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::InvokeOnDeserialized(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void JsonContract_InvokeOnDeserialized_m2343320369 (JsonContract_t1566984540 * __this, Il2CppObject * ___o0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.JsonContract::InvokeOnError(System.Object,System.Runtime.Serialization.StreamingContext,Newtonsoft.Json.Serialization.ErrorContext)
extern "C"  void JsonContract_InvokeOnError_m3005233816 (JsonContract_t1566984540 * __this, Il2CppObject * ___o0, StreamingContext_t1417235061  ___context1, ErrorContext_t615697659 * ___errorContext2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.SerializationCallback Newtonsoft.Json.Serialization.JsonContract::CreateSerializationCallback(System.Reflection.MethodInfo)
extern "C"  SerializationCallback_t1081880527 * JsonContract_CreateSerializationCallback_m2329468804 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___callbackMethodInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Newtonsoft.Json.Serialization.SerializationErrorCallback Newtonsoft.Json.Serialization.JsonContract::CreateSerializationErrorCallback(System.Reflection.MethodInfo)
extern "C"  SerializationErrorCallback_t3980565167 * JsonContract_CreateSerializationErrorCallback_m544775344 (Il2CppObject * __this /* static, unused */, MethodInfo_t * ___callbackMethodInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
