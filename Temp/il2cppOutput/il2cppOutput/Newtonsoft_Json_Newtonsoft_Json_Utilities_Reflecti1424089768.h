#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_t1997612730;
// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember>
struct IDictionary_2_t4136161484;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ReflectionObject
struct  ReflectionObject_t1424089768  : public Il2CppObject
{
public:
	// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Utilities.ReflectionObject::<Creator>k__BackingField
	ObjectConstructor_1_t1997612730 * ___U3CCreatorU3Ek__BackingField_0;
	// System.Collections.Generic.IDictionary`2<System.String,Newtonsoft.Json.Utilities.ReflectionMember> Newtonsoft.Json.Utilities.ReflectionObject::<Members>k__BackingField
	Il2CppObject* ___U3CMembersU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CCreatorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ReflectionObject_t1424089768, ___U3CCreatorU3Ek__BackingField_0)); }
	inline ObjectConstructor_1_t1997612730 * get_U3CCreatorU3Ek__BackingField_0() const { return ___U3CCreatorU3Ek__BackingField_0; }
	inline ObjectConstructor_1_t1997612730 ** get_address_of_U3CCreatorU3Ek__BackingField_0() { return &___U3CCreatorU3Ek__BackingField_0; }
	inline void set_U3CCreatorU3Ek__BackingField_0(ObjectConstructor_1_t1997612730 * value)
	{
		___U3CCreatorU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CCreatorU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CMembersU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ReflectionObject_t1424089768, ___U3CMembersU3Ek__BackingField_1)); }
	inline Il2CppObject* get_U3CMembersU3Ek__BackingField_1() const { return ___U3CMembersU3Ek__BackingField_1; }
	inline Il2CppObject** get_address_of_U3CMembersU3Ek__BackingField_1() { return &___U3CMembersU3Ek__BackingField_1; }
	inline void set_U3CMembersU3Ek__BackingField_1(Il2CppObject* value)
	{
		___U3CMembersU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CMembersU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
