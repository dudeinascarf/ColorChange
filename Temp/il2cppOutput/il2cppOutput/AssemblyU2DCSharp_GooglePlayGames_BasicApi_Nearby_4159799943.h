#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "mscorlib_System_ValueType1744280289.h"
#include "AssemblyU2DCSharp_GooglePlayGames_BasicApi_Nearby_3227722211.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct  ConnectionRequest_t4159799943 
{
public:
	// GooglePlayGames.BasicApi.Nearby.EndpointDetails GooglePlayGames.BasicApi.Nearby.ConnectionRequest::mRemoteEndpoint
	EndpointDetails_t3227722211  ___mRemoteEndpoint_0;
	// System.Byte[] GooglePlayGames.BasicApi.Nearby.ConnectionRequest::mPayload
	ByteU5BU5D_t4260760469* ___mPayload_1;

public:
	inline static int32_t get_offset_of_mRemoteEndpoint_0() { return static_cast<int32_t>(offsetof(ConnectionRequest_t4159799943, ___mRemoteEndpoint_0)); }
	inline EndpointDetails_t3227722211  get_mRemoteEndpoint_0() const { return ___mRemoteEndpoint_0; }
	inline EndpointDetails_t3227722211 * get_address_of_mRemoteEndpoint_0() { return &___mRemoteEndpoint_0; }
	inline void set_mRemoteEndpoint_0(EndpointDetails_t3227722211  value)
	{
		___mRemoteEndpoint_0 = value;
	}

	inline static int32_t get_offset_of_mPayload_1() { return static_cast<int32_t>(offsetof(ConnectionRequest_t4159799943, ___mPayload_1)); }
	inline ByteU5BU5D_t4260760469* get_mPayload_1() const { return ___mPayload_1; }
	inline ByteU5BU5D_t4260760469** get_address_of_mPayload_1() { return &___mPayload_1; }
	inline void set_mPayload_1(ByteU5BU5D_t4260760469* value)
	{
		___mPayload_1 = value;
		Il2CppCodeGenWriteBarrier(&___mPayload_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_t4159799943_marshaled_pinvoke
{
	EndpointDetails_t3227722211_marshaled_pinvoke ___mRemoteEndpoint_0;
	uint8_t* ___mPayload_1;
};
// Native definition for marshalling of: GooglePlayGames.BasicApi.Nearby.ConnectionRequest
struct ConnectionRequest_t4159799943_marshaled_com
{
	EndpointDetails_t3227722211_marshaled_com ___mRemoteEndpoint_0;
	uint8_t* ___mPayload_1;
};
