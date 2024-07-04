#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroPakKey

#include "Basic.hpp"

#include "Engine_classes.hpp"
#include "CoreUObject_classes.hpp"


namespace SDK
{

// Class KuroPakKey.KuroPakKeyLibrary
// 0x0000 (0x0030 - 0x0030)
class UKuroPakKeyLibrary final : public UBlueprintFunctionLibrary
{
public:
	static int32 GetUpdateInterval();
	static bool HasPendingEncryptedPaks();
	static void LoadPakKeysFromFile(const class FString& FilePath);
	static bool NeedExtPakKeys();
	static void SetCompleteCallback(TDelegate<void(bool Success)> Callback);
	static void SetRSAPublicKey(const class FString& PublicKey);
	static void UnbindCallback();

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroPakKeyLibrary">();
	}
	static class UKuroPakKeyLibrary* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroPakKeyLibrary>();
	}
};
static_assert(alignof(UKuroPakKeyLibrary) == 0x000008, "Wrong alignment on UKuroPakKeyLibrary");
static_assert(sizeof(UKuroPakKeyLibrary) == 0x000030, "Wrong size on UKuroPakKeyLibrary");

// Class KuroPakKey.KuroPakKeySetting
// 0x0008 (0x0038 - 0x0030)
class UKuroPakKeySetting final : public UObject
{
public:
	bool                                          bNeedExternalKeys;                                 // 0x0030(0x0001)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1DCC[0x3];                                     // 0x0031(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         UpdateCheckInterval;                               // 0x0034(0x0004)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroPakKeySetting">();
	}
	static class UKuroPakKeySetting* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroPakKeySetting>();
	}
};
static_assert(alignof(UKuroPakKeySetting) == 0x000008, "Wrong alignment on UKuroPakKeySetting");
static_assert(sizeof(UKuroPakKeySetting) == 0x000038, "Wrong size on UKuroPakKeySetting");
static_assert(offsetof(UKuroPakKeySetting, bNeedExternalKeys) == 0x000030, "Member 'UKuroPakKeySetting::bNeedExternalKeys' has a wrong offset!");
static_assert(offsetof(UKuroPakKeySetting, UpdateCheckInterval) == 0x000034, "Member 'UKuroPakKeySetting::UpdateCheckInterval' has a wrong offset!");

}

