#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_KuroDestructibleActor

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "Engine_structs.hpp"
#include "ApexDestruction_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_KuroDestructibleActor.BP_KuroDestructibleActor_C
// 0x00A0 (0x0360 - 0x02C0)
class ABP_KuroDestructibleActor_C final : public ADestructibleActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x02C0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                   ProxyMesh;                                         // 0x02C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCharRenderingComponent_C*              CharRenderingComponent;                            // 0x02D0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UEffectModelBase>        EffectDataAsset;                                   // 0x02D8(0x0030)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FCollisionResponseContainer            OnDestoryReponses;                                 // 0x0308(0x0020)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsDebug;                                           // 0x0328(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_300B[0x3];                                     // 0x0329(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Impluse;                                           // 0x032C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ImpluseFactor;                                     // 0x0330(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         DamageRadius;                                      // 0x0334(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPD_CharacterControllerData_C*          MaterialControllerData;                            // 0x0338(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                OriginOffset;                                      // 0x0340(0x000C)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         BaseForce;                                         // 0x034C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IgnoreBullet;                                      // 0x0350(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_300C[0x3];                                     // 0x0351(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                HurtOrigin;                                        // 0x0354(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_KuroDestructibleActor(int32 EntryPoint);
	void PlayDestruction(const struct FVector& Param_HurtOrigin, float Param_Impluse, bool IsZeroImpluse);
	void OnFractureEvent(const struct FVector& HitPoint, const struct FVector& HitDirection);
	void ReceiveBeginPlay();
	void ApplyDamage(const struct FVector& Param_HurtOrigin, const struct FVector& SpeedDirection);
	void ModifiedCollison();
	bool IsMobile();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_KuroDestructibleActor_C">();
	}
	static class ABP_KuroDestructibleActor_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_KuroDestructibleActor_C>();
	}
};
static_assert(alignof(ABP_KuroDestructibleActor_C) == 0x000008, "Wrong alignment on ABP_KuroDestructibleActor_C");
static_assert(sizeof(ABP_KuroDestructibleActor_C) == 0x000360, "Wrong size on ABP_KuroDestructibleActor_C");
static_assert(offsetof(ABP_KuroDestructibleActor_C, UberGraphFrame) == 0x0002C0, "Member 'ABP_KuroDestructibleActor_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_KuroDestructibleActor_C, ProxyMesh) == 0x0002C8, "Member 'ABP_KuroDestructibleActor_C::ProxyMesh' has a wrong offset!");
static_assert(offsetof(ABP_KuroDestructibleActor_C, CharRenderingComponent) == 0x0002D0, "Member 'ABP_KuroDestructibleActor_C::CharRenderingComponent' has a wrong offset!");
static_assert(offsetof(ABP_KuroDestructibleActor_C, EffectDataAsset) == 0x0002D8, "Member 'ABP_KuroDestructibleActor_C::EffectDataAsset' has a wrong offset!");
static_assert(offsetof(ABP_KuroDestructibleActor_C, OnDestoryReponses) == 0x000308, "Member 'ABP_KuroDestructibleActor_C::OnDestoryReponses' has a wrong offset!");
static_assert(offsetof(ABP_KuroDestructibleActor_C, IsDebug) == 0x000328, "Member 'ABP_KuroDestructibleActor_C::IsDebug' has a wrong offset!");
static_assert(offsetof(ABP_KuroDestructibleActor_C, Impluse) == 0x00032C, "Member 'ABP_KuroDestructibleActor_C::Impluse' has a wrong offset!");
static_assert(offsetof(ABP_KuroDestructibleActor_C, ImpluseFactor) == 0x000330, "Member 'ABP_KuroDestructibleActor_C::ImpluseFactor' has a wrong offset!");
static_assert(offsetof(ABP_KuroDestructibleActor_C, DamageRadius) == 0x000334, "Member 'ABP_KuroDestructibleActor_C::DamageRadius' has a wrong offset!");
static_assert(offsetof(ABP_KuroDestructibleActor_C, MaterialControllerData) == 0x000338, "Member 'ABP_KuroDestructibleActor_C::MaterialControllerData' has a wrong offset!");
static_assert(offsetof(ABP_KuroDestructibleActor_C, OriginOffset) == 0x000340, "Member 'ABP_KuroDestructibleActor_C::OriginOffset' has a wrong offset!");
static_assert(offsetof(ABP_KuroDestructibleActor_C, BaseForce) == 0x00034C, "Member 'ABP_KuroDestructibleActor_C::BaseForce' has a wrong offset!");
static_assert(offsetof(ABP_KuroDestructibleActor_C, IgnoreBullet) == 0x000350, "Member 'ABP_KuroDestructibleActor_C::IgnoreBullet' has a wrong offset!");
static_assert(offsetof(ABP_KuroDestructibleActor_C, HurtOrigin) == 0x000354, "Member 'ABP_KuroDestructibleActor_C::HurtOrigin' has a wrong offset!");

}

