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

// Newtonsoft.Json.Serialization.ErrorEventArgs
struct ErrorEventArgs_t3365615597;
// System.Object
struct Il2CppObject;
// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t615697659;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "Newtonsoft_Json_Newtonsoft_Json_Serialization_Error615697659.h"

// System.Void Newtonsoft.Json.Serialization.ErrorEventArgs::set_CurrentObject(System.Object)
extern "C"  void ErrorEventArgs_set_CurrentObject_m3090722445 (ErrorEventArgs_t3365615597 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorEventArgs::set_ErrorContext(Newtonsoft.Json.Serialization.ErrorContext)
extern "C"  void ErrorEventArgs_set_ErrorContext_m4281578022 (ErrorEventArgs_t3365615597 * __this, ErrorContext_t615697659 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorEventArgs::.ctor(System.Object,Newtonsoft.Json.Serialization.ErrorContext)
extern "C"  void ErrorEventArgs__ctor_m2869766410 (ErrorEventArgs_t3365615597 * __this, Il2CppObject * ___currentObject0, ErrorContext_t615697659 * ___errorContext1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
