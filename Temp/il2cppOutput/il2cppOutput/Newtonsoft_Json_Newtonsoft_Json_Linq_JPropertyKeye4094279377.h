#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t1241853011;
// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken>
struct Dictionary_2_t172455979;

#include "mscorlib_System_Collections_ObjectModel_Collection2094388767.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct  JPropertyKeyedCollection_t4094279377  : public Collection_1_t2094388767
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JPropertyKeyedCollection::_dictionary
	Dictionary_2_t172455979 * ____dictionary_3;

public:
	inline static int32_t get_offset_of__dictionary_3() { return static_cast<int32_t>(offsetof(JPropertyKeyedCollection_t4094279377, ____dictionary_3)); }
	inline Dictionary_2_t172455979 * get__dictionary_3() const { return ____dictionary_3; }
	inline Dictionary_2_t172455979 ** get_address_of__dictionary_3() { return &____dictionary_3; }
	inline void set__dictionary_3(Dictionary_2_t172455979 * value)
	{
		____dictionary_3 = value;
		Il2CppCodeGenWriteBarrier(&____dictionary_3, value);
	}
};

struct JPropertyKeyedCollection_t4094279377_StaticFields
{
public:
	// System.Collections.Generic.IEqualityComparer`1<System.String> Newtonsoft.Json.Linq.JPropertyKeyedCollection::Comparer
	Il2CppObject* ___Comparer_2;

public:
	inline static int32_t get_offset_of_Comparer_2() { return static_cast<int32_t>(offsetof(JPropertyKeyedCollection_t4094279377_StaticFields, ___Comparer_2)); }
	inline Il2CppObject* get_Comparer_2() const { return ___Comparer_2; }
	inline Il2CppObject** get_address_of_Comparer_2() { return &___Comparer_2; }
	inline void set_Comparer_2(Il2CppObject* value)
	{
		___Comparer_2 = value;
		Il2CppCodeGenWriteBarrier(&___Comparer_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
