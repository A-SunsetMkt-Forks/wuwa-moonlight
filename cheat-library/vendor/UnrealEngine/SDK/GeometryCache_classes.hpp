#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometryCache

#include "Basic.hpp"

#include "CoreUObject_classes.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// Class GeometryCache.GeometryCache
// 0x0040 (0x0070 - 0x0030)
class UGeometryCache final : public UObject
{
public:
	uint8                                         Pad_150A[0x8];                                     // 0x0030(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UMaterialInterface*>             Materials;                                         // 0x0038(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UGeometryCacheTrack*>            Tracks;                                            // 0x0048(0x0010)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	uint8                                         Pad_150B[0x10];                                    // 0x0058(0x0010)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         StartFrame;                                        // 0x0068(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         EndFrame;                                          // 0x006C(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCache">();
	}
	static class UGeometryCache* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCache>();
	}
};
static_assert(alignof(UGeometryCache) == 0x000008, "Wrong alignment on UGeometryCache");
static_assert(sizeof(UGeometryCache) == 0x000070, "Wrong size on UGeometryCache");
static_assert(offsetof(UGeometryCache, Materials) == 0x000038, "Member 'UGeometryCache::Materials' has a wrong offset!");
static_assert(offsetof(UGeometryCache, Tracks) == 0x000048, "Member 'UGeometryCache::Tracks' has a wrong offset!");
static_assert(offsetof(UGeometryCache, StartFrame) == 0x000068, "Member 'UGeometryCache::StartFrame' has a wrong offset!");
static_assert(offsetof(UGeometryCache, EndFrame) == 0x00006C, "Member 'UGeometryCache::EndFrame' has a wrong offset!");

// Class GeometryCache.GeometryCacheActor
// 0x0008 (0x02B0 - 0x02A8)
class AGeometryCacheActor final : public AActor
{
public:
	class UGeometryCacheComponent*                GeometryCacheComponent;                            // 0x02A8(0x0008)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

public:
	class UGeometryCacheComponent* GetGeometryCacheComponent() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheActor">();
	}
	static class AGeometryCacheActor* GetDefaultObj()
	{
		return GetDefaultObjImpl<AGeometryCacheActor>();
	}
};
static_assert(alignof(AGeometryCacheActor) == 0x000008, "Wrong alignment on AGeometryCacheActor");
static_assert(sizeof(AGeometryCacheActor) == 0x0002B0, "Wrong size on AGeometryCacheActor");
static_assert(offsetof(AGeometryCacheActor, GeometryCacheComponent) == 0x0002A8, "Member 'AGeometryCacheActor::GeometryCacheComponent' has a wrong offset!");

// Class GeometryCache.GeometryCacheCodecBase
// 0x0010 (0x0040 - 0x0030)
class UGeometryCacheCodecBase : public UObject
{
public:
	TArray<int32>                                 TopologyRanges;                                    // 0x0030(0x0010)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheCodecBase">();
	}
	static class UGeometryCacheCodecBase* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheCodecBase>();
	}
};
static_assert(alignof(UGeometryCacheCodecBase) == 0x000008, "Wrong alignment on UGeometryCacheCodecBase");
static_assert(sizeof(UGeometryCacheCodecBase) == 0x000040, "Wrong size on UGeometryCacheCodecBase");
static_assert(offsetof(UGeometryCacheCodecBase, TopologyRanges) == 0x000030, "Member 'UGeometryCacheCodecBase::TopologyRanges' has a wrong offset!");

// Class GeometryCache.GeometryCacheCodecRaw
// 0x0008 (0x0048 - 0x0040)
class UGeometryCacheCodecRaw final : public UGeometryCacheCodecBase
{
public:
	int32                                         DummyProperty;                                     // 0x0040(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_150C[0x4];                                     // 0x0044(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheCodecRaw">();
	}
	static class UGeometryCacheCodecRaw* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheCodecRaw>();
	}
};
static_assert(alignof(UGeometryCacheCodecRaw) == 0x000008, "Wrong alignment on UGeometryCacheCodecRaw");
static_assert(sizeof(UGeometryCacheCodecRaw) == 0x000048, "Wrong size on UGeometryCacheCodecRaw");
static_assert(offsetof(UGeometryCacheCodecRaw, DummyProperty) == 0x000040, "Member 'UGeometryCacheCodecRaw::DummyProperty' has a wrong offset!");

// Class GeometryCache.GeometryCacheCodecV1
// 0x0008 (0x0048 - 0x0040)
class UGeometryCacheCodecV1 final : public UGeometryCacheCodecBase
{
public:
	uint8                                         Pad_150D[0x8];                                     // 0x0040(0x0008)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheCodecV1">();
	}
	static class UGeometryCacheCodecV1* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheCodecV1>();
	}
};
static_assert(alignof(UGeometryCacheCodecV1) == 0x000008, "Wrong alignment on UGeometryCacheCodecV1");
static_assert(sizeof(UGeometryCacheCodecV1) == 0x000048, "Wrong size on UGeometryCacheCodecV1");

// Class GeometryCache.GeometryCacheComponent
// 0x0050 (0x0560 - 0x0510)
class UGeometryCacheComponent final : public UMeshComponent
{
public:
	class UGeometryCache*                         GeometryCache;                                     // 0x0508(0x0008)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRunning;                                          // 0x0510(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bLooping;                                          // 0x0511(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_150E[0x2];                                     // 0x0512(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartTimeOffset;                                   // 0x0514(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         PlaybackSpeed;                                     // 0x0518(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                         NumTracks;                                         // 0x051C(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                         ElapsedTime;                                       // 0x0520(0x0004)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_150F[0x30];                                    // 0x0524(0x0030)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Duration;                                          // 0x0554(0x0004)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                          bManualTick;                                       // 0x0558(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1510[0x7];                                     // 0x0559(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void Pause();
	void Play();
	void PlayFromStart();
	void PlayReversed();
	void PlayReversedFromEnd();
	bool SetGeometryCache(class UGeometryCache* NewGeomCache);
	void SetLooping(const bool bNewLooping);
	void SetPlaybackSpeed(const float NewPlaybackSpeed);
	void SetStartTimeOffset(const float NewStartTimeOffset);
	void Stop();
	void TickAtThisTime(const float Time, bool bInIsRunning, bool bInBackwards, bool bInIsLooping);

	float GetAnimationTime() const;
	float GetDuration() const;
	int32 GetNumberOfFrames() const;
	float GetPlaybackDirection() const;
	float GetPlaybackSpeed() const;
	float GetStartTimeOffset() const;
	bool IsLooping() const;
	bool IsPlaying() const;
	bool IsPlayingReversed() const;

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheComponent">();
	}
	static class UGeometryCacheComponent* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheComponent>();
	}
};
static_assert(alignof(UGeometryCacheComponent) == 0x000010, "Wrong alignment on UGeometryCacheComponent");
static_assert(sizeof(UGeometryCacheComponent) == 0x000560, "Wrong size on UGeometryCacheComponent");
static_assert(offsetof(UGeometryCacheComponent, GeometryCache) == 0x000508, "Member 'UGeometryCacheComponent::GeometryCache' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, bRunning) == 0x000510, "Member 'UGeometryCacheComponent::bRunning' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, bLooping) == 0x000511, "Member 'UGeometryCacheComponent::bLooping' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, StartTimeOffset) == 0x000514, "Member 'UGeometryCacheComponent::StartTimeOffset' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, PlaybackSpeed) == 0x000518, "Member 'UGeometryCacheComponent::PlaybackSpeed' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, NumTracks) == 0x00051C, "Member 'UGeometryCacheComponent::NumTracks' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, ElapsedTime) == 0x000520, "Member 'UGeometryCacheComponent::ElapsedTime' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, Duration) == 0x000554, "Member 'UGeometryCacheComponent::Duration' has a wrong offset!");
static_assert(offsetof(UGeometryCacheComponent, bManualTick) == 0x000558, "Member 'UGeometryCacheComponent::bManualTick' has a wrong offset!");

// Class GeometryCache.GeometryCacheTrack
// 0x0030 (0x0060 - 0x0030)
class UGeometryCacheTrack : public UObject
{
public:
	float                                         Duration;                                          // 0x0030(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                         Pad_1513[0x2C];                                    // 0x0034(0x002C)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheTrack">();
	}
	static class UGeometryCacheTrack* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheTrack>();
	}
};
static_assert(alignof(UGeometryCacheTrack) == 0x000008, "Wrong alignment on UGeometryCacheTrack");
static_assert(sizeof(UGeometryCacheTrack) == 0x000060, "Wrong size on UGeometryCacheTrack");
static_assert(offsetof(UGeometryCacheTrack, Duration) == 0x000030, "Member 'UGeometryCacheTrack::Duration' has a wrong offset!");

// Class GeometryCache.GeometryCacheTrack_FlipbookAnimation
// 0x0028 (0x0088 - 0x0060)
class UGeometryCacheTrack_FlipbookAnimation final : public UGeometryCacheTrack
{
public:
	uint32                                        NumMeshSamples;                                    // 0x0060(0x0004)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1514[0x24];                                    // 0x0064(0x0024)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, const float SampleTime);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheTrack_FlipbookAnimation">();
	}
	static class UGeometryCacheTrack_FlipbookAnimation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheTrack_FlipbookAnimation>();
	}
};
static_assert(alignof(UGeometryCacheTrack_FlipbookAnimation) == 0x000008, "Wrong alignment on UGeometryCacheTrack_FlipbookAnimation");
static_assert(sizeof(UGeometryCacheTrack_FlipbookAnimation) == 0x000088, "Wrong size on UGeometryCacheTrack_FlipbookAnimation");
static_assert(offsetof(UGeometryCacheTrack_FlipbookAnimation, NumMeshSamples) == 0x000060, "Member 'UGeometryCacheTrack_FlipbookAnimation::NumMeshSamples' has a wrong offset!");

// Class GeometryCache.GeometryCacheTrackStreamable
// 0x0078 (0x00D8 - 0x0060)
class UGeometryCacheTrackStreamable final : public UGeometryCacheTrack
{
public:
	class UGeometryCacheCodecBase*                Codec;                                             // 0x0060(0x0008)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_1516[0x68];                                    // 0x0068(0x0068)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartSampleTime;                                   // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                         Pad_1517[0x4];                                     // 0x00D4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheTrackStreamable">();
	}
	static class UGeometryCacheTrackStreamable* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheTrackStreamable>();
	}
};
static_assert(alignof(UGeometryCacheTrackStreamable) == 0x000008, "Wrong alignment on UGeometryCacheTrackStreamable");
static_assert(sizeof(UGeometryCacheTrackStreamable) == 0x0000D8, "Wrong size on UGeometryCacheTrackStreamable");
static_assert(offsetof(UGeometryCacheTrackStreamable, Codec) == 0x000060, "Member 'UGeometryCacheTrackStreamable::Codec' has a wrong offset!");
static_assert(offsetof(UGeometryCacheTrackStreamable, StartSampleTime) == 0x0000D0, "Member 'UGeometryCacheTrackStreamable::StartSampleTime' has a wrong offset!");

// Class GeometryCache.GeometryCacheTrack_TransformAnimation
// 0x00A8 (0x0108 - 0x0060)
class UGeometryCacheTrack_TransformAnimation final : public UGeometryCacheTrack
{
public:
	uint8                                         Pad_1518[0xA8];                                    // 0x0060(0x00A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheTrack_TransformAnimation">();
	}
	static class UGeometryCacheTrack_TransformAnimation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheTrack_TransformAnimation>();
	}
};
static_assert(alignof(UGeometryCacheTrack_TransformAnimation) == 0x000008, "Wrong alignment on UGeometryCacheTrack_TransformAnimation");
static_assert(sizeof(UGeometryCacheTrack_TransformAnimation) == 0x000108, "Wrong size on UGeometryCacheTrack_TransformAnimation");

// Class GeometryCache.GeometryCacheTrack_TransformGroupAnimation
// 0x00A8 (0x0108 - 0x0060)
class UGeometryCacheTrack_TransformGroupAnimation final : public UGeometryCacheTrack
{
public:
	uint8                                         Pad_1519[0xA8];                                    // 0x0060(0x00A8)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"GeometryCacheTrack_TransformGroupAnimation">();
	}
	static class UGeometryCacheTrack_TransformGroupAnimation* GetDefaultObj()
	{
		return GetDefaultObjImpl<UGeometryCacheTrack_TransformGroupAnimation>();
	}
};
static_assert(alignof(UGeometryCacheTrack_TransformGroupAnimation) == 0x000008, "Wrong alignment on UGeometryCacheTrack_TransformGroupAnimation");
static_assert(sizeof(UGeometryCacheTrack_TransformGroupAnimation) == 0x000108, "Wrong size on UGeometryCacheTrack_TransformGroupAnimation");

}

