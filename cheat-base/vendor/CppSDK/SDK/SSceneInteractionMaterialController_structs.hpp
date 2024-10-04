#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SSceneInteractionMaterialController

#include "Basic.hpp"


namespace SDK
{

// UserDefinedStruct SSceneInteractionMaterialController.SSceneInteractionMaterialController
// 0x0030 (0x0030 - 0x0000)
struct FSSceneInteractionMaterialController final
{
public:
	TArray<class AActor*>                         Actors_51_687ABCC0441F5CD4AECFAD9D7EA2B413;        // 0x0000(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate)
	class UItemMaterialControllerActorData_C*     Data_55_25C967394C0663A8A0A26D867C5575EA;          // 0x0010(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         TailIndex_67_F69EDDA44B55D01837AE0391BAA320F5;     // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1C[0x4];                                       // 0x001C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UMaterialInstance*                      Materials_71_69904A7246FD86B4B936138898883802;     // 0x0020(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsRevertMaterial_73_F98AC4A64585056B558BAFAF9D75A7F9; // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FSSceneInteractionMaterialController) == 0x000008, "Wrong alignment on FSSceneInteractionMaterialController");
static_assert(sizeof(FSSceneInteractionMaterialController) == 0x000030, "Wrong size on FSSceneInteractionMaterialController");
static_assert(offsetof(FSSceneInteractionMaterialController, Actors_51_687ABCC0441F5CD4AECFAD9D7EA2B413) == 0x000000, "Member 'FSSceneInteractionMaterialController::Actors_51_687ABCC0441F5CD4AECFAD9D7EA2B413' has a wrong offset!");
static_assert(offsetof(FSSceneInteractionMaterialController, Data_55_25C967394C0663A8A0A26D867C5575EA) == 0x000010, "Member 'FSSceneInteractionMaterialController::Data_55_25C967394C0663A8A0A26D867C5575EA' has a wrong offset!");
static_assert(offsetof(FSSceneInteractionMaterialController, TailIndex_67_F69EDDA44B55D01837AE0391BAA320F5) == 0x000018, "Member 'FSSceneInteractionMaterialController::TailIndex_67_F69EDDA44B55D01837AE0391BAA320F5' has a wrong offset!");
static_assert(offsetof(FSSceneInteractionMaterialController, Materials_71_69904A7246FD86B4B936138898883802) == 0x000020, "Member 'FSSceneInteractionMaterialController::Materials_71_69904A7246FD86B4B936138898883802' has a wrong offset!");
static_assert(offsetof(FSSceneInteractionMaterialController, IsRevertMaterial_73_F98AC4A64585056B558BAFAF9D75A7F9) == 0x000028, "Member 'FSSceneInteractionMaterialController::IsRevertMaterial_73_F98AC4A64585056B558BAFAF9D75A7F9' has a wrong offset!");

}
