#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SceneEffectStatePostVolume

#include "Basic.hpp"

#include "SceneEffectStatePostVolume_classes.hpp"
#include "SceneEffectStatePostVolume_parameters.hpp"


namespace SDK
{

// Function SceneEffectStatePostVolume.SceneEffectStatePostVolume_C.SetAirWall
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Value                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASceneEffectStatePostVolume_C::SetAirWall(float Param_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SceneEffectStatePostVolume_C", "SetAirWall");

	Params::SceneEffectStatePostVolume_C_SetAirWall Parms{};

	Parms.Param_Value = Param_Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SceneEffectStatePostVolume.SceneEffectStatePostVolume_C.SetToxicFog
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Value                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASceneEffectStatePostVolume_C::SetToxicFog(float Param_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SceneEffectStatePostVolume_C", "SetToxicFog");

	Params::SceneEffectStatePostVolume_C_SetToxicFog Parms{};

	Parms.Param_Value = Param_Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SceneEffectStatePostVolume.SceneEffectStatePostVolume_C.EnableVolume
// (Public, BlueprintCallable, BlueprintEvent)

void ASceneEffectStatePostVolume_C::EnableVolume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SceneEffectStatePostVolume_C", "EnableVolume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SceneEffectStatePostVolume.SceneEffectStatePostVolume_C.DisableVolume
// (Public, BlueprintCallable, BlueprintEvent)

void ASceneEffectStatePostVolume_C::DisableVolume()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SceneEffectStatePostVolume_C", "DisableVolume");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SceneEffectStatePostVolume.SceneEffectStatePostVolume_C.SetEffect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   Param_Value                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ASceneEffectStatePostVolume_C::SetEffect(float Param_Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SceneEffectStatePostVolume_C", "SetEffect");

	Params::SceneEffectStatePostVolume_C_SetEffect Parms{};

	Parms.Param_Value = Param_Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function SceneEffectStatePostVolume.SceneEffectStatePostVolume_C.SetWall_Debug
// (Public, BlueprintCallable, BlueprintEvent)

void ASceneEffectStatePostVolume_C::SetWall_Debug()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SceneEffectStatePostVolume_C", "SetWall_Debug");

	UObject::ProcessEvent(Func, nullptr);
}


// Function SceneEffectStatePostVolume.SceneEffectStatePostVolume_C.SetToxicFog_Debug
// (Public, BlueprintCallable, BlueprintEvent)

void ASceneEffectStatePostVolume_C::SetToxicFog_Debug()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("SceneEffectStatePostVolume_C", "SetToxicFog_Debug");

	UObject::ProcessEvent(Func, nullptr);
}

}

