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

// GooglePlayGames.Native.NativeQuestClient
struct NativeQuestClient_t1743518596;
// GooglePlayGames.Native.PInvoke.QuestManager
struct QuestManager_t675525239;
// System.String
struct String_t;
// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Quests.IQuest>
struct Action_2_t4092892251;
// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Quests.IQuest>>
struct Action_2_t1166110507;
// System.Action`3<GooglePlayGames.BasicApi.Quests.QuestUiResult,GooglePlayGames.BasicApi.Quests.IQuest,GooglePlayGames.BasicApi.Quests.IQuestMilestone>
struct Action_3_t1510264275;
// GooglePlayGames.BasicApi.Quests.IQuest
struct IQuest_t562088433;
// System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/QuestUIResponse>
struct Action_1_t4215796158;
// System.Action`2<GooglePlayGames.BasicApi.Quests.QuestAcceptStatus,GooglePlayGames.BasicApi.Quests.IQuest>
struct Action_2_t2211148282;
// GooglePlayGames.BasicApi.Quests.IQuestMilestone
struct IQuestMilestone_t3485030629;
// System.Action`3<GooglePlayGames.BasicApi.Quests.QuestClaimMilestoneStatus,GooglePlayGames.BasicApi.Quests.IQuest,GooglePlayGames.BasicApi.Quests.IQuestMilestone>
struct Action_3_t2040057952;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_Qu675525239.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_DataSou3931761423.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Quests_Q412997597.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Quests_3187252993.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3557407943.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Quests_3857037258.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1491989755.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Quests_Q935666006.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1924926087.h"

// System.Void GooglePlayGames.Native.NativeQuestClient::.ctor(GooglePlayGames.Native.PInvoke.QuestManager)
extern "C"  void NativeQuestClient__ctor_m1086362018 (NativeQuestClient_t1743518596 * __this, QuestManager_t675525239 * ___manager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeQuestClient::Fetch(GooglePlayGames.BasicApi.DataSource,System.String,System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,GooglePlayGames.BasicApi.Quests.IQuest>)
extern "C"  void NativeQuestClient_Fetch_m688572649 (NativeQuestClient_t1743518596 * __this, int32_t ___source0, String_t* ___questId1, Action_2_t4092892251 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeQuestClient::FetchMatchingState(GooglePlayGames.BasicApi.DataSource,GooglePlayGames.BasicApi.Quests.QuestFetchFlags,System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Quests.IQuest>>)
extern "C"  void NativeQuestClient_FetchMatchingState_m3410661657 (NativeQuestClient_t1743518596 * __this, int32_t ___source0, int32_t ___flags1, Action_2_t1166110507 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeQuestClient::ShowAllQuestsUI(System.Action`3<GooglePlayGames.BasicApi.Quests.QuestUiResult,GooglePlayGames.BasicApi.Quests.IQuest,GooglePlayGames.BasicApi.Quests.IQuestMilestone>)
extern "C"  void NativeQuestClient_ShowAllQuestsUI_m2121202705 (NativeQuestClient_t1743518596 * __this, Action_3_t1510264275 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeQuestClient::ShowSpecificQuestUI(GooglePlayGames.BasicApi.Quests.IQuest,System.Action`3<GooglePlayGames.BasicApi.Quests.QuestUiResult,GooglePlayGames.BasicApi.Quests.IQuest,GooglePlayGames.BasicApi.Quests.IQuestMilestone>)
extern "C"  void NativeQuestClient_ShowSpecificQuestUI_m695804077 (NativeQuestClient_t1743518596 * __this, Il2CppObject * ___quest0, Action_3_t1510264275 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Quests.QuestUiResult GooglePlayGames.Native.NativeQuestClient::UiErrorToQuestUiResult(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus)
extern "C"  int32_t NativeQuestClient_UiErrorToQuestUiResult_m4038713140 (Il2CppObject * __this /* static, unused */, int32_t ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GooglePlayGames.Native.PInvoke.QuestManager/QuestUIResponse> GooglePlayGames.Native.NativeQuestClient::FromQuestUICallback(System.Action`3<GooglePlayGames.BasicApi.Quests.QuestUiResult,GooglePlayGames.BasicApi.Quests.IQuest,GooglePlayGames.BasicApi.Quests.IQuestMilestone>)
extern "C"  Action_1_t4215796158 * NativeQuestClient_FromQuestUICallback_m2738981320 (Il2CppObject * __this /* static, unused */, Action_3_t1510264275 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeQuestClient::Accept(GooglePlayGames.BasicApi.Quests.IQuest,System.Action`2<GooglePlayGames.BasicApi.Quests.QuestAcceptStatus,GooglePlayGames.BasicApi.Quests.IQuest>)
extern "C"  void NativeQuestClient_Accept_m317296594 (NativeQuestClient_t1743518596 * __this, Il2CppObject * ___quest0, Action_2_t2211148282 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Quests.QuestAcceptStatus GooglePlayGames.Native.NativeQuestClient::FromAcceptStatus(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/QuestAcceptStatus)
extern "C"  int32_t NativeQuestClient_FromAcceptStatus_m3051813733 (Il2CppObject * __this /* static, unused */, int32_t ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeQuestClient::ClaimMilestone(GooglePlayGames.BasicApi.Quests.IQuestMilestone,System.Action`3<GooglePlayGames.BasicApi.Quests.QuestClaimMilestoneStatus,GooglePlayGames.BasicApi.Quests.IQuest,GooglePlayGames.BasicApi.Quests.IQuestMilestone>)
extern "C"  void NativeQuestClient_ClaimMilestone_m251577689 (NativeQuestClient_t1743518596 * __this, Il2CppObject * ___milestone0, Action_3_t2040057952 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Quests.QuestClaimMilestoneStatus GooglePlayGames.Native.NativeQuestClient::FromClaimStatus(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/QuestClaimMilestoneStatus)
extern "C"  int32_t NativeQuestClient_FromClaimStatus_m228007015 (Il2CppObject * __this /* static, unused */, int32_t ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
