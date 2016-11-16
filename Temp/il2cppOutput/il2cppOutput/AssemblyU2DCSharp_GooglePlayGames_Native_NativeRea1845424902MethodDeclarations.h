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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/LeavingRoom
struct LeavingRoom_t1845424902;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t1352686482;
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_t3104490121;
// System.Action
struct Action_t3771233898;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_NativeRea1352686482.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_N3104490121.h"
#include "System_Core_System_Action3771233898.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_4049911828.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/LeavingRoom::.ctor(GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession,GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,System.Action)
extern "C"  void LeavingRoom__ctor_m2804555590 (LeavingRoom_t1845424902 * __this, RoomSession_t1352686482 * ___session0, NativeRealTimeRoom_t3104490121 * ___room1, Action_t3771233898 * ___leavingCompleteCallback2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/LeavingRoom::IsActive()
extern "C"  bool LeavingRoom_IsActive_m3443160019 (LeavingRoom_t1845424902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/LeavingRoom::OnStateEntered()
extern "C"  void LeavingRoom_OnStateEntered_m2337788596 (LeavingRoom_t1845424902 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/LeavingRoom::<OnStateEntered>m__66(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus)
extern "C"  void LeavingRoom_U3COnStateEnteredU3Em__66_m1594397903 (LeavingRoom_t1845424902 * __this, int32_t ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
