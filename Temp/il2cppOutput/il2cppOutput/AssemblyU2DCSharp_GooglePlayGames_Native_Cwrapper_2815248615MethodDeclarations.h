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

// GooglePlayGames.Native.Cwrapper.SnapshotManager/FetchAllCallback
struct FetchAllCallback_t677738899;
// System.String
struct String_t;
// GooglePlayGames.Native.Cwrapper.SnapshotManager/SnapshotSelectUICallback
struct SnapshotSelectUICallback_t2531066752;
// GooglePlayGames.Native.Cwrapper.SnapshotManager/ReadCallback
struct ReadCallback_t1569945378;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// GooglePlayGames.Native.Cwrapper.SnapshotManager/CommitCallback
struct CommitCallback_t1623255043;
// GooglePlayGames.Native.Cwrapper.SnapshotManager/OpenCallback
struct OpenCallback_t1210339286;
// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3670871388.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_S677738899.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2531066752.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1569945378.h"
#include "mscorlib_System_UIntPtr3365854250.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1623255043.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3763226879.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1210339286.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_4049911828.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2173406145.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3557407943.h"

// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_FetchAll(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,GooglePlayGames.Native.Cwrapper.SnapshotManager/FetchAllCallback,System.IntPtr)
extern "C"  void SnapshotManager_SnapshotManager_FetchAll_m854890322 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, int32_t ___data_source1, FetchAllCallback_t677738899 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_ShowSelectUIOperation(System.Runtime.InteropServices.HandleRef,System.Boolean,System.Boolean,System.UInt32,System.String,GooglePlayGames.Native.Cwrapper.SnapshotManager/SnapshotSelectUICallback,System.IntPtr)
extern "C"  void SnapshotManager_SnapshotManager_ShowSelectUIOperation_m596028194 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, bool ___allow_create1, bool ___allow_delete2, uint32_t ___max_snapshots3, String_t* ___title4, SnapshotSelectUICallback_t2531066752 * ___callback5, IntPtr_t ___callback_arg6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_Read(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.SnapshotManager/ReadCallback,System.IntPtr)
extern "C"  void SnapshotManager_SnapshotManager_Read_m3479849658 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___snapshot_metadata1, ReadCallback_t1569945378 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_Commit(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.IntPtr,System.Byte[],System.UIntPtr,GooglePlayGames.Native.Cwrapper.SnapshotManager/CommitCallback,System.IntPtr)
extern "C"  void SnapshotManager_SnapshotManager_Commit_m1395112938 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___snapshot_metadata1, IntPtr_t ___metadata_change2, ByteU5BU5D_t4260760469* ___data3, UIntPtr_t  ___data_size4, CommitCallback_t1623255043 * ___callback5, IntPtr_t ___callback_arg6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_Open(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,System.String,GooglePlayGames.Native.Cwrapper.Types/SnapshotConflictPolicy,GooglePlayGames.Native.Cwrapper.SnapshotManager/OpenCallback,System.IntPtr)
extern "C"  void SnapshotManager_SnapshotManager_Open_m2153573951 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, int32_t ___data_source1, String_t* ___file_name2, int32_t ___conflict_policy3, OpenCallback_t1210339286 * ___callback4, IntPtr_t ___callback_arg5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_ResolveConflict(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.IntPtr,System.String,GooglePlayGames.Native.Cwrapper.SnapshotManager/CommitCallback,System.IntPtr)
extern "C"  void SnapshotManager_SnapshotManager_ResolveConflict_m1052197715 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___snapshot_metadata1, IntPtr_t ___metadata_change2, String_t* ___conflict_id3, CommitCallback_t1623255043 * ___callback4, IntPtr_t ___callback_arg5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_Delete(System.Runtime.InteropServices.HandleRef,System.IntPtr)
extern "C"  void SnapshotManager_SnapshotManager_Delete_m1855694989 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___snapshot_metadata1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_FetchAllResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void SnapshotManager_SnapshotManager_FetchAllResponse_Dispose_m3323893884 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_FetchAllResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t SnapshotManager_SnapshotManager_FetchAllResponse_GetStatus_m279620540 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_FetchAllResponse_GetData_Length(System.Runtime.InteropServices.HandleRef)
extern "C"  UIntPtr_t  SnapshotManager_SnapshotManager_FetchAllResponse_GetData_Length_m2754352268 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_FetchAllResponse_GetData_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C"  IntPtr_t SnapshotManager_SnapshotManager_FetchAllResponse_GetData_GetElement_m2092587160 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, UIntPtr_t  ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_OpenResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void SnapshotManager_SnapshotManager_OpenResponse_Dispose_m2186024831 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/SnapshotOpenStatus GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_OpenResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t SnapshotManager_SnapshotManager_OpenResponse_GetStatus_m356190316 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_OpenResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t SnapshotManager_SnapshotManager_OpenResponse_GetData_m2569209387 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_OpenResponse_GetConflictId(System.Runtime.InteropServices.HandleRef,System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  SnapshotManager_SnapshotManager_OpenResponse_GetConflictId_m3386434098 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, StringBuilder_t243639308 * ___out_arg1, UIntPtr_t  ___out_size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_OpenResponse_GetConflictOriginal(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t SnapshotManager_SnapshotManager_OpenResponse_GetConflictOriginal_m661418628 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_OpenResponse_GetConflictUnmerged(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t SnapshotManager_SnapshotManager_OpenResponse_GetConflictUnmerged_m4226482872 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_CommitResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void SnapshotManager_SnapshotManager_CommitResponse_Dispose_m173916844 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_CommitResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t SnapshotManager_SnapshotManager_CommitResponse_GetStatus_m3492871084 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_CommitResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t SnapshotManager_SnapshotManager_CommitResponse_GetData_m901309080 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_ReadResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void SnapshotManager_SnapshotManager_ReadResponse_Dispose_m2094027723 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_ReadResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t SnapshotManager_SnapshotManager_ReadResponse_GetStatus_m4089324235 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_ReadResponse_GetData(System.Runtime.InteropServices.HandleRef,System.Byte[],System.UIntPtr)
extern "C"  UIntPtr_t  SnapshotManager_SnapshotManager_ReadResponse_GetData_m2577370730 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, ByteU5BU5D_t4260760469* ___out_arg1, UIntPtr_t  ___out_size2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_SnapshotSelectUIResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void SnapshotManager_SnapshotManager_SnapshotSelectUIResponse_Dispose_m3717262889 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_SnapshotSelectUIResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t SnapshotManager_SnapshotManager_SnapshotSelectUIResponse_GetStatus_m1545112284 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.SnapshotManager::SnapshotManager_SnapshotSelectUIResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t SnapshotManager_SnapshotManager_SnapshotSelectUIResponse_GetData_m2615366741 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
