// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BulletHitInterface.h"
#include "Explosive.generated.h"

UCLASS()
class SHOOTER_API AExplosive : public AActor, public IBulletHitInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExplosive();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class UParticleSystem* ExplodePatyicles;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Combat, meta = (AllowPrivateAccess = "true"))
	class USoundCue* ExplodeSound;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void BulletHit_Implementation(FHitResult HitResult) override;
};
