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

// System.IO.BinaryWriter
struct BinaryWriter_t3179371318;
// System.IO.Stream
struct Stream_t3255436806;
// System.Text.Encoding
struct Encoding_t663144255;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_Stream3255436806.h"
#include "mscorlib_System_Text_Encoding663144255.h"

// System.Void System.IO.BinaryWriter::.ctor()
extern "C"  void BinaryWriter__ctor_m2284782951 (BinaryWriter_t3179371318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.ctor(System.IO.Stream,System.Text.Encoding)
extern "C"  void BinaryWriter__ctor_m1559918839 (BinaryWriter_t3179371318 * __this, Stream_t3255436806 * ___output0, Encoding_t663144255 * ___encoding1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::.cctor()
extern "C"  void BinaryWriter__cctor_m1093745836 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::System.IDisposable.Dispose()
extern "C"  void BinaryWriter_System_IDisposable_Dispose_m2181928680 (BinaryWriter_t3179371318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Close()
extern "C"  void BinaryWriter_Close_m163714353 (BinaryWriter_t3179371318 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Dispose(System.Boolean)
extern "C"  void BinaryWriter_Dispose_m4047049099 (BinaryWriter_t3179371318 * __this, bool ___disposing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Boolean)
extern "C"  void BinaryWriter_Write_m1400788765 (BinaryWriter_t3179371318 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte)
extern "C"  void BinaryWriter_Write_m4170772803 (BinaryWriter_t3179371318 * __this, uint8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte[])
extern "C"  void BinaryWriter_Write_m1930647081 (BinaryWriter_t3179371318 * __this, ByteU5BU5D_t3397334013* ___buffer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Byte[],System.Int32,System.Int32)
extern "C"  void BinaryWriter_Write_m80697493 (BinaryWriter_t3179371318 * __this, ByteU5BU5D_t3397334013* ___buffer0, int32_t ___index1, int32_t ___count2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Double)
extern "C"  void BinaryWriter_Write_m2351532156 (BinaryWriter_t3179371318 * __this, double ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int32)
extern "C"  void BinaryWriter_Write_m3299422891 (BinaryWriter_t3179371318 * __this, int32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.Int64)
extern "C"  void BinaryWriter_Write_m4005235398 (BinaryWriter_t3179371318 * __this, int64_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.BinaryWriter::Write(System.SByte)
extern "C"  void BinaryWriter_Write_m1692285410 (BinaryWriter_t3179371318 * __this, int8_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
