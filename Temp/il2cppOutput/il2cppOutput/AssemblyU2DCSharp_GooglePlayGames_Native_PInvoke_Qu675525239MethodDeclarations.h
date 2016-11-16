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

// GooglePlayGames.Native.PInvoke.QuestManager
struct QuestManager_t675525239;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t1862808700;
// System.String
struct String_t;
// System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/FetchResponse>
struct Action_1_t3955219778;
// System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/FetchListResponse>
struct Action_1_t428781440;
// System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/QuestUIResponse>
struct Action_1_t4215796158;
// GooglePlayGames.Native.PInvoke.NativeQuest
struct NativeQuest_t2496300529;
// System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/AcceptResponse>
struct Action_1_t3881415346;
// GooglePlayGames.Native.PInvoke.NativeQuestMilestone
struct NativeQuestMilestone_t2033850801;
// System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/ClaimMilestoneResponse>
struct Action_1_t1078965566;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_G1862808700.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3670871388.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_N2496300529.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_N2033850801.h"

// System.Void GooglePlayGames.Native.PInvoke.QuestManager::.ctor(GooglePlayGames.Native.PInvoke.GameServices)
extern "C"  void QuestManager__ctor_m2346614018 (QuestManager_t675525239 * __this, GameServices_t1862808700 * ___services0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::Fetch(GooglePlayGames.Native.Cwrapper.Types/DataSource,System.String,System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/FetchResponse>)
extern "C"  void QuestManager_Fetch_m1022062071 (QuestManager_t675525239 * __this, int32_t ___source0, String_t* ___questId1, Action_1_t3955219778 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::InternalFetchCallback(System.IntPtr,System.IntPtr)
extern "C"  void QuestManager_InternalFetchCallback_m568458085 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_QuestManager_InternalFetchCallback_m568458085(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::FetchList(GooglePlayGames.Native.Cwrapper.Types/DataSource,System.Int32,System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/FetchListResponse>)
extern "C"  void QuestManager_FetchList_m1761919882 (QuestManager_t675525239 * __this, int32_t ___source0, int32_t ___fetchFlags1, Action_1_t428781440 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::InternalFetchListCallback(System.IntPtr,System.IntPtr)
extern "C"  void QuestManager_InternalFetchListCallback_m2168469735 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_QuestManager_InternalFetchListCallback_m2168469735(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::ShowAllQuestUI(System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/QuestUIResponse>)
extern "C"  void QuestManager_ShowAllQuestUI_m3996956251 (QuestManager_t675525239 * __this, Action_1_t4215796158 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::ShowQuestUI(GooglePlayGames.Native.PInvoke.NativeQuest,System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/QuestUIResponse>)
extern "C"  void QuestManager_ShowQuestUI_m4146925500 (QuestManager_t675525239 * __this, NativeQuest_t2496300529 * ___quest0, Action_1_t4215796158 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::InternalQuestUICallback(System.IntPtr,System.IntPtr)
extern "C"  void QuestManager_InternalQuestUICallback_m61970409 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_QuestManager_InternalQuestUICallback_m61970409(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::Accept(GooglePlayGames.Native.PInvoke.NativeQuest,System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/AcceptResponse>)
extern "C"  void QuestManager_Accept_m2783803573 (QuestManager_t675525239 * __this, NativeQuest_t2496300529 * ___quest0, Action_1_t3881415346 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::InternalAcceptCallback(System.IntPtr,System.IntPtr)
extern "C"  void QuestManager_InternalAcceptCallback_m333036657 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_QuestManager_InternalAcceptCallback_m333036657(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::ClaimMilestone(GooglePlayGames.Native.PInvoke.NativeQuestMilestone,System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/ClaimMilestoneResponse>)
extern "C"  void QuestManager_ClaimMilestone_m2599059689 (QuestManager_t675525239 * __this, NativeQuestMilestone_t2033850801 * ___milestone0, Action_1_t1078965566 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.QuestManager::InternalClaimMilestoneCallback(System.IntPtr,System.IntPtr)
extern "C"  void QuestManager_InternalClaimMilestoneCallback_m3852179301 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_QuestManager_InternalClaimMilestoneCallback_m3852179301(intptr_t ___arg00, intptr_t ___arg11);
