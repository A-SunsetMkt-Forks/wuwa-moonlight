#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_Role_FixHook

#include "Basic.hpp"

#include "GA_Role_FixHook_classes.hpp"
#include "GA_Role_FixHook_parameters.hpp"


namespace SDK
{

// Function GA_Role_FixHook.GA_Role_FixHook_C.ExecuteUbergraph_GA_Role_FixHook
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Role_FixHook_C::ExecuteUbergraph_GA_Role_FixHook(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_FixHook_C", "ExecuteUbergraph_GA_Role_FixHook");

	Params::GA_Role_FixHook_C_ExecuteUbergraph_GA_Role_FixHook Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Role_FixHook.GA_Role_FixHook_C.MovementModeChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                       Character                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EMovementMode                           PrevMovementMode                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                                   PreviousCustomMode                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Role_FixHook_C::MovementModeChange(class ACharacter* Character, EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_FixHook_C", "MovementModeChange");

	Params::GA_Role_FixHook_C_MovementModeChange Parms{};

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Role_FixHook.GA_Role_FixHook_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bWasCancelled                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Role_FixHook_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_FixHook_C", "K2_OnEndAbility");

	Params::GA_Role_FixHook_C_K2_OnEndAbility Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_Role_FixHook.GA_Role_FixHook_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_Role_FixHook_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_FixHook_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_FixHook.GA_Role_FixHook_C.OnCompleted_5D118C384AE61F1C80292E816508B9E5
// (BlueprintCallable, BlueprintEvent)

void UGA_Role_FixHook_C::OnCompleted_5D118C384AE61F1C80292E816508B9E5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_FixHook_C", "OnCompleted_5D118C384AE61F1C80292E816508B9E5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_FixHook.GA_Role_FixHook_C.OnBlendOut_5D118C384AE61F1C80292E816508B9E5
// (BlueprintCallable, BlueprintEvent)

void UGA_Role_FixHook_C::OnBlendOut_5D118C384AE61F1C80292E816508B9E5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_FixHook_C", "OnBlendOut_5D118C384AE61F1C80292E816508B9E5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_FixHook.GA_Role_FixHook_C.OnInterrupted_5D118C384AE61F1C80292E816508B9E5
// (BlueprintCallable, BlueprintEvent)

void UGA_Role_FixHook_C::OnInterrupted_5D118C384AE61F1C80292E816508B9E5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_FixHook_C", "OnInterrupted_5D118C384AE61F1C80292E816508B9E5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_FixHook.GA_Role_FixHook_C.OnCancelled_5D118C384AE61F1C80292E816508B9E5
// (BlueprintCallable, BlueprintEvent)

void UGA_Role_FixHook_C::OnCancelled_5D118C384AE61F1C80292E816508B9E5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_FixHook_C", "OnCancelled_5D118C384AE61F1C80292E816508B9E5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_FixHook.GA_Role_FixHook_C.OnTick_5D118C384AE61F1C80292E816508B9E5
// (BlueprintCallable, BlueprintEvent)

void UGA_Role_FixHook_C::OnTick_5D118C384AE61F1C80292E816508B9E5()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_FixHook_C", "OnTick_5D118C384AE61F1C80292E816508B9E5");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_FixHook.GA_Role_FixHook_C.OnTick_1AD12E0F4865557B76E6619F9D0D670F
// (BlueprintCallable, BlueprintEvent)

void UGA_Role_FixHook_C::OnTick_1AD12E0F4865557B76E6619F9D0D670F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_FixHook_C", "OnTick_1AD12E0F4865557B76E6619F9D0D670F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_FixHook.GA_Role_FixHook_C.OnFinish_1AD12E0F4865557B76E6619F9D0D670F
// (BlueprintCallable, BlueprintEvent)

void UGA_Role_FixHook_C::OnFinish_1AD12E0F4865557B76E6619F9D0D670F()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_FixHook_C", "OnFinish_1AD12E0F4865557B76E6619F9D0D670F");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_FixHook.GA_Role_FixHook_C.FindBestHookPoint
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class AActor* UGA_Role_FixHook_C::FindBestHookPoint()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_FixHook_C", "FindBestHookPoint");

	Params::GA_Role_FixHook_C_FindBestHookPoint Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function GA_Role_FixHook.GA_Role_FixHook_C.FixHookStart
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGA_Role_FixHook_C::FixHookStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_FixHook_C", "FixHookStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_FixHook.GA_Role_FixHook_C.FixHookTick
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Role_FixHook_C::FixHookTick()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_FixHook_C", "FixHookTick");

	UObject::ProcessEvent(Func, nullptr);
}


// Function GA_Role_FixHook.GA_Role_FixHook_C.&��
// (Public, BlueprintCallable, BlueprintEvent)

void UGA_Role_FixHook_C::_____()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_Role_FixHook_C", "&��");

	UObject::ProcessEvent(Func, nullptr);
}

}

