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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State
struct State_t1703243816;
// GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse
struct RealTimeRoomResponse_t2530940439;
// GooglePlayGames.Native.PInvoke.NativeRealTimeRoom
struct NativeRealTimeRoom_t3104490121;
// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct MultiplayerParticipant_t3337232325;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.String
struct String_t;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant>
struct List_1_t3172416365;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t1804230813;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_R2530940439.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_N3104490121.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_M3337232325.h"
#include "mscorlib_System_String7231557.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::.ctor()
extern "C"  void State__ctor_m3045367667 (State_t1703243816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::HandleRoomResponse(GooglePlayGames.Native.PInvoke.RealtimeManager/RealTimeRoomResponse)
extern "C"  void State_HandleRoomResponse_m2309428902 (State_t1703243816 * __this, RealTimeRoomResponse_t2530940439 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::IsActive()
extern "C"  bool State_IsActive_m2664100597 (State_t1703243816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::LeaveRoom()
extern "C"  void State_LeaveRoom_m3891169347 (State_t1703243816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::ShowWaitingRoomUI(System.UInt32)
extern "C"  void State_ShowWaitingRoomUI_m2875867338 (State_t1703243816 * __this, uint32_t ___minimumParticipantsBeforeStarting0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::OnStateEntered()
extern "C"  void State_OnStateEntered_m1259624790 (State_t1703243816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::OnRoomStatusChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C"  void State_OnRoomStatusChanged_m3833764537 (State_t1703243816 * __this, NativeRealTimeRoom_t3104490121 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::OnConnectedSetChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom)
extern "C"  void State_OnConnectedSetChanged_m3492329445 (State_t1703243816 * __this, NativeRealTimeRoom_t3104490121 * ___room0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::OnParticipantStatusChanged(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant)
extern "C"  void State_OnParticipantStatusChanged_m3957050979 (State_t1703243816 * __this, NativeRealTimeRoom_t3104490121 * ___room0, MultiplayerParticipant_t3337232325 * ___participant1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::OnDataReceived(GooglePlayGames.Native.PInvoke.NativeRealTimeRoom,GooglePlayGames.Native.PInvoke.MultiplayerParticipant,System.Byte[],System.Boolean)
extern "C"  void State_OnDataReceived_m3297155027 (State_t1703243816 * __this, NativeRealTimeRoom_t3104490121 * ___room0, MultiplayerParticipant_t3337232325 * ___sender1, ByteU5BU5D_t4260760469* ___data2, bool ___isReliable3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::SendToSpecificRecipient(System.String,System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void State_SendToSpecificRecipient_m115597165 (State_t1703243816 * __this, String_t* ___recipientId0, ByteU5BU5D_t4260760469* ___data1, int32_t ___offset2, int32_t ___length3, bool ___isReliable4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::SendToAll(System.Byte[],System.Int32,System.Int32,System.Boolean)
extern "C"  void State_SendToAll_m864677571 (State_t1703243816 * __this, ByteU5BU5D_t4260760469* ___data0, int32_t ___offset1, int32_t ___length2, bool ___isReliable3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Participant> GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::GetConnectedParticipants()
extern "C"  List_1_t3172416365 * State_GetConnectedParticipants_m3195005454 (State_t1703243816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::GetSelf()
extern "C"  Participant_t1804230813 * State_GetSelf_m1828778797 (State_t1703243816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.Multiplayer.Participant GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::GetParticipant(System.String)
extern "C"  Participant_t1804230813 * State_GetParticipant_m2608003566 (State_t1703243816 * __this, String_t* ___participantId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeRealtimeMultiplayerClient/State::IsRoomConnected()
extern "C"  bool State_IsRoomConnected_m1327311297 (State_t1703243816 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
