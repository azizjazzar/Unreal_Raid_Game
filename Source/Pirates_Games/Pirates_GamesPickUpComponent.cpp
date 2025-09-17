// Copyright Epic Games, Inc. All Rights Reserved.

#include "Pirates_GamesPickUpComponent.h"

UPirates_GamesPickUpComponent::UPirates_GamesPickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UPirates_GamesPickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UPirates_GamesPickUpComponent::OnSphereBeginOverlap);
}

void UPirates_GamesPickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	APirates_GamesCharacter* Character = Cast<APirates_GamesCharacter>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
