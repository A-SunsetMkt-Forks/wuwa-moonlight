#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AvfMediaFactory

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class AvfMediaFactory.AvfMediaSettings
// 0x0008 (0x0038 - 0x0030)
class UAvfMediaSettings final : public UObject
{
public:
	bool                                          NativeAudioOut;                                    // 0x0030(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2530[0x7];                                     // 0x0031(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"AvfMediaSettings">();
	}
	static class UAvfMediaSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UAvfMediaSettings>();
	}
};
static_assert(alignof(UAvfMediaSettings) == 0x000008, "Wrong alignment on UAvfMediaSettings");
static_assert(sizeof(UAvfMediaSettings) == 0x000038, "Wrong size on UAvfMediaSettings");
static_assert(offsetof(UAvfMediaSettings, NativeAudioOut) == 0x000030, "Member 'UAvfMediaSettings::NativeAudioOut' has a wrong offset!");

}

