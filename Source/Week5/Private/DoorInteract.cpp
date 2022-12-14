
// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorInteract.h"
#include "GameFramework/Actor.h"
#include "GameFrameWork/PlayerController.h"
#include "Engine/TriggerBox.h"
#include "Engine/World.h"


// Sets default values for this component's properties
UDoorInteract::UDoorInteract()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDoorInteract::BeginPlay()
{
	Super::BeginPlay();
	StartRotation = GetOwner()->GetActorRotation();
	FinalRotation = GetOwner()->GetActorRotation() + DesiredRotation;

	//Ensures TimeToRotate is greater than Epsilon
	CurrentRotationTime = 0.0f;
	// ...
	
}


// Called every frame
void UDoorInteract::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);



	if (CurrentRotationTime < TimeToRotate)
	{

		if(TriggerBox && GetWorld() && GetWorld()->GetFirstLocalPlayerFromController())
		{
			APawn* PlayerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();

			if (PlayerPawn && TriggerBox->IsOverlappingActor(PlayerPawn)) 
			{
				CurrentRotationTime += DeltaTime;
				const float TimeRatio = FMath::Clamp(CurrentRotationTime / TimeToRotate, 0.0f, 1.0f);
				const float RotationAlpha = OpenCurve.GetRichCurveConst()->Eval(TimeRatio);
				const FRotator CurrentRotation = FMath::Lerp(StartRotation, FinalRotation, RotationAlpha);
				GetOwner()->SetActorRotation(CurrentRotation);
			}

		}

	}
	
}

