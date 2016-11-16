﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Gradient
struct Gradient_t3661184436;
// UnityEngine.GradientColorKey[]
struct GradientColorKeyU5BU5D_t2977343473;
// UnityEngine.GradientAlphaKey[]
struct GradientAlphaKeyU5BU5D_t1918196120;
struct Gradient_t3661184436_marshaled_pinvoke;
struct Gradient_t3661184436_marshaled_com;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Gradient::.ctor()
extern "C"  void Gradient__ctor_m3068495933 (Gradient_t3661184436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C"  void Gradient_Init_m2544372343 (Gradient_t3661184436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C"  void Gradient_Cleanup_m850820223 (Gradient_t3661184436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C"  void Gradient_Finalize_m3875885829 (Gradient_t3661184436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GradientColorKey[] UnityEngine.Gradient::get_colorKeys()
extern "C"  GradientColorKeyU5BU5D_t2977343473* Gradient_get_colorKeys_m3757101023 (Gradient_t3661184436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GradientAlphaKey[] UnityEngine.Gradient::get_alphaKeys()
extern "C"  GradientAlphaKeyU5BU5D_t1918196120* Gradient_get_alphaKeys_m3048003775 (Gradient_t3661184436 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::SetKeys(UnityEngine.GradientColorKey[],UnityEngine.GradientAlphaKey[])
extern "C"  void Gradient_SetKeys_m2955120432 (Gradient_t3661184436 * __this, GradientColorKeyU5BU5D_t2977343473* ___colorKeys0, GradientAlphaKeyU5BU5D_t1918196120* ___alphaKeys1, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct Gradient_t3661184436;
struct Gradient_t3661184436_marshaled_pinvoke;

extern "C" void Gradient_t3661184436_marshal_pinvoke(const Gradient_t3661184436& unmarshaled, Gradient_t3661184436_marshaled_pinvoke& marshaled);
extern "C" void Gradient_t3661184436_marshal_pinvoke_back(const Gradient_t3661184436_marshaled_pinvoke& marshaled, Gradient_t3661184436& unmarshaled);
extern "C" void Gradient_t3661184436_marshal_pinvoke_cleanup(Gradient_t3661184436_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct Gradient_t3661184436;
struct Gradient_t3661184436_marshaled_com;

extern "C" void Gradient_t3661184436_marshal_com(const Gradient_t3661184436& unmarshaled, Gradient_t3661184436_marshaled_com& marshaled);
extern "C" void Gradient_t3661184436_marshal_com_back(const Gradient_t3661184436_marshaled_com& marshaled, Gradient_t3661184436& unmarshaled);
extern "C" void Gradient_t3661184436_marshal_com_cleanup(Gradient_t3661184436_marshaled_com& marshaled);