// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bullet.h"
#include "GameFramework/Character.h"
#include "Chicken_BotCharacter.generated.h"

UCLASS()
class SPIDERSHOOTUE5_API AChicken_BotCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AChicken_BotCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	
public:
	UPROPERTY(EditAnywhere,Category="Shooting")
	TSubclassOf<AActor> BulletBPActor;

	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

UFUNCTION(BlueprintCallable)
	void ShootBullet();

};
