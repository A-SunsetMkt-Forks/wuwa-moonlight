#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AudioPlatformConfiguration

#include "Basic.hpp"


namespace SDK
{

// Enum AudioPlatformConfiguration.ESoundwaveSampleRateSettings
// NumValues: 0x0007
enum class ESoundwaveSampleRateSettings : uint8
{
	Max                                      = 0,
	High                                     = 1,
	Medium                                   = 2,
	Low                                      = 3,
	Min                                      = 4,
	MatchDevice                              = 5,
	ESoundwaveSampleRateSettings_MAX         = 6,
};

// ScriptStruct AudioPlatformConfiguration.PlatformRuntimeAudioCompressionOverrides
// 0x0010 (0x0010 - 0x0000)
struct FPlatformRuntimeAudioCompressionOverrides final
{
public:
	bool                                          bOverrideCompressionTimes;                         // 0x0000(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2867[0x3];                                     // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         DurationThreshold;                                 // 0x0004(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         MaxNumRandomBranches;                              // 0x0008(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                         SoundCueQualityIndex;                              // 0x000C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FPlatformRuntimeAudioCompressionOverrides) == 0x000004, "Wrong alignment on FPlatformRuntimeAudioCompressionOverrides");
static_assert(sizeof(FPlatformRuntimeAudioCompressionOverrides) == 0x000010, "Wrong size on FPlatformRuntimeAudioCompressionOverrides");
static_assert(offsetof(FPlatformRuntimeAudioCompressionOverrides, bOverrideCompressionTimes) == 0x000000, "Member 'FPlatformRuntimeAudioCompressionOverrides::bOverrideCompressionTimes' has a wrong offset!");
static_assert(offsetof(FPlatformRuntimeAudioCompressionOverrides, DurationThreshold) == 0x000004, "Member 'FPlatformRuntimeAudioCompressionOverrides::DurationThreshold' has a wrong offset!");
static_assert(offsetof(FPlatformRuntimeAudioCompressionOverrides, MaxNumRandomBranches) == 0x000008, "Member 'FPlatformRuntimeAudioCompressionOverrides::MaxNumRandomBranches' has a wrong offset!");
static_assert(offsetof(FPlatformRuntimeAudioCompressionOverrides, SoundCueQualityIndex) == 0x00000C, "Member 'FPlatformRuntimeAudioCompressionOverrides::SoundCueQualityIndex' has a wrong offset!");

}

