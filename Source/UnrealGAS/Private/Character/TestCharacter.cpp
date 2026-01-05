// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/TestCharacter.h"
#include "AbilitySystemComponent.h"
#include "GameAbility/StatusAttributeSet.h"

// Sets default values
ATestCharacter::ATestCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//컴포넌트 생성
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	StatusAttributeSet = CreateDefaultSubobject<UStatusAttributeSet>(TEXT("StatusAttributeSet"));

}

void ATestCharacter::ChangeHP(float Amount)
{
	if (StatusAttributeSet)
	{
		float NewHealth = StatusAttributeSet->GetHealth() + Amount;
		StatusAttributeSet->SetHealth(NewHealth);
	}
}

// Called when the game starts or when spawned
void ATestCharacter::BeginPlay()
{
	Super::BeginPlay();
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->InitAbilityActorInfo(this, this); //어빌리티 시스템 컴포넌트 초기화

		FOnGameplayAttributeValueChange& OnHealthChange = 
		AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(UStatusAttributeSet::GetHealthAttribute());

		OnHealthChange.AddUObject(this, &ATestCharacter::OnHealthChange);
	}

	if (StatusAttributeSet)
	{
		StatusAttributeSet->SetHealth(50.0f); //무조건 setter사용해서 변경
	}
}

// Called every frame
void ATestCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FString HealthString = FString::Printf(TEXT("%.1f/%.1f"), StatusAttributeSet->GetHealth(), StatusAttributeSet->GetMaxHealth());
	DrawDebugString(GetWorld(), GetActorLocation(), HealthString, nullptr, FColor::White, 0, true);
}

// Called to bind functionality to input
void ATestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void ATestCharacter::OnHealthChange(const FOnAttributeChangeData& InData)
{
	UE_LOG(LogTemp, Log, TEXT("Health가 변경되었다 %.1f -> %.1f"), InData.OldValue, InData.NewValue);
}

