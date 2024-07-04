#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Summon_ChangeCharacter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Summon_Soul_Father_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Summon_ChangeCharacter.GA_Summon_ChangeCharacter_C
// 0x0028 (0x0580 - 0x0558)
class UGA_Summon_ChangeCharacter_C final : public UGA_Summon_Soul_Father_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Summon_ChangeCharacter_C;        // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int64                                         ___S_ID_0;                                         // 0x0560(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ______0;                                           // 0x0568(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_38DC[0x3];                                     // 0x0569(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         ___;                                               // 0x056C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         __i_ID;                                            // 0x0570(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_38DD[0x4];                                     // 0x0574(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ATsBaseCharacter_C*                     __i_S;                                             // 0x0578(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Summon_ChangeCharacter(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E814BD11116();
	void OnBlendOut_5D118C384AE61F1C80292E814BD11116();
	void OnInterrupted_5D118C384AE61F1C80292E814BD11116();
	void OnCancelled_5D118C384AE61F1C80292E814BD11116();
	void OnTick_5D118C384AE61F1C80292E814BD11116();
	void EventReceived_18B59F5945020DB23C42FD880C6581D0(const struct FGameplayEventData& Payload);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Summon_ChangeCharacter_C">();
	}
	static class UGA_Summon_ChangeCharacter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Summon_ChangeCharacter_C>();
	}
};
static_assert(alignof(UGA_Summon_ChangeCharacter_C) == 0x000008, "Wrong alignment on UGA_Summon_ChangeCharacter_C");
static_assert(sizeof(UGA_Summon_ChangeCharacter_C) == 0x000580, "Wrong size on UGA_Summon_ChangeCharacter_C");
static_assert(offsetof(UGA_Summon_ChangeCharacter_C, UberGraphFrame_GA_Summon_ChangeCharacter_C) == 0x000558, "Member 'UGA_Summon_ChangeCharacter_C::UberGraphFrame_GA_Summon_ChangeCharacter_C' has a wrong offset!");
static_assert(offsetof(UGA_Summon_ChangeCharacter_C, ___S_ID_0) == 0x000560, "Member 'UGA_Summon_ChangeCharacter_C::___S_ID_0' has a wrong offset!");
static_assert(offsetof(UGA_Summon_ChangeCharacter_C, ______0) == 0x000568, "Member 'UGA_Summon_ChangeCharacter_C::______0' has a wrong offset!");
static_assert(offsetof(UGA_Summon_ChangeCharacter_C, ___) == 0x00056C, "Member 'UGA_Summon_ChangeCharacter_C::___' has a wrong offset!");
static_assert(offsetof(UGA_Summon_ChangeCharacter_C, __i_ID) == 0x000570, "Member 'UGA_Summon_ChangeCharacter_C::__i_ID' has a wrong offset!");
static_assert(offsetof(UGA_Summon_ChangeCharacter_C, __i_S) == 0x000578, "Member 'UGA_Summon_ChangeCharacter_C::__i_S' has a wrong offset!");

}

