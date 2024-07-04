#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_Hook

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Role_Hook.GA_Role_Hook_C
// 0x0038 (0x0568 - 0x0530)
class UGA_Role_Hook_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Role_Hook_C;                     // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ATsBaseCharacter_C*                     _r;                                                // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Forward;                                           // 0x0540(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                EndPos;                                            // 0x054C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          InWater;                                           // 0x0558(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_37F3[0x3];                                     // 0x0559(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                LastLocation;                                      // 0x055C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Role_Hook(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E813209EC9F();
	void OnBlendOut_5D118C384AE61F1C80292E813209EC9F();
	void OnInterrupted_5D118C384AE61F1C80292E813209EC9F();
	void OnCancelled_5D118C384AE61F1C80292E813209EC9F();
	void OnTick_5D118C384AE61F1C80292E813209EC9F();
	void EventReceived_BE49D8B84159B3E2C93AFC8C33E21F9B(const struct FGameplayEventData& Payload);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Role_Hook_C">();
	}
	static class UGA_Role_Hook_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Role_Hook_C>();
	}
};
static_assert(alignof(UGA_Role_Hook_C) == 0x000008, "Wrong alignment on UGA_Role_Hook_C");
static_assert(sizeof(UGA_Role_Hook_C) == 0x000568, "Wrong size on UGA_Role_Hook_C");
static_assert(offsetof(UGA_Role_Hook_C, UberGraphFrame_GA_Role_Hook_C) == 0x000530, "Member 'UGA_Role_Hook_C::UberGraphFrame_GA_Role_Hook_C' has a wrong offset!");
static_assert(offsetof(UGA_Role_Hook_C, _r) == 0x000538, "Member 'UGA_Role_Hook_C::_r' has a wrong offset!");
static_assert(offsetof(UGA_Role_Hook_C, Forward) == 0x000540, "Member 'UGA_Role_Hook_C::Forward' has a wrong offset!");
static_assert(offsetof(UGA_Role_Hook_C, EndPos) == 0x00054C, "Member 'UGA_Role_Hook_C::EndPos' has a wrong offset!");
static_assert(offsetof(UGA_Role_Hook_C, InWater) == 0x000558, "Member 'UGA_Role_Hook_C::InWater' has a wrong offset!");
static_assert(offsetof(UGA_Role_Hook_C, LastLocation) == 0x00055C, "Member 'UGA_Role_Hook_C::LastLocation' has a wrong offset!");

}

