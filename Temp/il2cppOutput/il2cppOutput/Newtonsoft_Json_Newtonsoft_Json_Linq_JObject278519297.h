#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t4094279377;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t3042952059;

#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JContainer3538280255.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Linq.JObject
struct  JObject_t278519297  : public JContainer_t3538280255
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t4094279377 * ____properties_15;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t3042952059 * ___PropertyChanged_16;

public:
	inline static int32_t get_offset_of__properties_15() { return static_cast<int32_t>(offsetof(JObject_t278519297, ____properties_15)); }
	inline JPropertyKeyedCollection_t4094279377 * get__properties_15() const { return ____properties_15; }
	inline JPropertyKeyedCollection_t4094279377 ** get_address_of__properties_15() { return &____properties_15; }
	inline void set__properties_15(JPropertyKeyedCollection_t4094279377 * value)
	{
		____properties_15 = value;
		Il2CppCodeGenWriteBarrier(&____properties_15, value);
	}

	inline static int32_t get_offset_of_PropertyChanged_16() { return static_cast<int32_t>(offsetof(JObject_t278519297, ___PropertyChanged_16)); }
	inline PropertyChangedEventHandler_t3042952059 * get_PropertyChanged_16() const { return ___PropertyChanged_16; }
	inline PropertyChangedEventHandler_t3042952059 ** get_address_of_PropertyChanged_16() { return &___PropertyChanged_16; }
	inline void set_PropertyChanged_16(PropertyChangedEventHandler_t3042952059 * value)
	{
		___PropertyChanged_16 = value;
		Il2CppCodeGenWriteBarrier(&___PropertyChanged_16, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
