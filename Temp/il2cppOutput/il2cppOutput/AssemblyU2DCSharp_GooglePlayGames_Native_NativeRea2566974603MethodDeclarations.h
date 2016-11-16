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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState
struct MessagingEnabledState_t2566974603;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t1352686482;
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_t3104490121;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t3337232325;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant>
struct List_1_t3172416365;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t1804230813;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_NativeRea1352686482.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_N3104490121.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_M3337232325.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl1804230813.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::.ctor(GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession,GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C"  void MessagingEnabledState__ctor_m1115092330 (MessagingEnabledState_t2566974603 * __this, RoomSession_t1352686482 * ___session0, NativeRealTimeRoom_t3104490121 * ___room1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::UpdateCurrentRoom(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C"  void MessagingEnabledState_UpdateCurrentRoom_m868676537 (MessagingEnabledState_t2566974603 * __this, NativeRealTimeRoom_t3104490121 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::OnRoomStatusChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C"  void MessagingEnabledState_OnRoomStatusChanged_m497654812 (MessagingEnabledState_t2566974603 * __this, NativeRealTimeRoom_t3104490121 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::HandleRoomStatusChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C"  void MessagingEnabledState_HandleRoomStatusChanged_m136037989 (MessagingEnabledState_t2566974603 * __this, NativeRealTimeRoom_t3104490121 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::OnConnectedSetChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C"  void MessagingEnabledState_OnConnectedSetChanged_m1536486536 (MessagingEnabledState_t2566974603 * __this, NativeRealTimeRoom_t3104490121 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::HandleConnectedSetChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C"  void MessagingEnabledState_HandleConnectedSetChanged_m1915070609 (MessagingEnabledState_t2566974603 * __this, NativeRealTimeRoom_t3104490121 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::OnParticipantStatusChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
extern "C"  void MessagingEnabledState_OnParticipantStatusChanged_m3869874144 (MessagingEnabledState_t2566974603 * __this, NativeRealTimeRoom_t3104490121 * ___room0, MultiplayerParticipant_t3337232325 * ___participant1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::HandleParticipantStatusChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
extern "C"  void MessagingEnabledState_HandleParticipantStatusChanged_m1972732471 (MessagingEnabledState_t2566974603 * __this, NativeRealTimeRoom_t3104490121 * ___room0, MultiplayerParticipant_t3337232325 * ___participant1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::GetConnectedParticipants()
extern "C"  List_1_t3172416365 * MessagingEnabledState_GetConnectedParticipants_m2313625585 (MessagingEnabledState_t2566974603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::SendToSpecificRecipient(System.String,System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void MessagingEnabledState_SendToSpecificRecipient_m3892706986 (MessagingEnabledState_t2566974603 * __this, String_t* ___recipientId0, ByteU5BU5D_t4260760469* ___data1, int32_t ___offset2, int32_t ___length3, bool ___isReliable4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::SendToAll(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void MessagingEnabledState_SendToAll_m2152356736 (MessagingEnabledState_t2566974603 * __this, ByteU5BU5D_t4260760469* ___data0, int32_t ___offset1, int32_t ___length2, bool ___isReliable3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::OnDataReceived(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.Byte[],System.Boolean)
extern "C"  void MessagingEnabledState_OnDataReceived_m2736740342 (MessagingEnabledState_t2566974603 * __this, NativeRealTimeRoom_t3104490121 * ___room0, MultiplayerParticipant_t3337232325 * ___sender1, ByteU5BU5D_t4260760469* ___data2, bool ___isReliable3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::<UpdateCurrentRoom>m__57(GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
extern "C"  String_t* MessagingEnabledState_U3CUpdateCurrentRoomU3Em__57_m2086005471 (Il2CppObject * __this /* static, unused */, MultiplayerParticipant_t3337232325 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::<UpdateCurrentRoom>m__58(GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
extern "C"  Participant_t1804230813 * MessagingEnabledState_U3CUpdateCurrentRoomU3Em__58_m2295407835 (Il2CppObject * __this /* static, unused */, MultiplayerParticipant_t3337232325 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::<UpdateCurrentRoom>m__59(GooglePlayGames.BasicApi.Multiplayer.Participant)
extern "C"  String_t* MessagingEnabledState_U3CUpdateCurrentRoomU3Em__59_m1245158978 (Il2CppObject * __this /* static, unused */, Participant_t1804230813 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/MessagingEnabledState::<GetConnectedParticipants>m__5A(GooglePlayGames.BasicApi.Multiplayer.Participant)
extern "C"  bool MessagingEnabledState_U3CGetConnectedParticipantsU3Em__5A_m2110622093 (Il2CppObject * __this /* static, unused */, Participant_t1804230813 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
