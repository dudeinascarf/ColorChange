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

// GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver
struct NativeConflictResolver_t4054085262;
// GooglePlayGames.Native.PInvoke.SnapshotManager
struct SnapshotManager_t2359319983;
// System.String
struct String_t;
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata
struct NativeSnapshotMetadata_t3479575958;
// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>
struct Action_2_t2072880178;
// System.Action
struct Action_t3771233898;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata
struct ISavedGameMetadata_t3582269991;
// GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse
struct CommitResponse_t2801162465;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_S2359319983.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_N3479575958.h"
#include "System_Core_System_Action3771233898.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_S2801162465.h"

// System.Void GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::.ctor(GooglePlayGames.Native.PInvoke.SnapshotManager,System.String,GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata,GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>,System.Action)
extern "C"  void NativeConflictResolver__ctor_m1617228046 (NativeConflictResolver_t4054085262 * __this, SnapshotManager_t2359319983 * ___manager0, String_t* ___conflictId1, NativeSnapshotMetadata_t3479575958 * ___original2, NativeSnapshotMetadata_t3479575958 * ___unmerged3, Action_2_t2072880178 * ___completeCallback4, Action_t3771233898 * ___retryOpen5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::ChooseMetadata(GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata)
extern "C"  void NativeConflictResolver_ChooseMetadata_m3957096457 (NativeConflictResolver_t4054085262 * __this, Il2CppObject * ___chosenMetadata0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient/NativeConflictResolver::<ChooseMetadata>m__74(GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse)
extern "C"  void NativeConflictResolver_U3CChooseMetadataU3Em__74_m2302935496 (NativeConflictResolver_t4054085262 * __this, CommitResponse_t2801162465 * ___response0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
