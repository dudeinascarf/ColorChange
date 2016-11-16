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

// GooglePlayGames.Native.UnsupportedSavedGamesClient
struct UnsupportedSavedGamesClient_t1204855368;
// System.String
struct String_t;
// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>
struct Action_2_t2072880178;
// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_t942269343;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata
struct ISavedGameMetadata_t3582269991;
// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,System.Byte[]>
struct Action_2_t2751370656;
// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SelectUIStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>
struct Action_2_t1151548080;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>>
struct Action_2_t3441065730;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_DataSou3931761423.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGa2415333593.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGam942269343.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGa4052853983.h"

// System.Void GooglePlayGames.Native.UnsupportedSavedGamesClient::.ctor(System.String)
extern "C"  void UnsupportedSavedGamesClient__ctor_m3943147780 (UnsupportedSavedGamesClient_t1204855368 * __this, String_t* ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.UnsupportedSavedGamesClient::OpenWithAutomaticConflictResolution(System.String,GooglePlayGames.BasicApi.DataSource,GooglePlayGames.BasicApi.SavedGame.ConflictResolutionStrategy,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>)
extern "C"  void UnsupportedSavedGamesClient_OpenWithAutomaticConflictResolution_m86433630 (UnsupportedSavedGamesClient_t1204855368 * __this, String_t* ___filename0, int32_t ___source1, int32_t ___resolutionStrategy2, Action_2_t2072880178 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.UnsupportedSavedGamesClient::OpenWithManualConflictResolution(System.String,GooglePlayGames.BasicApi.DataSource,System.Boolean,GooglePlayGames.BasicApi.SavedGame.ConflictCallback,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>)
extern "C"  void UnsupportedSavedGamesClient_OpenWithManualConflictResolution_m1396368090 (UnsupportedSavedGamesClient_t1204855368 * __this, String_t* ___filename0, int32_t ___source1, bool ___prefetchDataOnConflict2, ConflictCallback_t942269343 * ___conflictCallback3, Action_2_t2072880178 * ___completedCallback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.UnsupportedSavedGamesClient::ReadBinaryData(GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,System.Byte[]>)
extern "C"  void UnsupportedSavedGamesClient_ReadBinaryData_m3700419110 (UnsupportedSavedGamesClient_t1204855368 * __this, Il2CppObject * ___metadata0, Action_2_t2751370656 * ___completedCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.UnsupportedSavedGamesClient::ShowSelectSavedGameUI(System.String,System.UInt32,System.Boolean,System.Boolean,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SelectUIStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>)
extern "C"  void UnsupportedSavedGamesClient_ShowSelectSavedGameUI_m3905940860 (UnsupportedSavedGamesClient_t1204855368 * __this, String_t* ___uiTitle0, uint32_t ___maxDisplayedSavedGames1, bool ___showCreateSaveUI2, bool ___showDeleteSaveUI3, Action_2_t1151548080 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.UnsupportedSavedGamesClient::CommitUpdate(GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate,System.Byte[],System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>)
extern "C"  void UnsupportedSavedGamesClient_CommitUpdate_m1724690339 (UnsupportedSavedGamesClient_t1204855368 * __this, Il2CppObject * ___metadata0, SavedGameMetadataUpdate_t4052853983  ___updateForMetadata1, ByteU5BU5D_t4260760469* ___updatedBinaryData2, Action_2_t2072880178 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.UnsupportedSavedGamesClient::FetchAllSavedGames(GooglePlayGames.BasicApi.DataSource,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>>)
extern "C"  void UnsupportedSavedGamesClient_FetchAllSavedGames_m4108889032 (UnsupportedSavedGamesClient_t1204855368 * __this, int32_t ___source0, Action_2_t3441065730 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.UnsupportedSavedGamesClient::Delete(GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata)
extern "C"  void UnsupportedSavedGamesClient_Delete_m861289605 (UnsupportedSavedGamesClient_t1204855368 * __this, Il2CppObject * ___metadata0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
