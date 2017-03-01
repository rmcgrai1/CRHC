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

// Newtonsoft.Json.Linq.JsonPath.ScanFilter
struct ScanFilter_t4136742319;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerable_1_t2844771058;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.String Newtonsoft.Json.Linq.JsonPath.ScanFilter::get_Name()
extern "C"  String_t* ScanFilter_get_Name_m2007989888 (ScanFilter_t4136742319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanFilter::set_Name(System.String)
extern "C"  void ScanFilter_set_Name_m3581204549 (ScanFilter_t4136742319 * __this, String_t* ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JsonPath.ScanFilter::ExecuteFilter(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.Linq.JToken>,System.Boolean)
extern "C"  Il2CppObject* ScanFilter_ExecuteFilter_m46868404 (ScanFilter_t4136742319 * __this, Il2CppObject* ___current0, bool ___errorWhenNoMatch1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Linq.JsonPath.ScanFilter::.ctor()
extern "C"  void ScanFilter__ctor_m854498269 (ScanFilter_t4136742319 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
