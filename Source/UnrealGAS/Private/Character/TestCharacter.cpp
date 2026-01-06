// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/TestCharacter.h"
#include "AbilitySystemComponent.h"
#include "GameAbility/StatusAttributeSet.h"
#include "Components/WidgetComponent.h"
#include "Interface/TwinResource.h"
// Sets default values
ATestCharacter::ATestCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//컴포넌트 생성
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	StatusAttributeSet = CreateDefaultSubobject<UStatusAttributeSet>(TEXT("StatusAttributeSet"));
	BarWidgetComponent = CreateDefaultSubobject<UWidgetComponent>(TEXT("BarWidgetComponent"));
	BarWidgetComponent->SetupAttachment(RootComponent);

}

void ATestCharacter::ChangeHP(float Amount)
{
	if (StatusAttributeSet)
	{
		float NewHealth = StatusAttributeSet->GetHealth() + Amount;
		StatusAttributeSet->SetHealth(NewHealth);
	}
}

void ATestCharacter::TestSetByCaller()
{
	if (AbilitySystemComponent)
	{
		//AbilitySystemComponent->MakeOutgoingSpec(TestEffect);
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

		FOnGameplayAttributeValueChange& OnMaxHealthChange =
			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(UStatusAttributeSet::GetMaxHealthAttribute());

		OnMaxHealthChange.AddUObject(this, &ATestCharacter::OnMaxHealthChange);

		FOnGameplayAttributeValueChange& OnManaChange =
			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(UStatusAttributeSet::GetManaAttribute());

		OnManaChange.AddUObject(this, &ATestCharacter::OnManaChange);

		FOnGameplayAttributeValueChange& OnMaxManaChange =
			AbilitySystemComponent->GetGameplayAttributeValueChangeDelegate(UStatusAttributeSet::GetMaxManaAttribute());

		OnMaxManaChange.AddUObject(this, &ATestCharacter::OnMaxManaChange);

	}

	if (StatusAttributeSet)
	{
		StatusAttributeSet->SetHealth(50.0f); //무조건 setter사용해서 변경
		
		if (BarWidgetComponent && BarWidgetComponent->GetWidget())
		{
			if (BarWidgetComponent->GetWidget()->Implements<UTwinResource>())
			{
				ITwinResource::Execute_UpdateMaxHealth(BarWidgetComponent->GetWidget(), StatusAttributeSet->GetMaxHealth());
				ITwinResource::Execute_UpdateCurrentHealth(BarWidgetComponent->GetWidget(), StatusAttributeSet->GetHealth());

				ITwinResource::Execute_UpdateMaxMana(BarWidgetComponent->GetWidget(), StatusAttributeSet->GetMaxMana());
				ITwinResource::Execute_UpdateCurrentMana(BarWidgetComponent->GetWidget(), StatusAttributeSet->GetMana());
			}

		}
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
	ITwinResource::Execute_UpdateCurrentHealth(BarWidgetComponent->GetWidget(), StatusAttributeSet->GetHealth());

}

void ATestCharacter::OnMaxHealthChange(const FOnAttributeChangeData& InData)
{
	UE_LOG(LogTemp, Log, TEXT("MaxHealth가 변경되었다 %.1f -> %.1f"), InData.OldValue, InData.NewValue);
	ITwinResource::Execute_UpdateMaxHealth(BarWidgetComponent->GetWidget(), StatusAttributeSet->GetMaxHealth());
}

void ATestCharacter::OnManaChange(const FOnAttributeChangeData& InData)
{
	UE_LOG(LogTemp, Log, TEXT("Mana가 변경되었다 %.1f -> %.1f"), InData.OldValue, InData.NewValue);
	ITwinResource::Execute_UpdateCurrentMana(BarWidgetComponent->GetWidget(), StatusAttributeSet->GetMana());
}

void ATestCharacter::OnMaxManaChange(const FOnAttributeChangeData& InData)
{
	UE_LOG(LogTemp, Log, TEXT("MaxMana가 변경되었다 %.1f -> %.1f"), InData.OldValue, InData.NewValue);
	ITwinResource::Execute_UpdateMaxMana(BarWidgetComponent->GetWidget(), StatusAttributeSet->GetMaxMana());
}

