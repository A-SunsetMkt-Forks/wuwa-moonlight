#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Renderer

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct Renderer.KuroLensflareGhostSetting
// 0x0030 (0x0030 - 0x0000)
struct FKuroLensflareGhostSetting final
{
public:
	float                                         Scale;                                             // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                           ColorTint;                                         // 0x0004(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_257D[0xC];                                     // 0x0014(0x000C)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector4                               ColorRefine;                                       // 0x0020(0x0010)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKuroLensflareGhostSetting) == 0x000010, "Wrong alignment on FKuroLensflareGhostSetting");
static_assert(sizeof(FKuroLensflareGhostSetting) == 0x000030, "Wrong size on FKuroLensflareGhostSetting");
static_assert(offsetof(FKuroLensflareGhostSetting, Scale) == 0x000000, "Member 'FKuroLensflareGhostSetting::Scale' has a wrong offset!");
static_assert(offsetof(FKuroLensflareGhostSetting, ColorTint) == 0x000004, "Member 'FKuroLensflareGhostSetting::ColorTint' has a wrong offset!");
static_assert(offsetof(FKuroLensflareGhostSetting, ColorRefine) == 0x000020, "Member 'FKuroLensflareGhostSetting::ColorRefine' has a wrong offset!");

// ScriptStruct Renderer.KuroLensflareSettings
// 0x0020 (0x0020 - 0x0000)
struct FKuroLensflareSettings final
{
public:
	float                                         PrefilterThresholdLevel;                           // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PrefilterThresholdRange;                           // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         ChromaShift;                                       // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LuminanceClamp;                                    // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKuroLensflareGhostSetting>     GhostSettings;                                     // 0x0010(0x0010)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FKuroLensflareSettings) == 0x000008, "Wrong alignment on FKuroLensflareSettings");
static_assert(sizeof(FKuroLensflareSettings) == 0x000020, "Wrong size on FKuroLensflareSettings");
static_assert(offsetof(FKuroLensflareSettings, PrefilterThresholdLevel) == 0x000000, "Member 'FKuroLensflareSettings::PrefilterThresholdLevel' has a wrong offset!");
static_assert(offsetof(FKuroLensflareSettings, PrefilterThresholdRange) == 0x000004, "Member 'FKuroLensflareSettings::PrefilterThresholdRange' has a wrong offset!");
static_assert(offsetof(FKuroLensflareSettings, ChromaShift) == 0x000008, "Member 'FKuroLensflareSettings::ChromaShift' has a wrong offset!");
static_assert(offsetof(FKuroLensflareSettings, LuminanceClamp) == 0x00000C, "Member 'FKuroLensflareSettings::LuminanceClamp' has a wrong offset!");
static_assert(offsetof(FKuroLensflareSettings, GhostSettings) == 0x000010, "Member 'FKuroLensflareSettings::GhostSettings' has a wrong offset!");

// ScriptStruct Renderer.LightPropagationVolumeSettings
// 0x0040 (0x0040 - 0x0000)
struct FLightPropagationVolumeSettings final
{
public:
	uint8                                         bOverride_LPVIntensity : 1;                        // 0x0000(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_LPVDirectionalOcclusionIntensity : 1;    // 0x0000(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_LPVDirectionalOcclusionRadius : 1;       // 0x0000(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_LPVDiffuseOcclusionExponent : 1;         // 0x0000(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_LPVSpecularOcclusionExponent : 1;        // 0x0000(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_LPVDiffuseOcclusionIntensity : 1;        // 0x0000(0x0001)(BitIndex: 0x05, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_LPVSpecularOcclusionIntensity : 1;       // 0x0000(0x0001)(BitIndex: 0x06, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_LPVSize : 1;                             // 0x0000(0x0001)(BitIndex: 0x07, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_LPVSecondaryOcclusionIntensity : 1;      // 0x0001(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_LPVSecondaryBounceIntensity : 1;         // 0x0001(0x0001)(BitIndex: 0x01, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_LPVGeometryVolumeBias : 1;               // 0x0001(0x0001)(BitIndex: 0x02, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_LPVVplInjectionBias : 1;                 // 0x0001(0x0001)(BitIndex: 0x03, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         bOverride_LPVEmissiveInjectionIntensity : 1;       // 0x0001(0x0001)(BitIndex: 0x04, PropSize: 0x0001 (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_257E[0x2];                                     // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         LPVIntensity;                                      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LPVVplInjectionBias;                               // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LPVSize;                                           // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LPVSecondaryOcclusionIntensity;                    // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LPVSecondaryBounceIntensity;                       // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LPVGeometryVolumeBias;                             // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LPVEmissiveInjectionIntensity;                     // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LPVDirectionalOcclusionIntensity;                  // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LPVDirectionalOcclusionRadius;                     // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LPVDiffuseOcclusionExponent;                       // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LPVSpecularOcclusionExponent;                      // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LPVDiffuseOcclusionIntensity;                      // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LPVSpecularOcclusionIntensity;                     // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LPVFadeRange;                                      // 0x0038(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         LPVDirectionalOcclusionFadeRange;                  // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FLightPropagationVolumeSettings) == 0x000004, "Wrong alignment on FLightPropagationVolumeSettings");
static_assert(sizeof(FLightPropagationVolumeSettings) == 0x000040, "Wrong size on FLightPropagationVolumeSettings");
static_assert(offsetof(FLightPropagationVolumeSettings, LPVIntensity) == 0x000004, "Member 'FLightPropagationVolumeSettings::LPVIntensity' has a wrong offset!");
static_assert(offsetof(FLightPropagationVolumeSettings, LPVVplInjectionBias) == 0x000008, "Member 'FLightPropagationVolumeSettings::LPVVplInjectionBias' has a wrong offset!");
static_assert(offsetof(FLightPropagationVolumeSettings, LPVSize) == 0x00000C, "Member 'FLightPropagationVolumeSettings::LPVSize' has a wrong offset!");
static_assert(offsetof(FLightPropagationVolumeSettings, LPVSecondaryOcclusionIntensity) == 0x000010, "Member 'FLightPropagationVolumeSettings::LPVSecondaryOcclusionIntensity' has a wrong offset!");
static_assert(offsetof(FLightPropagationVolumeSettings, LPVSecondaryBounceIntensity) == 0x000014, "Member 'FLightPropagationVolumeSettings::LPVSecondaryBounceIntensity' has a wrong offset!");
static_assert(offsetof(FLightPropagationVolumeSettings, LPVGeometryVolumeBias) == 0x000018, "Member 'FLightPropagationVolumeSettings::LPVGeometryVolumeBias' has a wrong offset!");
static_assert(offsetof(FLightPropagationVolumeSettings, LPVEmissiveInjectionIntensity) == 0x00001C, "Member 'FLightPropagationVolumeSettings::LPVEmissiveInjectionIntensity' has a wrong offset!");
static_assert(offsetof(FLightPropagationVolumeSettings, LPVDirectionalOcclusionIntensity) == 0x000020, "Member 'FLightPropagationVolumeSettings::LPVDirectionalOcclusionIntensity' has a wrong offset!");
static_assert(offsetof(FLightPropagationVolumeSettings, LPVDirectionalOcclusionRadius) == 0x000024, "Member 'FLightPropagationVolumeSettings::LPVDirectionalOcclusionRadius' has a wrong offset!");
static_assert(offsetof(FLightPropagationVolumeSettings, LPVDiffuseOcclusionExponent) == 0x000028, "Member 'FLightPropagationVolumeSettings::LPVDiffuseOcclusionExponent' has a wrong offset!");
static_assert(offsetof(FLightPropagationVolumeSettings, LPVSpecularOcclusionExponent) == 0x00002C, "Member 'FLightPropagationVolumeSettings::LPVSpecularOcclusionExponent' has a wrong offset!");
static_assert(offsetof(FLightPropagationVolumeSettings, LPVDiffuseOcclusionIntensity) == 0x000030, "Member 'FLightPropagationVolumeSettings::LPVDiffuseOcclusionIntensity' has a wrong offset!");
static_assert(offsetof(FLightPropagationVolumeSettings, LPVSpecularOcclusionIntensity) == 0x000034, "Member 'FLightPropagationVolumeSettings::LPVSpecularOcclusionIntensity' has a wrong offset!");
static_assert(offsetof(FLightPropagationVolumeSettings, LPVFadeRange) == 0x000038, "Member 'FLightPropagationVolumeSettings::LPVFadeRange' has a wrong offset!");
static_assert(offsetof(FLightPropagationVolumeSettings, LPVDirectionalOcclusionFadeRange) == 0x00003C, "Member 'FLightPropagationVolumeSettings::LPVDirectionalOcclusionFadeRange' has a wrong offset!");

}

