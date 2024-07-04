#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ABP_EjianxinMirrorMd10011_Skeleton

#include "Basic.hpp"

#include "ABP_EjianxinMirrorMd10011_Skeleton_classes.hpp"
#include "ABP_EjianxinMirrorMd10011_Skeleton_parameters.hpp"


namespace SDK
{

// Function ABP_EjianxinMirrorMd10011_Skeleton.ABP_EjianxinMirrorMd10011_Skeleton_C.ExecuteUbergraph_ABP_EjianxinMirrorMd10011_Skeleton
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UABP_EjianxinMirrorMd10011_Skeleton_C::ExecuteUbergraph_ABP_EjianxinMirrorMd10011_Skeleton(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EjianxinMirrorMd10011_Skeleton_C", "ExecuteUbergraph_ABP_EjianxinMirrorMd10011_Skeleton");

	Params::ABP_EjianxinMirrorMd10011_Skeleton_C_ExecuteUbergraph_ABP_EjianxinMirrorMd10011_Skeleton Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ABP_EjianxinMirrorMd10011_Skeleton.ABP_EjianxinMirrorMd10011_Skeleton_C.OnComponentStart
// (Event, Public, BlueprintEvent)

void UABP_EjianxinMirrorMd10011_Skeleton_C::OnComponentStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EjianxinMirrorMd10011_Skeleton_C", "OnComponentStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_EjianxinMirrorMd10011_Skeleton.ABP_EjianxinMirrorMd10011_Skeleton_C.BlueprintInitializeAnimation
// (Event, Public, BlueprintEvent)

void UABP_EjianxinMirrorMd10011_Skeleton_C::BlueprintInitializeAnimation()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EjianxinMirrorMd10011_Skeleton_C", "BlueprintInitializeAnimation");

	UObject::ProcessEvent(Func, nullptr);
}


// Function ABP_EjianxinMirrorMd10011_Skeleton.ABP_EjianxinMirrorMd10011_Skeleton_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                        Param_AnimGraph                                        (Parm, OutParm, NoDestructor)

void UABP_EjianxinMirrorMd10011_Skeleton_C::AnimGraph(struct FPoseLink* Param_AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ABP_EjianxinMirrorMd10011_Skeleton_C", "AnimGraph");

	Params::ABP_EjianxinMirrorMd10011_Skeleton_C_AnimGraph Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Param_AnimGraph != nullptr)
		*Param_AnimGraph = std::move(Parms.Param_AnimGraph);
}

}

