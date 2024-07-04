#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SM_TaskMontage

#include "Basic.hpp"

#include "SMSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SM_TaskMontage.BP_SM_TaskMontage_C
// 0x0018 (0x0048 - 0x0030)
class UBP_SM_TaskMontage_C final : public UASMTask
{
public:
	class FString                                 MontageName;                                       // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          ________;                                          // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          A_S_;                                              // 0x0041(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_30F8[0x2];                                     // 0x0042(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         BlendInTime;                                       // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SM_TaskMontage_C">();
	}
	static class UBP_SM_TaskMontage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SM_TaskMontage_C>();
	}
};
static_assert(alignof(UBP_SM_TaskMontage_C) == 0x000008, "Wrong alignment on UBP_SM_TaskMontage_C");
static_assert(sizeof(UBP_SM_TaskMontage_C) == 0x000048, "Wrong size on UBP_SM_TaskMontage_C");
static_assert(offsetof(UBP_SM_TaskMontage_C, MontageName) == 0x000030, "Member 'UBP_SM_TaskMontage_C::MontageName' has a wrong offset!");
static_assert(offsetof(UBP_SM_TaskMontage_C, ________) == 0x000040, "Member 'UBP_SM_TaskMontage_C::________' has a wrong offset!");
static_assert(offsetof(UBP_SM_TaskMontage_C, A_S_) == 0x000041, "Member 'UBP_SM_TaskMontage_C::A_S_' has a wrong offset!");
static_assert(offsetof(UBP_SM_TaskMontage_C, BlendInTime) == 0x000044, "Member 'UBP_SM_TaskMontage_C::BlendInTime' has a wrong offset!");

}

