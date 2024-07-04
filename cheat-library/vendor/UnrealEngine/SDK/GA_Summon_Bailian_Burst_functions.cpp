#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Summon_Bailian_Burst

#include "Basic.hpp"

#include "GA_Summon_Bailian_Burst_classes.hpp"
#include "GA_Summon_Bailian_Burst_parameters.hpp"


namespace SDK
{

// Function GA_Summon_Bailian_Burst.GA_Summon_Bailian_Burst_C.ExecuteUbergraph_GA_Summon_Bailian_Burst
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Summon_Bailian_Burst_C::ExecuteUbergraph_GA_Summon_Bailian_Burst(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Bailian_Burst_C", "ExecuteUbergraph_GA_Summon_Bailian_Burst");

	Params::GA_Summon_Bailian_Burst_C_ExecuteUbergraph_GA_Summon_Bailian_Burst Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Summon_Bailian_Burst.GA_Summon_Bailian_Burst_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Summon_Bailian_Burst_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Bailian_Burst_C", "K2_OnEndAbility");

	Params::GA_Summon_Bailian_Burst_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Summon_Bailian_Burst.GA_Summon_Bailian_Burst_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Summon_Bailian_Burst_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Bailian_Burst_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Summon_Bailian_Burst.GA_Summon_Bailian_Burst_C.OnCompleted_5D118C384AE61F1C80292E811FDE280F
// (BlueprintCallable, BlueprintEvent)

void UGA_Summon_Bailian_Burst_C::OnCompleted_5D118C384AE61F1C80292E811FDE280F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Bailian_Burst_C", "OnCompleted_5D118C384AE61F1C80292E811FDE280F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Summon_Bailian_Burst.GA_Summon_Bailian_Burst_C.OnBlendOut_5D118C384AE61F1C80292E811FDE280F
// (BlueprintCallable, BlueprintEvent)

void UGA_Summon_Bailian_Burst_C::OnBlendOut_5D118C384AE61F1C80292E811FDE280F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Bailian_Burst_C", "OnBlendOut_5D118C384AE61F1C80292E811FDE280F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Summon_Bailian_Burst.GA_Summon_Bailian_Burst_C.OnInterrupted_5D118C384AE61F1C80292E811FDE280F
// (BlueprintCallable, BlueprintEvent)

void UGA_Summon_Bailian_Burst_C::OnInterrupted_5D118C384AE61F1C80292E811FDE280F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Bailian_Burst_C", "OnInterrupted_5D118C384AE61F1C80292E811FDE280F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Summon_Bailian_Burst.GA_Summon_Bailian_Burst_C.OnCancelled_5D118C384AE61F1C80292E811FDE280F
// (BlueprintCallable, BlueprintEvent)

void UGA_Summon_Bailian_Burst_C::OnCancelled_5D118C384AE61F1C80292E811FDE280F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Bailian_Burst_C", "OnCancelled_5D118C384AE61F1C80292E811FDE280F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Summon_Bailian_Burst.GA_Summon_Bailian_Burst_C.OnTick_5D118C384AE61F1C80292E811FDE280F
// (BlueprintCallable, BlueprintEvent)

void UGA_Summon_Bailian_Burst_C::OnTick_5D118C384AE61F1C80292E811FDE280F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Bailian_Burst_C", "OnTick_5D118C384AE61F1C80292E811FDE280F");

	UObject::ProcessEvent(Func, nullptr);
}

}

