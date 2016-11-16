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

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/NoopListener
struct NoopListener_t1575928511;
// GooglePlayGames.BasicApi.Multiplayer.Participant
struct Participant_t1804230813;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Multipl1804230813.h"
#include "mscorlib_System_String7231557.h"

// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/NoopListener::.ctor()
extern "C"  void NoopListener__ctor_m1781303180 (NoopListener_t1575928511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/NoopListener::OnRoomSetupProgress(System.Single)
extern "C"  void NoopListener_OnRoomSetupProgress_m3916529777 (NoopListener_t1575928511 * __this, float ___percent0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/NoopListener::OnRoomConnected(System.Boolean)
extern "C"  void NoopListener_OnRoomConnected_m1281286192 (NoopListener_t1575928511 * __this, bool ___success0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/NoopListener::OnLeftRoom()
extern "C"  void NoopListener_OnLeftRoom_m3994861369 (NoopListener_t1575928511 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/NoopListener::OnParticipantLeft(GooglePlayGames.BasicApi.Multiplayer.Participant)
extern "C"  void NoopListener_OnParticipantLeft_m578312334 (NoopListener_t1575928511 * __this, Participant_t1804230813 * ___participant0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/NoopListener::OnPeersConnected(System.String[])
extern "C"  void NoopListener_OnPeersConnected_m1579765585 (NoopListener_t1575928511 * __this, StringU5BU5D_t4054002952* ___participantIds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/NoopListener::OnPeersDisconnected(System.String[])
extern "C"  void NoopListener_OnPeersDisconnected_m4257025801 (NoopListener_t1575928511 * __this, StringU5BU5D_t4054002952* ___participantIds0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeRealtimeMultiplayerClient/NoopListener::OnRealTimeMessageReceived(System.Boolean,System.String,System.Byte[])
extern "C"  void NoopListener_OnRealTimeMessageReceived_m5988094 (NoopListener_t1575928511 * __this, bool ___isReliable0, String_t* ___senderId1, ByteU5BU5D_t4260760469* ___data2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
