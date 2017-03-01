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

// OnScreenLog
struct OnScreenLog_t2236434795;
// System.Object
struct Il2CppObject;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_LogType3220848642.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void OnScreenLog::.ctor()
extern "C"  void OnScreenLog__ctor_m658685012 (OnScreenLog_t2236434795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnScreenLog::Start()
extern "C"  void OnScreenLog_Start_m1846880496 (OnScreenLog_t2236434795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnScreenLog::clear()
extern "C"  void OnScreenLog_clear_m3899087103 (OnScreenLog_t2236434795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean OnScreenLog::allow(LogType)
extern "C"  bool OnScreenLog_allow_m3006965699 (OnScreenLog_t2236434795 * __this, int32_t ___type0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnScreenLog::print(LogType,System.Object)
extern "C"  void OnScreenLog_print_m2486189153 (OnScreenLog_t2236434795 * __this, int32_t ___type0, Il2CppObject * ___o1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnScreenLog::println(LogType,System.Object)
extern "C"  void OnScreenLog_println_m91018839 (OnScreenLog_t2236434795 * __this, int32_t ___type0, Il2CppObject * ___o1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnScreenLog::println(LogType,System.Exception)
extern "C"  void OnScreenLog_println_m586637461 (OnScreenLog_t2236434795 * __this, int32_t ___type0, Exception_t1927440687 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void OnScreenLog::OnGUI()
extern "C"  void OnScreenLog_OnGUI_m4184241632 (OnScreenLog_t2236434795 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
