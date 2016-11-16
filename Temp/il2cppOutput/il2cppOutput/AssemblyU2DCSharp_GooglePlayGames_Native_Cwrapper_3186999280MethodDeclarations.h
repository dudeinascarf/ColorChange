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

// GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchAllCallback
struct FetchAllCallback_t3766146474;
// System.String
struct String_t;
// GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchScoreSummaryCallback
struct FetchScoreSummaryCallback_t1723193589;
// GooglePlayGames.Native.Cwrapper.LeaderboardManager/ShowAllUICallback
struct ShowAllUICallback_t3664260959;
// GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchScorePageCallback
struct FetchScorePageCallback_t1423453514;
// GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchAllScoreSummariesCallback
struct FetchAllScoreSummariesCallback_t1010253660;
// GooglePlayGames.Native.Cwrapper.LeaderboardManager/ShowUICallback
struct ShowUICallback_t1832555764;
// GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchCallback
struct FetchCallback_t2463332897;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_InteropServices_HandleRef1780819301.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3670871388.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3766146474.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_String7231557.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2241332029.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3906033828.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1723193589.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_4146228892.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_3664260959.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1423453514.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1010253660.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_1832555764.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_2463332897.h"
#include "AssemblyU2DCSharp_GooglePlayGames_Native_Cwrapper_4049911828.h"
#include "mscorlib_System_UIntPtr3365854250.h"

// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchAll(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchAllCallback,System.IntPtr)
extern "C"  void LeaderboardManager_LeaderboardManager_FetchAll_m3086784703 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, int32_t ___data_source1, FetchAllCallback_t3766146474 * ___callback2, IntPtr_t ___callback_arg3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchScoreSummary(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,System.String,GooglePlayGames.Native.Cwrapper.Types/LeaderboardTimeSpan,GooglePlayGames.Native.Cwrapper.Types/LeaderboardCollection,GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchScoreSummaryCallback,System.IntPtr)
extern "C"  void LeaderboardManager_LeaderboardManager_FetchScoreSummary_m4023621912 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, int32_t ___data_source1, String_t* ___leaderboard_id2, int32_t ___time_span3, int32_t ___collection4, FetchScoreSummaryCallback_t1723193589 * ___callback5, IntPtr_t ___callback_arg6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_ScorePageToken(System.Runtime.InteropServices.HandleRef,System.String,GooglePlayGames.Native.Cwrapper.Types/LeaderboardStart,GooglePlayGames.Native.Cwrapper.Types/LeaderboardTimeSpan,GooglePlayGames.Native.Cwrapper.Types/LeaderboardCollection)
extern "C"  IntPtr_t LeaderboardManager_LeaderboardManager_ScorePageToken_m4032945966 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, String_t* ___leaderboard_id1, int32_t ___start2, int32_t ___time_span3, int32_t ___collection4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_ShowAllUI(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.LeaderboardManager/ShowAllUICallback,System.IntPtr)
extern "C"  void LeaderboardManager_LeaderboardManager_ShowAllUI_m866732149 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, ShowAllUICallback_t3664260959 * ___callback1, IntPtr_t ___callback_arg2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchScorePage(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,System.IntPtr,System.UInt32,GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchScorePageCallback,System.IntPtr)
extern "C"  void LeaderboardManager_LeaderboardManager_FetchScorePage_m697795265 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, int32_t ___data_source1, IntPtr_t ___token2, uint32_t ___max_results3, FetchScorePageCallback_t1423453514 * ___callback4, IntPtr_t ___callback_arg5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchAllScoreSummaries(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,System.String,GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchAllScoreSummariesCallback,System.IntPtr)
extern "C"  void LeaderboardManager_LeaderboardManager_FetchAllScoreSummaries_m3895156183 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, int32_t ___data_source1, String_t* ___leaderboard_id2, FetchAllScoreSummariesCallback_t1010253660 * ___callback3, IntPtr_t ___callback_arg4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_ShowUI(System.Runtime.InteropServices.HandleRef,System.String,GooglePlayGames.Native.Cwrapper.Types/LeaderboardTimeSpan,GooglePlayGames.Native.Cwrapper.LeaderboardManager/ShowUICallback,System.IntPtr)
extern "C"  void LeaderboardManager_LeaderboardManager_ShowUI_m2384274998 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, String_t* ___leaderboard_id1, int32_t ___time_span2, ShowUICallback_t1832555764 * ___callback3, IntPtr_t ___callback_arg4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_Fetch(System.Runtime.InteropServices.HandleRef,GooglePlayGames.Native.Cwrapper.Types/DataSource,System.String,GooglePlayGames.Native.Cwrapper.LeaderboardManager/FetchCallback,System.IntPtr)
extern "C"  void LeaderboardManager_LeaderboardManager_Fetch_m2620800335 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, int32_t ___data_source1, String_t* ___leaderboard_id2, FetchCallback_t2463332897 * ___callback3, IntPtr_t ___callback_arg4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_SubmitScore(System.Runtime.InteropServices.HandleRef,System.String,System.UInt64,System.String)
extern "C"  void LeaderboardManager_LeaderboardManager_SubmitScore_m1200233903 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, String_t* ___leaderboard_id1, uint64_t ___score2, String_t* ___metadata3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void LeaderboardManager_LeaderboardManager_FetchResponse_Dispose_m1843189891 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t LeaderboardManager_LeaderboardManager_FetchResponse_GetStatus_m2392634293 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t LeaderboardManager_LeaderboardManager_FetchResponse_GetData_m1969339641 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchAllResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void LeaderboardManager_LeaderboardManager_FetchAllResponse_Dispose_m3080923324 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchAllResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t LeaderboardManager_LeaderboardManager_FetchAllResponse_GetStatus_m660731580 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchAllResponse_GetData_Length(System.Runtime.InteropServices.HandleRef)
extern "C"  UIntPtr_t  LeaderboardManager_LeaderboardManager_FetchAllResponse_GetData_Length_m110941772 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchAllResponse_GetData_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C"  IntPtr_t LeaderboardManager_LeaderboardManager_FetchAllResponse_GetData_GetElement_m3369118872 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, UIntPtr_t  ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchScorePageResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void LeaderboardManager_LeaderboardManager_FetchScorePageResponse_Dispose_m3108568668 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchScorePageResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t LeaderboardManager_LeaderboardManager_FetchScorePageResponse_GetStatus_m4272660252 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchScorePageResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t LeaderboardManager_LeaderboardManager_FetchScorePageResponse_GetData_m4006917896 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchScoreSummaryResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void LeaderboardManager_LeaderboardManager_FetchScoreSummaryResponse_Dispose_m571805271 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchScoreSummaryResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t LeaderboardManager_LeaderboardManager_FetchScoreSummaryResponse_GetStatus_m2272677641 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchScoreSummaryResponse_GetData(System.Runtime.InteropServices.HandleRef)
extern "C"  IntPtr_t LeaderboardManager_LeaderboardManager_FetchScoreSummaryResponse_GetData_m3459320653 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchAllScoreSummariesResponse_Dispose(System.Runtime.InteropServices.HandleRef)
extern "C"  void LeaderboardManager_LeaderboardManager_FetchAllScoreSummariesResponse_Dispose_m1318596590 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GooglePlayGames.Native.Cwrapper.CommonErrorStatus/ResponseStatus GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchAllScoreSummariesResponse_GetStatus(System.Runtime.InteropServices.HandleRef)
extern "C"  int32_t LeaderboardManager_LeaderboardManager_FetchAllScoreSummariesResponse_GetStatus_m45206830 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UIntPtr GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchAllScoreSummariesResponse_GetData_Length(System.Runtime.InteropServices.HandleRef)
extern "C"  UIntPtr_t  LeaderboardManager_LeaderboardManager_FetchAllScoreSummariesResponse_GetData_Length_m564118746 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr GooglePlayGames.Native.Cwrapper.LeaderboardManager::LeaderboardManager_FetchAllScoreSummariesResponse_GetData_GetElement(System.Runtime.InteropServices.HandleRef,System.UIntPtr)
extern "C"  IntPtr_t LeaderboardManager_LeaderboardManager_FetchAllScoreSummariesResponse_GetData_GetElement_m2741674506 (Il2CppObject * __this /* static, unused */, HandleRef_t1780819301  ___self0, UIntPtr_t  ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
