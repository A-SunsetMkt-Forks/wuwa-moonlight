#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_HaloPointLight

#include "Basic.hpp"

#include "E_BillboardMode_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"
#include "KuroRenderingRuntimeBPPlugin_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_HaloPointLight.BP_HaloPointLight_C
// 0x0088 (0x0348 - 0x02C0)
class ABP_HaloPointLight_C final : public APointLight
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UMaterialInstanceDynamic*               DynamicMaterialInstance;                           // 0x02C8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enable;                                            // 0x02D0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bAcceptGI;                                         // 0x02D1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3970[0x2];                                     // 0x02D2(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         SizeScale;                                         // 0x02D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         IntensityScale;                                    // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         LightExponent;                                     // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeStartRadius;                                   // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FadeEndRadius;                                     // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UKuroHaloComponent*                     HaloComponent;                                     // 0x02E8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DepthFadeDistance;                                 // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AspectRatio;                                       // 0x02F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	E_BillboardMode                               FaceCameraMode;                                    // 0x02F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3971[0x7];                                     // 0x02F9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UStaticMesh*                            HaloMesh;                                          // 0x0300(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash)
	float                                         MinDrawDistance;                                   // 0x0308(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxDrawDistance;                                   // 0x030C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MinDrawRange;                                      // 0x0310(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxDrawRange;                                      // 0x0314(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         UseShapeTex;                                       // 0x0318(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3972[0x4];                                     // 0x031C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             VolumeTex;                                         // 0x0320(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PointLinghtIntenty;                                // 0x0328(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3973[0x4];                                     // 0x032C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UPD_HaloPointLightConfig_C*             HaloPointConfig;                                   // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EKuroFeatureLevel                             CurrentFeatureLevel;                               // 0x0338(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3974[0x7];                                     // 0x0339(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInterface*                     HaloMaterial;                                      // 0x0340(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_HaloPointLight(int32 EntryPoint);
	void HaloPointParaUpdate();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void UpdateHaloParameter(bool UpdateComponent);
	void GetHaloDrawParameters(float* Param_MinDrawDistance, float* Param_MaxDrawDistance, float* Param_MinDrawRange, float* Param_MaxDrawRange);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_HaloPointLight_C">();
	}
	static class ABP_HaloPointLight_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_HaloPointLight_C>();
	}
};
static_assert(alignof(ABP_HaloPointLight_C) == 0x000008, "Wrong alignment on ABP_HaloPointLight_C");
static_assert(sizeof(ABP_HaloPointLight_C) == 0x000348, "Wrong size on ABP_HaloPointLight_C");
static_assert(offsetof(ABP_HaloPointLight_C, UberGraphFrame) == 0x0002C0, "Member 'ABP_HaloPointLight_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, DynamicMaterialInstance) == 0x0002C8, "Member 'ABP_HaloPointLight_C::DynamicMaterialInstance' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, Enable) == 0x0002D0, "Member 'ABP_HaloPointLight_C::Enable' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, bAcceptGI) == 0x0002D1, "Member 'ABP_HaloPointLight_C::bAcceptGI' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, SizeScale) == 0x0002D4, "Member 'ABP_HaloPointLight_C::SizeScale' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, IntensityScale) == 0x0002D8, "Member 'ABP_HaloPointLight_C::IntensityScale' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, LightExponent) == 0x0002DC, "Member 'ABP_HaloPointLight_C::LightExponent' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, FadeStartRadius) == 0x0002E0, "Member 'ABP_HaloPointLight_C::FadeStartRadius' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, FadeEndRadius) == 0x0002E4, "Member 'ABP_HaloPointLight_C::FadeEndRadius' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, HaloComponent) == 0x0002E8, "Member 'ABP_HaloPointLight_C::HaloComponent' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, DepthFadeDistance) == 0x0002F0, "Member 'ABP_HaloPointLight_C::DepthFadeDistance' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, AspectRatio) == 0x0002F4, "Member 'ABP_HaloPointLight_C::AspectRatio' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, FaceCameraMode) == 0x0002F8, "Member 'ABP_HaloPointLight_C::FaceCameraMode' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, HaloMesh) == 0x000300, "Member 'ABP_HaloPointLight_C::HaloMesh' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, MinDrawDistance) == 0x000308, "Member 'ABP_HaloPointLight_C::MinDrawDistance' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, MaxDrawDistance) == 0x00030C, "Member 'ABP_HaloPointLight_C::MaxDrawDistance' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, MinDrawRange) == 0x000310, "Member 'ABP_HaloPointLight_C::MinDrawRange' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, MaxDrawRange) == 0x000314, "Member 'ABP_HaloPointLight_C::MaxDrawRange' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, UseShapeTex) == 0x000318, "Member 'ABP_HaloPointLight_C::UseShapeTex' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, VolumeTex) == 0x000320, "Member 'ABP_HaloPointLight_C::VolumeTex' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, PointLinghtIntenty) == 0x000328, "Member 'ABP_HaloPointLight_C::PointLinghtIntenty' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, HaloPointConfig) == 0x000330, "Member 'ABP_HaloPointLight_C::HaloPointConfig' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, CurrentFeatureLevel) == 0x000338, "Member 'ABP_HaloPointLight_C::CurrentFeatureLevel' has a wrong offset!");
static_assert(offsetof(ABP_HaloPointLight_C, HaloMaterial) == 0x000340, "Member 'ABP_HaloPointLight_C::HaloMaterial' has a wrong offset!");

}

