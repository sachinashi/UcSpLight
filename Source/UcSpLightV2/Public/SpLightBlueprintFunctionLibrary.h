// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperSprite.h"
#include "PaperFlipbook.h"
#include "SlateCore.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SpLightBlueprintFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class UCSPLIGHTV2_API USpLightBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintPure, meta = (KeyWords = "SpLight UC Sprite"), Category = "UC|SpLight|Sprite")
	static float ExtractSpritePixelsPerUnrealUnit(UPaperSprite* Sprite);

	UFUNCTION(BlueprintPure, meta = (KeyWords = "SpLight UC Sprite"), Category = "UC|SpLight|Sprite")
	static FVector2D ExtractSpriteDimensions(UPaperSprite* Sprite);

	UFUNCTION(BlueprintPure, meta = (KeyWords = "SpLight UC Sprite"), Category = "UC|SpLight|Sprite")
	static FVector2D ExtractSpriteStartDimensions(UPaperSprite* Sprite);

	UFUNCTION(BlueprintPure, meta = (KeyWords = "SpLight UC Sprite"), Category = "UC|SpLight|Sprite")
	static FVector2D ExtractSpriteSizeUV(UPaperSprite* Sprite);

	UFUNCTION(BlueprintPure, meta = (KeyWords = "SpLight UC Sprite"), Category = "UC|SpLight|Sprite")
	static FVector2D ExtractSpriteStartUV(UPaperSprite* Sprite);

	UFUNCTION(BlueprintPure, meta = (KeyWords = "SpLight UC Sprite"), Category = "UC|SpLight|Sprite")
	static UTexture* ExtractSpriteAtlasTexture(UPaperSprite* Sprite);

	UFUNCTION(BlueprintPure, meta = (KeyWords = "SpLight UC Sprite"), Category = "UC|SpLight|Sprite")
	static FVector2D ExtractSpriteSourceDimension(UPaperSprite* Sprite);

	UFUNCTION(BlueprintPure, meta = (KeyWords = "SpLight UC Sprite"), Category = "UC|SpLight|Sprite")
	static FVector ExtractSpriteRenderBox(UPaperSprite* Sprite);

	UFUNCTION(BlueprintPure, meta = (KeyWords = "SpLight UC Sprite"), Category = "UC|SpLight|Sprite")
	static FBoxSphereBounds ExtractSpriteRenderUV(UPaperSprite* Sprite);

	UFUNCTION(BlueprintPure, meta = (KeyWords = "SpLight UC Sprite"), Category = "UC|SpLight|Sprite")
	static FBoxSphereBounds ExtractSpriteRenderPosition(UPaperSprite* Sprite);

	UFUNCTION(BlueprintPure, meta = (KeyWords = "SpLight UC Sprite"), Category = "UC|SpLight|Sprite")
	static FBoxSphereBounds  ExtractFlipbookRenderBounds(UPaperFlipbook* PaperFlipbook);

};
