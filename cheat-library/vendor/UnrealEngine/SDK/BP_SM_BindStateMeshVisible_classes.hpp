#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_SM_BindStateMeshVisible

#include "Basic.hpp"

#include "SMSystem_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_SM_BindStateMeshVisible.BP_SM_BindStateMeshVisible_C
// 0x0018 (0x0048 - 0x0030)
class UBP_SM_BindStateMeshVisible_C final : public UASMBindState
{
public:
	class FString                                 Tag;                                               // 0x0030(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                          __;                                                // 0x0040(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          _Plus__P__;                                        // 0x0041(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_SM_BindStateMeshVisible_C">();
	}
	static class UBP_SM_BindStateMeshVisible_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_SM_BindStateMeshVisible_C>();
	}
};
static_assert(alignof(UBP_SM_BindStateMeshVisible_C) == 0x000008, "Wrong alignment on UBP_SM_BindStateMeshVisible_C");
static_assert(sizeof(UBP_SM_BindStateMeshVisible_C) == 0x000048, "Wrong size on UBP_SM_BindStateMeshVisible_C");
static_assert(offsetof(UBP_SM_BindStateMeshVisible_C, Tag) == 0x000030, "Member 'UBP_SM_BindStateMeshVisible_C::Tag' has a wrong offset!");
static_assert(offsetof(UBP_SM_BindStateMeshVisible_C, __) == 0x000040, "Member 'UBP_SM_BindStateMeshVisible_C::__' has a wrong offset!");
static_assert(offsetof(UBP_SM_BindStateMeshVisible_C, _Plus__P__) == 0x000041, "Member 'UBP_SM_BindStateMeshVisible_C::_Plus__P__' has a wrong offset!");

}

