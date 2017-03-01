#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Newtonsoft.Json.JsonConverter
struct JsonConverter_t1964060750;
// Newtonsoft.Json.JsonWriter/State[]
struct StateU5BU5D_t823784359;
// Newtonsoft.Json.Utilities.TypeInformation
struct TypeInformation_t1531269270;
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>
struct BidirectionalDictionary_2_t2874502390;
// Newtonsoft.Json.Utilities.PropertyNameTable/Entry
struct Entry_t1762676876;
// Newtonsoft.Json.Utilities.ReflectionMember
struct ReflectionMember_t4222298801;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_t1566984540;
// Newtonsoft.Json.Serialization.SerializationCallback
struct SerializationCallback_t1081880527;
// Newtonsoft.Json.Serialization.SerializationErrorCallback
struct SerializationErrorCallback_t3980565167;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t2712067825;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext
struct CreatorPropertyContext_t3614597300;
// Newtonsoft.Json.Linq.JToken
struct JToken_t2552644013;
// Newtonsoft.Json.Linq.JsonPath.PathFilter
struct PathFilter_t337893041;
// Newtonsoft.Json.Linq.JsonPath.QueryExpression
struct QueryExpression_t4258759568;
// Newtonsoft.Json.Utilities.ReflectionObject
struct ReflectionObject_t1424089768;
// Newtonsoft.Json.Bson.BsonProperty
struct BsonProperty_t1491061775;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_t3582361217;

#include "mscorlib_System_Array3829468939.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonConverter1964060750.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonPosition687338249.h"
#include "Newtonsoft.Json_ArrayTypes.h"
#include "Newtonsoft_Json_Newtonsoft_Json_JsonWriter_State3285832914.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_Primitiv2593001762.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_TypeInfo1531269270.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_ConvertU1788482786.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_Bidirect2874502390.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_Property1762676876.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_Reflecti4222298801.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Reso1785396551.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json1566984540.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Seri1081880527.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Seri3980565167.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json2712067825.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Defa3055062677.h"
#include "Newtonsoft_Json_Newtonsoft_Json_ReadType2202027848.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Json3614597300.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_JsonS220200932.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JToken2552644013.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JTokenType1307827213.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JsonPath_PathF337893041.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Linq_JsonPath_Quer4258759568.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Utilities_Reflecti1424089768.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Bson_BsonProperty1491061775.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Bson_BsonToken3582361217.h"

#pragma once
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_t3128012475  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) JsonConverter_t1964060750 * m_Items[1];

public:
	inline JsonConverter_t1964060750 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonConverter_t1964060750 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonConverter_t1964060750 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline JsonConverter_t1964060750 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonConverter_t1964060750 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonConverter_t1964060750 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Newtonsoft.Json.JsonPosition[]
struct JsonPositionU5BU5D_t1186110132  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) JsonPosition_t687338249  m_Items[1];

public:
	inline JsonPosition_t687338249  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonPosition_t687338249 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonPosition_t687338249  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline JsonPosition_t687338249  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonPosition_t687338249 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonPosition_t687338249  value)
	{
		m_Items[index] = value;
	}
};
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_t2725846494  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) StateU5BU5D_t823784359* m_Items[1];

public:
	inline StateU5BU5D_t823784359* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateU5BU5D_t823784359** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateU5BU5D_t823784359* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline StateU5BU5D_t823784359* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateU5BU5D_t823784359** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateU5BU5D_t823784359* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Newtonsoft.Json.JsonWriter/State[]
struct StateU5BU5D_t823784359  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Newtonsoft.Json.Utilities.PrimitiveTypeCode[]
struct PrimitiveTypeCodeU5BU5D_t2442406935  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Newtonsoft.Json.Utilities.TypeInformation[]
struct TypeInformationU5BU5D_t197581907  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) TypeInformation_t1531269270 * m_Items[1];

public:
	inline TypeInformation_t1531269270 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TypeInformation_t1531269270 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TypeInformation_t1531269270 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline TypeInformation_t1531269270 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TypeInformation_t1531269270 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TypeInformation_t1531269270 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey[]
struct TypeConvertKeyU5BU5D_t3485131095  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) TypeConvertKey_t1788482786  m_Items[1];

public:
	inline TypeConvertKey_t1788482786  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TypeConvertKey_t1788482786 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TypeConvertKey_t1788482786  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TypeConvertKey_t1788482786  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TypeConvertKey_t1788482786 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TypeConvertKey_t1788482786  value)
	{
		m_Items[index] = value;
	}
};
// Newtonsoft.Json.Utilities.BidirectionalDictionary`2<System.String,System.String>[]
struct BidirectionalDictionary_2U5BU5D_t4047757939  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) BidirectionalDictionary_2_t2874502390 * m_Items[1];

public:
	inline BidirectionalDictionary_2_t2874502390 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BidirectionalDictionary_2_t2874502390 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BidirectionalDictionary_2_t2874502390 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline BidirectionalDictionary_2_t2874502390 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BidirectionalDictionary_2_t2874502390 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BidirectionalDictionary_2_t2874502390 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Newtonsoft.Json.Utilities.PropertyNameTable/Entry[]
struct EntryU5BU5D_t749043653  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Entry_t1762676876 * m_Items[1];

public:
	inline Entry_t1762676876 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t1762676876 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t1762676876 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Entry_t1762676876 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t1762676876 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t1762676876 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Newtonsoft.Json.Utilities.ReflectionMember[]
struct ReflectionMemberU5BU5D_t2840299372  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ReflectionMember_t4222298801 * m_Items[1];

public:
	inline ReflectionMember_t4222298801 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ReflectionMember_t4222298801 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ReflectionMember_t4222298801 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ReflectionMember_t4222298801 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ReflectionMember_t4222298801 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ReflectionMember_t4222298801 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Newtonsoft.Json.Serialization.ResolverContractKey[]
struct ResolverContractKeyU5BU5D_t3642988990  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ResolverContractKey_t1785396551  m_Items[1];

public:
	inline ResolverContractKey_t1785396551  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ResolverContractKey_t1785396551 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ResolverContractKey_t1785396551  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ResolverContractKey_t1785396551  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ResolverContractKey_t1785396551 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ResolverContractKey_t1785396551  value)
	{
		m_Items[index] = value;
	}
};
// Newtonsoft.Json.Serialization.JsonContract[]
struct JsonContractU5BU5D_t1422195125  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) JsonContract_t1566984540 * m_Items[1];

public:
	inline JsonContract_t1566984540 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonContract_t1566984540 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonContract_t1566984540 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline JsonContract_t1566984540 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonContract_t1566984540 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonContract_t1566984540 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Newtonsoft.Json.Serialization.SerializationCallback[]
struct SerializationCallbackU5BU5D_t346285078  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) SerializationCallback_t1081880527 * m_Items[1];

public:
	inline SerializationCallback_t1081880527 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SerializationCallback_t1081880527 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SerializationCallback_t1081880527 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SerializationCallback_t1081880527 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SerializationCallback_t1081880527 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SerializationCallback_t1081880527 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Newtonsoft.Json.Serialization.SerializationErrorCallback[]
struct SerializationErrorCallbackU5BU5D_t1354961334  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) SerializationErrorCallback_t3980565167 * m_Items[1];

public:
	inline SerializationErrorCallback_t3980565167 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SerializationErrorCallback_t3980565167 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SerializationErrorCallback_t3980565167 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SerializationErrorCallback_t3980565167 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SerializationErrorCallback_t3980565167 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SerializationErrorCallback_t3980565167 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Newtonsoft.Json.Serialization.JsonProperty[]
struct JsonPropertyU5BU5D_t4130290220  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) JsonProperty_t2712067825 * m_Items[1];

public:
	inline JsonProperty_t2712067825 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JsonProperty_t2712067825 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JsonProperty_t2712067825 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline JsonProperty_t2712067825 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JsonProperty_t2712067825 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JsonProperty_t2712067825 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey[]
struct TypeNameKeyU5BU5D_t3669902200  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) TypeNameKey_t3055062677  m_Items[1];

public:
	inline TypeNameKey_t3055062677  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TypeNameKey_t3055062677 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TypeNameKey_t3055062677  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TypeNameKey_t3055062677  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TypeNameKey_t3055062677 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TypeNameKey_t3055062677  value)
	{
		m_Items[index] = value;
	}
};
// Newtonsoft.Json.ReadType[]
struct ReadTypeU5BU5D_t1902676633  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext[]
struct CreatorPropertyContextU5BU5D_t3486687741  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) CreatorPropertyContext_t3614597300 * m_Items[1];

public:
	inline CreatorPropertyContext_t3614597300 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CreatorPropertyContext_t3614597300 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CreatorPropertyContext_t3614597300 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline CreatorPropertyContext_t3614597300 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CreatorPropertyContext_t3614597300 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CreatorPropertyContext_t3614597300 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence[]
struct PropertyPresenceU5BU5D_t1324757005  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_t1832626432  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) JToken_t2552644013 * m_Items[1];

public:
	inline JToken_t2552644013 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JToken_t2552644013 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JToken_t2552644013 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline JToken_t2552644013 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JToken_t2552644013 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JToken_t2552644013 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_t1368357152  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Newtonsoft.Json.Linq.JsonPath.PathFilter[]
struct PathFilterU5BU5D_t3982404460  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) PathFilter_t337893041 * m_Items[1];

public:
	inline PathFilter_t337893041 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PathFilter_t337893041 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PathFilter_t337893041 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline PathFilter_t337893041 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PathFilter_t337893041 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PathFilter_t337893041 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Newtonsoft.Json.Linq.JsonPath.QueryExpression[]
struct QueryExpressionU5BU5D_t3275664433  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) QueryExpression_t4258759568 * m_Items[1];

public:
	inline QueryExpression_t4258759568 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline QueryExpression_t4258759568 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, QueryExpression_t4258759568 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline QueryExpression_t4258759568 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline QueryExpression_t4258759568 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, QueryExpression_t4258759568 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Newtonsoft.Json.Utilities.ReflectionObject[]
struct ReflectionObjectU5BU5D_t1186674105  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) ReflectionObject_t1424089768 * m_Items[1];

public:
	inline ReflectionObject_t1424089768 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ReflectionObject_t1424089768 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ReflectionObject_t1424089768 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline ReflectionObject_t1424089768 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ReflectionObject_t1424089768 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ReflectionObject_t1424089768 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Newtonsoft.Json.Bson.BsonProperty[]
struct BsonPropertyU5BU5D_t2436566742  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) BsonProperty_t1491061775 * m_Items[1];

public:
	inline BsonProperty_t1491061775 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BsonProperty_t1491061775 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BsonProperty_t1491061775 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline BsonProperty_t1491061775 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BsonProperty_t1491061775 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BsonProperty_t1491061775 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Newtonsoft.Json.Bson.BsonToken[]
struct BsonTokenU5BU5D_t1813371484  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) BsonToken_t3582361217 * m_Items[1];

public:
	inline BsonToken_t3582361217 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BsonToken_t3582361217 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BsonToken_t3582361217 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline BsonToken_t3582361217 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BsonToken_t3582361217 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BsonToken_t3582361217 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
