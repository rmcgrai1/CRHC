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

// CoroutineManager
struct CoroutineManager_t3765941247;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"

// System.Void CoroutineManager::.ctor()
extern "C"  void CoroutineManager__ctor_m1209182860 (CoroutineManager_t3765941247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CoroutineManager::Start()
extern "C"  void CoroutineManager_Start_m1095107232 (CoroutineManager_t3765941247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CoroutineManager::Update()
extern "C"  void CoroutineManager_Update_m3258567651 (CoroutineManager_t3765941247 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean CoroutineManager::isMainThread()
extern "C"  bool CoroutineManager_isMainThread_m2802380621 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CoroutineManager::startCoroutine(System.Collections.IEnumerator)
extern "C"  void CoroutineManager_startCoroutine_m513441685 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___routine0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
