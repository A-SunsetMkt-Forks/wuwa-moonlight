#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyStateAddMaterialController

#include "Basic.hpp"

#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyStateAddMaterialController.TsAnimNotifyStateAddMaterialController_C
// 0x0010 (0x0058 - 0x0048)
class UTsAnimNotifyStateAddMaterialController_C final : public UKuroAnimNotifyState
{
public:
	class UPD_CharacterControllerData_C*          ControllerData;                                    // 0x0048(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                                UserData;                                          // 0x0050(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool K2_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	bool K2_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyStateAddMaterialController_C">();
	}
	static class UTsAnimNotifyStateAddMaterialController_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyStateAddMaterialController_C>();
	}
};
static_assert(alignof(UTsAnimNotifyStateAddMaterialController_C) == 0x000008, "Wrong alignment on UTsAnimNotifyStateAddMaterialController_C");
static_assert(sizeof(UTsAnimNotifyStateAddMaterialController_C) == 0x000058, "Wrong size on UTsAnimNotifyStateAddMaterialController_C");
static_assert(offsetof(UTsAnimNotifyStateAddMaterialController_C, ControllerData) == 0x000048, "Member 'UTsAnimNotifyStateAddMaterialController_C::ControllerData' has a wrong offset!");
static_assert(offsetof(UTsAnimNotifyStateAddMaterialController_C, UserData) == 0x000050, "Member 'UTsAnimNotifyStateAddMaterialController_C::UserData' has a wrong offset!");

}

