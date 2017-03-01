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

// Newtonsoft.Json.Serialization.SerializationCallback
struct SerializationCallback_t1081880527;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Newtonsoft.Json.Serialization.SerializationCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void SerializationCallback__ctor_m1719841426 (SerializationCallback_t1081880527 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.SerializationCallback::Invoke(System.Object,System.Runtime.Serialization.StreamingContext)
extern "C"  void SerializationCallback_Invoke_m2191148314 (SerializationCallback_t1081880527 * __this, Il2CppObject * ___o0, StreamingContext_t1417235061  ___context1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Newtonsoft.Json.Serialization.SerializationCallback::BeginInvoke(System.Object,System.Runtime.Serialization.StreamingContext,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SerializationCallback_BeginInvoke_m57659577 (SerializationCallback_t1081880527 * __this, Il2CppObject * ___o0, StreamingContext_t1417235061  ___context1, AsyncCallback_t163412349 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.SerializationCallback::EndInvoke(System.IAsyncResult)
extern "C"  void SerializationCallback_EndInvoke_m2114755676 (SerializationCallback_t1081880527 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
