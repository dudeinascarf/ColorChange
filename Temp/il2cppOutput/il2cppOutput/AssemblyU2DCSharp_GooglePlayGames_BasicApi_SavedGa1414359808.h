﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t4260760469;

#include "mscorlib_System_ValueType1744280289.h"
#include "mscorlib_System_Nullable_1_gen497649510.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct  Builder_t1414359808 
{
public:
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mDescriptionUpdated
	bool ___mDescriptionUpdated_0;
	// System.String GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewDescription
	String_t* ___mNewDescription_1;
	// System.Boolean GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mCoverImageUpdated
	bool ___mCoverImageUpdated_2;
	// System.Byte[] GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPngCoverImage
	ByteU5BU5D_t4260760469* ___mNewPngCoverImage_3;
	// System.Nullable`1<System.TimeSpan> GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder::mNewPlayedTime
	Nullable_1_t497649510  ___mNewPlayedTime_4;

public:
	inline static int32_t get_offset_of_mDescriptionUpdated_0() { return static_cast<int32_t>(offsetof(Builder_t1414359808, ___mDescriptionUpdated_0)); }
	inline bool get_mDescriptionUpdated_0() const { return ___mDescriptionUpdated_0; }
	inline bool* get_address_of_mDescriptionUpdated_0() { return &___mDescriptionUpdated_0; }
	inline void set_mDescriptionUpdated_0(bool value)
	{
		___mDescriptionUpdated_0 = value;
	}

	inline static int32_t get_offset_of_mNewDescription_1() { return static_cast<int32_t>(offsetof(Builder_t1414359808, ___mNewDescription_1)); }
	inline String_t* get_mNewDescription_1() const { return ___mNewDescription_1; }
	inline String_t** get_address_of_mNewDescription_1() { return &___mNewDescription_1; }
	inline void set_mNewDescription_1(String_t* value)
	{
		___mNewDescription_1 = value;
		Il2CppCodeGenWriteBarrier(&___mNewDescription_1, value);
	}

	inline static int32_t get_offset_of_mCoverImageUpdated_2() { return static_cast<int32_t>(offsetof(Builder_t1414359808, ___mCoverImageUpdated_2)); }
	inline bool get_mCoverImageUpdated_2() const { return ___mCoverImageUpdated_2; }
	inline bool* get_address_of_mCoverImageUpdated_2() { return &___mCoverImageUpdated_2; }
	inline void set_mCoverImageUpdated_2(bool value)
	{
		___mCoverImageUpdated_2 = value;
	}

	inline static int32_t get_offset_of_mNewPngCoverImage_3() { return static_cast<int32_t>(offsetof(Builder_t1414359808, ___mNewPngCoverImage_3)); }
	inline ByteU5BU5D_t4260760469* get_mNewPngCoverImage_3() const { return ___mNewPngCoverImage_3; }
	inline ByteU5BU5D_t4260760469** get_address_of_mNewPngCoverImage_3() { return &___mNewPngCoverImage_3; }
	inline void set_mNewPngCoverImage_3(ByteU5BU5D_t4260760469* value)
	{
		___mNewPngCoverImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___mNewPngCoverImage_3, value);
	}

	inline static int32_t get_offset_of_mNewPlayedTime_4() { return static_cast<int32_t>(offsetof(Builder_t1414359808, ___mNewPlayedTime_4)); }
	inline Nullable_1_t497649510  get_mNewPlayedTime_4() const { return ___mNewPlayedTime_4; }
	inline Nullable_1_t497649510 * get_address_of_mNewPlayedTime_4() { return &___mNewPlayedTime_4; }
	inline void set_mNewPlayedTime_4(Nullable_1_t497649510  value)
	{
		___mNewPlayedTime_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_t1414359808_marshaled_pinvoke
{
	int32_t ___mDescriptionUpdated_0;
	char* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	uint8_t* ___mNewPngCoverImage_3;
	Nullable_1_t497649510  ___mNewPlayedTime_4;
};
// Native definition for marshalling of: GooglePlayGames.BasicApi.SavedGame.SavedGameMetadataUpdate/Builder
struct Builder_t1414359808_marshaled_com
{
	int32_t ___mDescriptionUpdated_0;
	Il2CppChar* ___mNewDescription_1;
	int32_t ___mCoverImageUpdated_2;
	uint8_t* ___mNewPngCoverImage_3;
	Nullable_1_t497649510  ___mNewPlayedTime_4;
};