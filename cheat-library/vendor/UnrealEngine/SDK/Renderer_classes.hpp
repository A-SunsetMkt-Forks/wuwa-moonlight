#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Renderer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class Renderer.DebugViewOverdrawSettings
// 0x0010 (0x0040 - 0x0030)
class UDebugViewOverdrawSettings final : public UObject
{
public:
	struct FLinearColor                           OverdrawColor;                                     // 0x0030(0x0010)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DebugViewOverdrawSettings">();
	}
	static class UDebugViewOverdrawSettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDebugViewOverdrawSettings>();
	}
};
static_assert(alignof(UDebugViewOverdrawSettings) == 0x000008, "Wrong alignment on UDebugViewOverdrawSettings");
static_assert(sizeof(UDebugViewOverdrawSettings) == 0x000040, "Wrong size on UDebugViewOverdrawSettings");
static_assert(offsetof(UDebugViewOverdrawSettings, OverdrawColor) == 0x000030, "Member 'UDebugViewOverdrawSettings::OverdrawColor' has a wrong offset!");

// Class Renderer.DebugViewTexelDensitySettings
// 0x0038 (0x0068 - 0x0030)
class UDebugViewTexelDensitySettings final : public UObject
{
public:
	TArray<class FString>                         AutoTextureNameRegex;                              // 0x0030(0x0010)(ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
	float                                         BaseDensity;                                       // 0x0040(0x0004)(ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_257F[0x4];                                     // 0x0044(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<struct FLinearColor>                   DensityColors;                                     // 0x0048(0x0010)(ZeroConstructor, Config, GlobalConfig, NativeAccessSpecifierPublic)
	uint8                                         Pad_2580[0x10];                                    // 0x0058(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"DebugViewTexelDensitySettings">();
	}
	static class UDebugViewTexelDensitySettings* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDebugViewTexelDensitySettings>();
	}
};
static_assert(alignof(UDebugViewTexelDensitySettings) == 0x000008, "Wrong alignment on UDebugViewTexelDensitySettings");
static_assert(sizeof(UDebugViewTexelDensitySettings) == 0x000068, "Wrong size on UDebugViewTexelDensitySettings");
static_assert(offsetof(UDebugViewTexelDensitySettings, AutoTextureNameRegex) == 0x000030, "Member 'UDebugViewTexelDensitySettings::AutoTextureNameRegex' has a wrong offset!");
static_assert(offsetof(UDebugViewTexelDensitySettings, BaseDensity) == 0x000040, "Member 'UDebugViewTexelDensitySettings::BaseDensity' has a wrong offset!");
static_assert(offsetof(UDebugViewTexelDensitySettings, DensityColors) == 0x000048, "Member 'UDebugViewTexelDensitySettings::DensityColors' has a wrong offset!");

}
