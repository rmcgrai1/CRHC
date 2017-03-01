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

// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_t615697659;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.Exception
struct Exception_t1927440687;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_String2029220233.h"
#include "mscorlib_System_Exception1927440687.h"

// System.Void Newtonsoft.Json.Serialization.ErrorContext::.ctor(System.Object,System.Object,System.String,System.Exception)
extern "C"  void ErrorContext__ctor_m688538938 (ErrorContext_t615697659 * __this, Il2CppObject * ___originalObject0, Il2CppObject * ___member1, String_t* ___path2, Exception_t1927440687 * ___error3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.ErrorContext::get_Traced()
extern "C"  bool ErrorContext_get_Traced_m91916060 (ErrorContext_t615697659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorContext::set_Traced(System.Boolean)
extern "C"  void ErrorContext_set_Traced_m3946715969 (ErrorContext_t615697659 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Newtonsoft.Json.Serialization.ErrorContext::get_Error()
extern "C"  Exception_t1927440687 * ErrorContext_get_Error_m2479078728 (ErrorContext_t615697659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorContext::set_Error(System.Exception)
extern "C"  void ErrorContext_set_Error_m3879448423 (ErrorContext_t615697659 * __this, Exception_t1927440687 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorContext::set_OriginalObject(System.Object)
extern "C"  void ErrorContext_set_OriginalObject_m3518086365 (ErrorContext_t615697659 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorContext::set_Member(System.Object)
extern "C"  void ErrorContext_set_Member_m406564877 (ErrorContext_t615697659 * __this, Il2CppObject * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Serialization.ErrorContext::set_Path(System.String)
extern "C"  void ErrorContext_set_Path_m1396630830 (ErrorContext_t615697659 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Newtonsoft.Json.Serialization.ErrorContext::get_Handled()
extern "C"  bool ErrorContext_get_Handled_m905576741 (ErrorContext_t615697659 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
