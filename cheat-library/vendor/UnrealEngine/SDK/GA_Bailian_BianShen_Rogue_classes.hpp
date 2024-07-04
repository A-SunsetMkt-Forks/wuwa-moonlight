#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Bailian_BianShen_Rogue

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Bailian_BianShen_Rogue.GA_Bailian_BianShen_Rogue_C
// 0x0020 (0x0550 - 0x0530)
class UGA_Bailian_BianShen_Rogue_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Bailian_BianShen_Rogue_C;        // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                                _r_1P_;                                            // 0x0538(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                _r__P_;                                            // 0x0540(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         _r_1P_Handle;                                      // 0x0548(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Bailian_BianShen_Rogue(int32 EntryPoint);
	void P___(int32 P_ID);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void Removed_DB9F64004F8908FEAD99D381BF21279A(const struct FGameplayTag& Tag);
	void OnCompleted_5D118C384AE61F1C80292E815FEFBF82();
	void OnBlendOut_5D118C384AE61F1C80292E815FEFBF82();
	void OnInterrupted_5D118C384AE61F1C80292E815FEFBF82();
	void OnCancelled_5D118C384AE61F1C80292E815FEFBF82();
	void OnTick_5D118C384AE61F1C80292E815FEFBF82();
	void Added_21071CB943CD992BF8EFD6A320FAC5B4(const struct FGameplayTag& Tag);
	void OnCompleted_5D118C384AE61F1C80292E815362A85D();
	void OnBlendOut_5D118C384AE61F1C80292E815362A85D();
	void OnInterrupted_5D118C384AE61F1C80292E815362A85D();
	void OnCancelled_5D118C384AE61F1C80292E815362A85D();
	void OnTick_5D118C384AE61F1C80292E815362A85D();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Bailian_BianShen_Rogue_C">();
	}
	static class UGA_Bailian_BianShen_Rogue_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Bailian_BianShen_Rogue_C>();
	}
};
static_assert(alignof(UGA_Bailian_BianShen_Rogue_C) == 0x000008, "Wrong alignment on UGA_Bailian_BianShen_Rogue_C");
static_assert(sizeof(UGA_Bailian_BianShen_Rogue_C) == 0x000550, "Wrong size on UGA_Bailian_BianShen_Rogue_C");
static_assert(offsetof(UGA_Bailian_BianShen_Rogue_C, UberGraphFrame_GA_Bailian_BianShen_Rogue_C) == 0x000530, "Member 'UGA_Bailian_BianShen_Rogue_C::UberGraphFrame_GA_Bailian_BianShen_Rogue_C' has a wrong offset!");
static_assert(offsetof(UGA_Bailian_BianShen_Rogue_C, _r_1P_) == 0x000538, "Member 'UGA_Bailian_BianShen_Rogue_C::_r_1P_' has a wrong offset!");
static_assert(offsetof(UGA_Bailian_BianShen_Rogue_C, _r__P_) == 0x000540, "Member 'UGA_Bailian_BianShen_Rogue_C::_r__P_' has a wrong offset!");
static_assert(offsetof(UGA_Bailian_BianShen_Rogue_C, _r_1P_Handle) == 0x000548, "Member 'UGA_Bailian_BianShen_Rogue_C::_r_1P_Handle' has a wrong offset!");

}

