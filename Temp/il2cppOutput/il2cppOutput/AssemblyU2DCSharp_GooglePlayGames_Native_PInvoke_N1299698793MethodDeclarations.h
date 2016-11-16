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

// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadataChange/Builder
struct Builder_t1299698793;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadataChange
struct NativeSnapshotMetadataChange_t2885515174;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "mscorlib_System_String7231557.h"

// System.Void GooglePlayGames.Native.PInvoke.NativeSnapshotMetadataChange/Builder::.ctor()
extern "C"  void Builder__ctor_m4262180130 (Builder_t1299698793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.NativeSnapshotMetadataChange/Builder::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void Builder_CallDispose_m2895613310 (Builder_t1299698793 * __this, HandleRef_t1780819301  ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadataChange/Builder GooglePlayGames.Native.PInvoke.NativeSnapshotMetadataChange/Builder::SetDescription(System.String)
extern "C"  Builder_t1299698793 * Builder_SetDescription_m4199881456 (Builder_t1299698793 * __this, String_t* ___description0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadataChange/Builder GooglePlayGames.Native.PInvoke.NativeSnapshotMetadataChange/Builder::SetPlayedTime(System.UInt64)
extern "C"  Builder_t1299698793 * Builder_SetPlayedTime_m2428633263 (Builder_t1299698793 * __this, uint64_t ___playedTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadataChange/Builder GooglePlayGames.Native.PInvoke.NativeSnapshotMetadataChange/Builder::SetCoverImageFromPngData(System.Byte[])
extern "C"  Builder_t1299698793 * Builder_SetCoverImageFromPngData_m2560431854 (Builder_t1299698793 * __this, ByteU5BU5D_t4260760469* ___pngData0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadataChange GooglePlayGames.Native.PInvoke.NativeSnapshotMetadataChange/Builder::Build()
extern "C"  NativeSnapshotMetadataChange_t2885515174 * Builder_Build_m2447681636 (Builder_t1299698793 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
