#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: PDA_InteractionPlayerConfig

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass PDA_InteractionPlayerConfig.PDA_InteractionPlayerConfig_C
// 0x0038 (0x0070 - 0x0038)
class UPDA_InteractionPlayerConfig_C final : public UPrimaryDataAsset
{
public:
	bool                                          _____;                                             // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         ____J_;                                            // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          _4b__;                                             // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPDA_WaterEffectConfigs_C*              FouryH;                                            // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ______;                                            // 0x0050(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          __I__;                                             // 0x0054(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_55[0x3];                                       // 0x0055(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UClusteredStuffDataAsset*               I__yH;                                             // 0x0058(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ___4b__;                                           // 0x0060(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_61[0x3];                                       // 0x0061(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                ______Mn;                                          // 0x0064(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"PDA_InteractionPlayerConfig_C">();
	}
	static class UPDA_InteractionPlayerConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UPDA_InteractionPlayerConfig_C>();
	}
};
static_assert(alignof(UPDA_InteractionPlayerConfig_C) == 0x000008, "Wrong alignment on UPDA_InteractionPlayerConfig_C");
static_assert(sizeof(UPDA_InteractionPlayerConfig_C) == 0x000070, "Wrong size on UPDA_InteractionPlayerConfig_C");
static_assert(offsetof(UPDA_InteractionPlayerConfig_C, _____) == 0x000038, "Member 'UPDA_InteractionPlayerConfig_C::_____' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionPlayerConfig_C, ____J_) == 0x00003C, "Member 'UPDA_InteractionPlayerConfig_C::____J_' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionPlayerConfig_C, _4b__) == 0x000040, "Member 'UPDA_InteractionPlayerConfig_C::_4b__' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionPlayerConfig_C, FouryH) == 0x000048, "Member 'UPDA_InteractionPlayerConfig_C::FouryH' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionPlayerConfig_C, ______) == 0x000050, "Member 'UPDA_InteractionPlayerConfig_C::______' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionPlayerConfig_C, __I__) == 0x000054, "Member 'UPDA_InteractionPlayerConfig_C::__I__' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionPlayerConfig_C, I__yH) == 0x000058, "Member 'UPDA_InteractionPlayerConfig_C::I__yH' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionPlayerConfig_C, ___4b__) == 0x000060, "Member 'UPDA_InteractionPlayerConfig_C::___4b__' has a wrong offset!");
static_assert(offsetof(UPDA_InteractionPlayerConfig_C, ______Mn) == 0x000064, "Member 'UPDA_InteractionPlayerConfig_C::______Mn' has a wrong offset!");

}
