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

// FadeInMenu
struct FadeInMenu_t1652954898;
// IMenu
struct IMenu_t2695572612;
// IRow
struct IRow_t3247553901;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_IMenu2695572612.h"
#include "AssemblyU2DCSharp_IRow3247553901.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void FadeInMenu::.ctor(IMenu,System.Single)
extern "C"  void FadeInMenu__ctor_m3239003250 (FadeInMenu_t1652954898 * __this, IMenu_t2695572612 * ___menu0, float ___fadeSpeed1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FadeInMenu::addRow(IRow)
extern "C"  void FadeInMenu_addRow_m468219605 (FadeInMenu_t1652954898 * __this, IRow_t3247553901 * ___row0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FadeInMenu::draw(System.Single,System.Single)
extern "C"  void FadeInMenu_draw_m2703757753 (FadeInMenu_t1652954898 * __this, float ___w0, float ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FadeInMenu::getHeight(System.Single)
extern "C"  float FadeInMenu_getHeight_m4206523563 (FadeInMenu_t1652954898 * __this, float ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FadeInMenu::reset()
extern "C"  void FadeInMenu_reset_m2776980070 (FadeInMenu_t1652954898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FadeInMenu::setColor(UnityEngine.Color)
extern "C"  void FadeInMenu_setColor_m1806786034 (FadeInMenu_t1652954898 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FadeInMenu::onDispose()
extern "C"  void FadeInMenu_onDispose_m1374627539 (FadeInMenu_t1652954898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
