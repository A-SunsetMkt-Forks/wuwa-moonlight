#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Clouds

#include "Basic.hpp"

#include "E_Cloud_Presents_structs.hpp"
#include "Engine_structs.hpp"
#include "KuroRenderingRuntimeBPPlugin_classes.hpp"
#include "AkAudio_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Clouds.BP_Clouds_C
// 0x0098 (0x0350 - 0x02B8)
class ABP_Clouds_C final : public AKuroEditorTickActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UChildActorComponent*                   Cloud02;                                           // 0x02C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UChildActorComponent*                   Cloud01;                                           // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	E_Cloud_Presents                              SM______9_;                                        // 0x02D8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28E9[0x7];                                     // 0x02D9(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UPD_CloudPreset_C*                      CloudData;                                         // 0x02E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Counting;                                          // 0x02E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	E_Cloud_Presents                              ___e___;                                           // 0x02E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_28EA[0x6];                                     // 0x02EA(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	TSoftObjectPtr<class UPD_CloudPrefab_C>       CloudAsset;                                        // 0x02F0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TArray<int32>                                 SortNumber;                                        // 0x0320(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UPD_CloudPrefab_C*                      As_PD_Cloud_Prefab;                                // 0x0330(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                          CachedAudioEvent2D;                                // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsSkyOcean;                                        // 0x0340(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_28EB[0x7];                                     // 0x0341(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UAkAudioEvent*                          SkyOceanAudio;                                     // 0x0348(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Clouds(int32 EntryPoint);
	void LoadAndSwitch(TSoftObjectPtr<class UObject> Asset, float ChangeSpeed, bool IsInEditor, bool IsAudio);
	void Switch_Clouds(E_Cloud_Presents CloudPresents, float ChangeSpeed, bool IsInEditor);
	void ChangeCloud();
	void EditorTick(float DeltaSeconds);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnLoaded_63FE5E2B437AFAD504FBCAB26242EB8A(class UObject* Loaded);
	void UserConstructionScript();
	void Zero1__();
	void Zero2W__a();
	void Zero3_IK_();
	void Zero1_ULb();
	void Zero2______();
	void Zero3___01();
	void SwitchCloudsSub(class UPD_CloudPrefab_C* CloudPresents, float ChangeSpeed);
	void Hidden_Old();
	void Zero4Minus__0();
	void SetCloudParameters(class UPD_CloudPrefab_C* CloudPrefeb, class UChildActorComponent* CloudActorComponent, float ChangeSpeed, int32 TransSortNumber);
	void __K___();
	void Zero4___02();
	void Zero5___03();
	void Zero6___04();
	void Zero7___05();
	void Zero8___01();
	void Zero9_n__();
	void Zero104__a();
	void ___o_();
	void Zero11___a();
	void Zero12_Z_a();
	void _I();
	void Zero5___();
	void GetGIParams(const struct FSGIData& GIData);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Clouds_C">();
	}
	static class ABP_Clouds_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Clouds_C>();
	}
};
static_assert(alignof(ABP_Clouds_C) == 0x000008, "Wrong alignment on ABP_Clouds_C");
static_assert(sizeof(ABP_Clouds_C) == 0x000350, "Wrong size on ABP_Clouds_C");
static_assert(offsetof(ABP_Clouds_C, UberGraphFrame) == 0x0002B8, "Member 'ABP_Clouds_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, Cloud02) == 0x0002C0, "Member 'ABP_Clouds_C::Cloud02' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, Cloud01) == 0x0002C8, "Member 'ABP_Clouds_C::Cloud01' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, DefaultSceneRoot) == 0x0002D0, "Member 'ABP_Clouds_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, SM______9_) == 0x0002D8, "Member 'ABP_Clouds_C::SM______9_' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, CloudData) == 0x0002E0, "Member 'ABP_Clouds_C::CloudData' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, Counting) == 0x0002E8, "Member 'ABP_Clouds_C::Counting' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, ___e___) == 0x0002E9, "Member 'ABP_Clouds_C::___e___' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, CloudAsset) == 0x0002F0, "Member 'ABP_Clouds_C::CloudAsset' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, SortNumber) == 0x000320, "Member 'ABP_Clouds_C::SortNumber' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, As_PD_Cloud_Prefab) == 0x000330, "Member 'ABP_Clouds_C::As_PD_Cloud_Prefab' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, CachedAudioEvent2D) == 0x000338, "Member 'ABP_Clouds_C::CachedAudioEvent2D' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, IsSkyOcean) == 0x000340, "Member 'ABP_Clouds_C::IsSkyOcean' has a wrong offset!");
static_assert(offsetof(ABP_Clouds_C, SkyOceanAudio) == 0x000348, "Member 'ABP_Clouds_C::SkyOceanAudio' has a wrong offset!");

}

