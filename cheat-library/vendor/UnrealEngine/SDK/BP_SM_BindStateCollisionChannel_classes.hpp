#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SM_BindStateCollisionChannel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "SMSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SM_BindStateCollisionChannel.BP_SM_BindStateCollisionChannel_C
// 0x0010 (0x0040 - 0x0030)
class UBP_SM_BindStateCollisionChannel_C final : public UASMBindState
{
public:
	TArray<ECollisionChannel>                     IgnoreChannels;                                    // 0x0030(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SM_BindStateCollisionChannel_C">();
	}
	static class UBP_SM_BindStateCollisionChannel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SM_BindStateCollisionChannel_C>();
	}
};
static_assert(alignof(UBP_SM_BindStateCollisionChannel_C) == 0x000008, "Wrong alignment on UBP_SM_BindStateCollisionChannel_C");
static_assert(sizeof(UBP_SM_BindStateCollisionChannel_C) == 0x000040, "Wrong size on UBP_SM_BindStateCollisionChannel_C");
static_assert(offsetof(UBP_SM_BindStateCollisionChannel_C, IgnoreChannels) == 0x000030, "Member 'UBP_SM_BindStateCollisionChannel_C::IgnoreChannels' has a wrong offset!");

}

