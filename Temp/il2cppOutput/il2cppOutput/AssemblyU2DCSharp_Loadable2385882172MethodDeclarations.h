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

// Loadable
struct Loadable_t2385882172;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;
// System.String
struct String_t;
// LoadableObserver
struct LoadableObserver_t4220609322;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Loadable::.ctor()
extern "C"  void Loadable__ctor_m3714187887 (Loadable_t2385882172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Loadable::loadCoroutine()
extern "C"  Il2CppObject * Loadable_loadCoroutine_m1462773797 (Loadable_t2385882172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loadable::println(System.String)
extern "C"  void Loadable_println_m1755351072 (Loadable_t2385882172 * __this, String_t* ___msg0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Loadable::unloadCoroutine()
extern "C"  Il2CppObject * Loadable_unloadCoroutine_m713066440 (Loadable_t2385882172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loadable::load()
extern "C"  void Loadable_load_m76720401 (Loadable_t2385882172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loadable::unload()
extern "C"  void Loadable_unload_m363378824 (Loadable_t2385882172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Loadable::isLoaded()
extern "C"  bool Loadable_isLoaded_m2056929464 (Loadable_t2385882172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loadable::registerObserver(LoadableObserver)
extern "C"  void Loadable_registerObserver_m1249619082 (Loadable_t2385882172 * __this, Il2CppObject * ___observer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loadable::unregisterObserver(LoadableObserver)
extern "C"  void Loadable_unregisterObserver_m3541568625 (Loadable_t2385882172 * __this, Il2CppObject * ___observer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loadable::notifyLoadSuccess()
extern "C"  void Loadable_notifyLoadSuccess_m2092303457 (Loadable_t2385882172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loadable::notifyLoadFailure()
extern "C"  void Loadable_notifyLoadFailure_m52354314 (Loadable_t2385882172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loadable::notifyUnloadSuccess()
extern "C"  void Loadable_notifyUnloadSuccess_m3840176730 (Loadable_t2385882172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Loadable::notifyUnloadFailure()
extern "C"  void Loadable_notifyUnloadFailure_m3077729377 (Loadable_t2385882172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Loadable::ToString()
extern "C"  String_t* Loadable_ToString_m3727594486 (Loadable_t2385882172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
