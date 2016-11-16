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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState
struct ConnectingState_t4007928720;
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_t3104490121;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t1352686482;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t3337232325;
// GooglePlayGames.Native.PInvoke.RealtimeManager/WaitingRoomUIResponse
struct WaitingRoomUIResponse_t3333463309;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_N3104490121.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_NativeRea1352686482.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_M3337232325.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_R3333463309.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::.ctor(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession)
extern "C"  void ConnectingState__ctor_m2676577517 (ConnectingState_t4007928720 * __this, NativeRealTimeRoom_t3104490121 * ___room0, RoomSession_t1352686482 * ___session1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::.cctor()
extern "C"  void ConnectingState__cctor_m1949739522 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::OnStateEntered()
extern "C"  void ConnectingState_OnStateEntered_m3284533438 (ConnectingState_t4007928720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::HandleConnectedSetChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C"  void ConnectingState_HandleConnectedSetChanged_m2208880854 (ConnectingState_t4007928720 * __this, NativeRealTimeRoom_t3104490121 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::HandleParticipantStatusChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
extern "C"  void ConnectingState_HandleParticipantStatusChanged_m727327442 (ConnectingState_t4007928720 * __this, NativeRealTimeRoom_t3104490121 * ___room0, MultiplayerParticipant_t3337232325 * ___participant1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::LeaveRoom()
extern "C"  void ConnectingState_LeaveRoom_m2757484507 (ConnectingState_t4007928720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::ShowWaitingRoomUI(System.UInt32)
extern "C"  void ConnectingState_ShowWaitingRoomUI_m921704498 (ConnectingState_t4007928720 * __this, uint32_t ___minimumParticipantsBeforeStarting0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::<LeaveRoom>m__5B()
extern "C"  void ConnectingState_U3CLeaveRoomU3Em__5B_m920165899 (ConnectingState_t4007928720 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/ConnectingState::<ShowWaitingRoomUI>m__5C(GooglePlayGames.Native.PInvoke.RealtimeManager/WaitingRoomUIResponse)
extern "C"  void ConnectingState_U3CShowWaitingRoomUIU3Em__5C_m4084728460 (ConnectingState_t4007928720 * __this, WaitingRoomUIResponse_t3333463309 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
