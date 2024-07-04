#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TsHotFixActionHandle

#include "Basic.hpp"

#include "TsHotFixActionHandle_classes.hpp"
#include "TsHotFixActionHandle_parameters.hpp"


namespace SDK
{

// Function TsHotFixActionHandle.TsHotFixActionHandle_C.OnPressActionCallback__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTsHotFixActionHandle_C::OnPressActionCallback__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsHotFixActionHandle_C", "OnPressActionCallback__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsHotFixActionHandle.TsHotFixActionHandle_C.OnTouchActionCallback__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTsHotFixActionHandle_C::OnTouchActionCallback__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsHotFixActionHandle_C", "OnTouchActionCallback__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsHotFixActionHandle.TsHotFixActionHandle_C.OnTouchMovedActionCallback__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UTsHotFixActionHandle_C::OnTouchMovedActionCallback__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsHotFixActionHandle_C", "OnTouchMovedActionCallback__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsHotFixActionHandle.TsHotFixActionHandle_C.OnPressAction
// (Public, BlueprintCallable, BlueprintEvent)

void UTsHotFixActionHandle_C::OnPressAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsHotFixActionHandle_C", "OnPressAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsHotFixActionHandle.TsHotFixActionHandle_C.OnReleaseAction
// (Public, BlueprintCallable, BlueprintEvent)

void UTsHotFixActionHandle_C::OnReleaseAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsHotFixActionHandle_C", "OnReleaseAction");

	UObject::ProcessEvent(Func, nullptr);
}


// Function TsHotFixActionHandle.TsHotFixActionHandle_C.AddPressBinding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_ActionName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class ABasePlayerController*            Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsHotFixActionHandle_C::AddPressBinding(const class FString& Param_ActionName, class ABasePlayerController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsHotFixActionHandle_C", "AddPressBinding");

	Params::TsHotFixActionHandle_C_AddPressBinding Parms{};

	Parms.Param_ActionName = std::move(Param_ActionName);
	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsHotFixActionHandle.TsHotFixActionHandle_C.AddReleaseBinding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           Param_ActionName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class ABasePlayerController*            Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsHotFixActionHandle_C::AddReleaseBinding(const class FString& Param_ActionName, class ABasePlayerController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsHotFixActionHandle_C", "AddReleaseBinding");

	Params::TsHotFixActionHandle_C_AddReleaseBinding Parms{};

	Parms.Param_ActionName = std::move(Param_ActionName);
	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsHotFixActionHandle.TsHotFixActionHandle_C.AddTouchPressBinding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABasePlayerController*            Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsHotFixActionHandle_C::AddTouchPressBinding(class ABasePlayerController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsHotFixActionHandle_C", "AddTouchPressBinding");

	Params::TsHotFixActionHandle_C_AddTouchPressBinding Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsHotFixActionHandle.TsHotFixActionHandle_C.AddTouchReleaseBinding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABasePlayerController*            Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsHotFixActionHandle_C::AddTouchReleaseBinding(class ABasePlayerController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsHotFixActionHandle_C", "AddTouchReleaseBinding");

	Params::TsHotFixActionHandle_C_AddTouchReleaseBinding Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsHotFixActionHandle.TsHotFixActionHandle_C.OnTouchPressAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETouchIndex                             Param_TouchIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsHotFixActionHandle_C::OnTouchPressAction(ETouchIndex Param_TouchIndex, const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsHotFixActionHandle_C", "OnTouchPressAction");

	Params::TsHotFixActionHandle_C_OnTouchPressAction Parms{};

	Parms.Param_TouchIndex = Param_TouchIndex;
	Parms.Position = std::move(Position);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsHotFixActionHandle.TsHotFixActionHandle_C.OnTouchReleaseAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETouchIndex                             Param_TouchIndex                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsHotFixActionHandle_C::OnTouchReleaseAction(ETouchIndex Param_TouchIndex, const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsHotFixActionHandle_C", "OnTouchReleaseAction");

	Params::TsHotFixActionHandle_C_OnTouchReleaseAction Parms{};

	Parms.Param_TouchIndex = Param_TouchIndex;
	Parms.Position = std::move(Position);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsHotFixActionHandle.TsHotFixActionHandle_C.ClearActionBinding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABasePlayerController*            Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsHotFixActionHandle_C::ClearActionBinding(class ABasePlayerController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsHotFixActionHandle_C", "ClearActionBinding");

	Params::TsHotFixActionHandle_C_ClearActionBinding Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsHotFixActionHandle.TsHotFixActionHandle_C.OnTouchMoveAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ETouchIndex                             Touchindex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Position                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsHotFixActionHandle_C::OnTouchMoveAction(ETouchIndex Touchindex, const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsHotFixActionHandle_C", "OnTouchMoveAction");

	Params::TsHotFixActionHandle_C_OnTouchMoveAction Parms{};

	Parms.Touchindex = Touchindex;
	Parms.Position = std::move(Position);

	UObject::ProcessEvent(Func, &Parms);
}


// Function TsHotFixActionHandle.TsHotFixActionHandle_C.AddTouchMoveBinding
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABasePlayerController*            Controller                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTsHotFixActionHandle_C::AddTouchMoveBinding(class ABasePlayerController* Controller)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("TsHotFixActionHandle_C", "AddTouchMoveBinding");

	Params::TsHotFixActionHandle_C_AddTouchMoveBinding Parms{};

	Parms.Controller = Controller;

	UObject::ProcessEvent(Func, &Parms);
}

}

