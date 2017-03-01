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

// PaneRow
struct PaneRow_t998949582;
// Row
struct Row_t774521500;
// IMenu
struct IMenu_t2695572612;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Row774521500.h"
#include "AssemblyU2DCSharp_IMenu2695572612.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void PaneRow::.ctor(Row,IMenu)
extern "C"  void PaneRow__ctor_m3820109355 (PaneRow_t998949582 * __this, Row_t774521500 * ___headRow0, IMenu_t2695572612 * ___subMenu1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color PaneRow::blendColor(UnityEngine.Color,UnityEngine.Color,System.Single)
extern "C"  Color_t2020392075  PaneRow_blendColor_m2921814147 (PaneRow_t998949582 * __this, Color_t2020392075  ___fromColor0, Color_t2020392075  ___toColor1, float ___f2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PaneRow::draw(System.Single)
extern "C"  bool PaneRow_draw_m2258620834 (PaneRow_t998949582 * __this, float ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PaneRow::getPixelHeight(System.Single)
extern "C"  float PaneRow_getPixelHeight_m3819146649 (PaneRow_t998949582 * __this, float ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaneRow::setOpenColor(UnityEngine.Color)
extern "C"  void PaneRow_setOpenColor_m3864065666 (PaneRow_t998949582 * __this, Color_t2020392075  ___openColor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaneRow::setClosedColor(UnityEngine.Color)
extern "C"  void PaneRow_setClosedColor_m2891185566 (PaneRow_t998949582 * __this, Color_t2020392075  ___closedColor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PaneRow::onDispose()
extern "C"  void PaneRow_onDispose_m488601465 (PaneRow_t998949582 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
