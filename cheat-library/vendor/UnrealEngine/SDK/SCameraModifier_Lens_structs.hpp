#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SCameraModifier_Lens

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct SCameraModifier_Lens.SCameraModifier_Lens
// 0x0028 (0x0028 - 0x0000)
struct FSCameraModifier_Lens final
{
public:
	float                                         StartFStop_22_2AE41BCC4091518F84A145BB74DE1484;    // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EndFStop_24_9ACD9C10479EA8CE3B0D498E1D40FE1D;      // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RadialBlurStartIntensity_17_489DCA6F4E415B5242297EB8E070B416; // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RadialBlurEndIntensity_19_B5497B4A4630D7B38E0AC49FAC4A0D9A; // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                              RadialBlurCenter_6_9B288F0547473F71093BEEA3E37782F3; // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RadialBlurRadius_9_DF54853044DAF80EBD76EA96BEB2D255; // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RadialBlurHardness_11_36F4281F4305AAA87E4E4F92C403BB67; // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RadialBlurPassNumber_13_28C543494EE741E1D7FBF38619D85057; // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RadialBlurSampleNumber_15_3B432AD74740E2D8A277E5AA019FC441; // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSCameraModifier_Lens) == 0x000004, "Wrong alignment on FSCameraModifier_Lens");
static_assert(sizeof(FSCameraModifier_Lens) == 0x000028, "Wrong size on FSCameraModifier_Lens");
static_assert(offsetof(FSCameraModifier_Lens, StartFStop_22_2AE41BCC4091518F84A145BB74DE1484) == 0x000000, "Member 'FSCameraModifier_Lens::StartFStop_22_2AE41BCC4091518F84A145BB74DE1484' has a wrong offset!");
static_assert(offsetof(FSCameraModifier_Lens, EndFStop_24_9ACD9C10479EA8CE3B0D498E1D40FE1D) == 0x000004, "Member 'FSCameraModifier_Lens::EndFStop_24_9ACD9C10479EA8CE3B0D498E1D40FE1D' has a wrong offset!");
static_assert(offsetof(FSCameraModifier_Lens, RadialBlurStartIntensity_17_489DCA6F4E415B5242297EB8E070B416) == 0x000008, "Member 'FSCameraModifier_Lens::RadialBlurStartIntensity_17_489DCA6F4E415B5242297EB8E070B416' has a wrong offset!");
static_assert(offsetof(FSCameraModifier_Lens, RadialBlurEndIntensity_19_B5497B4A4630D7B38E0AC49FAC4A0D9A) == 0x00000C, "Member 'FSCameraModifier_Lens::RadialBlurEndIntensity_19_B5497B4A4630D7B38E0AC49FAC4A0D9A' has a wrong offset!");
static_assert(offsetof(FSCameraModifier_Lens, RadialBlurCenter_6_9B288F0547473F71093BEEA3E37782F3) == 0x000010, "Member 'FSCameraModifier_Lens::RadialBlurCenter_6_9B288F0547473F71093BEEA3E37782F3' has a wrong offset!");
static_assert(offsetof(FSCameraModifier_Lens, RadialBlurRadius_9_DF54853044DAF80EBD76EA96BEB2D255) == 0x000018, "Member 'FSCameraModifier_Lens::RadialBlurRadius_9_DF54853044DAF80EBD76EA96BEB2D255' has a wrong offset!");
static_assert(offsetof(FSCameraModifier_Lens, RadialBlurHardness_11_36F4281F4305AAA87E4E4F92C403BB67) == 0x00001C, "Member 'FSCameraModifier_Lens::RadialBlurHardness_11_36F4281F4305AAA87E4E4F92C403BB67' has a wrong offset!");
static_assert(offsetof(FSCameraModifier_Lens, RadialBlurPassNumber_13_28C543494EE741E1D7FBF38619D85057) == 0x000020, "Member 'FSCameraModifier_Lens::RadialBlurPassNumber_13_28C543494EE741E1D7FBF38619D85057' has a wrong offset!");
static_assert(offsetof(FSCameraModifier_Lens, RadialBlurSampleNumber_15_3B432AD74740E2D8A277E5AA019FC441) == 0x000024, "Member 'FSCameraModifier_Lens::RadialBlurSampleNumber_15_3B432AD74740E2D8A277E5AA019FC441' has a wrong offset!");

}

