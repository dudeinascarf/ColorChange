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

// GooglePlayGames.IOS.IOSClient
struct IOSClient_t3522634302;
// GooglePlayGames.Native.PInvoke.PlatformConfiguration
struct PlatformConfiguration_t2784665065;
// GooglePlayGames.TokenClient
struct TokenClient_t401350470;
// System.String
struct String_t;
// System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>
struct Action_2_t1913238692;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "mscorlib_System_IntPtr4010401971.h"

// System.Void GooglePlayGames.IOS.IOSClient::.ctor()
extern "C"  void IOSClient__ctor_m1866621838 (IOSClient_t3522634302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.IOS.IOSClient::_GooglePlayEnableProfileScope()
extern "C"  void IOSClient__GooglePlayEnableProfileScope_m849803398 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.PInvoke.PlatformConfiguration GooglePlayGames.IOS.IOSClient::CreatePlatformConfiguration()
extern "C"  PlatformConfiguration_t2784665065 * IOSClient_CreatePlatformConfiguration_m128452816 (IOSClient_t3522634302 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.TokenClient GooglePlayGames.IOS.IOSClient::CreateTokenClient(System.String,System.Boolean)
extern "C"  Il2CppObject * IOSClient_CreateTokenClient_m1826758232 (IOSClient_t3522634302 * __this, String_t* ___playerId0, bool ___reset1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.IOS.IOSClient::GetPlayerStats(System.IntPtr,System.Action`2<GooglePlayGames.BasicApi.CommonStatusCodes,GooglePlayGames.BasicApi.PlayerStats>)
extern "C"  void IOSClient_GetPlayerStats_m4024915390 (IOSClient_t3522634302 * __this, IntPtr_t ___apiClientPtr0, Action_2_t1913238692 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
