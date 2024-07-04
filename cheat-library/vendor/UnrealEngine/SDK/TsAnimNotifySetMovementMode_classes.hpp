#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifySetMovementMode

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"


namespace SDK
{

// TypeScriptGeneratedClass TsAnimNotifySetMovementMode.TsAnimNotifySetMovementMode_C
// 0x0008 (0x0050 - 0x0048)
class UTsAnimNotifySetMovementMode_C final : public UKuroAnimNotify
{
public:
	EMovementMode                                 MovementMode;                                      // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool K2_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);

	class FString GetNotifyName() const;

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"TsAnimNotifySetMovementMode_C">();
	}
	static class UTsAnimNotifySetMovementMode_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UTsAnimNotifySetMovementMode_C>();
	}
};
static_assert(alignof(UTsAnimNotifySetMovementMode_C) == 0x000008, "Wrong alignment on UTsAnimNotifySetMovementMode_C");
static_assert(sizeof(UTsAnimNotifySetMovementMode_C) == 0x000050, "Wrong size on UTsAnimNotifySetMovementMode_C");
static_assert(offsetof(UTsAnimNotifySetMovementMode_C, MovementMode) == 0x000048, "Member 'UTsAnimNotifySetMovementMode_C::MovementMode' has a wrong offset!");

}

