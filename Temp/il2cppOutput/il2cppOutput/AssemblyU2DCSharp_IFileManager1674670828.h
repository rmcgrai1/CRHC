#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Stack`1<System.String>
struct Stack_1_t3116948387;

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// IFileManager
struct  IFileManager_t1674670828  : public Il2CppObject
{
public:
	// System.Collections.Generic.Stack`1<System.String> IFileManager::directories
	Stack_1_t3116948387 * ___directories_0;

public:
	inline static int32_t get_offset_of_directories_0() { return static_cast<int32_t>(offsetof(IFileManager_t1674670828, ___directories_0)); }
	inline Stack_1_t3116948387 * get_directories_0() const { return ___directories_0; }
	inline Stack_1_t3116948387 ** get_address_of_directories_0() { return &___directories_0; }
	inline void set_directories_0(Stack_1_t3116948387 * value)
	{
		___directories_0 = value;
		Il2CppCodeGenWriteBarrier(&___directories_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
