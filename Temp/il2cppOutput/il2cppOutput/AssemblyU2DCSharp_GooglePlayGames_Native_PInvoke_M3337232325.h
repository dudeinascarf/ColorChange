#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.Dictionary`2<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus>
struct Dictionary_2_t3178029858;

#include "AssemblyU2DCSharp_GooglePlayGames_Native_PInvoke_B2237584300.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.Native.PInvoke.MultiplayerParticipant
struct  MultiplayerParticipant_t3337232325  : public BaseReferenceHolder_t2237584300
{
public:

public:
};

struct MultiplayerParticipant_t3337232325_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<GooglePlayGames.Native.Cwrapper.Types/ParticipantStatus,GooglePlayGames.BasicApi.Multiplayer.Participant/ParticipantStatus> GooglePlayGames.Native.PInvoke.MultiplayerParticipant::StatusConversion
	Dictionary_2_t3178029858 * ___StatusConversion_2;

public:
	inline static int32_t get_offset_of_StatusConversion_2() { return static_cast<int32_t>(offsetof(MultiplayerParticipant_t3337232325_StaticFields, ___StatusConversion_2)); }
	inline Dictionary_2_t3178029858 * get_StatusConversion_2() const { return ___StatusConversion_2; }
	inline Dictionary_2_t3178029858 ** get_address_of_StatusConversion_2() { return &___StatusConversion_2; }
	inline void set_StatusConversion_2(Dictionary_2_t3178029858 * value)
	{
		___StatusConversion_2 = value;
		Il2CppCodeGenWriteBarrier(&___StatusConversion_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
