// Fill out your copyright notice in the Description page of Project Settings.


#include "Chicken_BotCharacter.h"

#include "SkeletalRenderPublic.h"
#include "Engine/SkeletalMeshSocket.h"

// Sets default values
AChicken_BotCharacter::AChicken_BotCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AChicken_BotCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AChicken_BotCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AChicken_BotCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
void AChicken_BotCharacter::ShootBullet()
{

	FActorSpawnParameters spwanParams;
	auto mesh=this->GetMesh();
	auto muzzleTransform= mesh->GetSocketTransform("muzzle",RTS_World);
	GetWorld()->SpawnActor<AActor>(BulletBPActor,muzzleTransform,spwanParams);

	UE_LOG(LogTemp,Warning,TEXT("Shoooooooot %s"),*mesh->SkeletalMesh->GetName());

}


