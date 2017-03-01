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

// TextItem
struct TextItem_t1720843696;
// System.String
struct String_t;
// UnityEngine.Font
struct Font_t4239498691;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Font4239498691.h"
#include "AssemblyU2DCSharp_TextVerticalAlignment3379317350.h"

// System.Void TextItem::.ctor(System.String)
extern "C"  void TextItem__ctor_m927709313 (TextItem_t1720843696 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TextItem::draw(System.Single,System.Single)
extern "C"  bool TextItem_draw_m1789377511 (TextItem_t1720843696 * __this, float ___w0, float ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextItem::setText(System.String)
extern "C"  void TextItem_setText_m3657102634 (TextItem_t1720843696 * __this, String_t* ___text0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextItem::setColor(UnityEngine.Color)
extern "C"  void TextItem_setColor_m540930340 (TextItem_t1720843696 * __this, Color_t2020392075  ___color0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextItem::setFont(UnityEngine.Font)
extern "C"  void TextItem_setFont_m2509242356 (TextItem_t1720843696 * __this, Font_t4239498691 * ___font0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TextItem::getHeight(System.Single)
extern "C"  float TextItem_getHeight_m2846209997 (TextItem_t1720843696 * __this, float ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextItem::onDispose()
extern "C"  void TextItem_onDispose_m690248241 (TextItem_t1720843696 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TextItem::setTextVerticalAlignment(TextVerticalAlignment)
extern "C"  void TextItem_setTextVerticalAlignment_m3274530177 (TextItem_t1720843696 * __this, int32_t ___verticalAlignment0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
