#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsUiSceneRoleActor

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "TsUiSceneActor_classes.hpp"
#include "ECharacterDitherType_structs.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsUiSceneRoleActor.TsUiSceneRoleActor_C
// 0x0010 (0x0300 - 0x02F0)
class ATsUiSceneRoleActor_C final : public ATsUiSceneActor_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UCharRenderingComponent_C*              CharRenderingComponent;                            // 0x02F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_TsUiSceneRoleActor(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void SetDitherEffect(float DitherRate, ECharacterDitherType DitherType);
	bool IsShowUiWepaonEffect();
	void InitComponent();
	void OnRoleIdChange();
	void OnRoleMeshLoadComplete();
	bool GetIsRoleMeshLoading();
	void SetDitherEffectWithWeapon(float DitherRate, ECharacterDitherType DitherType);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsUiSceneRoleActor_C">();
	}
	static class ATsUiSceneRoleActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ATsUiSceneRoleActor_C>();
	}
};
static_assert(alignof(ATsUiSceneRoleActor_C) == 0x000010, "Wrong alignment on ATsUiSceneRoleActor_C");
static_assert(sizeof(ATsUiSceneRoleActor_C) == 0x000300, "Wrong size on ATsUiSceneRoleActor_C");
static_assert(offsetof(ATsUiSceneRoleActor_C, UberGraphFrame) == 0x0002F0, "Member 'ATsUiSceneRoleActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ATsUiSceneRoleActor_C, CharRenderingComponent) == 0x0002F8, "Member 'ATsUiSceneRoleActor_C::CharRenderingComponent' has a wrong offset!");

}

