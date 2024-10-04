#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_ME1QunJingMd00001_Attack03

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Monster_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_ME1QunJingMd00001_Attack03.GA_ME1QunJingMd00001_Attack03_C
// 0x0008 (0x0570 - 0x0568)
class UGA_ME1QunJingMd00001_Attack03_C final : public UGA_Monster_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_ME1QunJingMd00001_Attack03_C;    // 0x0568(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_ME1QunJingMd00001_Attack03(int32 EntryPoint);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E81E827CD97();
	void OnBlendOut_5D118C384AE61F1C80292E81E827CD97();
	void OnInterrupted_5D118C384AE61F1C80292E81E827CD97();
	void OnCancelled_5D118C384AE61F1C80292E81E827CD97();
	void OnTick_5D118C384AE61F1C80292E81E827CD97();
	void EventReceived_18B59F5945020DB23C42FD887D4F9865(const struct FGameplayEventData& Payload);
	void EventReceived_18B59F5945020DB23C42FD88D93DDCD8(const struct FGameplayEventData& Payload);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_ME1QunJingMd00001_Attack03_C">();
	}
	static class UGA_ME1QunJingMd00001_Attack03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_ME1QunJingMd00001_Attack03_C>();
	}
};
static_assert(alignof(UGA_ME1QunJingMd00001_Attack03_C) == 0x000008, "Wrong alignment on UGA_ME1QunJingMd00001_Attack03_C");
static_assert(sizeof(UGA_ME1QunJingMd00001_Attack03_C) == 0x000570, "Wrong size on UGA_ME1QunJingMd00001_Attack03_C");
static_assert(offsetof(UGA_ME1QunJingMd00001_Attack03_C, UberGraphFrame_GA_ME1QunJingMd00001_Attack03_C) == 0x000568, "Member 'UGA_ME1QunJingMd00001_Attack03_C::UberGraphFrame_GA_ME1QunJingMd00001_Attack03_C' has a wrong offset!");

}
