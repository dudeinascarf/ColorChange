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

// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/PlayerSelectUICallback
struct PlayerSelectUICallback_t4277124957;
// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback
struct MultiplayerStatusCallback_t994271114;
// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MatchInboxUICallback
struct MatchInboxUICallback_t3070391457;
// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback
struct TurnBasedMatchCallback_t3800683771;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchesCallback
struct TurnBasedMatchesCallback_t1856996905;
// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_4277124957.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_T994271114.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3070391457.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3800683771.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_UIntPtr3365854250.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1856996905.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2675372491.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3557407943.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_ShowPlayerSelectUI(System.Runtime.InteropServices.HandleRef,System.UInt32,System.UInt32,System.Boolean,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/PlayerSelectUICallback,System.IntPtr)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_ShowPlayerSelectUI_m3419203364 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, uint32_t ___minimum_players1, uint32_t ___maximum_players2, bool ___allow_automatch3, PlayerSelectUICallback_t4277124957 * ___callback4, IntPtr_t ___callback_arg5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_CancelMatch(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback,System.IntPtr)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_CancelMatch_m3919581137 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___match1, MultiplayerStatusCallback_t994271114 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_DismissMatch(System.Runtime.InteropServices.HandleRef,System.IntPtr)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_DismissMatch_m3038299453 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___match1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_ShowMatchInboxUI(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MatchInboxUICallback,System.IntPtr)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_ShowMatchInboxUI_m2424059789 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, MatchInboxUICallback_t3070391457 * ___callback1, IntPtr_t ___callback_arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_SynchronizeData(System.Runtime.InteropServices.HandleRef)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_SynchronizeData_m3324325442 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_Rematch(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback,System.IntPtr)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_Rematch_m1408642129 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___match1, TurnBasedMatchCallback_t3800683771 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_DismissInvitation(System.Runtime.InteropServices.HandleRef,System.IntPtr)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_DismissInvitation_m763348857 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___invitation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_FetchMatch(System.Runtime.InteropServices.HandleRef,System.String,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback,System.IntPtr)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_FetchMatch_m2638862366 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, String_t* ___match_id1, TurnBasedMatchCallback_t3800683771 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_DeclineInvitation(System.Runtime.InteropServices.HandleRef,System.IntPtr)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_DeclineInvitation_m2784931045 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___invitation1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_FinishMatchDuringMyTurn(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.Byte[],System.UIntPtr,System.IntPtr,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback,System.IntPtr)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_FinishMatchDuringMyTurn_m2572900911 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___match1, ByteU5BU5D_t4260760469* ___match_data2, UIntPtr_t  ___match_data_size3, IntPtr_t ___results4, TurnBasedMatchCallback_t3800683771 * ___callback5, IntPtr_t ___callback_arg6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_FetchMatches(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchesCallback,System.IntPtr)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_FetchMatches_m3205772926 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, TurnBasedMatchesCallback_t1856996905 * ___callback1, IntPtr_t ___callback_arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_CreateTurnBasedMatch(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback,System.IntPtr)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_CreateTurnBasedMatch_m4112807276 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___config1, TurnBasedMatchCallback_t3800683771 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_AcceptInvitation(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback,System.IntPtr)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_AcceptInvitation_m3355169462 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___invitation1, TurnBasedMatchCallback_t3800683771 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TakeMyTurn(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.Byte[],System.UIntPtr,System.IntPtr,System.IntPtr,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback,System.IntPtr)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TakeMyTurn_m1018634945 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___match1, ByteU5BU5D_t4260760469* ___match_data2, UIntPtr_t  ___match_data_size3, IntPtr_t ___results4, IntPtr_t ___next_participant5, TurnBasedMatchCallback_t3800683771 * ___callback6, IntPtr_t ___callback_arg7, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_ConfirmPendingCompletion(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/TurnBasedMatchCallback,System.IntPtr)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_ConfirmPendingCompletion_m3075365316 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___match1, TurnBasedMatchCallback_t3800683771 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_LeaveMatchDuringMyTurn(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.IntPtr,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback,System.IntPtr)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_LeaveMatchDuringMyTurn_m2337901432 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___match1, IntPtr_t ___next_participant2, MultiplayerStatusCallback_t994271114 * ___callback3, IntPtr_t ___callback_arg4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_LeaveMatchDuringTheirTurn(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager/MultiplayerStatusCallback,System.IntPtr)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_LeaveMatchDuringTheirTurn_m1374199278 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___match1, MultiplayerStatusCallback_t994271114 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchResponse_Dispose_m1721808164 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchResponse_GetStatus_m2848141765 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchResponse_GetMatch(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchResponse_GetMatch_m557914715 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_Dispose_m4225394450 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/MultiplayerStatus GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetStatus_m3228912179 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_Length(System.Runtime.InteropServices.HandleRef)
extern "C"  UIntPtr_t  TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_Length_m1819430028 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C"  IntPtr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetInvitations_GetElement_m1846925266 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, UIntPtr_t  ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_Length(System.Runtime.InteropServices.HandleRef)
extern "C"  UIntPtr_t  TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_Length_m3099920668 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C"  IntPtr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetMyTurnMatches_GetElement_m149252610 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, UIntPtr_t  ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_Length(System.Runtime.InteropServices.HandleRef)
extern "C"  UIntPtr_t  TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_Length_m3060513636 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C"  IntPtr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetTheirTurnMatches_GetElement_m979554880 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, UIntPtr_t  ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_Length(System.Runtime.InteropServices.HandleRef)
extern "C"  UIntPtr_t  TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_Length_m42170552 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C"  IntPtr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_TurnBasedMatchesResponse_GetCompletedMatches_GetElement_m759843948 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, UIntPtr_t  ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_MatchInboxUIResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_MatchInboxUIResponse_Dispose_m4276676362 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_MatchInboxUIResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_MatchInboxUIResponse_GetStatus_m1413420669 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_MatchInboxUIResponse_GetMatch(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_MatchInboxUIResponse_GetMatch_m2844274293 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_PlayerSelectUIResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_PlayerSelectUIResponse_Dispose_m1144619782 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetStatus_m1965162745 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetPlayerIds_Length(System.Runtime.InteropServices.HandleRef)
extern "C"  UIntPtr_t  TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetPlayerIds_Length_m2892168899 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetPlayerIds_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr,System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetPlayerIds_GetElement_m3618641567 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, UIntPtr_t  ___index1, StringBuilder_t243639308 * ___out_arg2, UIntPtr_t  ___out_size3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetMinimumAutomatchingPlayers(System.Runtime.InteropServices.HandleRef)
extern "C"  uint32_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetMinimumAutomatchingPlayers_m3176157530 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.Cwrapper.TurnBasedMultiplayerManager::TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetMaximumAutomatchingPlayers(System.Runtime.InteropServices.HandleRef)
extern "C"  uint32_t TurnBasedMultiplayerManager_TurnBasedMultiplayerManager_PlayerSelectUIResponse_GetMaximumAutomatchingPlayers_m85968008 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
