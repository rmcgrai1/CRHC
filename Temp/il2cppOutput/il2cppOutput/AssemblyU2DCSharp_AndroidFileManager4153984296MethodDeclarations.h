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

// AndroidFileManager
struct AndroidFileManager_t4153984296;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t3397334013;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void AndroidFileManager::.ctor()
extern "C"  void AndroidFileManager__ctor_m3929443585 (AndroidFileManager_t4153984296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String AndroidFileManager::getBaseDirectory()
extern "C"  String_t* AndroidFileManager_getBaseDirectory_m4073010702 (AndroidFileManager_t4153984296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AndroidFileManager::createDirectory(System.String)
extern "C"  bool AndroidFileManager_createDirectory_m4189112108 (AndroidFileManager_t4153984296 * __this, String_t* ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean AndroidFileManager::writeToFile(System.String,System.Byte[])
extern "C"  bool AndroidFileManager_writeToFile_m885794752 (AndroidFileManager_t4153984296 * __this, String_t* ___path0, ByteU5BU5D_t3397334013* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AndroidFileManager::createNonexistingFolders(System.String)
extern "C"  void AndroidFileManager_createNonexistingFolders_m2537294614 (AndroidFileManager_t4153984296 * __this, String_t* ___relativePath0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
