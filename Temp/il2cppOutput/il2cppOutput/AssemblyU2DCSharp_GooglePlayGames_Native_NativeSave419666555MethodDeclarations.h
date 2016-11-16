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

// GooglePlayGames.Native.NativeSavedGameClient
struct NativeSavedGameClient_t419666555;
// GooglePlayGames.Native.PInvoke.SnapshotManager
struct SnapshotManager_t2359319983;
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
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadataChange
struct NativeSnapshotMetadataChange_t2885515174;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_S2359319983.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_DataSou3931761423.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGa2415333593.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGam942269343.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGa4052853983.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3763226879.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGa3786215536.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2173406145.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3670871388.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_4049911828.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_SavedGa4210182474.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3557407943.h"

// System.Void GooglePlayGames.Native.NativeSavedGameClient::.ctor(GooglePlayGames.Native.PInvoke.SnapshotManager)
extern "C"  void NativeSavedGameClient__ctor_m449099813 (NativeSavedGameClient_t419666555 * __this, SnapshotManager_t2359319983 * ___manager0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient::.cctor()
extern "C"  void NativeSavedGameClient__cctor_m3062377250 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient::OpenWithAutomaticConflictResolution(System.String,GooglePlayGames.BasicApi.DataSource,GooglePlayGames.BasicApi.SavedGame.ConflictResolutionStrategy,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>)
extern "C"  void NativeSavedGameClient_OpenWithAutomaticConflictResolution_m3356438475 (NativeSavedGameClient_t419666555 * __this, String_t* ___filename0, int32_t ___source1, int32_t ___resolutionStrategy2, Action_2_t2072880178 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.ConflictCallback GooglePlayGames.Native.NativeSavedGameClient::ToOnGameThread(GooglePlayGames.BasicApi.SavedGame.ConflictCallback)
extern "C"  ConflictCallback_t942269343 * NativeSavedGameClient_ToOnGameThread_m3373180784 (NativeSavedGameClient_t419666555 * __this, ConflictCallback_t942269343 * ___conflictCallback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient::OpenWithManualConflictResolution(System.String,GooglePlayGames.BasicApi.DataSource,System.Boolean,GooglePlayGames.BasicApi.SavedGame.ConflictCallback,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>)
extern "C"  void NativeSavedGameClient_OpenWithManualConflictResolution_m4249930759 (NativeSavedGameClient_t419666555 * __this, String_t* ___filename0, int32_t ___source1, bool ___prefetchDataOnConflict2, ConflictCallback_t942269343 * ___conflictCallback3, Action_2_t2072880178 * ___completedCallback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient::InternalManualOpen(System.String,GooglePlayGames.BasicApi.DataSource,System.Boolean,GooglePlayGames.BasicApi.SavedGame.ConflictCallback,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>)
extern "C"  void NativeSavedGameClient_InternalManualOpen_m3010293486 (NativeSavedGameClient_t419666555 * __this, String_t* ___filename0, int32_t ___source1, bool ___prefetchDataOnConflict2, ConflictCallback_t942269343 * ___conflictCallback3, Action_2_t2072880178 * ___completedCallback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient::ReadBinaryData(GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,System.Byte[]>)
extern "C"  void NativeSavedGameClient_ReadBinaryData_m3504141401 (NativeSavedGameClient_t419666555 * __this, Il2CppObject * ___metadata0, Action_2_t2751370656 * ___completedCallback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient::ShowSelectSavedGameUI(System.String,System.UInt32,System.Boolean,System.Boolean,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SelectUIStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>)
extern "C"  void NativeSavedGameClient_ShowSelectSavedGameUI_m932815209 (NativeSavedGameClient_t419666555 * __this, String_t* ___uiTitle0, uint32_t ___maxDisplayedSavedGames1, bool ___showCreateSaveUI2, bool ___showDeleteSaveUI3, Action_2_t1151548080 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient::CommitUpdate(GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate,System.Byte[],System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>)
extern "C"  void NativeSavedGameClient_CommitUpdate_m3505306896 (NativeSavedGameClient_t419666555 * __this, Il2CppObject * ___metadata0, SavedGameMetadataUpdate_t4052853983  ___updateForMetadata1, ByteU5BU5D_t4260760469* ___updatedBinaryData2, Action_2_t2072880178 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient::FetchAllSavedGames(GooglePlayGames.BasicApi.DataSource,System.Action`2<GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata>>)
extern "C"  void NativeSavedGameClient_FetchAllSavedGames_m210247285 (NativeSavedGameClient_t419666555 * __this, int32_t ___source0, Action_2_t3441065730 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.NativeSavedGameClient::Delete(GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata)
extern "C"  void NativeSavedGameClient_Delete_m606632946 (NativeSavedGameClient_t419666555 * __this, Il2CppObject * ___metadata0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.NativeSavedGameClient::IsValidFilename(System.String)
extern "C"  bool NativeSavedGameClient_IsValidFilename_m4092659476 (Il2CppObject * __this /* static, unused */, String_t* ___filename0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/SnapshotConflictPolicy GooglePlayGames.Native.NativeSavedGameClient::AsConflictPolicy(GooglePlayGames.BasicApi.SavedGame.ConflictResolutionStrategy)
extern "C"  int32_t NativeSavedGameClient_AsConflictPolicy_m3344977399 (Il2CppObject * __this /* static, unused */, int32_t ___strategy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus GooglePlayGames.Native.NativeSavedGameClient::AsRequestStatus(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/SnapshotOpenStatus)
extern "C"  int32_t NativeSavedGameClient_AsRequestStatus_m3373024489 (Il2CppObject * __this /* static, unused */, int32_t ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.Types/DataSource GooglePlayGames.Native.NativeSavedGameClient::AsDataSource(GooglePlayGames.BasicApi.DataSource)
extern "C"  int32_t NativeSavedGameClient_AsDataSource_m1896262388 (Il2CppObject * __this /* static, unused */, int32_t ___source0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.SavedGameRequestStatus GooglePlayGames.Native.NativeSavedGameClient::AsRequestStatus(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus)
extern "C"  int32_t NativeSavedGameClient_AsRequestStatus_m491713398 (Il2CppObject * __this /* static, unused */, int32_t ___status0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.BasicApi.SavedGame.SelectUIStatus GooglePlayGames.Native.NativeSavedGameClient::AsUIStatus(GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus)
extern "C"  int32_t NativeSavedGameClient_AsUIStatus_m2290548766 (Il2CppObject * __this /* static, unused */, int32_t ___uiStatus0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadataChange GooglePlayGames.Native.NativeSavedGameClient::AsMetadataChange(GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate)
extern "C"  NativeSnapshotMetadataChange_t2885515174 * NativeSavedGameClient_AsMetadataChange_m986824620 (Il2CppObject * __this /* static, unused */, SavedGameMetadataUpdate_t4052853983  ___update0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
