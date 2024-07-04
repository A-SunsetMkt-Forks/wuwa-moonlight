#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ActorBulletPreview

#include "Basic.hpp"

#include "BP_ActorBulletPreview_classes.hpp"
#include "BP_ActorBulletPreview_parameters.hpp"


namespace SDK
{

// Function BP_ActorBulletPreview.BP_ActorBulletPreview_C. �
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActorBulletPreview_C::Func___(class USkeletalMeshComponent* MeshComp)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorBulletPreview_C", " �");

	Params::BP_ActorBulletPreview_C___ Parms{};

	Parms.MeshComp = MeshComp;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorBulletPreview.BP_ActorBulletPreview_C.b��
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBulletShape                            b_                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActorBulletPreview_C::b____(EBulletShape b_)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorBulletPreview_C", "b��");

	Params::BP_ActorBulletPreview_C_b____ Parms{};

	Parms.b_ = b_;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorBulletPreview.BP_ActorBulletPreview_C.�
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSReBulletDataMain               Param_Mn                                               (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AActor*                           Param____                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_ActorBulletPreview_C::Func____(const struct FSReBulletDataMain& Param_Mn, class AActor* Param____)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorBulletPreview_C", "�");

	Params::BP_ActorBulletPreview_C____ Parms{};

	Parms.Param_Mn = std::move(Param_Mn);
	Parms.Param____ = Param____;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_ActorBulletPreview.BP_ActorBulletPreview_C.OnTick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ActorBulletPreview_C::OnTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorBulletPreview_C", "OnTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_ActorBulletPreview.BP_ActorBulletPreview_C.-�MnO�
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ActorBulletPreview_C::Minus_MnO_()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_ActorBulletPreview_C", "-�MnO�");

	UObject::ProcessEvent(Func, nullptr);
}

}

