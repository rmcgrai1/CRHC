#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<System.Type,Newtonsoft.Json.Utilities.PrimitiveTypeCode>
struct Dictionary_2_t235392363;
// Newtonsoft.Json.Utilities.TypeInformation[]
struct TypeInformationU5BU5D_t197581907;
// Newtonsoft.Json.Utilities.ThreadSafeStore`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Func`2<System.Object,System.Object>>
struct ThreadSafeStore_2_t4029904910;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Newtonsoft.Json.Utilities.ConvertUtils
struct  ConvertUtils_t2984810590  : public Il2CppObject
{
public:

public:
};

struct ConvertUtils_t2984810590_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,Newtonsoft.Json.Utilities.PrimitiveTypeCode> Newtonsoft.Json.Utilities.ConvertUtils::TypeCodeMap
	Dictionary_2_t235392363 * ___TypeCodeMap_0;
	// Newtonsoft.Json.Utilities.TypeInformation[] Newtonsoft.Json.Utilities.ConvertUtils::PrimitiveTypeCodes
	TypeInformationU5BU5D_t197581907* ___PrimitiveTypeCodes_1;
	// Newtonsoft.Json.Utilities.ThreadSafeStore`2<Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey,System.Func`2<System.Object,System.Object>> Newtonsoft.Json.Utilities.ConvertUtils::CastConverters
	ThreadSafeStore_2_t4029904910 * ___CastConverters_2;

public:
	inline static int32_t get_offset_of_TypeCodeMap_0() { return static_cast<int32_t>(offsetof(ConvertUtils_t2984810590_StaticFields, ___TypeCodeMap_0)); }
	inline Dictionary_2_t235392363 * get_TypeCodeMap_0() const { return ___TypeCodeMap_0; }
	inline Dictionary_2_t235392363 ** get_address_of_TypeCodeMap_0() { return &___TypeCodeMap_0; }
	inline void set_TypeCodeMap_0(Dictionary_2_t235392363 * value)
	{
		___TypeCodeMap_0 = value;
		Il2CppCodeGenWriteBarrier(&___TypeCodeMap_0, value);
	}

	inline static int32_t get_offset_of_PrimitiveTypeCodes_1() { return static_cast<int32_t>(offsetof(ConvertUtils_t2984810590_StaticFields, ___PrimitiveTypeCodes_1)); }
	inline TypeInformationU5BU5D_t197581907* get_PrimitiveTypeCodes_1() const { return ___PrimitiveTypeCodes_1; }
	inline TypeInformationU5BU5D_t197581907** get_address_of_PrimitiveTypeCodes_1() { return &___PrimitiveTypeCodes_1; }
	inline void set_PrimitiveTypeCodes_1(TypeInformationU5BU5D_t197581907* value)
	{
		___PrimitiveTypeCodes_1 = value;
		Il2CppCodeGenWriteBarrier(&___PrimitiveTypeCodes_1, value);
	}

	inline static int32_t get_offset_of_CastConverters_2() { return static_cast<int32_t>(offsetof(ConvertUtils_t2984810590_StaticFields, ___CastConverters_2)); }
	inline ThreadSafeStore_2_t4029904910 * get_CastConverters_2() const { return ___CastConverters_2; }
	inline ThreadSafeStore_2_t4029904910 ** get_address_of_CastConverters_2() { return &___CastConverters_2; }
	inline void set_CastConverters_2(ThreadSafeStore_2_t4029904910 * value)
	{
		___CastConverters_2 = value;
		Il2CppCodeGenWriteBarrier(&___CastConverters_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
