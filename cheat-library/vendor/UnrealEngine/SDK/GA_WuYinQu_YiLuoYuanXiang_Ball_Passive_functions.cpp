#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GA_WuYinQu_YiLuoYuanXiang_Ball_Passive

#include "Basic.hpp"

#include "GA_WuYinQu_YiLuoYuanXiang_Ball_Passive_classes.hpp"
#include "GA_WuYinQu_YiLuoYuanXiang_Ball_Passive_parameters.hpp"


namespace SDK
{

// Function GA_WuYinQu_YiLuoYuanXiang_Ball_Passive.GA_WuYinQu_YiLuoYuanXiang_Ball_Passive_C.ExecuteUbergraph_GA_WuYinQu_YiLuoYuanXiang_Ball_Passive
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_WuYinQu_YiLuoYuanXiang_Ball_Passive_C::ExecuteUbergraph_GA_WuYinQu_YiLuoYuanXiang_Ball_Passive(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuYinQu_YiLuoYuanXiang_Ball_Passive_C", "ExecuteUbergraph_GA_WuYinQu_YiLuoYuanXiang_Ball_Passive");

	Params::GA_WuYinQu_YiLuoYuanXiang_Ball_Passive_C_ExecuteUbergraph_GA_WuYinQu_YiLuoYuanXiang_Ball_Passive Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GA_WuYinQu_YiLuoYuanXiang_Ball_Passive.GA_WuYinQu_YiLuoYuanXiang_Ball_Passive_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)

void UGA_WuYinQu_YiLuoYuanXiang_Ball_Passive_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("GA_WuYinQu_YiLuoYuanXiang_Ball_Passive_C", "K2_ActivateAbility");

	UObject::ProcessEvent(Func, nullptr);
}

}

