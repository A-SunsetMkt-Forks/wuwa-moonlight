#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Hook_SwingingEnd

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Hook_SwingingEnd.GA_Hook_SwingingEnd_C
// 0x0018 (0x0548 - 0x0530)
class UGA_Hook_SwingingEnd_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Hook_SwingingEnd_C;              // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                Fa____;                                            // 0x0538(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Hook_SwingingEnd(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void Added_54E5FB1C47764D94BD245DAB78EF78CB(const struct FGameplayTag& Tag);
	void EventReceived_395B7D3941A9DA8F2A9D14B334F75D10(const struct FGameplayEventData& Payload);
	void OnCompleted_5D118C384AE61F1C80292E8136286539();
	void OnBlendOut_5D118C384AE61F1C80292E8136286539();
	void OnInterrupted_5D118C384AE61F1C80292E8136286539();
	void OnCancelled_5D118C384AE61F1C80292E8136286539();
	void OnTick_5D118C384AE61F1C80292E8136286539();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Hook_SwingingEnd_C">();
	}
	static class UGA_Hook_SwingingEnd_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Hook_SwingingEnd_C>();
	}
};
static_assert(alignof(UGA_Hook_SwingingEnd_C) == 0x000008, "Wrong alignment on UGA_Hook_SwingingEnd_C");
static_assert(sizeof(UGA_Hook_SwingingEnd_C) == 0x000548, "Wrong size on UGA_Hook_SwingingEnd_C");
static_assert(offsetof(UGA_Hook_SwingingEnd_C, UberGraphFrame_GA_Hook_SwingingEnd_C) == 0x000530, "Member 'UGA_Hook_SwingingEnd_C::UberGraphFrame_GA_Hook_SwingingEnd_C' has a wrong offset!");
static_assert(offsetof(UGA_Hook_SwingingEnd_C, Fa____) == 0x000538, "Member 'UGA_Hook_SwingingEnd_C::Fa____' has a wrong offset!");

}

