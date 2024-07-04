#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AIC_MO1ShuimuguMd00601

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "AIC_AICommon_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AIC_MO1ShuimuguMd00601.AIC_MO1ShuimuguMd00601_C
// 0x0008 (0x0788 - 0x0780)
class AAIC_MO1ShuimuguMd00601_C final : public AAIC_AICommon_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_AIC_MO1ShuimuguMd00601_C;           // 0x0780(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_AIC_MO1ShuimuguMd00601(int32 EntryPoint);
	void Four___(class ATsBaseCharacter_C* _r, const struct FGameplayTag& _MTag, class ATsBaseCharacter_C* ___);
	void OnStart();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AIC_MO1ShuimuguMd00601_C">();
	}
	static class AAIC_MO1ShuimuguMd00601_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAIC_MO1ShuimuguMd00601_C>();
	}
};
static_assert(alignof(AAIC_MO1ShuimuguMd00601_C) == 0x000008, "Wrong alignment on AAIC_MO1ShuimuguMd00601_C");
static_assert(sizeof(AAIC_MO1ShuimuguMd00601_C) == 0x000788, "Wrong size on AAIC_MO1ShuimuguMd00601_C");
static_assert(offsetof(AAIC_MO1ShuimuguMd00601_C, UberGraphFrame_AIC_MO1ShuimuguMd00601_C) == 0x000780, "Member 'AAIC_MO1ShuimuguMd00601_C::UberGraphFrame_AIC_MO1ShuimuguMd00601_C' has a wrong offset!");

}

