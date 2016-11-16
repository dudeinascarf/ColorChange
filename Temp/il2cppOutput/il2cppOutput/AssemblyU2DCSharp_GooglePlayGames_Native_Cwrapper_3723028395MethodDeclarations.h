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

// GooglePlayGames.Native.Cwrapper.QuestManager/FetchListCallback
struct FetchListCallback_t3150025178;
// GooglePlayGames.Native.Cwrapper.QuestManager/AcceptCallback
struct AcceptCallback_t1408209808;
// GooglePlayGames.Native.Cwrapper.QuestManager/QuestUICallback
struct QuestUICallback_t3097297816;
// GooglePlayGames.Native.Cwrapper.QuestManager/ClaimMilestoneCallback
struct ClaimMilestoneCallback_t1411568668;
// System.String
struct String_t;
// GooglePlayGames.Native.Cwrapper.QuestManager/FetchCallback
struct FetchCallback_t1576861340;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3670871388.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3150025178.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1408209808.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3097297816.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1411568668.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1576861340.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_4049911828.h"
#include "mscorlib_System_UIntPtr3365854250.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1491989755.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1924926087.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3557407943.h"

// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_FetchList(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,System.Int32,GooglePlayGames.Native.Cwrapper.QuestManager/FetchListCallback,System.IntPtr)
extern "C"  void QuestManager_QuestManager_FetchList_m1714230423 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, int32_t ___data_source1, int32_t ___fetch_flags2, FetchListCallback_t3150025178 * ___callback3, IntPtr_t ___callback_arg4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_Accept(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.QuestManager/AcceptCallback,System.IntPtr)
extern "C"  void QuestManager_QuestManager_Accept_m131569118 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___quest1, AcceptCallback_t1408209808 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_ShowAllUI(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.QuestManager/QuestUICallback,System.IntPtr)
extern "C"  void QuestManager_QuestManager_ShowAllUI_m2755700006 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, QuestUICallback_t3097297816 * ___callback1, IntPtr_t ___callback_arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_ShowUI(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.QuestManager/QuestUICallback,System.IntPtr)
extern "C"  void QuestManager_QuestManager_ShowUI_m3545983711 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___quest1, QuestUICallback_t3097297816 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_ClaimMilestone(System.Runtime.InteropServices.HandleRef,System.IntPtr,GooglePlayGames.Native.Cwrapper.QuestManager/ClaimMilestoneCallback,System.IntPtr)
extern "C"  void QuestManager_QuestManager_ClaimMilestone_m3309348190 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, IntPtr_t ___milestone1, ClaimMilestoneCallback_t1411568668 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_Fetch(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,System.String,GooglePlayGames.Native.Cwrapper.QuestManager/FetchCallback,System.IntPtr)
extern "C"  void QuestManager_QuestManager_Fetch_m1591477354 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, int32_t ___data_source1, String_t* ___quest_id2, FetchCallback_t1576861340 * ___callback3, IntPtr_t ___callback_arg4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_FetchResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void QuestManager_QuestManager_FetchResponse_Dispose_m1919085753 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_FetchResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t QuestManager_QuestManager_FetchResponse_GetStatus_m1694189547 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_FetchResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t QuestManager_QuestManager_FetchResponse_GetData_m969930927 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_FetchListResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void QuestManager_QuestManager_FetchListResponse_Dispose_m900430583 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_FetchListResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t QuestManager_QuestManager_FetchListResponse_GetStatus_m2233647657 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_FetchListResponse_GetData_Length(System.Runtime.InteropServices.HandleRef)
extern "C"  UIntPtr_t  QuestManager_QuestManager_FetchListResponse_GetData_Length_m389718689 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_FetchListResponse_GetData_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C"  IntPtr_t QuestManager_QuestManager_FetchListResponse_GetData_GetElement_m3759343389 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, UIntPtr_t  ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_AcceptResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void QuestManager_QuestManager_AcceptResponse_Dispose_m2030488071 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/QuestAcceptStatus GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_AcceptResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t QuestManager_QuestManager_AcceptResponse_GetStatus_m4203580184 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_AcceptResponse_GetAcceptedQuest(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t QuestManager_QuestManager_AcceptResponse_GetAcceptedQuest_m66525390 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_ClaimMilestoneResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void QuestManager_QuestManager_ClaimMilestoneResponse_Dispose_m1713644179 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/QuestClaimMilestoneStatus GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_ClaimMilestoneResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t QuestManager_QuestManager_ClaimMilestoneResponse_GetStatus_m1176571952 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_ClaimMilestoneResponse_GetClaimedMilestone(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t QuestManager_QuestManager_ClaimMilestoneResponse_GetClaimedMilestone_m3806592426 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_ClaimMilestoneResponse_GetQuest(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t QuestManager_QuestManager_ClaimMilestoneResponse_GetQuest_m3869556841 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_QuestUIResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void QuestManager_QuestManager_QuestUIResponse_Dispose_m4213761525 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/UIStatus GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_QuestUIResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t QuestManager_QuestManager_QuestUIResponse_GetStatus_m1191355540 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_QuestUIResponse_GetAcceptedQuest(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t QuestManager_QuestManager_QuestUIResponse_GetAcceptedQuest_m3700411734 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.QuestManager::QuestManager_QuestUIResponse_GetMilestoneToClaim(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t QuestManager_QuestManager_QuestUIResponse_GetMilestoneToClaim_m1142301362 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
