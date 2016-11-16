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

// GooglePlayGames.Native.PInvoke.TurnBasedManager
struct TurnBasedManager_t3476156963;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t1862808700;
// System.String
struct String_t;
// System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>
struct Action_1_t356501165;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfig
struct TurnBasedMatchConfig_t3069007197;
// System.Action`1<GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse>
struct Action_1_t1318217990;
// System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse>
struct Action_1_t3855938651;
// GooglePlayGames.Native.PInvoke.MultiplayerInvitation
struct MultiplayerInvitation_t3411188537;
// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch
struct NativeTurnBasedMatch_t302853426;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t3337232325;
// System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/MatchInboxUIResponse>
struct Action_1_t1855179219;
// System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus>
struct Action_1_t3071188627;
// GooglePlayGames.Native.PInvoke.ParticipantResults
struct ParticipantResults_t1948656911;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_G1862808700.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_T3069007197.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_M3411188537.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_Na302853426.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_M3337232325.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2675372491.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_P1948656911.h"

// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::.ctor(GooglePlayGames.Native.PInvoke.GameServices)
extern "C"  void TurnBasedManager__ctor_m3655774894 (TurnBasedManager_t3476156963 * __this, GameServices_t1862808700 * ___services0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::GetMatch(System.String,System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>)
extern "C"  void TurnBasedManager_GetMatch_m1680948713 (TurnBasedManager_t3476156963 * __this, String_t* ___matchId0, Action_1_t356501165 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::InternalTurnBasedMatchCallback(System.IntPtr,System.IntPtr)
extern "C"  void TurnBasedManager_InternalTurnBasedMatchCallback_m2292120190 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TurnBasedManager_InternalTurnBasedMatchCallback_m2292120190(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::CreateMatch(GooglePlayGames.Native.PInvoke.TurnBasedMatchConfig,System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>)
extern "C"  void TurnBasedManager_CreateMatch_m135186159 (TurnBasedManager_t3476156963 * __this, TurnBasedMatchConfig_t3069007197 * ___config0, Action_1_t356501165 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::ShowPlayerSelectUI(System.UInt32,System.UInt32,System.Boolean,System.Action`1<GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse>)
extern "C"  void TurnBasedManager_ShowPlayerSelectUI_m2349326231 (TurnBasedManager_t3476156963 * __this, uint32_t ___minimumPlayers0, uint32_t ___maxiumPlayers1, bool ___allowAutomatching2, Action_1_t1318217990 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::InternalPlayerSelectUIcallback(System.IntPtr,System.IntPtr)
extern "C"  void TurnBasedManager_InternalPlayerSelectUIcallback_m776827772 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TurnBasedManager_InternalPlayerSelectUIcallback_m776827772(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::GetAllTurnbasedMatches(System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchesResponse>)
extern "C"  void TurnBasedManager_GetAllTurnbasedMatches_m1814050818 (TurnBasedManager_t3476156963 * __this, Action_1_t3855938651 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::InternalTurnBasedMatchesCallback(System.IntPtr,System.IntPtr)
extern "C"  void TurnBasedManager_InternalTurnBasedMatchesCallback_m302844432 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TurnBasedManager_InternalTurnBasedMatchesCallback_m302844432(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::AcceptInvitation(GooglePlayGames.Native.PInvoke.MultiplayerInvitation,System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>)
extern "C"  void TurnBasedManager_AcceptInvitation_m870982733 (TurnBasedManager_t3476156963 * __this, MultiplayerInvitation_t3411188537 * ___invitation0, Action_1_t356501165 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::DeclineInvitation(GooglePlayGames.Native.PInvoke.MultiplayerInvitation)
extern "C"  void TurnBasedManager_DeclineInvitation_m2056111534 (TurnBasedManager_t3476156963 * __this, MultiplayerInvitation_t3411188537 * ___invitation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::TakeTurn(GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch,System.Byte[],GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>)
extern "C"  void TurnBasedManager_TakeTurn_m2577773198 (TurnBasedManager_t3476156963 * __this, NativeTurnBasedMatch_t302853426 * ___match0, ByteU5BU5D_t4260760469* ___data1, MultiplayerParticipant_t3337232325 * ___nextParticipant2, Action_1_t356501165 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::InternalMatchInboxUICallback(System.IntPtr,System.IntPtr)
extern "C"  void TurnBasedManager_InternalMatchInboxUICallback_m3282582168 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TurnBasedManager_InternalMatchInboxUICallback_m3282582168(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::ShowInboxUI(System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/MatchInboxUIResponse>)
extern "C"  void TurnBasedManager_ShowInboxUI_m496073385 (TurnBasedManager_t3476156963 * __this, Action_1_t1855179219 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::InternalMultiplayerStatusCallback(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus,System.IntPtr)
extern "C"  void TurnBasedManager_InternalMultiplayerStatusCallback_m4279382482 (Il2CppObject * __this /* static, unused */, int32_t ___status0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_TurnBasedManager_InternalMultiplayerStatusCallback_m4279382482(int32_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::LeaveDuringMyTurn(GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch,GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus>)
extern "C"  void TurnBasedManager_LeaveDuringMyTurn_m1467675284 (TurnBasedManager_t3476156963 * __this, NativeTurnBasedMatch_t302853426 * ___match0, MultiplayerParticipant_t3337232325 * ___nextParticipant1, Action_1_t3071188627 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::FinishMatchDuringMyTurn(GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch,System.Byte[],GooglePlayGames.Native.PInvoke.ParticipantResults,System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>)
extern "C"  void TurnBasedManager_FinishMatchDuringMyTurn_m1438843344 (TurnBasedManager_t3476156963 * __this, NativeTurnBasedMatch_t302853426 * ___match0, ByteU5BU5D_t4260760469* ___data1, ParticipantResults_t1948656911 * ___results2, Action_1_t356501165 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::ConfirmPendingCompletion(GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch,System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>)
extern "C"  void TurnBasedManager_ConfirmPendingCompletion_m138577292 (TurnBasedManager_t3476156963 * __this, NativeTurnBasedMatch_t302853426 * ___match0, Action_1_t356501165 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::LeaveMatchDuringTheirTurn(GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch,System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus>)
extern "C"  void TurnBasedManager_LeaveMatchDuringTheirTurn_m2950730155 (TurnBasedManager_t3476156963 * __this, NativeTurnBasedMatch_t302853426 * ___match0, Action_1_t3071188627 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::CancelMatch(GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch,System.Action`1<GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus>)
extern "C"  void TurnBasedManager_CancelMatch_m3451460942 (TurnBasedManager_t3476156963 * __this, NativeTurnBasedMatch_t302853426 * ___match0, Action_1_t3071188627 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedManager::Rematch(GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch,System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>)
extern "C"  void TurnBasedManager_Rematch_m3969723153 (TurnBasedManager_t3476156963 * __this, NativeTurnBasedMatch_t302853426 * ___match0, Action_1_t356501165 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.PInvoke.TurnBasedManager::ToCallbackPointer(System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>)
extern "C"  IntPtr_t TurnBasedManager_ToCallbackPointer_m2878361038 (Il2CppObject * __this /* static, unused */, Action_1_t356501165 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
