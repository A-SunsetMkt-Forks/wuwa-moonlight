#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyRoleFinishInteract

#include "Basic.hpp"

#include "ERoleInteractType_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifyRoleFinishInteract.TsAnimNotifyRoleFinishInteract_C
// 0x0008 (0x0050 - 0x0048)
class UTsAnimNotifyRoleFinishInteract_C final : public UKuroAnimNotify
{
public:
	ERoleInteractType                             Type;                                              // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	bool K2_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifyRoleFinishInteract_C">();
	}
	static class UTsAnimNotifyRoleFinishInteract_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifyRoleFinishInteract_C>();
	}
};
static_assert(alignof(UTsAnimNotifyRoleFinishInteract_C) == 0x000008, "Wrong alignment on UTsAnimNotifyRoleFinishInteract_C");
static_assert(sizeof(UTsAnimNotifyRoleFinishInteract_C) == 0x000050, "Wrong size on UTsAnimNotifyRoleFinishInteract_C");
static_assert(offsetof(UTsAnimNotifyRoleFinishInteract_C, Type) == 0x000048, "Member 'UTsAnimNotifyRoleFinishInteract_C::Type' has a wrong offset!");

}

