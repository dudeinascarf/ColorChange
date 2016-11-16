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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t1352686482;
// GooglePlayGames.Native.PInvoke.RealtimeManager
struct RealtimeManager_t1839590440;
// GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener
struct RealTimeMultiplayerListener_t8218125;
// System.String
struct String_t;
// GooglePlayGames.BasicApi.Multiplayer.Invitation
struct Invitation_t2200833403;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener
struct OnGameThreadForwardingListener_t3760582229;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State
struct State_t1703243816;
// System.Action
struct Action_t3771233898;
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_t3104490121;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t3337232325;
// GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse
struct RealTimeRoomResponse_t2530940439;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant>
struct List_1_t3172416365;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t1804230813;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_R1839590440.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl2200833403.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_NativeRea1703243816.h"
#include "mscorlib_System_String7231557.h"
#include "System_Core_System_Action3771233898.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_N3104490121.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_M3337232325.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_R2530940439.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::.ctor(GooglePlayGames.Native.PInvoke.RealtimeManager,GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener)
extern "C"  void RoomSession__ctor_m2608775381 (RoomSession_t1352686482 * __this, RealtimeManager_t1839590440 * ___manager0, Il2CppObject * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::get_ShowingUI()
extern "C"  bool RoomSession_get_ShowingUI_m4205354147 (RoomSession_t1352686482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::set_ShowingUI(System.Boolean)
extern "C"  void RoomSession_set_ShowingUI_m2513196826 (RoomSession_t1352686482 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::get_MinPlayersToStart()
extern "C"  uint32_t RoomSession_get_MinPlayersToStart_m365929674 (RoomSession_t1352686482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::set_MinPlayersToStart(System.UInt32)
extern "C"  void RoomSession_set_MinPlayersToStart_m2764852169 (RoomSession_t1352686482 * __this, uint32_t ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealtimeManager GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::Manager()
extern "C"  RealtimeManager_t1839590440 * RoomSession_Manager_m580619958 (RoomSession_t1352686482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::IsActive()
extern "C"  bool RoomSession_IsActive_m1890019935 (RoomSession_t1352686482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::SelfPlayerId()
extern "C"  String_t* RoomSession_SelfPlayerId_m2619363718 (RoomSession_t1352686482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::SetInvitation(GooglePlayGames.BasicApi.Multiplayer.Invitation)
extern "C"  void RoomSession_SetInvitation_m3430866171 (RoomSession_t1352686482 * __this, Invitation_t2200833403 * ___invitation0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Invitation GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::GetInvitation()
extern "C"  Invitation_t2200833403 * RoomSession_GetInvitation_m4236614744 (RoomSession_t1352686482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/OnGameThreadForwardingListener GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::OnGameThreadListener()
extern "C"  OnGameThreadForwardingListener_t3760582229 * RoomSession_OnGameThreadListener_m1946999144 (RoomSession_t1352686482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::EnterState(GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State)
extern "C"  void RoomSession_EnterState_m1402955788 (RoomSession_t1352686482 * __this, State_t1703243816 * ___handler0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::EnterState(GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State,System.Boolean)
extern "C"  void RoomSession_EnterState_m4206514673 (RoomSession_t1352686482 * __this, State_t1703243816 * ___handler0, bool ___fireStateEnteredEvent1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::LeaveRoom()
extern "C"  void RoomSession_LeaveRoom_m672270105 (RoomSession_t1352686482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::ShowWaitingRoomUI()
extern "C"  void RoomSession_ShowWaitingRoomUI_m3288598278 (RoomSession_t1352686482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::StartRoomCreation(System.String,System.Action)
extern "C"  void RoomSession_StartRoomCreation_m3852465046 (RoomSession_t1352686482 * __this, String_t* ___currentPlayerId0, Action_t3771233898 * ___createRoom1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::OnRoomStatusChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C"  void RoomSession_OnRoomStatusChanged_m1472486947 (RoomSession_t1352686482 * __this, NativeRealTimeRoom_t3104490121 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::OnConnectedSetChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C"  void RoomSession_OnConnectedSetChanged_m2047297743 (RoomSession_t1352686482 * __this, NativeRealTimeRoom_t3104490121 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::OnParticipantStatusChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
extern "C"  void RoomSession_OnParticipantStatusChanged_m2702910265 (RoomSession_t1352686482 * __this, NativeRealTimeRoom_t3104490121 * ___room0, MultiplayerParticipant_t3337232325 * ___participant1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::HandleRoomResponse(GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse)
extern "C"  void RoomSession_HandleRoomResponse_m1680561276 (RoomSession_t1352686482 * __this, RealTimeRoomResponse_t2530940439 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::OnDataReceived(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.Byte[],System.Boolean)
extern "C"  void RoomSession_OnDataReceived_m2236402109 (RoomSession_t1352686482 * __this, NativeRealTimeRoom_t3104490121 * ___room0, MultiplayerParticipant_t3337232325 * ___sender1, ByteU5BU5D_t4260760469* ___data2, bool ___isReliable3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::SendMessageToAll(System.Boolean,System.Byte[])
extern "C"  void RoomSession_SendMessageToAll_m151631452 (RoomSession_t1352686482 * __this, bool ___reliable0, ByteU5BU5D_t4260760469* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::SendMessageToAll(System.Boolean,System.Byte[],System.Int32,System.Int32)
extern "C"  void RoomSession_SendMessageToAll_m2131103932 (RoomSession_t1352686482 * __this, bool ___reliable0, ByteU5BU5D_t4260760469* ___data1, int32_t ___offset2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::SendMessage(System.Boolean,System.String,System.Byte[])
extern "C"  void RoomSession_SendMessage_m1769429820 (RoomSession_t1352686482 * __this, bool ___reliable0, String_t* ___participantId1, ByteU5BU5D_t4260760469* ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::SendMessage(System.Boolean,System.String,System.Byte[],System.Int32,System.Int32)
extern "C"  void RoomSession_SendMessage_m383606172 (RoomSession_t1352686482 * __this, bool ___reliable0, String_t* ___participantId1, ByteU5BU5D_t4260760469* ___data2, int32_t ___offset3, int32_t ___length4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::GetConnectedParticipants()
extern "C"  List_1_t3172416365 * RoomSession_GetConnectedParticipants_m1236444408 (RoomSession_t1352686482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::GetSelf()
extern "C"  Participant_t1804230813 * RoomSession_GetSelf_m66372611 (RoomSession_t1352686482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::GetParticipant(System.String)
extern "C"  Participant_t1804230813 * RoomSession_GetParticipant_m171705284 (RoomSession_t1352686482 * __this, String_t* ___participantId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession::IsRoomConnected()
extern "C"  bool RoomSession_IsRoomConnected_m2631493399 (RoomSession_t1352686482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
