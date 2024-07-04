#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GeometryCacheTracks

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "MovieScene_structs.hpp"


namespace SDK
{

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheParams
// 0x0048 (0x0048 - 0x0000)
struct FMovieSceneGeometryCacheParams
{
public:
	class UGeometryCache*                         GeometryCacheAsset;                                // 0x0000(0x0008)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           FirstLoopStartFrameOffset;                         // 0x0008(0x0004)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           StartFrameOffset;                                  // 0x000C(0x0004)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           EndFrameOffset;                                    // 0x0010(0x0004)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         PlayRate;                                          // 0x0014(0x0004)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         bReverse : 1;                                      // 0x0018(0x0001)(BitIndex: 0x00, PropSize: 0x0001 (Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic))
	uint8                                         Pad_2228[0x3];                                     // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         StartOffset;                                       // 0x001C(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         EndOffset;                                         // 0x0020(0x0004)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2229[0x4];                                     // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSoftObjectPath                        GeometryCache;                                     // 0x0028(0x0020)(ZeroConstructor, Deprecated, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneGeometryCacheParams) == 0x000008, "Wrong alignment on FMovieSceneGeometryCacheParams");
static_assert(sizeof(FMovieSceneGeometryCacheParams) == 0x000048, "Wrong size on FMovieSceneGeometryCacheParams");
static_assert(offsetof(FMovieSceneGeometryCacheParams, GeometryCacheAsset) == 0x000000, "Member 'FMovieSceneGeometryCacheParams::GeometryCacheAsset' has a wrong offset!");
static_assert(offsetof(FMovieSceneGeometryCacheParams, FirstLoopStartFrameOffset) == 0x000008, "Member 'FMovieSceneGeometryCacheParams::FirstLoopStartFrameOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneGeometryCacheParams, StartFrameOffset) == 0x00000C, "Member 'FMovieSceneGeometryCacheParams::StartFrameOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneGeometryCacheParams, EndFrameOffset) == 0x000010, "Member 'FMovieSceneGeometryCacheParams::EndFrameOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneGeometryCacheParams, PlayRate) == 0x000014, "Member 'FMovieSceneGeometryCacheParams::PlayRate' has a wrong offset!");
static_assert(offsetof(FMovieSceneGeometryCacheParams, StartOffset) == 0x00001C, "Member 'FMovieSceneGeometryCacheParams::StartOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneGeometryCacheParams, EndOffset) == 0x000020, "Member 'FMovieSceneGeometryCacheParams::EndOffset' has a wrong offset!");
static_assert(offsetof(FMovieSceneGeometryCacheParams, GeometryCache) == 0x000028, "Member 'FMovieSceneGeometryCacheParams::GeometryCache' has a wrong offset!");

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplateParameters
// 0x0008 (0x0050 - 0x0048)
struct FMovieSceneGeometryCacheSectionTemplateParameters final : public FMovieSceneGeometryCacheParams
{
public:
	struct FFrameNumber                           SectionStartTime;                                  // 0x0048(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                           SectionEndTime;                                    // 0x004C(0x0004)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneGeometryCacheSectionTemplateParameters) == 0x000008, "Wrong alignment on FMovieSceneGeometryCacheSectionTemplateParameters");
static_assert(sizeof(FMovieSceneGeometryCacheSectionTemplateParameters) == 0x000050, "Wrong size on FMovieSceneGeometryCacheSectionTemplateParameters");
static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplateParameters, SectionStartTime) == 0x000048, "Member 'FMovieSceneGeometryCacheSectionTemplateParameters::SectionStartTime' has a wrong offset!");
static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplateParameters, SectionEndTime) == 0x00004C, "Member 'FMovieSceneGeometryCacheSectionTemplateParameters::SectionEndTime' has a wrong offset!");

// ScriptStruct GeometryCacheTracks.MovieSceneGeometryCacheSectionTemplate
// 0x0050 (0x0070 - 0x0020)
struct FMovieSceneGeometryCacheSectionTemplate final : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneGeometryCacheSectionTemplateParameters Params;                                            // 0x0020(0x0050)(NativeAccessSpecifierPublic)
};
static_assert(alignof(FMovieSceneGeometryCacheSectionTemplate) == 0x000008, "Wrong alignment on FMovieSceneGeometryCacheSectionTemplate");
static_assert(sizeof(FMovieSceneGeometryCacheSectionTemplate) == 0x000070, "Wrong size on FMovieSceneGeometryCacheSectionTemplate");
static_assert(offsetof(FMovieSceneGeometryCacheSectionTemplate, Params) == 0x000020, "Member 'FMovieSceneGeometryCacheSectionTemplate::Params' has a wrong offset!");

}

