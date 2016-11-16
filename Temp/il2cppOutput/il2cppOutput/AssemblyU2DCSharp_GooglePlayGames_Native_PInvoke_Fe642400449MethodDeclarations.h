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

// GooglePlayGames.Native.PInvoke.FetchResponse
struct FetchResponse_t642400449;
// GooglePlayGames.Native.PInvoke.NativeLeaderboard
struct NativeLeaderboard_t3462459404;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_4049911828.h"

// System.Void GooglePlayGames.Native.PInvoke.FetchResponse::.ctor(System.IntPtr)
extern "C"  void FetchResponse__ctor_m4032096689 (FetchResponse_t642400449 * __this, IntPtr_t ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.FetchResponse::CallDispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void FetchResponse_CallDispose_m3682639391 (FetchResponse_t642400449 * __this, HandleRef_t1780819301  ___selfPointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.NativeLeaderboard GooglePlayGames.Native.PInvoke.FetchResponse::Leaderboard()
extern "C"  NativeLeaderboard_t3462459404 * FetchResponse_Leaderboard_m2881427940 (FetchResponse_t642400449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.PInvoke.FetchResponse::GetStatus()
extern "C"  int32_t FetchResponse_GetStatus_m3645820288 (FetchResponse_t642400449 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.FetchResponse GooglePlayGames.Native.PInvoke.FetchResponse::FromPointer(System.IntPtr)
extern "C"  FetchResponse_t642400449 * FetchResponse_FromPointer_m3277566949 (Il2CppObject * __this /* static, unused */, IntPtr_t ___pointer0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
