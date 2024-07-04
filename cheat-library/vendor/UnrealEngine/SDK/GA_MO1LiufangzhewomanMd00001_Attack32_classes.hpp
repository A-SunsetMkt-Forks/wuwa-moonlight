#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_MO1LiufangzhewomanMd00001_Attack32

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "GA_Monster_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GA_MO1LiufangzhewomanMd00001_Attack32.GA_MO1LiufangzhewomanMd00001_Attack32_C
// 0x0008 (0x0548 - 0x0540)
class UGA_MO1LiufangzhewomanMd00001_Attack32_C final : public UGA_Monster_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_GA_MO1LiufangzhewomanMd00001_Attack32_C; // 0x0540(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_GA_MO1LiufangzhewomanMd00001_Attack32(int32 EntryPoint);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnCompleted_5D118C384AE61F1C80292E81E8FA4669();
	void OnBlendOut_5D118C384AE61F1C80292E81E8FA4669();
	void OnInterrupted_5D118C384AE61F1C80292E81E8FA4669();
	void OnCancelled_5D118C384AE61F1C80292E81E8FA4669();
	void OnTick_5D118C384AE61F1C80292E81E8FA4669();
	void OnFinish_7D560AF14C0D54C6F3A3EE9DF18E95FE();
	void OnCompleted_5D118C384AE61F1C80292E81EDF99D6A();
	void OnBlendOut_5D118C384AE61F1C80292E81EDF99D6A();
	void OnInterrupted_5D118C384AE61F1C80292E81EDF99D6A();
	void OnCancelled_5D118C384AE61F1C80292E81EDF99D6A();
	void OnTick_5D118C384AE61F1C80292E81EDF99D6A();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GA_MO1LiufangzhewomanMd00001_Attack32_C">();
	}
	static class UGA_MO1LiufangzhewomanMd00001_Attack32_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGA_MO1LiufangzhewomanMd00001_Attack32_C>();
	}
};
static_assert(alignof(UGA_MO1LiufangzhewomanMd00001_Attack32_C) == 0x000008, "Wrong alignment on UGA_MO1LiufangzhewomanMd00001_Attack32_C");
static_assert(sizeof(UGA_MO1LiufangzhewomanMd00001_Attack32_C) == 0x000548, "Wrong size on UGA_MO1LiufangzhewomanMd00001_Attack32_C");
static_assert(offsetof(UGA_MO1LiufangzhewomanMd00001_Attack32_C, UberGraphFrame_GA_MO1LiufangzhewomanMd00001_Attack32_C) == 0x000540, "Member 'UGA_MO1LiufangzhewomanMd00001_Attack32_C::UberGraphFrame_GA_MO1LiufangzhewomanMd00001_Attack32_C' has a wrong offset!");

}

