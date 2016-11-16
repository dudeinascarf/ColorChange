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

// GooglePlayGames.Native.PInvoke.PlayerManager
struct PlayerManager_t3380828466;
// GooglePlayGames.Native.PInvoke.GameServices
struct GameServices_t1862808700;
// System.Action`1<GooglePlayGames.Native.PInvoke.PlayerManager/FetchSelfResponse>
struct Action_1_t1483656745;
// System.String[]
struct StringU5BU5D_t4054002952;
// System.Action`1<GooglePlayGames.Native.PInvoke.NativePlayer[]>
struct Action_1_t3857542357;
// GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponseCollector
struct FetchResponseCollector_t4033649688;
// GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponse
struct FetchResponse_t3310613493;
// System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Player>>
struct Action_2_t36582397;
// GooglePlayGames.Native.PInvoke.PlayerManager/FetchListResponse
struct FetchListResponse_t676237491;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_G1862808700.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_P4033649688.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_P3310613493.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_Pl676237491.h"

// System.Void GooglePlayGames.Native.PInvoke.PlayerManager::.ctor(GooglePlayGames.Native.PInvoke.GameServices)
extern "C"  void PlayerManager__ctor_m2968155917 (PlayerManager_t3380828466 * __this, GameServices_t1862808700 * ___services0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager::FetchSelf(System.Action`1<GooglePlayGames.Native.PInvoke.PlayerManager/FetchSelfResponse>)
extern "C"  void PlayerManager_FetchSelf_m2301210997 (PlayerManager_t3380828466 * __this, Action_1_t1483656745 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager::InternalFetchSelfCallback(System.IntPtr,System.IntPtr)
extern "C"  void PlayerManager_InternalFetchSelfCallback_m2528660356 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PlayerManager_InternalFetchSelfCallback_m2528660356(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager::FetchList(System.String[],System.Action`1<GooglePlayGames.Native.PInvoke.NativePlayer[]>)
extern "C"  void PlayerManager_FetchList_m2185925687 (PlayerManager_t3380828466 * __this, StringU5BU5D_t4054002952* ___userIds0, Action_1_t3857542357 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager::InternalFetchCallback(System.IntPtr,System.IntPtr)
extern "C"  void PlayerManager_InternalFetchCallback_m1189999984 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PlayerManager_InternalFetchCallback_m1189999984(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager::HandleFetchResponse(GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponseCollector,GooglePlayGames.Native.PInvoke.PlayerManager/FetchResponse)
extern "C"  void PlayerManager_HandleFetchResponse_m2966620602 (PlayerManager_t3380828466 * __this, FetchResponseCollector_t4033649688 * ___collector0, FetchResponse_t3310613493 * ___resp1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager::FetchFriends(System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Player>>)
extern "C"  void PlayerManager_FetchFriends_m729916716 (PlayerManager_t3380828466 * __this, Action_2_t36582397 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager::InternalFetchConnectedCallback(System.IntPtr,System.IntPtr)
extern "C"  void PlayerManager_InternalFetchConnectedCallback_m1844432319 (Il2CppObject * __this /* static, unused */, IntPtr_t ___response0, IntPtr_t ___data1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_PlayerManager_InternalFetchConnectedCallback_m1844432319(intptr_t ___arg00, intptr_t ___arg11);
// System.Void GooglePlayGames.Native.PInvoke.PlayerManager::HandleFetchCollected(GooglePlayGames.Native.PInvoke.PlayerManager/FetchListResponse,System.Action`2<GooglePlayGames.BasicApi.ResponseStatus,System.Collections.Generic.List`1<GooglePlayGames.BasicApi.Multiplayer.Player>>)
extern "C"  void PlayerManager_HandleFetchCollected_m188033993 (PlayerManager_t3380828466 * __this, FetchListResponse_t676237491 * ___rsp0, Action_2_t36582397 * ___callback1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
