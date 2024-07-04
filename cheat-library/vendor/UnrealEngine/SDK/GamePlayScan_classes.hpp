#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GamePlayScan

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass GamePlayScan.GamePlayScan_C
// 0x0060 (0x0308 - 0x02A8)
class AGamePlayScan_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02A8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class ATsBaseCharacter_C*>             Array_TsBaseCharacter;                             // 0x02B8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AActor*>                         Actors;                                            // 0x02C8(0x0010)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	float                                         CurScanRadius;                                     // 0x02D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScanRadiusSpace;                                   // 0x02DC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxScanDistance;                                   // 0x02E0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MaxScanInteractionEffectDistance;                  // 0x02E4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CurrentElapsedTimes;                               // 0x02E8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScanEndTime;                                       // 0x02EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ScanDestroyTime;                                   // 0x02F0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_3661[0x4];                                     // 0x02F4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ABP_Fx_Scanning_C*                      ScanEffect;                                        // 0x02F8(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HasTarget;                                         // 0x0300(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_GamePlayScan(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"GamePlayScan_C">();
	}
	static class AGamePlayScan_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGamePlayScan_C>();
	}
};
static_assert(alignof(AGamePlayScan_C) == 0x000008, "Wrong alignment on AGamePlayScan_C");
static_assert(sizeof(AGamePlayScan_C) == 0x000308, "Wrong size on AGamePlayScan_C");
static_assert(offsetof(AGamePlayScan_C, UberGraphFrame) == 0x0002A8, "Member 'AGamePlayScan_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AGamePlayScan_C, DefaultSceneRoot) == 0x0002B0, "Member 'AGamePlayScan_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AGamePlayScan_C, Array_TsBaseCharacter) == 0x0002B8, "Member 'AGamePlayScan_C::Array_TsBaseCharacter' has a wrong offset!");
static_assert(offsetof(AGamePlayScan_C, Actors) == 0x0002C8, "Member 'AGamePlayScan_C::Actors' has a wrong offset!");
static_assert(offsetof(AGamePlayScan_C, CurScanRadius) == 0x0002D8, "Member 'AGamePlayScan_C::CurScanRadius' has a wrong offset!");
static_assert(offsetof(AGamePlayScan_C, ScanRadiusSpace) == 0x0002DC, "Member 'AGamePlayScan_C::ScanRadiusSpace' has a wrong offset!");
static_assert(offsetof(AGamePlayScan_C, MaxScanDistance) == 0x0002E0, "Member 'AGamePlayScan_C::MaxScanDistance' has a wrong offset!");
static_assert(offsetof(AGamePlayScan_C, MaxScanInteractionEffectDistance) == 0x0002E4, "Member 'AGamePlayScan_C::MaxScanInteractionEffectDistance' has a wrong offset!");
static_assert(offsetof(AGamePlayScan_C, CurrentElapsedTimes) == 0x0002E8, "Member 'AGamePlayScan_C::CurrentElapsedTimes' has a wrong offset!");
static_assert(offsetof(AGamePlayScan_C, ScanEndTime) == 0x0002EC, "Member 'AGamePlayScan_C::ScanEndTime' has a wrong offset!");
static_assert(offsetof(AGamePlayScan_C, ScanDestroyTime) == 0x0002F0, "Member 'AGamePlayScan_C::ScanDestroyTime' has a wrong offset!");
static_assert(offsetof(AGamePlayScan_C, ScanEffect) == 0x0002F8, "Member 'AGamePlayScan_C::ScanEffect' has a wrong offset!");
static_assert(offsetof(AGamePlayScan_C, HasTarget) == 0x000300, "Member 'AGamePlayScan_C::HasTarget' has a wrong offset!");

}

