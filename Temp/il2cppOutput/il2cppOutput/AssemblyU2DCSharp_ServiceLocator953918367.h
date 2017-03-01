#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// generic.mobile.ITouch
struct ITouch_t1873081982;
// ILog
struct ILog_t767237811;
// ILoader
struct ILoader_t1641484032;
// IFileManager
struct IFileManager_t1674670828;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ServiceLocator
struct  ServiceLocator_t953918367  : public Il2CppObject
{
public:

public:
};

struct ServiceLocator_t953918367_StaticFields
{
public:
	// generic.mobile.ITouch ServiceLocator::iTouch
	ITouch_t1873081982 * ___iTouch_0;
	// ILog ServiceLocator::iLog
	Il2CppObject * ___iLog_1;
	// ILoader ServiceLocator::iLoader
	ILoader_t1641484032 * ___iLoader_2;
	// IFileManager ServiceLocator::iFileManager
	IFileManager_t1674670828 * ___iFileManager_3;

public:
	inline static int32_t get_offset_of_iTouch_0() { return static_cast<int32_t>(offsetof(ServiceLocator_t953918367_StaticFields, ___iTouch_0)); }
	inline ITouch_t1873081982 * get_iTouch_0() const { return ___iTouch_0; }
	inline ITouch_t1873081982 ** get_address_of_iTouch_0() { return &___iTouch_0; }
	inline void set_iTouch_0(ITouch_t1873081982 * value)
	{
		___iTouch_0 = value;
		Il2CppCodeGenWriteBarrier(&___iTouch_0, value);
	}

	inline static int32_t get_offset_of_iLog_1() { return static_cast<int32_t>(offsetof(ServiceLocator_t953918367_StaticFields, ___iLog_1)); }
	inline Il2CppObject * get_iLog_1() const { return ___iLog_1; }
	inline Il2CppObject ** get_address_of_iLog_1() { return &___iLog_1; }
	inline void set_iLog_1(Il2CppObject * value)
	{
		___iLog_1 = value;
		Il2CppCodeGenWriteBarrier(&___iLog_1, value);
	}

	inline static int32_t get_offset_of_iLoader_2() { return static_cast<int32_t>(offsetof(ServiceLocator_t953918367_StaticFields, ___iLoader_2)); }
	inline ILoader_t1641484032 * get_iLoader_2() const { return ___iLoader_2; }
	inline ILoader_t1641484032 ** get_address_of_iLoader_2() { return &___iLoader_2; }
	inline void set_iLoader_2(ILoader_t1641484032 * value)
	{
		___iLoader_2 = value;
		Il2CppCodeGenWriteBarrier(&___iLoader_2, value);
	}

	inline static int32_t get_offset_of_iFileManager_3() { return static_cast<int32_t>(offsetof(ServiceLocator_t953918367_StaticFields, ___iFileManager_3)); }
	inline IFileManager_t1674670828 * get_iFileManager_3() const { return ___iFileManager_3; }
	inline IFileManager_t1674670828 ** get_address_of_iFileManager_3() { return &___iFileManager_3; }
	inline void set_iFileManager_3(IFileManager_t1674670828 * value)
	{
		___iFileManager_3 = value;
		Il2CppCodeGenWriteBarrier(&___iFileManager_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
