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

// Server
struct Server_t2724320767;
// System.String
struct String_t;
// IMenu
struct IMenu_t2695572612;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void Server::.ctor(System.String)
extern "C"  void Server__ctor_m3460232072 (Server_t2724320767 * __this, String_t* ___url0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Server::getUrl()
extern "C"  String_t* Server_getUrl_m971621464 (Server_t2724320767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// IMenu Server::buildMenu()
extern "C"  IMenu_t2695572612 * Server_buildMenu_m2976121854 (Server_t2724320767 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
