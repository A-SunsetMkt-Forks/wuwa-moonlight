#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SUiAnimNotifyModel

#include "Basic.hpp"

#include "EPerformanceRoleState_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// UserDefinedStruct SUiAnimNotifyModel.SUiAnimNotifyModel
// 0x00C0 (0x00C0 - 0x0000)
struct FSUiAnimNotifyModel final
{
public:
	class FString                                 SocketName_2_5670CA384F68A69FC00BA1AD9C9B8857;     // 0x0000(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FTransform                             Transform_26_D8334638476F6D24389D87BFADF11D8C;     // 0x0010(0x0030)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
	TSoftObjectPtr<class USkeletalMesh>           ModelSoft_23_8EF78B9A4A27EC85D11E16B998080DD3;     // 0x0040(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                         ModelIndex_29_DE6F758A4695D9928A5933B4646F5059;    // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_74[0x4];                                       // 0x0074(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UPD_CharacterControllerData_C> MaterialData_32_EF766BA94613CE5F761D8A865D1BD0B0;  // 0x0078(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class FString                                 MaterialTypeName_36_738FC29143FC65A30DE85AB74009C7A8; // 0x00A8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	EPerformanceRoleState                         AnimState_39_190742AD44B20F9D36FC2BBFF0F6F4E2;     // 0x00B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FSUiAnimNotifyModel) == 0x000010, "Wrong alignment on FSUiAnimNotifyModel");
static_assert(sizeof(FSUiAnimNotifyModel) == 0x0000C0, "Wrong size on FSUiAnimNotifyModel");
static_assert(offsetof(FSUiAnimNotifyModel, SocketName_2_5670CA384F68A69FC00BA1AD9C9B8857) == 0x000000, "Member 'FSUiAnimNotifyModel::SocketName_2_5670CA384F68A69FC00BA1AD9C9B8857' has a wrong offset!");
static_assert(offsetof(FSUiAnimNotifyModel, Transform_26_D8334638476F6D24389D87BFADF11D8C) == 0x000010, "Member 'FSUiAnimNotifyModel::Transform_26_D8334638476F6D24389D87BFADF11D8C' has a wrong offset!");
static_assert(offsetof(FSUiAnimNotifyModel, ModelSoft_23_8EF78B9A4A27EC85D11E16B998080DD3) == 0x000040, "Member 'FSUiAnimNotifyModel::ModelSoft_23_8EF78B9A4A27EC85D11E16B998080DD3' has a wrong offset!");
static_assert(offsetof(FSUiAnimNotifyModel, ModelIndex_29_DE6F758A4695D9928A5933B4646F5059) == 0x000070, "Member 'FSUiAnimNotifyModel::ModelIndex_29_DE6F758A4695D9928A5933B4646F5059' has a wrong offset!");
static_assert(offsetof(FSUiAnimNotifyModel, MaterialData_32_EF766BA94613CE5F761D8A865D1BD0B0) == 0x000078, "Member 'FSUiAnimNotifyModel::MaterialData_32_EF766BA94613CE5F761D8A865D1BD0B0' has a wrong offset!");
static_assert(offsetof(FSUiAnimNotifyModel, MaterialTypeName_36_738FC29143FC65A30DE85AB74009C7A8) == 0x0000A8, "Member 'FSUiAnimNotifyModel::MaterialTypeName_36_738FC29143FC65A30DE85AB74009C7A8' has a wrong offset!");
static_assert(offsetof(FSUiAnimNotifyModel, AnimState_39_190742AD44B20F9D36FC2BBFF0F6F4E2) == 0x0000B8, "Member 'FSUiAnimNotifyModel::AnimState_39_190742AD44B20F9D36FC2BBFF0F6F4E2' has a wrong offset!");

}
