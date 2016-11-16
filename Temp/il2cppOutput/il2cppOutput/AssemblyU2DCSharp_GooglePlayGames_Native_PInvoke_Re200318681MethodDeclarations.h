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

// GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder
struct RealtimeRoomConfigBuilder_t200318681;
// GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse
struct PlayerSelectUIResponse_t922401854;
// System.String
struct String_t;
// GooglePlayGames.Native.PInvoke.RealtimeRoomConfig
struct RealtimeRoomConfig_t294375316;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_Pl922401854.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"

// System.Void GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder::.ctor(System.IntPtr)
extern "C"  void RealtimeRoomConfigBuilder__ctor_m299567561 (RealtimeRoomConfigBuilder_t200318681 * __this, IntPtr_t ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder::PopulateFromUIResponse(GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse)
extern "C"  RealtimeRoomConfigBuilder_t200318681 * RealtimeRoomConfigBuilder_PopulateFromUIResponse_m181648622 (RealtimeRoomConfigBuilder_t200318681 * __this, PlayerSelectUIResponse_t922401854 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder::SetVariant(System.UInt32)
extern "C"  RealtimeRoomConfigBuilder_t200318681 * RealtimeRoomConfigBuilder_SetVariant_m2361628241 (RealtimeRoomConfigBuilder_t200318681 * __this, uint32_t ___variantValue0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder::AddInvitedPlayer(System.String)
extern "C"  RealtimeRoomConfigBuilder_t200318681 * RealtimeRoomConfigBuilder_AddInvitedPlayer_m675683521 (RealtimeRoomConfigBuilder_t200318681 * __this, String_t* ___playerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder::SetExclusiveBitMask(System.UInt64)
extern "C"  RealtimeRoomConfigBuilder_t200318681 * RealtimeRoomConfigBuilder_SetExclusiveBitMask_m1200729954 (RealtimeRoomConfigBuilder_t200318681 * __this, uint64_t ___bitmask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder::SetMinimumAutomatchingPlayers(System.UInt32)
extern "C"  RealtimeRoomConfigBuilder_t200318681 * RealtimeRoomConfigBuilder_SetMinimumAutomatchingPlayers_m2639983908 (RealtimeRoomConfigBuilder_t200318681 * __this, uint32_t ___minimum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder::SetMaximumAutomatchingPlayers(System.UInt32)
extern "C"  RealtimeRoomConfigBuilder_t200318681 * RealtimeRoomConfigBuilder_SetMaximumAutomatchingPlayers_m3195344566 (RealtimeRoomConfigBuilder_t200318681 * __this, uint32_t ___maximum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealtimeRoomConfig GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder::Build()
extern "C"  RealtimeRoomConfig_t294375316 * RealtimeRoomConfigBuilder_Build_m430414255 (RealtimeRoomConfigBuilder_t200318681 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void RealtimeRoomConfigBuilder_CallDispose_m909697287 (RealtimeRoomConfigBuilder_t200318681 * __this, HandleRef_t1780819301  ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder GooglePlayGames.Native.PInvoke.RealtimeRoomConfigBuilder::Create()
extern "C"  RealtimeRoomConfigBuilder_t200318681 * RealtimeRoomConfigBuilder_Create_m2260369602 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
