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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState
struct ActiveState_t2038966146;
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_t3104490121;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t1352686482;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t1804230813;
// System.String
struct String_t;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t3337232325;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_N3104490121.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_NativeRea1352686482.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_M3337232325.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl1804230813.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::.ctor(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession)
extern "C"  void ActiveState__ctor_m3204190779 (ActiveState_t2038966146 * __this, NativeRealTimeRoom_t3104490121 * ___room0, RoomSession_t1352686482 * ___session1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::OnStateEntered()
extern "C"  void ActiveState_OnStateEntered_m1627611184 (ActiveState_t2038966146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::IsRoomConnected()
extern "C"  bool ActiveState_IsRoomConnected_m1632154919 (ActiveState_t2038966146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::GetParticipant(System.String)
extern "C"  Participant_t1804230813 * ActiveState_GetParticipant_m1951840724 (ActiveState_t2038966146 * __this, String_t* ___participantId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::GetSelf()
extern "C"  Participant_t1804230813 * ActiveState_GetSelf_m693838355 (ActiveState_t2038966146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::HandleConnectedSetChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C"  void ActiveState_HandleConnectedSetChanged_m2388078920 (ActiveState_t2038966146 * __this, NativeRealTimeRoom_t3104490121 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::LeaveRoom()
extern "C"  void ActiveState_LeaveRoom_m2371428649 (ActiveState_t2038966146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::<HandleConnectedSetChanged>m__5D(GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
extern "C"  String_t* ActiveState_U3CHandleConnectedSetChangedU3Em__5D_m1587858227 (Il2CppObject * __this /* static, unused */, MultiplayerParticipant_t3337232325 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::<HandleConnectedSetChanged>m__5E(GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
extern "C"  Participant_t1804230813 * ActiveState_U3CHandleConnectedSetChangedU3Em__5E_m2591631471 (Il2CppObject * __this /* static, unused */, MultiplayerParticipant_t3337232325 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::<HandleConnectedSetChanged>m__5F(GooglePlayGames.BasicApi.Multiplayer.Participant)
extern "C"  String_t* ActiveState_U3CHandleConnectedSetChangedU3Em__5F_m80402798 (Il2CppObject * __this /* static, unused */, Participant_t1804230813 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::<HandleConnectedSetChanged>m__60(GooglePlayGames.BasicApi.Multiplayer.Participant)
extern "C"  String_t* ActiveState_U3CHandleConnectedSetChangedU3Em__60_m1689183543 (Il2CppObject * __this /* static, unused */, Participant_t1804230813 * ___p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ActiveState::<LeaveRoom>m__65()
extern "C"  void ActiveState_U3CLeaveRoomU3Em__65_m2050763919 (ActiveState_t2038966146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
