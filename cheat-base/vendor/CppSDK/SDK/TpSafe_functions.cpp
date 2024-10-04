#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: TpSafe

#include "Basic.hpp"

#include "TpSafe_classes.hpp"
#include "TpSafe_parameters.hpp"


namespace SDK
{

// Function TpSafe.TpSafeProxy.DelAntiData
// (Final, Native, Static, Public)

void UTpSafeProxy::DelAntiData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TpSafeProxy", "DelAntiData");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TpSafe.TpSafeProxy.GetAntiData
// (Final, Native, Static, Public)
// Parameters:
// struct FArrayBuffer                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FArrayBuffer UTpSafeProxy::GetAntiData()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TpSafeProxy", "GetAntiData");

	Params::TpSafeProxy_GetAntiData Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TpSafe.TpSafeProxy.GetAntiData2
// (Final, Native, Static, Public)
// Parameters:
// struct FArrayBuffer                     ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FArrayBuffer UTpSafeProxy::GetAntiData2()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TpSafeProxy", "GetAntiData2");

	Params::TpSafeProxy_GetAntiData2 Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function TpSafe.TpSafeProxy.Logout
// (Final, Native, Static, Public)

void UTpSafeProxy::Logout()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TpSafeProxy", "Logout");

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, nullptr);

	Func->FunctionFlags = Flgs;
}


// Function TpSafe.TpSafeProxy.RecvAntiData
// (Final, Native, Static, Public, HasOutParams)
// Parameters:
// struct FArrayBuffer                     Data                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UTpSafeProxy::RecvAntiData(const struct FArrayBuffer& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TpSafeProxy", "RecvAntiData");

	Params::TpSafeProxy_RecvAntiData Parms{};

	Parms.Data = std::move(Data);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}


// Function TpSafe.TpSafeProxy.SetUserInfo
// (Final, Native, Static, Public)
// Parameters:
// int32                                   AccountType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   WorldId                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                           OpenId                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                                   PlayerId                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTpSafeProxy::SetUserInfo(int32 AccountType, int32 WorldId, const class FString& OpenId, int32 PlayerId)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("TpSafeProxy", "SetUserInfo");

	Params::TpSafeProxy_SetUserInfo Parms{};

	Parms.AccountType = AccountType;
	Parms.WorldId = WorldId;
	Parms.OpenId = std::move(OpenId);
	Parms.PlayerId = PlayerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;
}

}
