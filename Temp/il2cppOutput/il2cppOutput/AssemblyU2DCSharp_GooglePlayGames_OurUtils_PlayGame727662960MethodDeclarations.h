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

// GooglePlayGames.OurUtils.PlayGamesHelperObject
struct PlayGamesHelperObject_t727662960;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Action
struct Action_t3771233898;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Action3771233898.h"

// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::.ctor()
extern "C"  void PlayGamesHelperObject__ctor_m1093222576 (PlayGamesHelperObject_t727662960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::.cctor()
extern "C"  void PlayGamesHelperObject__cctor_m3343032573 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::CreateObject()
extern "C"  void PlayGamesHelperObject_CreateObject_m281177135 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::Awake()
extern "C"  void PlayGamesHelperObject_Awake_m1330827795 (PlayGamesHelperObject_t727662960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::OnDisable()
extern "C"  void PlayGamesHelperObject_OnDisable_m574668055 (PlayGamesHelperObject_t727662960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::RunCoroutine(System.Collections.IEnumerator)
extern "C"  void PlayGamesHelperObject_RunCoroutine_m3444677164 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::RunOnGameThread(System.Action)
extern "C"  void PlayGamesHelperObject_RunOnGameThread_m1608083433 (Il2CppObject * __this /* static, unused */, Action_t3771233898 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::Update()
extern "C"  void PlayGamesHelperObject_Update_m1257023581 (PlayGamesHelperObject_t727662960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::OnApplicationFocus(System.Boolean)
extern "C"  void PlayGamesHelperObject_OnApplicationFocus_m3270632242 (PlayGamesHelperObject_t727662960 * __this, bool ___focused0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::OnApplicationPause(System.Boolean)
extern "C"  void PlayGamesHelperObject_OnApplicationPause_m429832272 (PlayGamesHelperObject_t727662960 * __this, bool ___paused0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::AddFocusCallback(System.Action`1<System.Boolean>)
extern "C"  void PlayGamesHelperObject_AddFocusCallback_m1120382595 (Il2CppObject * __this /* static, unused */, Action_1_t872614854 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::RemoveFocusCallback(System.Action`1<System.Boolean>)
extern "C"  bool PlayGamesHelperObject_RemoveFocusCallback_m2199410080 (Il2CppObject * __this /* static, unused */, Action_1_t872614854 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.OurUtils.PlayGamesHelperObject::AddPauseCallback(System.Action`1<System.Boolean>)
extern "C"  void PlayGamesHelperObject_AddPauseCallback_m2403088165 (Il2CppObject * __this /* static, unused */, Action_1_t872614854 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.OurUtils.PlayGamesHelperObject::RemovePauseCallback(System.Action`1<System.Boolean>)
extern "C"  bool PlayGamesHelperObject_RemovePauseCallback_m3482115650 (Il2CppObject * __this /* static, unused */, Action_1_t872614854 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
