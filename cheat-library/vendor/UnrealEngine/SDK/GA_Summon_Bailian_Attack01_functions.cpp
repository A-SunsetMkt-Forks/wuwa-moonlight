#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Summon_Bailian_Attack01

#include "Basic.hpp"

#include "GA_Summon_Bailian_Attack01_classes.hpp"
#include "GA_Summon_Bailian_Attack01_parameters.hpp"


namespace SDK
{

// Function GA_Summon_Bailian_Attack01.GA_Summon_Bailian_Attack01_C.ExecuteUbergraph_GA_Summon_Bailian_Attack01
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Summon_Bailian_Attack01_C::ExecuteUbergraph_GA_Summon_Bailian_Attack01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Bailian_Attack01_C", "ExecuteUbergraph_GA_Summon_Bailian_Attack01");

	Params::GA_Summon_Bailian_Attack01_C_ExecuteUbergraph_GA_Summon_Bailian_Attack01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Summon_Bailian_Attack01.GA_Summon_Bailian_Attack01_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Summon_Bailian_Attack01_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Bailian_Attack01_C", "K2_OnEndAbility");

	Params::GA_Summon_Bailian_Attack01_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Summon_Bailian_Attack01.GA_Summon_Bailian_Attack01_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Summon_Bailian_Attack01_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Bailian_Attack01_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Summon_Bailian_Attack01.GA_Summon_Bailian_Attack01_C.EventReceived_18B59F5945020DB23C42FD88A5E1D5F0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayEventData               Payload                                                (BlueprintVisible, BlueprintReadOnly, Parm)

void UGA_Summon_Bailian_Attack01_C::EventReceived_18B59F5945020DB23C42FD88A5E1D5F0(const struct FGameplayEventData& Payload)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Bailian_Attack01_C", "EventReceived_18B59F5945020DB23C42FD88A5E1D5F0");

	Params::GA_Summon_Bailian_Attack01_C_EventReceived_18B59F5945020DB23C42FD88A5E1D5F0 Parms{};

	Parms.Payload = std::move(Payload);

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Summon_Bailian_Attack01.GA_Summon_Bailian_Attack01_C.OnCompleted_5D118C384AE61F1C80292E8137E62310
// (BlueprintCallable, BlueprintEvent)

void UGA_Summon_Bailian_Attack01_C::OnCompleted_5D118C384AE61F1C80292E8137E62310()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Bailian_Attack01_C", "OnCompleted_5D118C384AE61F1C80292E8137E62310");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Summon_Bailian_Attack01.GA_Summon_Bailian_Attack01_C.OnBlendOut_5D118C384AE61F1C80292E8137E62310
// (BlueprintCallable, BlueprintEvent)

void UGA_Summon_Bailian_Attack01_C::OnBlendOut_5D118C384AE61F1C80292E8137E62310()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Bailian_Attack01_C", "OnBlendOut_5D118C384AE61F1C80292E8137E62310");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Summon_Bailian_Attack01.GA_Summon_Bailian_Attack01_C.OnInterrupted_5D118C384AE61F1C80292E8137E62310
// (BlueprintCallable, BlueprintEvent)

void UGA_Summon_Bailian_Attack01_C::OnInterrupted_5D118C384AE61F1C80292E8137E62310()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Bailian_Attack01_C", "OnInterrupted_5D118C384AE61F1C80292E8137E62310");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Summon_Bailian_Attack01.GA_Summon_Bailian_Attack01_C.OnCancelled_5D118C384AE61F1C80292E8137E62310
// (BlueprintCallable, BlueprintEvent)

void UGA_Summon_Bailian_Attack01_C::OnCancelled_5D118C384AE61F1C80292E8137E62310()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Bailian_Attack01_C", "OnCancelled_5D118C384AE61F1C80292E8137E62310");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Summon_Bailian_Attack01.GA_Summon_Bailian_Attack01_C.OnTick_5D118C384AE61F1C80292E8137E62310
// (BlueprintCallable, BlueprintEvent)

void UGA_Summon_Bailian_Attack01_C::OnTick_5D118C384AE61F1C80292E8137E62310()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Summon_Bailian_Attack01_C", "OnTick_5D118C384AE61F1C80292E8137E62310");

	UObject::ProcessEvent(Func, nullptr);
}

}

