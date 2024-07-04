#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PDA_GlobalRenderDataReference

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PDA_GlobalRenderDataReference.PDA_GlobalRenderDataReference_C
// 0x0030 (0x0068 - 0x0038)
class UPDA_GlobalRenderDataReference_C final : public UPrimaryDataAsset
{
public:
	class UMaterialParameterCollection*           GlobalShaderParameters;                            // 0x0038(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialParameterCollection*           SceneInteractionShaderParameters;                  // 0x0040(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPDA_ModelLensFlareConfig_C*            GlobalLensFlareConfig;                             // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialParameterCollection*           MPC_ShowBrightness;                                // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPDA_DecalShadowConfig_C*               DefaultDecalShadow;                                // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialParameterCollection*           EyesParameters;                                    // 0x0060(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PDA_GlobalRenderDataReference_C">();
	}
	static class UPDA_GlobalRenderDataReference_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPDA_GlobalRenderDataReference_C>();
	}
};
static_assert(alignof(UPDA_GlobalRenderDataReference_C) == 0x000008, "Wrong alignment on UPDA_GlobalRenderDataReference_C");
static_assert(sizeof(UPDA_GlobalRenderDataReference_C) == 0x000068, "Wrong size on UPDA_GlobalRenderDataReference_C");
static_assert(offsetof(UPDA_GlobalRenderDataReference_C, GlobalShaderParameters) == 0x000038, "Member 'UPDA_GlobalRenderDataReference_C::GlobalShaderParameters' has a wrong offset!");
static_assert(offsetof(UPDA_GlobalRenderDataReference_C, SceneInteractionShaderParameters) == 0x000040, "Member 'UPDA_GlobalRenderDataReference_C::SceneInteractionShaderParameters' has a wrong offset!");
static_assert(offsetof(UPDA_GlobalRenderDataReference_C, GlobalLensFlareConfig) == 0x000048, "Member 'UPDA_GlobalRenderDataReference_C::GlobalLensFlareConfig' has a wrong offset!");
static_assert(offsetof(UPDA_GlobalRenderDataReference_C, MPC_ShowBrightness) == 0x000050, "Member 'UPDA_GlobalRenderDataReference_C::MPC_ShowBrightness' has a wrong offset!");
static_assert(offsetof(UPDA_GlobalRenderDataReference_C, DefaultDecalShadow) == 0x000058, "Member 'UPDA_GlobalRenderDataReference_C::DefaultDecalShadow' has a wrong offset!");
static_assert(offsetof(UPDA_GlobalRenderDataReference_C, EyesParameters) == 0x000060, "Member 'UPDA_GlobalRenderDataReference_C::EyesParameters' has a wrong offset!");

}

