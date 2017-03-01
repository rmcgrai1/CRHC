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

// Newtonsoft.Json.Utilities.Base64Encoder
struct Base64Encoder_t2682770749;
// System.IO.TextWriter
struct TextWriter_t4027217640;
// System.Byte[]
struct ByteU5BU5D_t3397334013;
// System.Char[]
struct CharU5BU5D_t1328083999;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_TextWriter4027217640.h"

// System.Void Newtonsoft.Json.Utilities.Base64Encoder::.ctor(System.IO.TextWriter)
extern "C"  void Base64Encoder__ctor_m147021859 (Base64Encoder_t2682770749 * __this, TextWriter_t4027217640 * ___writer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.Base64Encoder::Encode(System.Byte[],System.Int32,System.Int32)
extern "C"  void Base64Encoder_Encode_m2728042331 (Base64Encoder_t2682770749 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.Base64Encoder::Flush()
extern "C"  void Base64Encoder_Flush_m520220242 (Base64Encoder_t2682770749 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Newtonsoft.Json.Utilities.Base64Encoder::WriteChars(System.Char[],System.Int32,System.Int32)
extern "C"  void Base64Encoder_WriteChars_m3432172829 (Base64Encoder_t2682770749 * __this, CharU5BU5D_t1328083999* ___chars0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
