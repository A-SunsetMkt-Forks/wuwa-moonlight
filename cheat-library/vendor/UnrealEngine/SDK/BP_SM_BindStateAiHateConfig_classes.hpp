#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SM_BindStateAiHateConfig

#include "Basic.hpp"

#include "SMSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SM_BindStateAiHateConfig.BP_SM_BindStateAiHateConfig_C
// 0x0008 (0x0038 - 0x0030)
class UBP_SM_BindStateAiHateConfig_C final : public UASMBindState
{
public:
	int32                                         ConfigId;                                          // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SM_BindStateAiHateConfig_C">();
	}
	static class UBP_SM_BindStateAiHateConfig_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SM_BindStateAiHateConfig_C>();
	}
};
static_assert(alignof(UBP_SM_BindStateAiHateConfig_C) == 0x000008, "Wrong alignment on UBP_SM_BindStateAiHateConfig_C");
static_assert(sizeof(UBP_SM_BindStateAiHateConfig_C) == 0x000038, "Wrong size on UBP_SM_BindStateAiHateConfig_C");
static_assert(offsetof(UBP_SM_BindStateAiHateConfig_C, ConfigId) == 0x000030, "Member 'UBP_SM_BindStateAiHateConfig_C::ConfigId' has a wrong offset!");

}

