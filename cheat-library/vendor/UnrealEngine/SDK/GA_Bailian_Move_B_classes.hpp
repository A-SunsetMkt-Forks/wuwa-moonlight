#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Bailian_Move_B

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Summon_Soul_Father_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Bailian_Move_B.GA_Bailian_Move_B_C
// 0x0008 (0x0560 - 0x0558)
class UGA_Bailian_Move_B_C final : public UGA_Summon_Soul_Father_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Bailian_Move_B_C;                // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Bailian_Move_B(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnFinish_A408A1FB4BA29DD64D303BBC8E024EC7();
	void OnCompleted_5D118C384AE61F1C80292E81CB895562();
	void OnBlendOut_5D118C384AE61F1C80292E81CB895562();
	void OnInterrupted_5D118C384AE61F1C80292E81CB895562();
	void OnCancelled_5D118C384AE61F1C80292E81CB895562();
	void OnTick_5D118C384AE61F1C80292E81CB895562();
	void Added_21071CB943CD992BF8EFD6A391ACA459(const struct FGameplayTag& Tag);

	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags) const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Bailian_Move_B_C">();
	}
	static class UGA_Bailian_Move_B_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Bailian_Move_B_C>();
	}
};
static_assert(alignof(UGA_Bailian_Move_B_C) == 0x000008, "Wrong alignment on UGA_Bailian_Move_B_C");
static_assert(sizeof(UGA_Bailian_Move_B_C) == 0x000560, "Wrong size on UGA_Bailian_Move_B_C");
static_assert(offsetof(UGA_Bailian_Move_B_C, UberGraphFrame_GA_Bailian_Move_B_C) == 0x000558, "Member 'UGA_Bailian_Move_B_C::UberGraphFrame_GA_Bailian_Move_B_C' has a wrong offset!");

}

