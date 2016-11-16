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

// GameController
struct GameController_t2782302542;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GameController_PaletteState1549932055.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_Advertisements_UnityEngine_Advertiseme3091118442.h"

// System.Void GameController::.ctor()
extern "C"  void GameController__ctor_m4168274701 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Awake()
extern "C"  void GameController_Awake_m110912624 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Start()
extern "C"  void GameController_Start_m3115412493 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::Update()
extern "C"  void GameController_Update_m2094358944 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::SetCurrentState(GameController/PaletteState)
extern "C"  void GameController_SetCurrentState_m2622621270 (GameController_t2782302542 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::AddScore()
extern "C"  void GameController_AddScore_m2468824008 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::CheckingBestScore()
extern "C"  void GameController_CheckingBestScore_m3996494463 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::ShowPreferedPanel(UnityEngine.GameObject)
extern "C"  void GameController_ShowPreferedPanel_m3522542331 (GameController_t2782302542 * __this, GameObject_t3674682005 * ___panel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::GiveUpButton()
extern "C"  void GameController_GiveUpButton_m3952410357 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::ShowLeaderboards()
extern "C"  void GameController_ShowLeaderboards_m3439195914 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::ShareSocial()
extern "C"  void GameController_ShareSocial_m1308034519 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameController::WaitAndShowPanel(UnityEngine.GameObject)
extern "C"  Il2CppObject * GameController_WaitAndShowPanel_m205646364 (GameController_t2782302542 * __this, GameObject_t3674682005 * ___panel0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameController::WaitAndChangePalette(GameController/PaletteState)
extern "C"  Il2CppObject * GameController_WaitAndChangePalette_m3067882355 (GameController_t2782302542 * __this, int32_t ___state0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::DecreaseBallBounceForce()
extern "C"  void GameController_DecreaseBallBounceForce_m635641201 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::LosseCounterAds()
extern "C"  void GameController_LosseCounterAds_m1358823041 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameController::WatchSimpleAdsAfterLosse()
extern "C"  Il2CppObject * GameController_WatchSimpleAdsAfterLosse_m3675448500 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::WatchRewardedAdAndContinuePlaying()
extern "C"  void GameController_WatchRewardedAdAndContinuePlaying_m1269049083 (GameController_t2782302542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameController::HandleShowResult(UnityEngine.Advertisements.ShowResult)
extern "C"  void GameController_HandleShowResult_m4224895670 (GameController_t2782302542 * __this, int32_t ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
