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

// Row
struct Row_t774521500;
// IItem
struct IItem_t1694139212;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_IItem1694139212.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"

// System.Void Row::.ctor()
extern "C"  void Row__ctor_m3354943469 (Row_t774521500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Row::.ctor(System.Single)
extern "C"  void Row__ctor_m205748920 (Row_t774521500 * __this, float ___height0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Row::addItem(IItem,System.Single)
extern "C"  void Row_addItem_m212990216 (Row_t774521500 * __this, IItem_t1694139212 * ___item0, float ___priority1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Row::setColor(UnityEngine.Color)
extern "C"  void Row_setColor_m1747691428 (Row_t774521500 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Row::draw(System.Single)
extern "C"  bool Row_draw_m2414241000 (Row_t774521500 * __this, float ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Row::getPixelHeight(System.Single)
extern "C"  float Row_getPixelHeight_m1827742335 (Row_t774521500 * __this, float ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Row::setPadding(System.Boolean,System.Boolean,System.Boolean)
extern "C"  void Row_setPadding_m2096192501 (Row_t774521500 * __this, bool ___enableX0, bool ___enableYTop1, bool ___enableYBottom2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Row::onDispose()
extern "C"  void Row_onDispose_m3971480819 (Row_t774521500 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
