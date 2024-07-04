#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyDestroySpecBullet

#include "Basic.hpp"

#include "TsAnimNotifyDestroySpecBullet_classes.hpp"
#include "TsAnimNotifyDestroySpecBullet_parameters.hpp"


namespace SDK
{

// Function TsAnimNotifyDestroySpecBullet.TsAnimNotifyDestroySpecBullet_C.K2_Notify
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTsAnimNotifyDestroySpecBullet_C::K2_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsAnimNotifyDestroySpecBullet_C", "K2_Notify");

	Params::TsAnimNotifyDestroySpecBullet_C_K2_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TsAnimNotifyDestroySpecBullet.TsAnimNotifyDestroySpecBullet_C.GetNotifyName
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UTsAnimNotifyDestroySpecBullet_C::GetNotifyName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsAnimNotifyDestroySpecBullet_C", "GetNotifyName");

	Params::TsAnimNotifyDestroySpecBullet_C_GetNotifyName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

