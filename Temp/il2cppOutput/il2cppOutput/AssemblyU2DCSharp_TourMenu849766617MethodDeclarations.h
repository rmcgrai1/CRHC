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

// TourMenu
struct TourMenu_t849766617;
// IMenu
struct IMenu_t2695572612;
// System.String
struct String_t;
// IRow
struct IRow_t3247553901;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_IMenu2695572612.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_IRow3247553901.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void TourMenu::.ctor(IMenu,System.String)
extern "C"  void TourMenu__ctor_m947572630 (TourMenu_t849766617 * __this, IMenu_t2695572612 * ___menu0, String_t* ___bgPath1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TourMenu::addRow(IRow)
extern "C"  void TourMenu_addRow_m1115839776 (TourMenu_t849766617 * __this, IRow_t3247553901 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TourMenu::draw(System.Single,System.Single)
extern "C"  void TourMenu_draw_m443552934 (TourMenu_t849766617 * __this, float ___w0, float ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TourMenu::getHeight(System.Single)
extern "C"  float TourMenu_getHeight_m1634514362 (TourMenu_t849766617 * __this, float ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TourMenu::reset()
extern "C"  void TourMenu_reset_m1941508305 (TourMenu_t849766617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TourMenu::setColor(UnityEngine.Color)
extern "C"  void TourMenu_setColor_m4089129845 (TourMenu_t849766617 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TourMenu::onDispose()
extern "C"  void TourMenu_onDispose_m1499592986 (TourMenu_t849766617 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
