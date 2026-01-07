// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "Haste.generated.h"

/**
 * 
 */
UCLASS()
class UNREALGAS_API UHaste : public UGameplayAbility
{
	GENERATED_BODY()
public:
	UHaste();
	virtual void ActivateAbility(
		const FGameplayAbilitySpecHandle Handle,
		const FGameplayAbilityActorInfo* ActorInfo,
		const FGameplayAbilityActivationInfo ActivationInfo,
		const FGameplayEventData* TriggerEventData) override;

protected:
	UPROPERTY(EditDefaultsOnly, Category = "Ability|Haste")
	TSubclassOf<UGameplayEffect> EffectClass = nullptr;
};
