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

// GooglePlayGames.Native.PInvoke.StatsManager
struct StatsManager_t4261398554;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t1862808700;
// System.Action`1<GooglePlayGames.Native.PInvoke.StatsManager/FetchForPlayerResponse>
struct Action_1_t1663036183;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_G1862808700.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void GooglePlayGames.Native.PInvoke.StatsManager::.ctor(GooglePlayGames.Native.PInvoke.GameServices)
extern "C"  void StatsManager__ctor_m4169733925 (StatsManager_t4261398554 * __this, GameServices_t1862808700 * ___services0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.StatsManager::FetchForPlayer(System.Action`1<GooglePlayGames.Native.PInvoke.StatsManager/FetchForPlayerResponse>)
extern "C"  void StatsManager_FetchForPlayer_m2924525119 (StatsManager_t4261398554 * __this, Action_1_t1663036183 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.StatsManager::InternalFetchForPlayerCallback(System.IntPtr,System.IntPtr)
extern "C"  void StatsManager_InternalFetchForPlayerCallback_m548634438 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_StatsManager_InternalFetchForPlayerCallback_m548634438(intptr_t ___arg00, intptr_t ___arg11);
