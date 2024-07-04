#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_ManipulateCancle

#include "Basic.hpp"

#include "GA_Role_ManipulateCancle_classes.hpp"
#include "GA_Role_ManipulateCancle_parameters.hpp"


namespace SDK
{

// Function GA_Role_ManipulateCancle.GA_Role_ManipulateCancle_C.ExecuteUbergraph_GA_Role_ManipulateCancle
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Role_ManipulateCancle_C::ExecuteUbergraph_GA_Role_ManipulateCancle(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_ManipulateCancle_C", "ExecuteUbergraph_GA_Role_ManipulateCancle");

	Params::GA_Role_ManipulateCancle_C_ExecuteUbergraph_GA_Role_ManipulateCancle Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Role_ManipulateCancle.GA_Role_ManipulateCancle_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Role_ManipulateCancle_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_ManipulateCancle_C", "K2_OnEndAbility");

	Params::GA_Role_ManipulateCancle_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Role_ManipulateCancle.GA_Role_ManipulateCancle_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Role_ManipulateCancle_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_ManipulateCancle_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}

