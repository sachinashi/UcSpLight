// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UcSpLightV2/Public/SpLightBlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpLightBlueprintFunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
UCSPLIGHTV2_API UClass* Z_Construct_UClass_USpLightBlueprintFunctionLibrary();
UCSPLIGHTV2_API UClass* Z_Construct_UClass_USpLightBlueprintFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_UcSpLightV2();
// End Cross Module References

// Begin Class USpLightBlueprintFunctionLibrary Function ExtractFlipbookRenderBounds
struct Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractFlipbookRenderBounds_Statics
{
	struct SpLightBlueprintFunctionLibrary_eventExtractFlipbookRenderBounds_Parms
	{
		UPaperFlipbook* PaperFlipbook;
		FBoxSphereBounds ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UC|SpLight|Sprite" },
		{ "KeyWords", "SpLight UC Sprite" },
		{ "ModuleRelativePath", "Public/SpLightBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PaperFlipbook;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractFlipbookRenderBounds_Statics::NewProp_PaperFlipbook = { "PaperFlipbook", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractFlipbookRenderBounds_Parms, PaperFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractFlipbookRenderBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractFlipbookRenderBounds_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractFlipbookRenderBounds_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractFlipbookRenderBounds_Statics::NewProp_PaperFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractFlipbookRenderBounds_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractFlipbookRenderBounds_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractFlipbookRenderBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpLightBlueprintFunctionLibrary, nullptr, "ExtractFlipbookRenderBounds", nullptr, nullptr, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractFlipbookRenderBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractFlipbookRenderBounds_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractFlipbookRenderBounds_Statics::SpLightBlueprintFunctionLibrary_eventExtractFlipbookRenderBounds_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractFlipbookRenderBounds_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractFlipbookRenderBounds_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractFlipbookRenderBounds_Statics::SpLightBlueprintFunctionLibrary_eventExtractFlipbookRenderBounds_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractFlipbookRenderBounds()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractFlipbookRenderBounds_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpLightBlueprintFunctionLibrary::execExtractFlipbookRenderBounds)
{
	P_GET_OBJECT(UPaperFlipbook,Z_Param_PaperFlipbook);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBoxSphereBounds*)Z_Param__Result=USpLightBlueprintFunctionLibrary::ExtractFlipbookRenderBounds(Z_Param_PaperFlipbook);
	P_NATIVE_END;
}
// End Class USpLightBlueprintFunctionLibrary Function ExtractFlipbookRenderBounds

// Begin Class USpLightBlueprintFunctionLibrary Function ExtractSpriteAtlasTexture
struct Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteAtlasTexture_Statics
{
	struct SpLightBlueprintFunctionLibrary_eventExtractSpriteAtlasTexture_Parms
	{
		UPaperSprite* Sprite;
		UTexture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UC|SpLight|Sprite" },
		{ "KeyWords", "SpLight UC Sprite" },
		{ "ModuleRelativePath", "Public/SpLightBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteAtlasTexture_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractSpriteAtlasTexture_Parms, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteAtlasTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractSpriteAtlasTexture_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteAtlasTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteAtlasTexture_Statics::NewProp_Sprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteAtlasTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteAtlasTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteAtlasTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpLightBlueprintFunctionLibrary, nullptr, "ExtractSpriteAtlasTexture", nullptr, nullptr, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteAtlasTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteAtlasTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteAtlasTexture_Statics::SpLightBlueprintFunctionLibrary_eventExtractSpriteAtlasTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteAtlasTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteAtlasTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteAtlasTexture_Statics::SpLightBlueprintFunctionLibrary_eventExtractSpriteAtlasTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteAtlasTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteAtlasTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpLightBlueprintFunctionLibrary::execExtractSpriteAtlasTexture)
{
	P_GET_OBJECT(UPaperSprite,Z_Param_Sprite);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture**)Z_Param__Result=USpLightBlueprintFunctionLibrary::ExtractSpriteAtlasTexture(Z_Param_Sprite);
	P_NATIVE_END;
}
// End Class USpLightBlueprintFunctionLibrary Function ExtractSpriteAtlasTexture

// Begin Class USpLightBlueprintFunctionLibrary Function ExtractSpriteDimensions
struct Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteDimensions_Statics
{
	struct SpLightBlueprintFunctionLibrary_eventExtractSpriteDimensions_Parms
	{
		UPaperSprite* Sprite;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UC|SpLight|Sprite" },
		{ "KeyWords", "SpLight UC Sprite" },
		{ "ModuleRelativePath", "Public/SpLightBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteDimensions_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractSpriteDimensions_Parms, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteDimensions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractSpriteDimensions_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteDimensions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteDimensions_Statics::NewProp_Sprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteDimensions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteDimensions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpLightBlueprintFunctionLibrary, nullptr, "ExtractSpriteDimensions", nullptr, nullptr, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteDimensions_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteDimensions_Statics::SpLightBlueprintFunctionLibrary_eventExtractSpriteDimensions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteDimensions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteDimensions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteDimensions_Statics::SpLightBlueprintFunctionLibrary_eventExtractSpriteDimensions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteDimensions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteDimensions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpLightBlueprintFunctionLibrary::execExtractSpriteDimensions)
{
	P_GET_OBJECT(UPaperSprite,Z_Param_Sprite);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USpLightBlueprintFunctionLibrary::ExtractSpriteDimensions(Z_Param_Sprite);
	P_NATIVE_END;
}
// End Class USpLightBlueprintFunctionLibrary Function ExtractSpriteDimensions

// Begin Class USpLightBlueprintFunctionLibrary Function ExtractSpritePixelsPerUnrealUnit
struct Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpritePixelsPerUnrealUnit_Statics
{
	struct SpLightBlueprintFunctionLibrary_eventExtractSpritePixelsPerUnrealUnit_Parms
	{
		UPaperSprite* Sprite;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UC|SpLight|Sprite" },
		{ "KeyWords", "SpLight UC Sprite" },
		{ "ModuleRelativePath", "Public/SpLightBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpritePixelsPerUnrealUnit_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractSpritePixelsPerUnrealUnit_Parms, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpritePixelsPerUnrealUnit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractSpritePixelsPerUnrealUnit_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpritePixelsPerUnrealUnit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpritePixelsPerUnrealUnit_Statics::NewProp_Sprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpritePixelsPerUnrealUnit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpritePixelsPerUnrealUnit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpritePixelsPerUnrealUnit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpLightBlueprintFunctionLibrary, nullptr, "ExtractSpritePixelsPerUnrealUnit", nullptr, nullptr, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpritePixelsPerUnrealUnit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpritePixelsPerUnrealUnit_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpritePixelsPerUnrealUnit_Statics::SpLightBlueprintFunctionLibrary_eventExtractSpritePixelsPerUnrealUnit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpritePixelsPerUnrealUnit_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpritePixelsPerUnrealUnit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpritePixelsPerUnrealUnit_Statics::SpLightBlueprintFunctionLibrary_eventExtractSpritePixelsPerUnrealUnit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpritePixelsPerUnrealUnit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpritePixelsPerUnrealUnit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpLightBlueprintFunctionLibrary::execExtractSpritePixelsPerUnrealUnit)
{
	P_GET_OBJECT(UPaperSprite,Z_Param_Sprite);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=USpLightBlueprintFunctionLibrary::ExtractSpritePixelsPerUnrealUnit(Z_Param_Sprite);
	P_NATIVE_END;
}
// End Class USpLightBlueprintFunctionLibrary Function ExtractSpritePixelsPerUnrealUnit

// Begin Class USpLightBlueprintFunctionLibrary Function ExtractSpriteRenderBox
struct Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderBox_Statics
{
	struct SpLightBlueprintFunctionLibrary_eventExtractSpriteRenderBox_Parms
	{
		UPaperSprite* Sprite;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UC|SpLight|Sprite" },
		{ "KeyWords", "SpLight UC Sprite" },
		{ "ModuleRelativePath", "Public/SpLightBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderBox_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractSpriteRenderBox_Parms, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractSpriteRenderBox_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderBox_Statics::NewProp_Sprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderBox_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpLightBlueprintFunctionLibrary, nullptr, "ExtractSpriteRenderBox", nullptr, nullptr, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderBox_Statics::SpLightBlueprintFunctionLibrary_eventExtractSpriteRenderBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderBox_Statics::SpLightBlueprintFunctionLibrary_eventExtractSpriteRenderBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpLightBlueprintFunctionLibrary::execExtractSpriteRenderBox)
{
	P_GET_OBJECT(UPaperSprite,Z_Param_Sprite);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=USpLightBlueprintFunctionLibrary::ExtractSpriteRenderBox(Z_Param_Sprite);
	P_NATIVE_END;
}
// End Class USpLightBlueprintFunctionLibrary Function ExtractSpriteRenderBox

// Begin Class USpLightBlueprintFunctionLibrary Function ExtractSpriteRenderPosition
struct Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderPosition_Statics
{
	struct SpLightBlueprintFunctionLibrary_eventExtractSpriteRenderPosition_Parms
	{
		UPaperSprite* Sprite;
		FBoxSphereBounds ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UC|SpLight|Sprite" },
		{ "KeyWords", "SpLight UC Sprite" },
		{ "ModuleRelativePath", "Public/SpLightBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderPosition_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractSpriteRenderPosition_Parms, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractSpriteRenderPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderPosition_Statics::NewProp_Sprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpLightBlueprintFunctionLibrary, nullptr, "ExtractSpriteRenderPosition", nullptr, nullptr, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderPosition_Statics::SpLightBlueprintFunctionLibrary_eventExtractSpriteRenderPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderPosition_Statics::SpLightBlueprintFunctionLibrary_eventExtractSpriteRenderPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpLightBlueprintFunctionLibrary::execExtractSpriteRenderPosition)
{
	P_GET_OBJECT(UPaperSprite,Z_Param_Sprite);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBoxSphereBounds*)Z_Param__Result=USpLightBlueprintFunctionLibrary::ExtractSpriteRenderPosition(Z_Param_Sprite);
	P_NATIVE_END;
}
// End Class USpLightBlueprintFunctionLibrary Function ExtractSpriteRenderPosition

// Begin Class USpLightBlueprintFunctionLibrary Function ExtractSpriteRenderUV
struct Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderUV_Statics
{
	struct SpLightBlueprintFunctionLibrary_eventExtractSpriteRenderUV_Parms
	{
		UPaperSprite* Sprite;
		FBoxSphereBounds ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UC|SpLight|Sprite" },
		{ "KeyWords", "SpLight UC Sprite" },
		{ "ModuleRelativePath", "Public/SpLightBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderUV_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractSpriteRenderUV_Parms, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderUV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractSpriteRenderUV_Parms, ReturnValue), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderUV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderUV_Statics::NewProp_Sprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderUV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderUV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpLightBlueprintFunctionLibrary, nullptr, "ExtractSpriteRenderUV", nullptr, nullptr, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderUV_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderUV_Statics::SpLightBlueprintFunctionLibrary_eventExtractSpriteRenderUV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderUV_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderUV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderUV_Statics::SpLightBlueprintFunctionLibrary_eventExtractSpriteRenderUV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderUV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderUV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpLightBlueprintFunctionLibrary::execExtractSpriteRenderUV)
{
	P_GET_OBJECT(UPaperSprite,Z_Param_Sprite);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FBoxSphereBounds*)Z_Param__Result=USpLightBlueprintFunctionLibrary::ExtractSpriteRenderUV(Z_Param_Sprite);
	P_NATIVE_END;
}
// End Class USpLightBlueprintFunctionLibrary Function ExtractSpriteRenderUV

// Begin Class USpLightBlueprintFunctionLibrary Function ExtractSpriteSizeUV
struct Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSizeUV_Statics
{
	struct SpLightBlueprintFunctionLibrary_eventExtractSpriteSizeUV_Parms
	{
		UPaperSprite* Sprite;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UC|SpLight|Sprite" },
		{ "KeyWords", "SpLight UC Sprite" },
		{ "ModuleRelativePath", "Public/SpLightBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSizeUV_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractSpriteSizeUV_Parms, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSizeUV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractSpriteSizeUV_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSizeUV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSizeUV_Statics::NewProp_Sprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSizeUV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSizeUV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSizeUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpLightBlueprintFunctionLibrary, nullptr, "ExtractSpriteSizeUV", nullptr, nullptr, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSizeUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSizeUV_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSizeUV_Statics::SpLightBlueprintFunctionLibrary_eventExtractSpriteSizeUV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSizeUV_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSizeUV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSizeUV_Statics::SpLightBlueprintFunctionLibrary_eventExtractSpriteSizeUV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSizeUV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSizeUV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpLightBlueprintFunctionLibrary::execExtractSpriteSizeUV)
{
	P_GET_OBJECT(UPaperSprite,Z_Param_Sprite);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USpLightBlueprintFunctionLibrary::ExtractSpriteSizeUV(Z_Param_Sprite);
	P_NATIVE_END;
}
// End Class USpLightBlueprintFunctionLibrary Function ExtractSpriteSizeUV

// Begin Class USpLightBlueprintFunctionLibrary Function ExtractSpriteSourceDimension
struct Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSourceDimension_Statics
{
	struct SpLightBlueprintFunctionLibrary_eventExtractSpriteSourceDimension_Parms
	{
		UPaperSprite* Sprite;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UC|SpLight|Sprite" },
		{ "KeyWords", "SpLight UC Sprite" },
		{ "ModuleRelativePath", "Public/SpLightBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSourceDimension_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractSpriteSourceDimension_Parms, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSourceDimension_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractSpriteSourceDimension_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSourceDimension_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSourceDimension_Statics::NewProp_Sprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSourceDimension_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSourceDimension_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSourceDimension_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpLightBlueprintFunctionLibrary, nullptr, "ExtractSpriteSourceDimension", nullptr, nullptr, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSourceDimension_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSourceDimension_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSourceDimension_Statics::SpLightBlueprintFunctionLibrary_eventExtractSpriteSourceDimension_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSourceDimension_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSourceDimension_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSourceDimension_Statics::SpLightBlueprintFunctionLibrary_eventExtractSpriteSourceDimension_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSourceDimension()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSourceDimension_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpLightBlueprintFunctionLibrary::execExtractSpriteSourceDimension)
{
	P_GET_OBJECT(UPaperSprite,Z_Param_Sprite);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USpLightBlueprintFunctionLibrary::ExtractSpriteSourceDimension(Z_Param_Sprite);
	P_NATIVE_END;
}
// End Class USpLightBlueprintFunctionLibrary Function ExtractSpriteSourceDimension

// Begin Class USpLightBlueprintFunctionLibrary Function ExtractSpriteStartDimensions
struct Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartDimensions_Statics
{
	struct SpLightBlueprintFunctionLibrary_eventExtractSpriteStartDimensions_Parms
	{
		UPaperSprite* Sprite;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UC|SpLight|Sprite" },
		{ "KeyWords", "SpLight UC Sprite" },
		{ "ModuleRelativePath", "Public/SpLightBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartDimensions_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractSpriteStartDimensions_Parms, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartDimensions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractSpriteStartDimensions_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartDimensions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartDimensions_Statics::NewProp_Sprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartDimensions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartDimensions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpLightBlueprintFunctionLibrary, nullptr, "ExtractSpriteStartDimensions", nullptr, nullptr, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartDimensions_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartDimensions_Statics::SpLightBlueprintFunctionLibrary_eventExtractSpriteStartDimensions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartDimensions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartDimensions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartDimensions_Statics::SpLightBlueprintFunctionLibrary_eventExtractSpriteStartDimensions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartDimensions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartDimensions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpLightBlueprintFunctionLibrary::execExtractSpriteStartDimensions)
{
	P_GET_OBJECT(UPaperSprite,Z_Param_Sprite);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USpLightBlueprintFunctionLibrary::ExtractSpriteStartDimensions(Z_Param_Sprite);
	P_NATIVE_END;
}
// End Class USpLightBlueprintFunctionLibrary Function ExtractSpriteStartDimensions

// Begin Class USpLightBlueprintFunctionLibrary Function ExtractSpriteStartUV
struct Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartUV_Statics
{
	struct SpLightBlueprintFunctionLibrary_eventExtractSpriteStartUV_Parms
	{
		UPaperSprite* Sprite;
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "UC|SpLight|Sprite" },
		{ "KeyWords", "SpLight UC Sprite" },
		{ "ModuleRelativePath", "Public/SpLightBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartUV_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractSpriteStartUV_Parms, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartUV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SpLightBlueprintFunctionLibrary_eventExtractSpriteStartUV_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartUV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartUV_Statics::NewProp_Sprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartUV_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartUV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartUV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USpLightBlueprintFunctionLibrary, nullptr, "ExtractSpriteStartUV", nullptr, nullptr, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartUV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartUV_Statics::PropPointers), sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartUV_Statics::SpLightBlueprintFunctionLibrary_eventExtractSpriteStartUV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartUV_Statics::Function_MetaDataParams), Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartUV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartUV_Statics::SpLightBlueprintFunctionLibrary_eventExtractSpriteStartUV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartUV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartUV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USpLightBlueprintFunctionLibrary::execExtractSpriteStartUV)
{
	P_GET_OBJECT(UPaperSprite,Z_Param_Sprite);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=USpLightBlueprintFunctionLibrary::ExtractSpriteStartUV(Z_Param_Sprite);
	P_NATIVE_END;
}
// End Class USpLightBlueprintFunctionLibrary Function ExtractSpriteStartUV

// Begin Class USpLightBlueprintFunctionLibrary
void USpLightBlueprintFunctionLibrary::StaticRegisterNativesUSpLightBlueprintFunctionLibrary()
{
	UClass* Class = USpLightBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExtractFlipbookRenderBounds", &USpLightBlueprintFunctionLibrary::execExtractFlipbookRenderBounds },
		{ "ExtractSpriteAtlasTexture", &USpLightBlueprintFunctionLibrary::execExtractSpriteAtlasTexture },
		{ "ExtractSpriteDimensions", &USpLightBlueprintFunctionLibrary::execExtractSpriteDimensions },
		{ "ExtractSpritePixelsPerUnrealUnit", &USpLightBlueprintFunctionLibrary::execExtractSpritePixelsPerUnrealUnit },
		{ "ExtractSpriteRenderBox", &USpLightBlueprintFunctionLibrary::execExtractSpriteRenderBox },
		{ "ExtractSpriteRenderPosition", &USpLightBlueprintFunctionLibrary::execExtractSpriteRenderPosition },
		{ "ExtractSpriteRenderUV", &USpLightBlueprintFunctionLibrary::execExtractSpriteRenderUV },
		{ "ExtractSpriteSizeUV", &USpLightBlueprintFunctionLibrary::execExtractSpriteSizeUV },
		{ "ExtractSpriteSourceDimension", &USpLightBlueprintFunctionLibrary::execExtractSpriteSourceDimension },
		{ "ExtractSpriteStartDimensions", &USpLightBlueprintFunctionLibrary::execExtractSpriteStartDimensions },
		{ "ExtractSpriteStartUV", &USpLightBlueprintFunctionLibrary::execExtractSpriteStartUV },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpLightBlueprintFunctionLibrary);
UClass* Z_Construct_UClass_USpLightBlueprintFunctionLibrary_NoRegister()
{
	return USpLightBlueprintFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_USpLightBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SpLightBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SpLightBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractFlipbookRenderBounds, "ExtractFlipbookRenderBounds" }, // 4179523045
		{ &Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteAtlasTexture, "ExtractSpriteAtlasTexture" }, // 1443652699
		{ &Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteDimensions, "ExtractSpriteDimensions" }, // 2303387565
		{ &Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpritePixelsPerUnrealUnit, "ExtractSpritePixelsPerUnrealUnit" }, // 2090433409
		{ &Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderBox, "ExtractSpriteRenderBox" }, // 571715554
		{ &Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderPosition, "ExtractSpriteRenderPosition" }, // 1341845560
		{ &Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteRenderUV, "ExtractSpriteRenderUV" }, // 1916935118
		{ &Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSizeUV, "ExtractSpriteSizeUV" }, // 3910114372
		{ &Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteSourceDimension, "ExtractSpriteSourceDimension" }, // 864187352
		{ &Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartDimensions, "ExtractSpriteStartDimensions" }, // 597437817
		{ &Z_Construct_UFunction_USpLightBlueprintFunctionLibrary_ExtractSpriteStartUV, "ExtractSpriteStartUV" }, // 469389233
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpLightBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USpLightBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_UcSpLightV2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USpLightBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USpLightBlueprintFunctionLibrary_Statics::ClassParams = {
	&USpLightBlueprintFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USpLightBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USpLightBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USpLightBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_USpLightBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpLightBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_USpLightBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USpLightBlueprintFunctionLibrary.OuterSingleton;
}
template<> UCSPLIGHTV2_API UClass* StaticClass<USpLightBlueprintFunctionLibrary>()
{
	return USpLightBlueprintFunctionLibrary::StaticClass();
}
USpLightBlueprintFunctionLibrary::USpLightBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USpLightBlueprintFunctionLibrary);
USpLightBlueprintFunctionLibrary::~USpLightBlueprintFunctionLibrary() {}
// End Class USpLightBlueprintFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_sachinashi_Unreal_Projects__plugin_OutOfLauncher__TempOutputMyPlugins__UcSpLightV2_HostProject_Plugins_UcSpLightV2_Source_UcSpLightV2_Public_SpLightBlueprintFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USpLightBlueprintFunctionLibrary, USpLightBlueprintFunctionLibrary::StaticClass, TEXT("USpLightBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_USpLightBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpLightBlueprintFunctionLibrary), 3387059108U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_sachinashi_Unreal_Projects__plugin_OutOfLauncher__TempOutputMyPlugins__UcSpLightV2_HostProject_Plugins_UcSpLightV2_Source_UcSpLightV2_Public_SpLightBlueprintFunctionLibrary_h_234931353(TEXT("/Script/UcSpLightV2"),
	Z_CompiledInDeferFile_FID_sachinashi_Unreal_Projects__plugin_OutOfLauncher__TempOutputMyPlugins__UcSpLightV2_HostProject_Plugins_UcSpLightV2_Source_UcSpLightV2_Public_SpLightBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_sachinashi_Unreal_Projects__plugin_OutOfLauncher__TempOutputMyPlugins__UcSpLightV2_HostProject_Plugins_UcSpLightV2_Source_UcSpLightV2_Public_SpLightBlueprintFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
