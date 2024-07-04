#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_AttackAirEnd_Soul

#include "Basic.hpp"

#include "GA_AttackAirEnd_Soul_classes.hpp"
#include "GA_AttackAirEnd_Soul_parameters.hpp"


namespace SDK
{

// Function GA_AttackAirEnd_Soul.GA_AttackAirEnd_Soul_C.ExecuteUbergraph_GA_AttackAirEnd_Soul
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_AttackAirEnd_Soul_C::ExecuteUbergraph_GA_AttackAirEnd_Soul(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AttackAirEnd_Soul_C", "ExecuteUbergraph_GA_AttackAirEnd_Soul");

	Params::GA_AttackAirEnd_Soul_C_ExecuteUbergraph_GA_AttackAirEnd_Soul Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_AttackAirEnd_Soul.GA_AttackAirEnd_Soul_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_AttackAirEnd_Soul_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AttackAirEnd_Soul_C", "K2_OnEndAbility");

	Params::GA_AttackAirEnd_Soul_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_AttackAirEnd_Soul.GA_AttackAirEnd_Soul_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_AttackAirEnd_Soul_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AttackAirEnd_Soul_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AttackAirEnd_Soul.GA_AttackAirEnd_Soul_C.OnCompleted_5D118C384AE61F1C80292E815DB85205
// (BlueprintCallable, BlueprintEvent)

void UGA_AttackAirEnd_Soul_C::OnCompleted_5D118C384AE61F1C80292E815DB85205()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AttackAirEnd_Soul_C", "OnCompleted_5D118C384AE61F1C80292E815DB85205");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AttackAirEnd_Soul.GA_AttackAirEnd_Soul_C.OnBlendOut_5D118C384AE61F1C80292E815DB85205
// (BlueprintCallable, BlueprintEvent)

void UGA_AttackAirEnd_Soul_C::OnBlendOut_5D118C384AE61F1C80292E815DB85205()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AttackAirEnd_Soul_C", "OnBlendOut_5D118C384AE61F1C80292E815DB85205");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AttackAirEnd_Soul.GA_AttackAirEnd_Soul_C.OnInterrupted_5D118C384AE61F1C80292E815DB85205
// (BlueprintCallable, BlueprintEvent)

void UGA_AttackAirEnd_Soul_C::OnInterrupted_5D118C384AE61F1C80292E815DB85205()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AttackAirEnd_Soul_C", "OnInterrupted_5D118C384AE61F1C80292E815DB85205");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AttackAirEnd_Soul.GA_AttackAirEnd_Soul_C.OnCancelled_5D118C384AE61F1C80292E815DB85205
// (BlueprintCallable, BlueprintEvent)

void UGA_AttackAirEnd_Soul_C::OnCancelled_5D118C384AE61F1C80292E815DB85205()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AttackAirEnd_Soul_C", "OnCancelled_5D118C384AE61F1C80292E815DB85205");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AttackAirEnd_Soul.GA_AttackAirEnd_Soul_C.OnTick_5D118C384AE61F1C80292E815DB85205
// (BlueprintCallable, BlueprintEvent)

void UGA_AttackAirEnd_Soul_C::OnTick_5D118C384AE61F1C80292E815DB85205()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AttackAirEnd_Soul_C", "OnTick_5D118C384AE61F1C80292E815DB85205");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_AttackAirEnd_Soul.GA_AttackAirEnd_Soul_C.�ր��
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class ATsBaseCharacter_C*               Param___                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           Param_____                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_AttackAirEnd_Soul_C::_______4(class ATsBaseCharacter_C* Param___, class AActor** Param_____)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AttackAirEnd_Soul_C", "�ր��");

	Params::GA_AttackAirEnd_Soul_C_______ Parms{};

	Parms.Param___ = Param___;

	UObject::ProcessEvent(Func, &Parms);

	if (Param_____ != nullptr)
		*Param_____ = Parms.Param_____;
}


// Function GA_AttackAirEnd_Soul.GA_AttackAirEnd_Soul_C.���$Mn
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTransform                       ReturnValue                                            (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor)

struct FTransform UGA_AttackAirEnd_Soul_C::____Mn()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_AttackAirEnd_Soul_C", "���$Mn");

	Params::GA_AttackAirEnd_Soul_C_____Mn Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

