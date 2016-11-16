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

// GooglePlayGames.Native.NativeTurnBasedMultiplayerClient
struct NativeTurnBasedMultiplayerClient_t3828344078;
// GooglePlayGames.Native.NativeClient
struct NativeClient_t3798002602;
// GooglePlayGames.Native.PInvoke.TurnBasedManager
struct TurnBasedManager_t3476156963;
// System.Action`2<System.Boolean,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>
struct Action_2_t1747968918;
// System.Action`2<GooglePlayGames.BasicApi.UIStatus,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>
struct Action_2_t657955164;
// System.Action`1<GooglePlayGames.BasicApi.Multiplayer.Invitation[]>
struct Action_1_t312675074;
// System.Action`1<GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch[]>
struct Action_1_t2541210452;
// System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse>
struct Action_1_t356501165;
// System.String
struct String_t;
// System.Action`1<GooglePlayGames.Native.PInvoke.MultiplayerInvitation>
struct Action_1_t3807004673;
// GooglePlayGames.BasicApi.Multiplayer.MatchDelegate
struct MatchDelegate_t1377674964;
// GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch
struct NativeTurnBasedMatch_t302853426;
// System.Collections.IEnumerator
struct IEnumerator_t3464575207;
// System.Action
struct Action_t3771233898;
// GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch
struct TurnBasedMatch_t3573041681;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Action`1<System.Boolean>
struct Action_1_t872614854;
// System.Action`1<GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>
struct Action_1_t698669562;
// System.Action`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>
struct Action_2_t3154616052;
// GooglePlayGames.BasicApi.Multiplayer.MatchOutcome
struct MatchOutcome_t2238854319;
// GooglePlayGames.Native.PInvoke.MultiplayerInvitation
struct MultiplayerInvitation_t3411188537;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_NativeCli3798002602.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_T3476156963.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl1377674964.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2613789975.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_Na302853426.h"
#include "System_Core_System_Action3771233898.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl3573041681.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl2238854319.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2938557483.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl2327217482.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_M3411188537.h"

// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::.ctor(GooglePlayGames.Native.NativeClient,GooglePlayGames.Native.PInvoke.TurnBasedManager)
extern "C"  void NativeTurnBasedMultiplayerClient__ctor_m3869739613 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, NativeClient_t3798002602 * ___nativeClient0, TurnBasedManager_t3476156963 * ___manager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::CreateQuickMatch(System.UInt32,System.UInt32,System.UInt32,System.Action`2<System.Boolean,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>)
extern "C"  void NativeTurnBasedMultiplayerClient_CreateQuickMatch_m2125082621 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, uint32_t ___minOpponents0, uint32_t ___maxOpponents1, uint32_t ___variant2, Action_2_t1747968918 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::CreateQuickMatch(System.UInt32,System.UInt32,System.UInt32,System.UInt64,System.Action`2<System.Boolean,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>)
extern "C"  void NativeTurnBasedMultiplayerClient_CreateQuickMatch_m1940136370 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, uint32_t ___minOpponents0, uint32_t ___maxOpponents1, uint32_t ___variant2, uint64_t ___exclusiveBitmask3, Action_2_t1747968918 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::CreateWithInvitationScreen(System.UInt32,System.UInt32,System.UInt32,System.Action`2<System.Boolean,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>)
extern "C"  void NativeTurnBasedMultiplayerClient_CreateWithInvitationScreen_m3406972906 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, uint32_t ___minOpponents0, uint32_t ___maxOpponents1, uint32_t ___variant2, Action_2_t1747968918 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::CreateWithInvitationScreen(System.UInt32,System.UInt32,System.UInt32,System.Action`2<GooglePlayGames.BasicApi.UIStatus,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>)
extern "C"  void NativeTurnBasedMultiplayerClient_CreateWithInvitationScreen_m3042132481 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, uint32_t ___minOpponents0, uint32_t ___maxOpponents1, uint32_t ___variant2, Action_2_t657955164 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::GetAllInvitations(System.Action`1<GooglePlayGames.BasicApi.Multiplayer.Invitation[]>)
extern "C"  void NativeTurnBasedMultiplayerClient_GetAllInvitations_m560516888 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, Action_1_t312675074 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::GetAllMatches(System.Action`1<GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch[]>)
extern "C"  void NativeTurnBasedMultiplayerClient_GetAllMatches_m3218452199 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, Action_1_t2541210452 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Action`1<GooglePlayGames.Native.PInvoke.TurnBasedManager/TurnBasedMatchResponse> GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::BridgeMatchToUserCallback(System.Action`2<GooglePlayGames.BasicApi.UIStatus,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>)
extern "C"  Action_1_t356501165 * NativeTurnBasedMultiplayerClient_BridgeMatchToUserCallback_m655552279 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, Action_2_t657955164 * ___userCallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::AcceptFromInbox(System.Action`2<System.Boolean,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>)
extern "C"  void NativeTurnBasedMultiplayerClient_AcceptFromInbox_m595548823 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, Action_2_t1747968918 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::AcceptInvitation(System.String,System.Action`2<System.Boolean,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>)
extern "C"  void NativeTurnBasedMultiplayerClient_AcceptInvitation_m1300924336 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, String_t* ___invitationId0, Action_2_t1747968918 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::FindInvitationWithId(System.String,System.Action`1<GooglePlayGames.Native.PInvoke.MultiplayerInvitation>)
extern "C"  void NativeTurnBasedMultiplayerClient_FindInvitationWithId_m2555384039 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, String_t* ___invitationId0, Action_1_t3807004673 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::RegisterMatchDelegate(GooglePlayGames.BasicApi.Multiplayer.MatchDelegate)
extern "C"  void NativeTurnBasedMultiplayerClient_RegisterMatchDelegate_m1824052543 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, MatchDelegate_t1377674964 * ___del0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::HandleMatchEvent(GooglePlayGames.Native.Cwrapper.Types/MultiplayerEvent,System.String,GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch)
extern "C"  void NativeTurnBasedMultiplayerClient_HandleMatchEvent_m4132496865 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, int32_t ___eventType0, String_t* ___matchId1, NativeTurnBasedMatch_t302853426 * ___match2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::WaitForLogin(System.Action)
extern "C"  Il2CppObject * NativeTurnBasedMultiplayerClient_WaitForLogin_m2644257844 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, Action_t3771233898 * ___method0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::TakeTurn(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Byte[],System.String,System.Action`1<System.Boolean>)
extern "C"  void NativeTurnBasedMultiplayerClient_TakeTurn_m4170141747 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, TurnBasedMatch_t3573041681 * ___match0, ByteU5BU5D_t4260760469* ___data1, String_t* ___pendingParticipantId2, Action_1_t872614854 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::FindEqualVersionMatch(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Action`1<System.Boolean>,System.Action`1<GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>)
extern "C"  void NativeTurnBasedMultiplayerClient_FindEqualVersionMatch_m2040243957 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, TurnBasedMatch_t3573041681 * ___match0, Action_1_t872614854 * ___onFailure1, Action_1_t698669562 * ___onVersionMatch2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::FindEqualVersionMatchWithParticipant(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.String,System.Action`1<System.Boolean>,System.Action`2<GooglePlayGames.Native.PInvoke.MultiplayerParticipant,GooglePlayGames.Native.PInvoke.NativeTurnBasedMatch>)
extern "C"  void NativeTurnBasedMultiplayerClient_FindEqualVersionMatchWithParticipant_m1846395165 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, TurnBasedMatch_t3573041681 * ___match0, String_t* ___participantId1, Action_1_t872614854 * ___onFailure2, Action_2_t3154616052 * ___onFoundParticipantAndMatch3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::GetMaxMatchDataSize()
extern "C"  int32_t NativeTurnBasedMultiplayerClient_GetMaxMatchDataSize_m1014821654 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::Finish(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Byte[],GooglePlayGames.BasicApi.Multiplayer.MatchOutcome,System.Action`1<System.Boolean>)
extern "C"  void NativeTurnBasedMultiplayerClient_Finish_m1808077419 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, TurnBasedMatch_t3573041681 * ___match0, ByteU5BU5D_t4260760469* ___data1, MatchOutcome_t2238854319 * ___outcome2, Action_1_t872614854 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/MatchResult GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::ResultToMatchResult(GooglePlayGames.BasicApi.Multiplayer.MatchOutcome/ParticipantResult)
extern "C"  int32_t NativeTurnBasedMultiplayerClient_ResultToMatchResult_m1891199056 (Il2CppObject * __this /* static, unused */, int32_t ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::AcknowledgeFinished(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Action`1<System.Boolean>)
extern "C"  void NativeTurnBasedMultiplayerClient_AcknowledgeFinished_m2117210240 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, TurnBasedMatch_t3573041681 * ___match0, Action_1_t872614854 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::Leave(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Action`1<System.Boolean>)
extern "C"  void NativeTurnBasedMultiplayerClient_Leave_m4033411031 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, TurnBasedMatch_t3573041681 * ___match0, Action_1_t872614854 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::LeaveDuringTurn(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.String,System.Action`1<System.Boolean>)
extern "C"  void NativeTurnBasedMultiplayerClient_LeaveDuringTurn_m3328737877 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, TurnBasedMatch_t3573041681 * ___match0, String_t* ___pendingParticipantId1, Action_1_t872614854 * ___callback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::Cancel(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Action`1<System.Boolean>)
extern "C"  void NativeTurnBasedMultiplayerClient_Cancel_m820593374 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, TurnBasedMatch_t3573041681 * ___match0, Action_1_t872614854 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::Rematch(GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch,System.Action`2<System.Boolean,GooglePlayGames.BasicApi.Multiplayer.TurnBasedMatch>)
extern "C"  void NativeTurnBasedMultiplayerClient_Rematch_m3214037018 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, TurnBasedMatch_t3573041681 * ___match0, Action_2_t1747968918 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::DeclineInvitation(System.String)
extern "C"  void NativeTurnBasedMultiplayerClient_DeclineInvitation_m1367360141 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, String_t* ___invitationId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeTurnBasedMultiplayerClient::<DeclineInvitation>m__8C(GooglePlayGames.Native.PInvoke.MultiplayerInvitation)
extern "C"  void NativeTurnBasedMultiplayerClient_U3CDeclineInvitationU3Em__8C_m3429088441 (NativeTurnBasedMultiplayerClient_t3828344078 * __this, MultiplayerInvitation_t3411188537 * ___invitation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
