// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "GameplayEffectTypes.h"
#include "TestCharacter.generated.h"

class UStatusAttributeSet;
class UCharacterAttributeSet;
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

	UFUNCTION(BlueprintCallable)
	void TestSetByCaller(float Amount);

	UFUNCTION(BlueprintCallable)
	void TestAddInfiniteEffect();

	UFUNCTION(BlueprintCallable)
	void TestRemoveInfiniteEffect();

	UFUNCTION(BlueprintCallable)
	void TestAbility();

	UFUNCTION(BlueprintCallable)
	void TestLineTrace();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test")
	float HPAmount = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test")
	TSubclassOf<class UGameplayEffect> TestEffectClass = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test")
	TSubclassOf<class UGameplayEffect> TestInfiniteEffectClass = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Test")
	TSubclassOf<class UGameplayEffect> TestHitEffectClass = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Initialize")
	TSubclassOf<class UGameplayEffect> InitializeEffectClass = nullptr;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Ability")
	TObjectPtr<UAbilitySystemComponent> AbilitySystemComponent = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Component")
	TObjectPtr<UWidgetComponent> BarWidgetComponent = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Ability")
	TSubclassOf<UGameplayAbility> HasteClass = nullptr;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input")
	TObjectPtr<class UInputAction> IA_Ability1 = nullptr;
private:
	UPROPERTY()
	TObjectPtr<UStatusAttributeSet> StatusAttributeSet = nullptr;

	UPROPERTY()
	TObjectPtr<UCharacterAttributeSet> CharacterAttributeSet = nullptr;

	FGameplayTag TagEffectDamage;

	FActiveGameplayEffectHandle TestInfinite;

	void OnHealthChange(const FOnAttributeChangeData& InData);
	void OnMaxHealthChange(const FOnAttributeChangeData& InData);
	void OnManaChange(const FOnAttributeChangeData& InData);
	void OnMaxManaChange(const FOnAttributeChangeData& InData);

	void OnAbility1Press();
};
