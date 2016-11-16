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

// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder
struct TurnBasedMatchConfigBuilder_t1401664752;
// GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse
struct PlayerSelectUIResponse_t922401854;
// System.String
struct String_t;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfig
struct TurnBasedMatchConfig_t3069007197;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_Pl922401854.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"

// System.Void GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder::.ctor(System.IntPtr)
extern "C"  void TurnBasedMatchConfigBuilder__ctor_m2363083424 (TurnBasedMatchConfigBuilder_t1401664752 * __this, IntPtr_t ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder::PopulateFromUIResponse(GooglePlayGames.Native.PInvoke.PlayerSelectUIResponse)
extern "C"  TurnBasedMatchConfigBuilder_t1401664752 * TurnBasedMatchConfigBuilder_PopulateFromUIResponse_m1524931022 (TurnBasedMatchConfigBuilder_t1401664752 * __this, PlayerSelectUIResponse_t922401854 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder::SetVariant(System.UInt32)
extern "C"  TurnBasedMatchConfigBuilder_t1401664752 * TurnBasedMatchConfigBuilder_SetVariant_m1810309937 (TurnBasedMatchConfigBuilder_t1401664752 * __this, uint32_t ___variant0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder::AddInvitedPlayer(System.String)
extern "C"  TurnBasedMatchConfigBuilder_t1401664752 * TurnBasedMatchConfigBuilder_AddInvitedPlayer_m319062433 (TurnBasedMatchConfigBuilder_t1401664752 * __this, String_t* ___playerId0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder::SetExclusiveBitMask(System.UInt64)
extern "C"  TurnBasedMatchConfigBuilder_t1401664752 * TurnBasedMatchConfigBuilder_SetExclusiveBitMask_m2850987650 (TurnBasedMatchConfigBuilder_t1401664752 * __this, uint64_t ___bitmask0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder::SetMinimumAutomatchingPlayers(System.UInt32)
extern "C"  TurnBasedMatchConfigBuilder_t1401664752 * TurnBasedMatchConfigBuilder_SetMinimumAutomatchingPlayers_m3694099524 (TurnBasedMatchConfigBuilder_t1401664752 * __this, uint32_t ___minimum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder::SetMaximumAutomatchingPlayers(System.UInt32)
extern "C"  TurnBasedMatchConfigBuilder_t1401664752 * TurnBasedMatchConfigBuilder_SetMaximumAutomatchingPlayers_m4249460182 (TurnBasedMatchConfigBuilder_t1401664752 * __this, uint32_t ___maximum0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfig GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder::Build()
extern "C"  TurnBasedMatchConfig_t3069007197 * TurnBasedMatchConfigBuilder_Build_m2253168001 (TurnBasedMatchConfigBuilder_t1401664752 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void TurnBasedMatchConfigBuilder_CallDispose_m3149911824 (TurnBasedMatchConfigBuilder_t1401664752 * __this, HandleRef_t1780819301  ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder GooglePlayGames.Native.PInvoke.TurnBasedMatchConfigBuilder::Create()
extern "C"  TurnBasedMatchConfigBuilder_t1401664752 * TurnBasedMatchConfigBuilder_Create_m3948156898 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
