// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "rollaballCharacter.h"
#include "Weapon.generated.h"

UCLASS()
class ROLLABALL_API AWeapon : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AWeapon();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	class ArollaballCharacter* Holder = nullptr;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnWeaponBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
