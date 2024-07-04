#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_VisionControl

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_VisionControl.GA_VisionControl_C
// 0x0010 (0x0540 - 0x0530)
class UGA_VisionControl_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_VisionControl_C;                 // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Count;                                             // 0x0538(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_VisionControl(int32 EntryPoint);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_VisionControl_C">();
	}
	static class UGA_VisionControl_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_VisionControl_C>();
	}
};
static_assert(alignof(UGA_VisionControl_C) == 0x000008, "Wrong alignment on UGA_VisionControl_C");
static_assert(sizeof(UGA_VisionControl_C) == 0x000540, "Wrong size on UGA_VisionControl_C");
static_assert(offsetof(UGA_VisionControl_C, UberGraphFrame_GA_VisionControl_C) == 0x000530, "Member 'UGA_VisionControl_C::UberGraphFrame_GA_VisionControl_C' has a wrong offset!");
static_assert(offsetof(UGA_VisionControl_C, Count) == 0x000538, "Member 'UGA_VisionControl_C::Count' has a wrong offset!");

}

