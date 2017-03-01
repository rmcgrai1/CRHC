#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,System.Func`2<System.Object[],System.Object>>
struct ThreadSafeStore_2_t307346035;
// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,System.Type>
struct ThreadSafeStore_2_t688037467;
// Newtonsoft.Json.Utilities.ReflectionObject
struct ReflectionObject_t1424089768;

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Nullable_1_gen2088641033.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Serialization.JsonTypeReflector
struct  JsonTypeReflector_t1473969596  : public Il2CppObject
{
public:

public:
};

struct JsonTypeReflector_t1473969596_StaticFields
{
public:
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonTypeReflector::_fullyTrusted
	Nullable_1_t2088641033  ____fullyTrusted_0;
	// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,System.Func`2<System.Object[],System.Object>> Newtonsoft.Json.Serialization.JsonTypeReflector::CreatorCache
	ThreadSafeStore_2_t307346035 * ___CreatorCache_1;
	// Newtonsoft.Json.Utilities.ThreadSafeStore`2<System.Type,System.Type> Newtonsoft.Json.Serialization.JsonTypeReflector::AssociatedMetadataTypesCache
	ThreadSafeStore_2_t688037467 * ___AssociatedMetadataTypesCache_2;
	// Newtonsoft.Json.Utilities.ReflectionObject Newtonsoft.Json.Serialization.JsonTypeReflector::_metadataTypeAttributeReflectionObject
	ReflectionObject_t1424089768 * ____metadataTypeAttributeReflectionObject_3;

public:
	inline static int32_t get_offset_of__fullyTrusted_0() { return static_cast<int32_t>(offsetof(JsonTypeReflector_t1473969596_StaticFields, ____fullyTrusted_0)); }
	inline Nullable_1_t2088641033  get__fullyTrusted_0() const { return ____fullyTrusted_0; }
	inline Nullable_1_t2088641033 * get_address_of__fullyTrusted_0() { return &____fullyTrusted_0; }
	inline void set__fullyTrusted_0(Nullable_1_t2088641033  value)
	{
		____fullyTrusted_0 = value;
	}

	inline static int32_t get_offset_of_CreatorCache_1() { return static_cast<int32_t>(offsetof(JsonTypeReflector_t1473969596_StaticFields, ___CreatorCache_1)); }
	inline ThreadSafeStore_2_t307346035 * get_CreatorCache_1() const { return ___CreatorCache_1; }
	inline ThreadSafeStore_2_t307346035 ** get_address_of_CreatorCache_1() { return &___CreatorCache_1; }
	inline void set_CreatorCache_1(ThreadSafeStore_2_t307346035 * value)
	{
		___CreatorCache_1 = value;
		Il2CppCodeGenWriteBarrier(&___CreatorCache_1, value);
	}

	inline static int32_t get_offset_of_AssociatedMetadataTypesCache_2() { return static_cast<int32_t>(offsetof(JsonTypeReflector_t1473969596_StaticFields, ___AssociatedMetadataTypesCache_2)); }
	inline ThreadSafeStore_2_t688037467 * get_AssociatedMetadataTypesCache_2() const { return ___AssociatedMetadataTypesCache_2; }
	inline ThreadSafeStore_2_t688037467 ** get_address_of_AssociatedMetadataTypesCache_2() { return &___AssociatedMetadataTypesCache_2; }
	inline void set_AssociatedMetadataTypesCache_2(ThreadSafeStore_2_t688037467 * value)
	{
		___AssociatedMetadataTypesCache_2 = value;
		Il2CppCodeGenWriteBarrier(&___AssociatedMetadataTypesCache_2, value);
	}

	inline static int32_t get_offset_of__metadataTypeAttributeReflectionObject_3() { return static_cast<int32_t>(offsetof(JsonTypeReflector_t1473969596_StaticFields, ____metadataTypeAttributeReflectionObject_3)); }
	inline ReflectionObject_t1424089768 * get__metadataTypeAttributeReflectionObject_3() const { return ____metadataTypeAttributeReflectionObject_3; }
	inline ReflectionObject_t1424089768 ** get_address_of__metadataTypeAttributeReflectionObject_3() { return &____metadataTypeAttributeReflectionObject_3; }
	inline void set__metadataTypeAttributeReflectionObject_3(ReflectionObject_t1424089768 * value)
	{
		____metadataTypeAttributeReflectionObject_3 = value;
		Il2CppCodeGenWriteBarrier(&____metadataTypeAttributeReflectionObject_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
