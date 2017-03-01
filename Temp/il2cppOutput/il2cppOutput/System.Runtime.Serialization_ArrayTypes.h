#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// System.Runtime.Serialization.DataContractAttribute
struct DataContractAttribute_t3332255060;
// System.Runtime.Serialization.DataMemberAttribute
struct DataMemberAttribute_t2677019114;

#include "mscorlib_System_Array3829468939.h"
#include "System_Runtime_Serialization_System_Runtime_Serial3332255060.h"
#include "System_Runtime_Serialization_System_Runtime_Serial2677019114.h"

#pragma once
// System.Runtime.Serialization.DataContractAttribute[]
struct DataContractAttributeU5BU5D_t1980231389  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) DataContractAttribute_t3332255060 * m_Items[1];

public:
	inline DataContractAttribute_t3332255060 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DataContractAttribute_t3332255060 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DataContractAttribute_t3332255060 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline DataContractAttribute_t3332255060 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DataContractAttribute_t3332255060 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DataContractAttribute_t3332255060 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Runtime.Serialization.DataMemberAttribute[]
struct DataMemberAttributeU5BU5D_t3256444719  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) DataMemberAttribute_t2677019114 * m_Items[1];

public:
	inline DataMemberAttribute_t2677019114 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DataMemberAttribute_t2677019114 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DataMemberAttribute_t2677019114 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline DataMemberAttribute_t2677019114 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DataMemberAttribute_t2677019114 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DataMemberAttribute_t2677019114 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
