// Fill out your copyright notice in the Description page of Project Settings.


#include "SpLightBlueprintFunctionLibrary.h"
#include "PaperSprite.h"
#include "SlateCore.h"
#include "Paper2DModule.h"


FVector2D USpLightBlueprintFunctionLibrary::ExtractSpriteDimensions(UPaperSprite* Sprite)
{
	return Sprite->GetSlateAtlasData().GetSourceDimensions();
}

FVector2D USpLightBlueprintFunctionLibrary::ExtractSpriteStartDimensions(UPaperSprite* Sprite)
{
	UTexture* AtlasTexture  = Sprite->GetSlateAtlasData().AtlasTexture;
	FVector2D StartUV = Sprite->GetSlateAtlasData().StartUV;
	return FVector2D(AtlasTexture->GetSurfaceWidth() * StartUV.X, AtlasTexture->GetSurfaceHeight() * StartUV.Y);
}

FVector2D USpLightBlueprintFunctionLibrary::ExtractSpriteSizeUV(UPaperSprite* Sprite)
{
	return Sprite->GetSlateAtlasData().SizeUV;
}

FVector2D USpLightBlueprintFunctionLibrary::ExtractSpriteStartUV(UPaperSprite* Sprite)
{
	return Sprite->GetSlateAtlasData().StartUV;
}

UTexture* USpLightBlueprintFunctionLibrary::ExtractSpriteAtlasTexture(UPaperSprite* Sprite)
{
	return Sprite->GetSlateAtlasData().AtlasTexture;
}

FVector2D USpLightBlueprintFunctionLibrary::ExtractSpriteSourceDimension(UPaperSprite* Sprite)
{
	UTexture* AtlasTexture = Sprite->GetSlateAtlasData().AtlasTexture;
	return FVector2D(AtlasTexture->GetSurfaceWidth(), AtlasTexture->GetSurfaceHeight());
}

FVector USpLightBlueprintFunctionLibrary::ExtractSpriteRenderBox(UPaperSprite* Sprite)
{
	FBoxSphereBounds Bounds = Sprite->GetRenderBounds();
	FVector TexDims = (Bounds.BoxExtent * 2.0) * (double)Sprite->GetPixelsPerUnrealUnit();
	return  TexDims;
}

FBoxSphereBounds USpLightBlueprintFunctionLibrary::ExtractSpriteRenderUV(UPaperSprite* Sprite)
{
	FBox BoundingBox(ForceInit);
	for (int32 VertexIndex = 0; VertexIndex < Sprite->BakedRenderData.Num(); ++VertexIndex)
	{
		const FVector4& VertXYUV = Sprite->BakedRenderData[VertexIndex];
		const FVector Vert((PaperAxisX * VertXYUV.Z) + (PaperAxisY * VertXYUV.W));
		BoundingBox += Vert;
	}

	// Make the whole thing a single unit 'deep'
	const FVector HalfThicknessVector = 0.5f * PaperAxisZ;
	BoundingBox += -HalfThicknessVector;
	BoundingBox += HalfThicknessVector;

	return FBoxSphereBounds(BoundingBox);
}

FBoxSphereBounds USpLightBlueprintFunctionLibrary::ExtractSpriteRenderPosition(UPaperSprite* Sprite)
{
	//FBox BoundingBox(ForceInit);
	//for (int32 VertexIndex = 0; VertexIndex < Sprite->BakedRenderData.Num(); ++VertexIndex)
	//{
	//	const FVector4& VertXYUV = Sprite->BakedRenderData[VertexIndex];
	//	const FVector Vert((PaperAxisX * VertXYUV.Z) + (PaperAxisY * VertXYUV.W));
	//	BoundingBox += Vert;
	//}

	//// Make the whole thing a single unit 'deep'
	//const FVector HalfThicknessVector = 0.5f * PaperAxisZ;
	//BoundingBox += -HalfThicknessVector;
	//BoundingBox += HalfThicknessVector;

	//FBoxSphereBounds Bounds  = FBoxSphereBounds(BoundingBox);

	FBoxSphereBounds Bounds = ExtractSpriteRenderUV(Sprite);

	UTexture* AtlasTexture = Sprite->GetSlateAtlasData().AtlasTexture;

	double PivotX = (Bounds.BoxExtent.X * 2) * (double)AtlasTexture->GetSurfaceWidth();
	double PivotY = (Bounds.BoxExtent.Y * 2) * (double)AtlasTexture->GetSurfaceDepth();
	double PivotZ = (Bounds.BoxExtent.Z * 2) * (double)AtlasTexture->GetSurfaceHeight();
	
	Bounds.BoxExtent = FVector(PivotX, PivotY, PivotZ) - (ExtractSpriteRenderBox(Sprite) / 2);

	return  Bounds;
}

float USpLightBlueprintFunctionLibrary::ExtractSpritePixelsPerUnrealUnit(UPaperSprite* Sprite)
{
	return Sprite->GetPixelsPerUnrealUnit();
}

FBoxSphereBounds USpLightBlueprintFunctionLibrary::ExtractFlipbookRenderBounds(UPaperFlipbook* PaperFlipbook)
{
	return PaperFlipbook->GetRenderBounds();
}
