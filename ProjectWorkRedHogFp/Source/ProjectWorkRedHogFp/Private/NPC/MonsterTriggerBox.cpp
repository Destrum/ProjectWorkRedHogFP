// Fill out your copyright notice in the Description page of Project Settings.


#include "NPC/MonsterTriggerBox.h"

#include "Components/BoxComponent.h"

// Sets default values
AMonsterTriggerBox::AMonsterTriggerBox()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	SetRootComponent(Mesh);
	Box = CreateDefaultSubobject<UBoxComponent>(TEXT("Box"));
	Box->SetupAttachment(Mesh);
}

// Called when the game starts or when spawned
void AMonsterTriggerBox::BeginPlay()
{
	Super::BeginPlay();
	if (!Box) { return; }
	Box->OnComponentBeginOverlap.AddDynamic(this, &AMonsterTriggerBox::HandleBeginOverlap);
	Box->OnComponentEndOverlap.AddDynamic(this, &AMonsterTriggerBox::HandleEndOverlap);
}

// Called every frame
void AMonsterTriggerBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AMonsterTriggerBox::HandleBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                            UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep,
                                            const FHitResult& SweepResult)
{
	UE_LOG(LogTemp, Warning, TEXT("Overlap"));

	if (OtherActor->ActorHasTag("Player"))
	{
		UE_LOG(LogTemp, Warning, TEXT("Overlapped with player"));
	}
}

void AMonsterTriggerBox::HandleEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor,
                                          UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	UE_LOG(LogTemp, Warning, TEXT("End Overlap"));

	if (OtherActor->ActorHasTag("Player"))
	{
		UE_LOG(LogTemp, Warning, TEXT("Ended Overlap with player"));
	}
}
