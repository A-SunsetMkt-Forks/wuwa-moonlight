#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_WuYinQu_YuanNiaoZe

#include "Basic.hpp"

#include "GA_WuYinQu_YuanNiaoZe_classes.hpp"
#include "GA_WuYinQu_YuanNiaoZe_parameters.hpp"


namespace SDK
{

// Function GA_WuYinQu_YuanNiaoZe.GA_WuYinQu_YuanNiaoZe_C.ExecuteUbergraph_GA_WuYinQu_YuanNiaoZe
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_WuYinQu_YuanNiaoZe_C::ExecuteUbergraph_GA_WuYinQu_YuanNiaoZe(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuYinQu_YuanNiaoZe_C", "ExecuteUbergraph_GA_WuYinQu_YuanNiaoZe");

	Params::GA_WuYinQu_YuanNiaoZe_C_ExecuteUbergraph_GA_WuYinQu_YuanNiaoZe Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_WuYinQu_YuanNiaoZe.GA_WuYinQu_YuanNiaoZe_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_WuYinQu_YuanNiaoZe_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuYinQu_YuanNiaoZe_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_WuYinQu_YuanNiaoZe.GA_WuYinQu_YuanNiaoZe_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_WuYinQu_YuanNiaoZe_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuYinQu_YuanNiaoZe_C", "K2_OnEndAbility");

	Params::GA_WuYinQu_YuanNiaoZe_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}

}
