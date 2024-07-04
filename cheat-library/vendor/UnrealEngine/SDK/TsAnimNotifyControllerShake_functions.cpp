#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsAnimNotifyControllerShake

#include "Basic.hpp"

#include "TsAnimNotifyControllerShake_classes.hpp"
#include "TsAnimNotifyControllerShake_parameters.hpp"


namespace SDK
{

// Function TsAnimNotifyControllerShake.TsAnimNotifyControllerShake_C.K2_Notify
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USkeletalMeshComponent*           MeshComp                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimSequenceBase*                Animation                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UTsAnimNotifyControllerShake_C::K2_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsAnimNotifyControllerShake_C", "K2_Notify");

	Params::TsAnimNotifyControllerShake_C_K2_Notify Parms{};

	Parms.MeshComp = MeshComp;
	Parms.Animation = Animation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TsAnimNotifyControllerShake.TsAnimNotifyControllerShake_C.GetNotifyName
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)

class FString UTsAnimNotifyControllerShake_C::GetNotifyName() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsAnimNotifyControllerShake_C", "GetNotifyName");

	Params::TsAnimNotifyControllerShake_C_GetNotifyName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

