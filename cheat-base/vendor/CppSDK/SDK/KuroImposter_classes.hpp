#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: KuroImposter

#include "Basic.hpp"

#include "KuroImposter_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class KuroImposter.KuroImposterCommandlet
// 0x0000 (0x0088 - 0x0088)
class UKuroImposterCommandlet final : public UCommandlet
{
public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroImposterCommandlet">();
	}
	static class UKuroImposterCommandlet* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroImposterCommandlet>();
	}
};
static_assert(alignof(UKuroImposterCommandlet) == 0x000008, "Wrong alignment on UKuroImposterCommandlet");
static_assert(sizeof(UKuroImposterCommandlet) == 0x000088, "Wrong size on UKuroImposterCommandlet");

// Class KuroImposter.KuroImposterComponent
// 0x0030 (0x0250 - 0x0220)
class UKuroImposterComponent final : public USceneComponent
{
public:
	EImposterType                                 ImpType;                                           // 0x0218(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EImpMemType                                   EnumImpMemType;                                    // 0x021C(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_220[0x8];                                      // 0x0220(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	bool                                          bPreview;                                          // 0x0228(0x0001)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRenderAtlasEveryFrame;                            // 0x0229(0x0001)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_22A[0x26];                                     // 0x022A(0x0026)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroImposterComponent">();
	}
	static class UKuroImposterComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroImposterComponent>();
	}
};
static_assert(alignof(UKuroImposterComponent) == 0x000010, "Wrong alignment on UKuroImposterComponent");
static_assert(sizeof(UKuroImposterComponent) == 0x000250, "Wrong size on UKuroImposterComponent");
static_assert(offsetof(UKuroImposterComponent, ImpType) == 0x000218, "Member 'UKuroImposterComponent::ImpType' has a wrong offset!");
static_assert(offsetof(UKuroImposterComponent, EnumImpMemType) == 0x00021C, "Member 'UKuroImposterComponent::EnumImpMemType' has a wrong offset!");
static_assert(offsetof(UKuroImposterComponent, bPreview) == 0x000228, "Member 'UKuroImposterComponent::bPreview' has a wrong offset!");
static_assert(offsetof(UKuroImposterComponent, bRenderAtlasEveryFrame) == 0x000229, "Member 'UKuroImposterComponent::bRenderAtlasEveryFrame' has a wrong offset!");

// Class KuroImposter.KuroImposterUpdater
// 0x0008 (0x02B0 - 0x02A8)
class AKuroImposterUpdater final : public AActor
{
public:
	bool                                          bEnabled;                                          // 0x02A8(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bSearchMainLight;                                  // 0x02A9(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2AA[0x6];                                      // 0x02AA(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void FillAllInstGlobalColor();
	void UpdateImposters(class UDirectionalLightComponent* DirLight, float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroImposterUpdater">();
	}
	static class AKuroImposterUpdater* GetDefaultObj()
	{
		return GetDefaultObjImpl<AKuroImposterUpdater>();
	}
};
static_assert(alignof(AKuroImposterUpdater) == 0x000008, "Wrong alignment on AKuroImposterUpdater");
static_assert(sizeof(AKuroImposterUpdater) == 0x0002B0, "Wrong size on AKuroImposterUpdater");
static_assert(offsetof(AKuroImposterUpdater, bEnabled) == 0x0002A8, "Member 'AKuroImposterUpdater::bEnabled' has a wrong offset!");
static_assert(offsetof(AKuroImposterUpdater, bSearchMainLight) == 0x0002A9, "Member 'AKuroImposterUpdater::bSearchMainLight' has a wrong offset!");

// Class KuroImposter.KuroImposterUtility
// 0x0000 (0x0030 - 0x0030)
class UKuroImposterUtility final : public UBlueprintFunctionLibrary
{
public:
	static void GenerateAll(class UWorld* EditorWorld, bool bBake, bool bClear);
	static void RemoveAll(class UWorld* EditorWorld, bool bClear);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"KuroImposterUtility">();
	}
	static class UKuroImposterUtility* GetDefaultObj()
	{
		return GetDefaultObjImpl<UKuroImposterUtility>();
	}
};
static_assert(alignof(UKuroImposterUtility) == 0x000008, "Wrong alignment on UKuroImposterUtility");
static_assert(sizeof(UKuroImposterUtility) == 0x000030, "Wrong size on UKuroImposterUtility");

}
