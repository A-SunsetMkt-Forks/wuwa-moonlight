#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SNavigationDynamicListenerConfig

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct SNavigationDynamicListenerConfig.SNavigationDynamicListenerConfig
// 0x0018 (0x0018 - 0x0000)
struct FSNavigationDynamicListenerConfig final
{
public:
	int32                                         Index_2_6C2CCA6E4BF8816A4070FCA2202A3D3B;          // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2D6A[0x4];                                     // 0x0004(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class AActor*                                 LayoutActor_8_C24C923C445F233BC823EFB31AEC43E5;    // 0x0008(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ScrollActor_10_FC2709614C034C729A392F80FF3C3231;   // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSNavigationDynamicListenerConfig) == 0x000008, "Wrong alignment on FSNavigationDynamicListenerConfig");
static_assert(sizeof(FSNavigationDynamicListenerConfig) == 0x000018, "Wrong size on FSNavigationDynamicListenerConfig");
static_assert(offsetof(FSNavigationDynamicListenerConfig, Index_2_6C2CCA6E4BF8816A4070FCA2202A3D3B) == 0x000000, "Member 'FSNavigationDynamicListenerConfig::Index_2_6C2CCA6E4BF8816A4070FCA2202A3D3B' has a wrong offset!");
static_assert(offsetof(FSNavigationDynamicListenerConfig, LayoutActor_8_C24C923C445F233BC823EFB31AEC43E5) == 0x000008, "Member 'FSNavigationDynamicListenerConfig::LayoutActor_8_C24C923C445F233BC823EFB31AEC43E5' has a wrong offset!");
static_assert(offsetof(FSNavigationDynamicListenerConfig, ScrollActor_10_FC2709614C034C729A392F80FF3C3231) == 0x000010, "Member 'FSNavigationDynamicListenerConfig::ScrollActor_10_FC2709614C034C729A392F80FF3C3231' has a wrong offset!");

}

