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

// ScrollMenu
struct ScrollMenu_t1922223870;
// IMenu
struct IMenu_t2695572612;
// IRow
struct IRow_t3247553901;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_IMenu2695572612.h"
#include "AssemblyU2DCSharp_IRow3247553901.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void ScrollMenu::.ctor(IMenu)
extern "C"  void ScrollMenu__ctor_m28531143 (ScrollMenu_t1922223870 * __this, IMenu_t2695572612 * ___menu0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScrollMenu::addRow(IRow)
extern "C"  void ScrollMenu_addRow_m1067011669 (ScrollMenu_t1922223870 * __this, IRow_t3247553901 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScrollMenu::draw(System.Single,System.Single)
extern "C"  void ScrollMenu_draw_m2963950521 (ScrollMenu_t1922223870 * __this, float ___w0, float ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ScrollMenu::getHeight(System.Single)
extern "C"  float ScrollMenu_getHeight_m3552897719 (ScrollMenu_t1922223870 * __this, float ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScrollMenu::reset()
extern "C"  void ScrollMenu_reset_m3756402254 (ScrollMenu_t1922223870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScrollMenu::setColor(UnityEngine.Color)
extern "C"  void ScrollMenu_setColor_m2858864642 (ScrollMenu_t1922223870 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ScrollMenu::onDispose()
extern "C"  void ScrollMenu_onDispose_m672220551 (ScrollMenu_t1922223870 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
