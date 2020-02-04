// Copyright (c) Improbable Worlds Ltd, All Rights Reserved
 
#pragma once
 
#include "SpatialCommonTypes.h"
#include "Utils/SpatialActorGroupManager.h"
#include "Utils/SpatialStatics.h"

#include <WorkerSDK/improbable/c_schema.h>
#include <WorkerSDK/improbable/c_worker.h>

class AActor;
class USpatialActorChannel;
class USpatialNetDriver;
class USpatialPackageMap;
class USpatialClassInfoManager;
class USpatialPackageMapClient;
 
namespace SpatialGDK
{
class SpatialRPCService;	

struct RPCsOnEntityCreation;
using FRPCsOnEntityCreationMap = TMap<TWeakObjectPtr<const UObject>, RPCsOnEntityCreation>;
 
class SPATIALGDK_API EntityFactory
{
public:
	EntityFactory(USpatialNetDriver* InNetDriver, USpatialPackageMapClient* InPackageMap, USpatialClassInfoManager* InClassInfoManager, SpatialActorGroupManager* InActorGroupManager, SpatialRPCService* InRPCService);
 
	TArray<FWorkerComponentData> CreateEntityComponents(USpatialActorChannel* Channel, FRPCsOnEntityCreationMap& OutgoingOnCreateEntityRPCs);
	TArray<FWorkerComponentData> CreateTombstoneEntityComponents(AActor* Actor);
 
private:
	USpatialNetDriver* NetDriver;
	USpatialPackageMapClient* PackageMap;
	USpatialClassInfoManager* ClassInfoManager;
	SpatialActorGroupManager* ActorGroupManager;
	SpatialRPCService* RPCService;
};
}  // namepsace SpatialGDK
