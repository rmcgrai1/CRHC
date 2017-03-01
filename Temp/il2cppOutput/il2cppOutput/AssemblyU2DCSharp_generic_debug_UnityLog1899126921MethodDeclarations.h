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

// generic.debug.UnityLog
struct UnityLog_t1899126921;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LogType3220848642.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void generic.debug.UnityLog::.ctor()
extern "C"  void UnityLog__ctor_m89771826 (UnityLog_t1899126921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void generic.debug.UnityLog::clear()
extern "C"  void UnityLog_clear_m2835327321 (UnityLog_t1899126921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void generic.debug.UnityLog::print(LogType,System.Object)
extern "C"  void UnityLog_print_m2032817867 (UnityLog_t1899126921 * __this, int32_t ___type0, Il2CppObject * ___o1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void generic.debug.UnityLog::println(LogType,System.Object)
extern "C"  void UnityLog_println_m1383093577 (UnityLog_t1899126921 * __this, int32_t ___type0, Il2CppObject * ___o1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void generic.debug.UnityLog::println(LogType,System.Exception)
extern "C"  void UnityLog_println_m3629169075 (UnityLog_t1899126921 * __this, int32_t ___type0, Exception_t1927440687 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
