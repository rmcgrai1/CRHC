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

// Newtonsoft.Json.Serialization.SerializationErrorCallback
struct SerializationErrorCallback_t3980565167;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t615697659;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_Runtime_Serialization_StreamingCon1417235061.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Error615697659.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Newtonsoft.Json.Serialization.SerializationErrorCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void SerializationErrorCallback__ctor_m2963717064 (SerializationErrorCallback_t3980565167 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.SerializationErrorCallback::Invoke(System.Object,System.Runtime.Serialization.StreamingContext,Newtonsoft.Json.Serialization.ErrorContext)
extern "C"  void SerializationErrorCallback_Invoke_m2278695572 (SerializationErrorCallback_t3980565167 * __this, Il2CppObject * ___o0, StreamingContext_t1417235061  ___context1, ErrorContext_t615697659 * ___errorContext2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Newtonsoft.Json.Serialization.SerializationErrorCallback::BeginInvoke(System.Object,System.Runtime.Serialization.StreamingContext,Newtonsoft.Json.Serialization.ErrorContext,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * SerializationErrorCallback_BeginInvoke_m3817881409 (SerializationErrorCallback_t3980565167 * __this, Il2CppObject * ___o0, StreamingContext_t1417235061  ___context1, ErrorContext_t615697659 * ___errorContext2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.SerializationErrorCallback::EndInvoke(System.IAsyncResult)
extern "C"  void SerializationErrorCallback_EndInvoke_m2510104550 (SerializationErrorCallback_t3980565167 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
