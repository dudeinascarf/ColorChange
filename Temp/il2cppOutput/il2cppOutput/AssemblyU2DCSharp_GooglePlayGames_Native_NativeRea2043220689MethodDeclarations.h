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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient
struct NativeRealtimeMultiplayerClient_t2043220689;
// GooglePlayGames.Native.NativeClient
struct NativeClient_t3798002602;
// GooglePlayGames.Native.PInvoke.RealtimeManager
struct RealtimeManager_t1839590440;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t1352686482;
// GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener
struct RealTimeMultiplayerListener_t8218125;
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper
struct RealTimeEventListenerHelper_t3078724631;
// System.Action`1<GooglePlayGames.BasicApi.Multiplayer.Invitation[]>
struct Action_1_t312675074;
// System.String
struct String_t;
// GooglePlayGames.BasicApi.Multiplayer.Invitation
struct Invitation_t2200833403;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant>
struct List_1_t3172416365;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t1804230813;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_NativeCli3798002602.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_R1839590440.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_NativeRea1352686482.h"
#include "mscorlib_System_String7231557.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::.ctor(GooglePlayGames.Native.NativeClient,GooglePlayGames.Native.PInvoke.RealtimeManager)
extern "C"  void NativeRealtimeMultiplayerClient__ctor_m10581993 (NativeRealtimeMultiplayerClient_t2043220689 * __this, NativeClient_t3798002602 * ___nativeClient0, RealtimeManager_t1839590440 * ___manager1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession GooglePlayGames.Native.NativeRealtimeMultiplayerClient::GetTerminatedSession()
extern "C"  RoomSession_t1352686482 * NativeRealtimeMultiplayerClient_GetTerminatedSession_m2193803575 (NativeRealtimeMultiplayerClient_t2043220689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::CreateQuickGame(System.UInt32,System.UInt32,System.UInt32,GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener)
extern "C"  void NativeRealtimeMultiplayerClient_CreateQuickGame_m3627632819 (NativeRealtimeMultiplayerClient_t2043220689 * __this, uint32_t ___minOpponents0, uint32_t ___maxOpponents1, uint32_t ___variant2, Il2CppObject * ___listener3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::CreateQuickGame(System.UInt32,System.UInt32,System.UInt32,System.UInt64,GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener)
extern "C"  void NativeRealtimeMultiplayerClient_CreateQuickGame_m399869598 (NativeRealtimeMultiplayerClient_t2043220689 * __this, uint32_t ___minOpponents0, uint32_t ___maxOpponents1, uint32_t ___variant2, uint64_t ___exclusiveBitMask3, Il2CppObject * ___listener4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealTimeEventListenerHelper GooglePlayGames.Native.NativeRealtimeMultiplayerClient::HelperForSession(GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession)
extern "C"  RealTimeEventListenerHelper_t3078724631 * NativeRealtimeMultiplayerClient_HelperForSession_m1380150311 (Il2CppObject * __this /* static, unused */, RoomSession_t1352686482 * ___session0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::HandleAppPausing(System.Boolean)
extern "C"  void NativeRealtimeMultiplayerClient_HandleAppPausing_m1486842016 (NativeRealtimeMultiplayerClient_t2043220689 * __this, bool ___paused0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::CreateWithInvitationScreen(System.UInt32,System.UInt32,System.UInt32,GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener)
extern "C"  void NativeRealtimeMultiplayerClient_CreateWithInvitationScreen_m398926867 (NativeRealtimeMultiplayerClient_t2043220689 * __this, uint32_t ___minOpponents0, uint32_t ___maxOppponents1, uint32_t ___variant2, Il2CppObject * ___listener3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::ShowWaitingRoomUI()
extern "C"  void NativeRealtimeMultiplayerClient_ShowWaitingRoomUI_m4102423570 (NativeRealtimeMultiplayerClient_t2043220689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::GetAllInvitations(System.Action`1<GooglePlayGames.BasicApi.Multiplayer.Invitation[]>)
extern "C"  void NativeRealtimeMultiplayerClient_GetAllInvitations_m1918775077 (NativeRealtimeMultiplayerClient_t2043220689 * __this, Action_1_t312675074 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::AcceptFromInbox(GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener)
extern "C"  void NativeRealtimeMultiplayerClient_AcceptFromInbox_m2047638912 (NativeRealtimeMultiplayerClient_t2043220689 * __this, Il2CppObject * ___listener0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::AcceptInvitation(System.String,GooglePlayGames.BasicApi.Multiplayer.RealTimeMultiplayerListener)
extern "C"  void NativeRealtimeMultiplayerClient_AcceptInvitation_m1078826061 (NativeRealtimeMultiplayerClient_t2043220689 * __this, String_t* ___invitationId0, Il2CppObject * ___listener1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Invitation GooglePlayGames.Native.NativeRealtimeMultiplayerClient::GetInvitation()
extern "C"  Invitation_t2200833403 * NativeRealtimeMultiplayerClient_GetInvitation_m2241307236 (NativeRealtimeMultiplayerClient_t2043220689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::LeaveRoom()
extern "C"  void NativeRealtimeMultiplayerClient_LeaveRoom_m2671235109 (NativeRealtimeMultiplayerClient_t2043220689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::SendMessageToAll(System.Boolean,System.Byte[])
extern "C"  void NativeRealtimeMultiplayerClient_SendMessageToAll_m1845359056 (NativeRealtimeMultiplayerClient_t2043220689 * __this, bool ___reliable0, ByteU5BU5D_t4260760469* ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::SendMessageToAll(System.Boolean,System.Byte[],System.Int32,System.Int32)
extern "C"  void NativeRealtimeMultiplayerClient_SendMessageToAll_m2190615344 (NativeRealtimeMultiplayerClient_t2043220689 * __this, bool ___reliable0, ByteU5BU5D_t4260760469* ___data1, int32_t ___offset2, int32_t ___length3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::SendMessage(System.Boolean,System.String,System.Byte[])
extern "C"  void NativeRealtimeMultiplayerClient_SendMessage_m4116496968 (NativeRealtimeMultiplayerClient_t2043220689 * __this, bool ___reliable0, String_t* ___participantId1, ByteU5BU5D_t4260760469* ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::SendMessage(System.Boolean,System.String,System.Byte[],System.Int32,System.Int32)
extern "C"  void NativeRealtimeMultiplayerClient_SendMessage_m739036584 (NativeRealtimeMultiplayerClient_t2043220689 * __this, bool ___reliable0, String_t* ___participantId1, ByteU5BU5D_t4260760469* ___data2, int32_t ___offset3, int32_t ___length4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.Native.NativeRealtimeMultiplayerClient::GetConnectedParticipants()
extern "C"  List_1_t3172416365 * NativeRealtimeMultiplayerClient_GetConnectedParticipants_m2661859692 (NativeRealtimeMultiplayerClient_t2043220689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient::GetSelf()
extern "C"  Participant_t1804230813 * NativeRealtimeMultiplayerClient_GetSelf_m742577935 (NativeRealtimeMultiplayerClient_t2043220689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient::GetParticipant(System.String)
extern "C"  Participant_t1804230813 * NativeRealtimeMultiplayerClient_GetParticipant_m4042135760 (NativeRealtimeMultiplayerClient_t2043220689 * __this, String_t* ___participantId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient::IsRoomConnected()
extern "C"  bool NativeRealtimeMultiplayerClient_IsRoomConnected_m264669475 (NativeRealtimeMultiplayerClient_t2043220689 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient::DeclineInvitation(System.String)
extern "C"  void NativeRealtimeMultiplayerClient_DeclineInvitation_m3792461920 (NativeRealtimeMultiplayerClient_t2043220689 * __this, String_t* ___invitationId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
