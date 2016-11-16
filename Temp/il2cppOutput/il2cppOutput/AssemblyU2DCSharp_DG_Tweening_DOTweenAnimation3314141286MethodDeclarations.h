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

// DG.Tweening.DOTweenAnimation
struct DOTweenAnimation_t3314141286;
// System.String
struct String_t;
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_t2043844325;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "DOTweenPro_DG_Tweening_Core_TargetType4145673591.h"
#include "mscorlib_System_Type2863145774.h"

// System.Void DG.Tweening.DOTweenAnimation::.ctor()
extern "C"  void DOTweenAnimation__ctor_m3559171115 (DOTweenAnimation_t3314141286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::Awake()
extern "C"  void DOTweenAnimation_Awake_m3796776334 (DOTweenAnimation_t3314141286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::Start()
extern "C"  void DOTweenAnimation_Start_m2506308907 (DOTweenAnimation_t3314141286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::OnDestroy()
extern "C"  void DOTweenAnimation_OnDestroy_m3143789476 (DOTweenAnimation_t3314141286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::CreateTween()
extern "C"  void DOTweenAnimation_CreateTween_m355413592 (DOTweenAnimation_t3314141286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::DOPlay()
extern "C"  void DOTweenAnimation_DOPlay_m1043190840 (DOTweenAnimation_t3314141286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::DOPlayBackwards()
extern "C"  void DOTweenAnimation_DOPlayBackwards_m974274682 (DOTweenAnimation_t3314141286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::DOPlayForward()
extern "C"  void DOTweenAnimation_DOPlayForward_m1045958479 (DOTweenAnimation_t3314141286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::DOPause()
extern "C"  void DOTweenAnimation_DOPause_m1977574612 (DOTweenAnimation_t3314141286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::DOTogglePause()
extern "C"  void DOTweenAnimation_DOTogglePause_m671342880 (DOTweenAnimation_t3314141286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::DORewind()
extern "C"  void DOTweenAnimation_DORewind_m3964287807 (DOTweenAnimation_t3314141286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::DORestart(System.Boolean)
extern "C"  void DOTweenAnimation_DORestart_m1590200868 (DOTweenAnimation_t3314141286 * __this, bool ___fromHere0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::DOComplete()
extern "C"  void DOTweenAnimation_DOComplete_m3712930685 (DOTweenAnimation_t3314141286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::DOKill()
extern "C"  void DOTweenAnimation_DOKill_m897589730 (DOTweenAnimation_t3314141286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::DOPlayById(System.String)
extern "C"  void DOTweenAnimation_DOPlayById_m2350724888 (DOTweenAnimation_t3314141286 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::DOPlayAllById(System.String)
extern "C"  void DOTweenAnimation_DOPlayAllById_m323683333 (DOTweenAnimation_t3314141286 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::DOPlayNext()
extern "C"  void DOTweenAnimation_DOPlayNext_m1385621259 (DOTweenAnimation_t3314141286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::DORewindAndPlayNext()
extern "C"  void DOTweenAnimation_DORewindAndPlayNext_m2317704097 (DOTweenAnimation_t3314141286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::DORestartById(System.String)
extern "C"  void DOTweenAnimation_DORestartById_m405496963 (DOTweenAnimation_t3314141286 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::DORestartAllById(System.String)
extern "C"  void DOTweenAnimation_DORestartAllById_m2032294586 (DOTweenAnimation_t3314141286 * __this, String_t* ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.DOTweenAnimation::GetTweens()
extern "C"  List_1_t2043844325 * DOTweenAnimation_GetTweens_m4123569671 (DOTweenAnimation_t3314141286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Core.TargetType DG.Tweening.DOTweenAnimation::TypeToDOTargetType(System.Type)
extern "C"  int32_t DOTweenAnimation_TypeToDOTargetType_m1937456272 (Il2CppObject * __this /* static, unused */, Type_t * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::ReEvaluateRelativeTween()
extern "C"  void DOTweenAnimation_ReEvaluateRelativeTween_m1087284476 (DOTweenAnimation_t3314141286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.DOTweenAnimation::<CreateTween>m__0()
extern "C"  void DOTweenAnimation_U3CCreateTweenU3Em__0_m3319268055 (DOTweenAnimation_t3314141286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
