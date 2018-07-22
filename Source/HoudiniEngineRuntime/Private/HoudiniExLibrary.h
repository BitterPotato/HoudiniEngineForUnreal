// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HAPI_Common.h"

/**
 * 
 */
class HOUDINIENGINERUNTIME_API HoudiniExLibrary
{
public:
	static int32 FoliageTypeIndex;

	//Houdini��Detail����ӳ���ϵ Point��unreal_input_mesh_name->Detail��MeshPath[Index]��FoliagePath[Index]->unreal_foliage�����FoliagePath����Point
	static bool HapiCreateInputNodeForFoliageType(class UFoliageType* FoliageType, HAPI_NodeId& ConnectedAssetId, TArray<HAPI_NodeId>& OutCreatedNodeIds, class UStaticMeshComponent* StaticMeshComponent = nullptr, const bool& ExportAllLODs = false, const bool& ExportSockets = false);

	constexpr static char* FoliageAttributeName = "unreal_foliage";

	static bool CreateInstanceFoliageInput(class UHoudiniAssetInstanceInput* HoudiniAssetInstanceInput, HAPI_NodeId AssetId, struct FHoudiniGeoPartObject& HoudiniGeoPartObject);
};
