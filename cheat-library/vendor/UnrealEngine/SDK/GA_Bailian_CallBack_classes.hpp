#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Bailian_CallBack

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Summon_Soul_Father_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Bailian_CallBack.GA_Bailian_CallBack_C
// 0x0008 (0x0560 - 0x0558)
class UGA_Bailian_CallBack_C final : public UGA_Summon_Soul_Father_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Bailian_CallBack_C;              // 0x0558(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_Bailian_CallBack(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E81770187B3();
	void OnBlendOut_5D118C384AE61F1C80292E81770187B3();
	void OnInterrupted_5D118C384AE61F1C80292E81770187B3();
	void OnCancelled_5D118C384AE61F1C80292E81770187B3();
	void OnTick_5D118C384AE61F1C80292E81770187B3();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Bailian_CallBack_C">();
	}
	static class UGA_Bailian_CallBack_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Bailian_CallBack_C>();
	}
};
static_assert(alignof(UGA_Bailian_CallBack_C) == 0x000008, "Wrong alignment on UGA_Bailian_CallBack_C");
static_assert(sizeof(UGA_Bailian_CallBack_C) == 0x000560, "Wrong size on UGA_Bailian_CallBack_C");
static_assert(offsetof(UGA_Bailian_CallBack_C, UberGraphFrame_GA_Bailian_CallBack_C) == 0x000558, "Member 'UGA_Bailian_CallBack_C::UberGraphFrame_GA_Bailian_CallBack_C' has a wrong offset!");

}

