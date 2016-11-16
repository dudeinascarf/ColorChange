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

// GooglePlayGames.Native.NativeSavedGameClient/Prefetcher
struct Prefetcher_t2809057731;
// System.Action`2<System.Byte[],System.Byte[]>
struct Action_2_t1400690759;
// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>
struct Action_2_t2072880178;
// GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse
struct ReadResponse_t2292627584;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata
struct ISavedGameMetadata_t3582269991;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_S2292627584.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGa3786215536.h"

// System.Void GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::.ctor(System.Action`2<System.Byte[],System.Byte[]>,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>)
extern "C"  void Prefetcher__ctor_m2063084557 (Prefetcher_t2809057731 * __this, Action_2_t1400690759 * ___dataFetchedCallback0, Action_2_t2072880178 * ___completedCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::OnOriginalDataRead(GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse)
extern "C"  void Prefetcher_OnOriginalDataRead_m534040742 (Prefetcher_t2809057731 * __this, ReadResponse_t2292627584 * ___readResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::OnUnmergedDataRead(GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse)
extern "C"  void Prefetcher_OnUnmergedDataRead_m3945906162 (Prefetcher_t2809057731 * __this, ReadResponse_t2292627584 * ___readResponse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::MaybeProceed()
extern "C"  void Prefetcher_MaybeProceed_m2672826850 (Prefetcher_t2809057731 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::<OnOriginalDataRead>m__75(GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata)
extern "C"  void Prefetcher_U3COnOriginalDataReadU3Em__75_m1363074110 (Il2CppObject * __this /* static, unused */, int32_t p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient/Prefetcher::<OnUnmergedDataRead>m__76(GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata)
extern "C"  void Prefetcher_U3COnUnmergedDataReadU3Em__76_m1566900905 (Il2CppObject * __this /* static, unused */, int32_t p0, Il2CppObject * p1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
