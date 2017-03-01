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

// Newtonsoft.Json.Serialization.ExtensionDataSetter
struct ExtensionDataSetter_t1323311354;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1999651008;
// System.AsyncCallback
struct AsyncCallback_t163412349;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_IntPtr2504060609.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_AsyncCallback163412349.h"

// System.Void Newtonsoft.Json.Serialization.ExtensionDataSetter::.ctor(System.Object,System.IntPtr)
extern "C"  void ExtensionDataSetter__ctor_m15445253 (ExtensionDataSetter_t1323311354 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ExtensionDataSetter::Invoke(System.Object,System.String,System.Object)
extern "C"  void ExtensionDataSetter_Invoke_m1325731647 (ExtensionDataSetter_t1323311354 * __this, Il2CppObject * ___o0, String_t* ___key1, Il2CppObject * ___value2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Newtonsoft.Json.Serialization.ExtensionDataSetter::BeginInvoke(System.Object,System.String,System.Object,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ExtensionDataSetter_BeginInvoke_m281170972 (ExtensionDataSetter_t1323311354 * __this, Il2CppObject * ___o0, String_t* ___key1, Il2CppObject * ___value2, AsyncCallback_t163412349 * ___callback3, Il2CppObject * ___object4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ExtensionDataSetter::EndInvoke(System.IAsyncResult)
extern "C"  void ExtensionDataSetter_EndInvoke_m466920887 (ExtensionDataSetter_t1323311354 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
