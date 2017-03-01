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

// UnityEngine.GUIContent
struct GUIContent_t4210063000;
// UnityEngine.Texture2D
struct Texture2D_t3542995729;
// UnityEngine.GUIStyle
struct GUIStyle_t1799908754;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_GUIContent4210063000.h"
#include "UnityEngine_UnityEngine_Texture2D3542995729.h"
#include "UnityEngine_UnityEngine_GUIStyle1799908754.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void GUIX::.cctor()
extern "C"  void GUIX__cctor_m3109351959 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIX::strokeRect(UnityEngine.Rect,UnityEngine.Color,System.Single)
extern "C"  void GUIX_strokeRect_m2537700918 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, Color_t2020392075  ___color1, float ___thickness2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIX::fillRect(UnityEngine.Rect,UnityEngine.Color)
extern "C"  void GUIX_fillRect_m970029164 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, Color_t2020392075  ___color1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIX::beginColor(UnityEngine.Color)
extern "C"  void GUIX_beginColor_m681927010 (Il2CppObject * __this /* static, unused */, Color_t2020392075  ___toColor0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIX::endColor()
extern "C"  void GUIX_endColor_m4031779906 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIX::beginOpacity(System.Single)
extern "C"  void GUIX_beginOpacity_m3540977479 (Il2CppObject * __this /* static, unused */, float ___opacity0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIX::endOpacity()
extern "C"  void GUIX_endOpacity_m3171615772 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIX::Button(UnityEngine.Rect,UnityEngine.GUIContent)
extern "C"  void GUIX_Button_m200675144 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIX::Texture(UnityEngine.Rect,UnityEngine.Texture2D)
extern "C"  void GUIX_Texture_m3816154496 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, Texture2D_t3542995729 * ___tex1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIX::Label(UnityEngine.Rect,UnityEngine.GUIContent,UnityEngine.GUIStyle)
extern "C"  void GUIX_Label_m4209557875 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, GUIContent_t4210063000 * ___content1, GUIStyle_t1799908754 * ___style2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GUIX::isMouseInsideRect(UnityEngine.Rect)
extern "C"  bool GUIX_isMouseInsideRect_m998598316 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIX::beginClip(UnityEngine.Rect)
extern "C"  void GUIX_beginClip_m1030490140 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIX::beginClip(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C"  void GUIX_beginClip_m515646045 (Il2CppObject * __this /* static, unused */, Rect_t3681755626  ___position0, Vector2_t2243707579  ___scrollPosition1, Vector2_t2243707579  ___zero2, bool ___notsure3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GUIX::endClip()
extern "C"  void GUIX_endClip_m1084062489 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
