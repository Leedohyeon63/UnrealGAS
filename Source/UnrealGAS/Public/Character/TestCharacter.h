// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"
#include "TestCharacter.generated.h"
class UStatusAttributeSet;
class UWidgetComponent;
UCLASS()
class UNREALGAS_API ATestCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ATestCharacter();

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override {
		return AbilitySystemComponent;
	};

	UFUNCTION(BlueprintCallable)
	void ChangeHP(float Amount);
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test")
	float HPAmount = 0.0f;
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ability")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component")
	TObjectPtr<UWidgetComponent> BarWidgetComponent = nullptr;

private:
	UPROPERTY()
	TObjectPtr<UStatusAttributeSet> StatusAttributeSet = nullptr;

	void OnHealthChange(const FOnAttributeChangeData& InData);
	void OnManaChange(const FOnAttributeChangeData& InData);
};
