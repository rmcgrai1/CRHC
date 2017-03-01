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

// ImageItem
struct ImageItem_t1947162666;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"
#include "AssemblyU2DCSharp_AspectType1121078212.h"

// System.Void ImageItem::.ctor(System.String)
extern "C"  void ImageItem__ctor_m3088152491 (ImageItem_t1947162666 * __this, String_t* ___imageUrl0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ImageItem::draw(System.Single,System.Single)
extern "C"  bool ImageItem_draw_m1054701777 (ImageItem_t1947162666 * __this, float ___w0, float ___h1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ImageItem::getHeight(System.Single)
extern "C"  float ImageItem_getHeight_m37784695 (ImageItem_t1947162666 * __this, float ___w0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageItem::onDispose()
extern "C"  void ImageItem_onDispose_m1579007063 (ImageItem_t1947162666 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ImageItem::setAspectType(AspectType)
extern "C"  void ImageItem_setAspectType_m2555172455 (ImageItem_t1947162666 * __this, int32_t ___aspectType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
