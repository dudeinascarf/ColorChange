#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Object
struct Il2CppObject;
// GooglePlayGames.Native.NativeClient
struct NativeClient_t3798002602;
// GooglePlayGames.Native.PInvoke.RealtimeManager
struct RealtimeManager_t1839590440;
// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession
struct RoomSession_t1352686482;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.NativeRealtimeMultiplayerClient
struct  NativeRealtimeMultiplayerClient_t2043220689  : public Il2CppObject
{
public:
	// System.Object GooglePlayGames.Native.NativeRealtimeMultiplayerClient::mSessionLock
	Il2CppObject * ___mSessionLock_0;
	// GooglePlayGames.Native.NativeClient GooglePlayGames.Native.NativeRealtimeMultiplayerClient::mNativeClient
	NativeClient_t3798002602 * ___mNativeClient_1;
	// GooglePlayGames.Native.PInvoke.RealtimeManager GooglePlayGames.Native.NativeRealtimeMultiplayerClient::mRealtimeManager
	RealtimeManager_t1839590440 * ___mRealtimeManager_2;
	// GooglePlayGames.Native.NativeRealtimeMultiplayerClient/RoomSession modreq(System.Runtime.CompilerServices.IsVolatile) GooglePlayGames.Native.NativeRealtimeMultiplayerClient::mCurrentSession
	RoomSession_t1352686482 * ___mCurrentSession_3;

public:
	inline static int32_t get_offset_of_mSessionLock_0() { return static_cast<int32_t>(offsetof(NativeRealtimeMultiplayerClient_t2043220689, ___mSessionLock_0)); }
	inline Il2CppObject * get_mSessionLock_0() const { return ___mSessionLock_0; }
	inline Il2CppObject ** get_address_of_mSessionLock_0() { return &___mSessionLock_0; }
	inline void set_mSessionLock_0(Il2CppObject * value)
	{
		___mSessionLock_0 = value;
		Il2CppCodeGenWriteBarrier(&___mSessionLock_0, value);
	}

	inline static int32_t get_offset_of_mNativeClient_1() { return static_cast<int32_t>(offsetof(NativeRealtimeMultiplayerClient_t2043220689, ___mNativeClient_1)); }
	inline NativeClient_t3798002602 * get_mNativeClient_1() const { return ___mNativeClient_1; }
	inline NativeClient_t3798002602 ** get_address_of_mNativeClient_1() { return &___mNativeClient_1; }
	inline void set_mNativeClient_1(NativeClient_t3798002602 * value)
	{
		___mNativeClient_1 = value;
		Il2CppCodeGenWriteBarrier(&___mNativeClient_1, value);
	}

	inline static int32_t get_offset_of_mRealtimeManager_2() { return static_cast<int32_t>(offsetof(NativeRealtimeMultiplayerClient_t2043220689, ___mRealtimeManager_2)); }
	inline RealtimeManager_t1839590440 * get_mRealtimeManager_2() const { return ___mRealtimeManager_2; }
	inline RealtimeManager_t1839590440 ** get_address_of_mRealtimeManager_2() { return &___mRealtimeManager_2; }
	inline void set_mRealtimeManager_2(RealtimeManager_t1839590440 * value)
	{
		___mRealtimeManager_2 = value;
		Il2CppCodeGenWriteBarrier(&___mRealtimeManager_2, value);
	}

	inline static int32_t get_offset_of_mCurrentSession_3() { return static_cast<int32_t>(offsetof(NativeRealtimeMultiplayerClient_t2043220689, ___mCurrentSession_3)); }
	inline RoomSession_t1352686482 * get_mCurrentSession_3() const { return ___mCurrentSession_3; }
	inline RoomSession_t1352686482 ** get_address_of_mCurrentSession_3() { return &___mCurrentSession_3; }
	inline void set_mCurrentSession_3(RoomSession_t1352686482 * value)
	{
		___mCurrentSession_3 = value;
		Il2CppCodeGenWriteBarrier(&___mCurrentSession_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
