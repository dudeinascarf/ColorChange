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

// GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata
struct NativeSnapshotMetadata_t3479575958;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t243639308;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_TimeSpan413522987.h"
#include "mscorlib_System_DateTime4283661327.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "mscorlib_System_UIntPtr3365854250.h"
#include "mscorlib_System_Text_StringBuilder243639308.h"

// System.Void GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata::.ctor(System.IntPtr)
extern "C"  void NativeSnapshotMetadata__ctor_m4150137846 (NativeSnapshotMetadata_t3479575958 * __this, IntPtr_t ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata::get_IsOpen()
extern "C"  bool NativeSnapshotMetadata_get_IsOpen_m1365501391 (NativeSnapshotMetadata_t3479575958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata::get_Filename()
extern "C"  String_t* NativeSnapshotMetadata_get_Filename_m1400911859 (NativeSnapshotMetadata_t3479575958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata::get_Description()
extern "C"  String_t* NativeSnapshotMetadata_get_Description_m2414620530 (NativeSnapshotMetadata_t3479575958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata::get_CoverImageURL()
extern "C"  String_t* NativeSnapshotMetadata_get_CoverImageURL_m561877345 (NativeSnapshotMetadata_t3479575958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata::get_TotalTimePlayed()
extern "C"  TimeSpan_t413522987  NativeSnapshotMetadata_get_TotalTimePlayed_m709198964 (NativeSnapshotMetadata_t3479575958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata::get_LastModifiedTimestamp()
extern "C"  DateTime_t4283661327  NativeSnapshotMetadata_get_LastModifiedTimestamp_m2978963459 (NativeSnapshotMetadata_t3479575958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata::ToString()
extern "C"  String_t* NativeSnapshotMetadata_ToString_m3593998223 (NativeSnapshotMetadata_t3479575958 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void NativeSnapshotMetadata_CallDispose_m1230278778 (NativeSnapshotMetadata_t3479575958 * __this, HandleRef_t1780819301  ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata::<get_Filename>m__C2(System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  NativeSnapshotMetadata_U3Cget_FilenameU3Em__C2_m3663333141 (NativeSnapshotMetadata_t3479575958 * __this, StringBuilder_t243639308 * ___out_string0, UIntPtr_t  ___out_size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata::<get_Description>m__C3(System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  NativeSnapshotMetadata_U3Cget_DescriptionU3Em__C3_m1501344315 (NativeSnapshotMetadata_t3479575958 * __this, StringBuilder_t243639308 * ___out_string0, UIntPtr_t  ___out_size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.PInvoke.NativeSnapshotMetadata::<get_CoverImageURL>m__C4(System.Text.StringBuilder,System.UIntPtr)
extern "C"  UIntPtr_t  NativeSnapshotMetadata_U3Cget_CoverImageURLU3Em__C4_m2407482347 (NativeSnapshotMetadata_t3479575958 * __this, StringBuilder_t243639308 * ___out_string0, UIntPtr_t  ___out_size1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
