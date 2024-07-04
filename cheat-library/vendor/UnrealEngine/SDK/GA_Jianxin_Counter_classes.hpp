#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Jianxin_Counter

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "EBulletType_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Jianxin_Counter.GA_Jianxin_Counter_C
// 0x0020 (0x0550 - 0x0530)
class UGA_Jianxin_Counter_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Jianxin_Counter_C;               // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	EBulletType                                   P9__;                                              // 0x0538(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2A78[0x3];                                     // 0x0539(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         EntityID_0;                                        // 0x053C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 ____;                                              // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ATsBaseCharacter_C*                     ___;                                               // 0x0548(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Jianxin_Counter(int32 EntryPoint);
	void __I___0(class ATsBaseCharacter_C* _r, const struct FSHitInformation& __pn);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E8177212379();
	void OnBlendOut_5D118C384AE61F1C80292E8177212379();
	void OnInterrupted_5D118C384AE61F1C80292E8177212379();
	void OnCancelled_5D118C384AE61F1C80292E8177212379();
	void OnTick_5D118C384AE61F1C80292E8177212379();
	void EventReceived_A458739D4D91AC052DA145AE49B878D1(const struct FGameplayEventData& Payload);
	void OnCompleted_5D118C384AE61F1C80292E81F1145DA6();
	void OnBlendOut_5D118C384AE61F1C80292E81F1145DA6();
	void OnInterrupted_5D118C384AE61F1C80292E81F1145DA6();
	void OnCancelled_5D118C384AE61F1C80292E81F1145DA6();
	void OnTick_5D118C384AE61F1C80292E81F1145DA6();
	void OnCompleted_5D118C384AE61F1C80292E81783A61BE();
	void OnBlendOut_5D118C384AE61F1C80292E81783A61BE();
	void OnInterrupted_5D118C384AE61F1C80292E81783A61BE();
	void OnCancelled_5D118C384AE61F1C80292E81783A61BE();
	void OnTick_5D118C384AE61F1C80292E81783A61BE();
	void OnCompleted_5D118C384AE61F1C80292E81C52C8CBB();
	void OnBlendOut_5D118C384AE61F1C80292E81C52C8CBB();
	void OnInterrupted_5D118C384AE61F1C80292E81C52C8CBB();
	void OnCancelled_5D118C384AE61F1C80292E81C52C8CBB();
	void OnTick_5D118C384AE61F1C80292E81C52C8CBB();
	void OnCompleted_5D118C384AE61F1C80292E8159145A20();
	void OnBlendOut_5D118C384AE61F1C80292E8159145A20();
	void OnInterrupted_5D118C384AE61F1C80292E8159145A20();
	void OnCancelled_5D118C384AE61F1C80292E8159145A20();
	void OnTick_5D118C384AE61F1C80292E8159145A20();
	void OnCompleted_5D118C384AE61F1C80292E811CAD9508();
	void OnBlendOut_5D118C384AE61F1C80292E811CAD9508();
	void OnInterrupted_5D118C384AE61F1C80292E811CAD9508();
	void OnCancelled_5D118C384AE61F1C80292E811CAD9508();
	void OnTick_5D118C384AE61F1C80292E811CAD9508();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Jianxin_Counter_C">();
	}
	static class UGA_Jianxin_Counter_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Jianxin_Counter_C>();
	}
};
static_assert(alignof(UGA_Jianxin_Counter_C) == 0x000008, "Wrong alignment on UGA_Jianxin_Counter_C");
static_assert(sizeof(UGA_Jianxin_Counter_C) == 0x000550, "Wrong size on UGA_Jianxin_Counter_C");
static_assert(offsetof(UGA_Jianxin_Counter_C, UberGraphFrame_GA_Jianxin_Counter_C) == 0x000530, "Member 'UGA_Jianxin_Counter_C::UberGraphFrame_GA_Jianxin_Counter_C' has a wrong offset!");
static_assert(offsetof(UGA_Jianxin_Counter_C, P9__) == 0x000538, "Member 'UGA_Jianxin_Counter_C::P9__' has a wrong offset!");
static_assert(offsetof(UGA_Jianxin_Counter_C, EntityID_0) == 0x00053C, "Member 'UGA_Jianxin_Counter_C::EntityID_0' has a wrong offset!");
static_assert(offsetof(UGA_Jianxin_Counter_C, ____) == 0x000540, "Member 'UGA_Jianxin_Counter_C::____' has a wrong offset!");
static_assert(offsetof(UGA_Jianxin_Counter_C, ___) == 0x000548, "Member 'UGA_Jianxin_Counter_C::___' has a wrong offset!");

}

