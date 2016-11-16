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

// GooglePlayGames.BasicApi.SavedGame.ConflictCallback
struct ConflictCallback_t942269343;
// System.Object
struct Il2CppObject;
// GooglePlayGames.BasicApi.SavedGame.IConflictResolver
struct IConflictResolver_t1088765775;
// GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata
struct ISavedGameMetadata_t3582269991;
// System.Byte[]
struct ByteU5BU5D_t4260760469;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void ConflictCallback__ctor_m1335590187 (ConflictCallback_t942269343 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::Invoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[])
extern "C"  void ConflictCallback_Invoke_m936605031 (ConflictCallback_t942269343 * __this, Il2CppObject * ___resolver0, Il2CppObject * ___original1, ByteU5BU5D_t4260760469* ___originalData2, Il2CppObject * ___unmerged3, ByteU5BU5D_t4260760469* ___unmergedData4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult GooglePlayGames.BasicApi.SavedGame.ConflictCallback::BeginInvoke(GooglePlayGames.BasicApi.SavedGame.IConflictResolver,GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],GooglePlayGames.BasicApi.SavedGame.ISavedGameMetadata,System.Byte[],System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ConflictCallback_BeginInvoke_m2540941078 (ConflictCallback_t942269343 * __this, Il2CppObject * ___resolver0, Il2CppObject * ___original1, ByteU5BU5D_t4260760469* ___originalData2, Il2CppObject * ___unmerged3, ByteU5BU5D_t4260760469* ___unmergedData4, AsyncCallback_t1369114871 * ___callback5, Il2CppObject * ___object6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GooglePlayGames.BasicApi.SavedGame.ConflictCallback::EndInvoke(System.IAsyncResult)
extern "C"  void ConflictCallback_EndInvoke_m3539614907 (ConflictCallback_t942269343 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
