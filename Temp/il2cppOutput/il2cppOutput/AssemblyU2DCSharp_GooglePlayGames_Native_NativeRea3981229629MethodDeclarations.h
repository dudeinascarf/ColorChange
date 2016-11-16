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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomCreationPendingState
struct RoomCreationPendingState_t3981229629;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t1352686482;
// GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse
struct RealTimeRoomResponse_t2530940439;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_NativeRea1352686482.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_R2530940439.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomCreationPendingState::.ctor(GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession)
extern "C"  void RoomCreationPendingState__ctor_m1907496764 (RoomCreationPendingState_t3981229629 * __this, RoomSession_t1352686482 * ___session0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomCreationPendingState::HandleRoomResponse(GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse)
extern "C"  void RoomCreationPendingState_HandleRoomResponse_m1446872833 (RoomCreationPendingState_t3981229629 * __this, RealTimeRoomResponse_t2530940439 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomCreationPendingState::IsActive()
extern "C"  bool RoomCreationPendingState_IsActive_m4248991954 (RoomCreationPendingState_t3981229629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomCreationPendingState::LeaveRoom()
extern "C"  void RoomCreationPendingState_LeaveRoom_m1043513630 (RoomCreationPendingState_t3981229629 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
