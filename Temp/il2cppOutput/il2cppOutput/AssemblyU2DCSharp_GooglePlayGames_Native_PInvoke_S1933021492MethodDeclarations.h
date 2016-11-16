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

// GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse
struct OpenResponse_t1933021492;
// System.String
struct String_t;
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata
struct NativeSnapshotMetadata_t3479575958;
// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2173406145.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "mscorlib_System_UIntPtr3365854250.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::.ctor(System.IntPtr)
extern "C"  void OpenResponse__ctor_m3956879613 (OpenResponse_t1933021492 * __this, IntPtr_t ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::RequestSucceeded()
extern "C"  bool OpenResponse_RequestSucceeded_m3967416971 (OpenResponse_t1933021492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/SnapshotOpenStatus GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::ResponseStatus()
extern "C"  int32_t OpenResponse_ResponseStatus_m3968836452 (OpenResponse_t1933021492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::ConflictId()
extern "C"  String_t* OpenResponse_ConflictId_m3156091703 (OpenResponse_t1933021492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::Data()
extern "C"  NativeSnapshotMetadata_t3479575958 * OpenResponse_Data_m812595345 (OpenResponse_t1933021492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::ConflictOriginal()
extern "C"  NativeSnapshotMetadata_t3479575958 * OpenResponse_ConflictOriginal_m4155532650 (OpenResponse_t1933021492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::ConflictUnmerged()
extern "C"  NativeSnapshotMetadata_t3479575958 * OpenResponse_ConflictUnmerged_m2768910750 (OpenResponse_t1933021492 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void OpenResponse_CallDispose_m1431269459 (OpenResponse_t1933021492 * __this, HandleRef_t1780819301  ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::FromPointer(System.IntPtr)
extern "C"  OpenResponse_t1933021492 * OpenResponse_FromPointer_m1911824973 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.SnapshotManager/OpenResponse::<ConflictId>m__D2(System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  OpenResponse_U3CConflictIdU3Em__D2_m2938490122 (OpenResponse_t1933021492 * __this, StringBuilder_t243639308 * ___out_string0, UIntPtr_t  ___out_size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
