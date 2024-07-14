#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OnlyData

#include "Basic.hpp"

#include "OnlyData_classes.hpp"
#include "OnlyData_parameters.hpp"


namespace SDK
{

// Function OnlyData.OnlyData_C.GetCommonBulletData
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           DataName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFind                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSBulletDataMain                 BulletData                                             (Parm, OutParm, HasGetValueTypeHash)

void UOnlyData_C::GetCommonBulletData(const class FString& DataName, class UObject* __WorldContext, bool* IsFind, struct FSBulletDataMain* BulletData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OnlyData_C", "GetCommonBulletData");

	Params::OnlyData_C_GetCommonBulletData Parms{};

	Parms.DataName = std::move(DataName);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsFind != nullptr)
		*IsFind = Parms.IsFind;

	if (BulletData != nullptr)
		*BulletData = std::move(Parms.BulletData);
}


// Function OnlyData.OnlyData_C.GetCommonHitData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           DataName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFind                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSHitEffect                      HitData                                                (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOnlyData_C::GetCommonHitData(const class FString& DataName, class UObject* __WorldContext, bool* IsFind, struct FSHitEffect* HitData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OnlyData_C", "GetCommonHitData");

	Params::OnlyData_C_GetCommonHitData Parms{};

	Parms.DataName = std::move(DataName);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsFind != nullptr)
		*IsFind = Parms.IsFind;

	if (HitData != nullptr)
		*HitData = std::move(Parms.HitData);
}


// Function OnlyData.OnlyData_C.GetCommonNewBulletData
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                           DataName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    IsFind                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSReBulletDataMain               BulletData                                             (Parm, OutParm, HasGetValueTypeHash)

void UOnlyData_C::GetCommonNewBulletData(const class FString& DataName, class UObject* __WorldContext, bool* IsFind, struct FSReBulletDataMain* BulletData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("OnlyData_C", "GetCommonNewBulletData");

	Params::OnlyData_C_GetCommonNewBulletData Parms{};

	Parms.DataName = std::move(DataName);
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	if (IsFind != nullptr)
		*IsFind = Parms.IsFind;

	if (BulletData != nullptr)
		*BulletData = std::move(Parms.BulletData);
}

}
