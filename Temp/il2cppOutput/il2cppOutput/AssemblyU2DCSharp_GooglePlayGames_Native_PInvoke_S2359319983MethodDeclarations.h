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

// GooglePlayGames.Native.PInvoke.SnapshotManager
struct SnapshotManager_t2359319983;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t1862808700;
// System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/FetchAllResponse>
struct Action_1_t1636230841;
// System.String
struct String_t;
// System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/SnapshotSelectUIResponse>
struct Action_1_t2896490150;
// System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse>
struct Action_1_t2328837628;
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata
struct NativeSnapshotMetadata_t3479575958;
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadataChange
struct NativeSnapshotMetadataChange_t2885515174;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse>
struct Action_1_t3196978601;
// System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse>
struct Action_1_t2688443720;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_G1862808700.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3670871388.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3763226879.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_N3479575958.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_N2885515174.h"

// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::.ctor(GooglePlayGames.Native.PInvoke.GameServices)
extern "C"  void SnapshotManager__ctor_m3022785802 (SnapshotManager_t2359319983 * __this, GameServices_t1862808700 * ___services0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::FetchAll(GooglePlayGames.Native.Cwrapper.Types/DataSource,System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/FetchAllResponse>)
extern "C"  void SnapshotManager_FetchAll_m1498170345 (SnapshotManager_t2359319983 * __this, int32_t ___source0, Action_1_t1636230841 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::InternalFetchAllCallback(System.IntPtr,System.IntPtr)
extern "C"  void SnapshotManager_InternalFetchAllCallback_m2667701258 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SnapshotManager_InternalFetchAllCallback_m2667701258(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::SnapshotSelectUI(System.Boolean,System.Boolean,System.UInt32,System.String,System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/SnapshotSelectUIResponse>)
extern "C"  void SnapshotManager_SnapshotSelectUI_m2357835197 (SnapshotManager_t2359319983 * __this, bool ___allowCreate0, bool ___allowDelete1, uint32_t ___maxSnapshots2, String_t* ___uiTitle3, Action_1_t2896490150 * ___callback4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::InternalSnapshotSelectUICallback(System.IntPtr,System.IntPtr)
extern "C"  void SnapshotManager_InternalSnapshotSelectUICallback_m3686048061 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SnapshotManager_InternalSnapshotSelectUICallback_m3686048061(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::Open(System.String,GooglePlayGames.Native.Cwrapper.Types/DataSource,GooglePlayGames.Native.Cwrapper.Types/SnapshotConflictPolicy,System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse>)
extern "C"  void SnapshotManager_Open_m1538848608 (SnapshotManager_t2359319983 * __this, String_t* ___fileName0, int32_t ___source1, int32_t ___conflictPolicy2, Action_1_t2328837628 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::InternalOpenCallback(System.IntPtr,System.IntPtr)
extern "C"  void SnapshotManager_InternalOpenCallback_m2466174631 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SnapshotManager_InternalOpenCallback_m2466174631(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::Commit(GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata,GooglePlayGames.Native.PInvoke.NativeSnapshotMetadataChange,System.Byte[],System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse>)
extern "C"  void SnapshotManager_Commit_m2640084546 (SnapshotManager_t2359319983 * __this, NativeSnapshotMetadata_t3479575958 * ___metadata0, NativeSnapshotMetadataChange_t2885515174 * ___metadataChange1, ByteU5BU5D_t4260760469* ___updatedData2, Action_1_t3196978601 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::Resolve(GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata,GooglePlayGames.Native.PInvoke.NativeSnapshotMetadataChange,System.String,System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/CommitResponse>)
extern "C"  void SnapshotManager_Resolve_m1211847618 (SnapshotManager_t2359319983 * __this, NativeSnapshotMetadata_t3479575958 * ___metadata0, NativeSnapshotMetadataChange_t2885515174 * ___metadataChange1, String_t* ___conflictId2, Action_1_t3196978601 * ___callback3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::InternalCommitCallback(System.IntPtr,System.IntPtr)
extern "C"  void SnapshotManager_InternalCommitCallback_m3500800666 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SnapshotManager_InternalCommitCallback_m3500800666(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::Delete(GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata)
extern "C"  void SnapshotManager_Delete_m2176805355 (SnapshotManager_t2359319983 * __this, NativeSnapshotMetadata_t3479575958 * ___metadata0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::Read(GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata,System.Action`1<GooglePlayGames.Native.PInvoke.SnapshotManager/ReadResponse>)
extern "C"  void SnapshotManager_Read_m1399765778 (SnapshotManager_t2359319983 * __this, NativeSnapshotMetadata_t3479575958 * ___metadata0, Action_1_t2688443720 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager::InternalReadCallback(System.IntPtr,System.IntPtr)
extern "C"  void SnapshotManager_InternalReadCallback_m2304246491 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SnapshotManager_InternalReadCallback_m2304246491(intptr_t ___arg00, intptr_t ___arg11);
