#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_ManipulateThrow

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_Role_ManipulateThrow.GA_Role_ManipulateThrow_C
// 0x0010 (0x0540 - 0x0530)
class UGA_Role_ManipulateThrow_C final : public UGA_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_Role_ManipulateThrow_C;          // 0x0530(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                         Entity_Id;                                         // 0x0538(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_GA_Role_ManipulateThrow(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnFinish_AF1BF1C04B887958A892F295ED5B1B60();
	void OnCompleted_5D118C384AE61F1C80292E81ECC61D57();
	void OnBlendOut_5D118C384AE61F1C80292E81ECC61D57();
	void OnInterrupted_5D118C384AE61F1C80292E81ECC61D57();
	void OnCancelled_5D118C384AE61F1C80292E81ECC61D57();
	void OnTick_5D118C384AE61F1C80292E81ECC61D57();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_Role_ManipulateThrow_C">();
	}
	static class UGA_Role_ManipulateThrow_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_Role_ManipulateThrow_C>();
	}
};
static_assert(alignof(UGA_Role_ManipulateThrow_C) == 0x000008, "Wrong alignment on UGA_Role_ManipulateThrow_C");
static_assert(sizeof(UGA_Role_ManipulateThrow_C) == 0x000540, "Wrong size on UGA_Role_ManipulateThrow_C");
static_assert(offsetof(UGA_Role_ManipulateThrow_C, UberGraphFrame_GA_Role_ManipulateThrow_C) == 0x000530, "Member 'UGA_Role_ManipulateThrow_C::UberGraphFrame_GA_Role_ManipulateThrow_C' has a wrong offset!");
static_assert(offsetof(UGA_Role_ManipulateThrow_C, Entity_Id) == 0x000538, "Member 'UGA_Role_ManipulateThrow_C::Entity_Id' has a wrong offset!");

}

