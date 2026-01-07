// Fill out your copyright notice in the Description page of Project Settings.


#include "GameAbility/CharacterAttributeSet.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"

UCharacterAttributeSet::UCharacterAttributeSet()
{
	InitMoveSpeed(500.0f);
	InitJumpPower(700.0f);
	InitAttackPower(10.0f);
	InitCriticalRate(0.0f);
}

void UCharacterAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);

	if (Attribute == GetMoveSpeedAttribute())
	{
		AActor* OwningActor = GetOwningActor(); // 이 어트리뷰트를 가지고 있는 액터
		ACharacter* OwningChar = Cast<ACharacter>(OwningActor);
		if (OwningChar)
		{
			OwningChar->GetCharacterMovement()->MaxWalkSpeed = NewValue;
		}
	}

	if (Attribute == GetJumpPowerAttribute())
	{
		AActor* OwningActor = GetOwningActor(); // 이 어트리뷰트를 가지고 있는 액터
		ACharacter* OwningChar = Cast<ACharacter>(OwningActor);
		if (OwningChar)
		{
			OwningChar->GetCharacterMovement()->JumpZVelocity = NewValue;
		}
	}

	if (Attribute == GetCriticalRateAttribute())
	{
		AActor* OwningActor = GetOwningActor(); // 이 어트리뷰트를 가지고 있는 액터
		ACharacter* OwningChar = Cast<ACharacter>(OwningActor);
	}
}

