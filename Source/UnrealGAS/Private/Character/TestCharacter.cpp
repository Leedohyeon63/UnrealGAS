// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/TestCharacter.h"
#include "AbilitySystemComponent.h"
#include "GameAbility/StatusAttributeSet.h"
#include "GameAbility/CharacterAttributeSet.h"
#include "GameAbility/GameAbilitySystemEnums.h"
#include "Components/WidgetComponent.h"
#include "Interface/TwinResource.h"
#include "EnhancedInputComponent.h"

// Sets default values
ATestCharacter::ATestCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	//컴포넌트 생성
	AbilitySystemComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystemComponent"));
	StatusAttributeSet = CreateDefaultSubobject<UStatusAttributeSet>(TEXT("StatusAttributeSet"));
	CharacterAttributeSet = CreateDefaultSubobject<UCharacterAttributeSet>(TEXT("CharacterAttributeSet"));
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

void ATestCharacter::TestSetByCaller(float Amount)
{
	if (AbilitySystemComponent)
	{
		FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
		FGameplayEffectSpecHandle SpecHandle = 
		AbilitySystemComponent->MakeOutgoingSpec(TestEffectClass, 0, EffectContext);
		if (SpecHandle.IsValid())
		{
			SpecHandle.Data->SetSetByCallerMagnitude(TagEffectDamage,Amount);
			AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
		}
	}
}

void ATestCharacter::TestAddInfiniteEffect()
{
	if (TestInfiniteEffectClass && AbilitySystemComponent)
	{
		FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
		EffectContext.AddInstigator(this, this);

		FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(
			TestInfiniteEffectClass, 0, EffectContext);

		if (SpecHandle.IsValid())
		{
			TestInfinite = AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
		}
	}
}

void ATestCharacter::TestRemoveInfiniteEffect()
{
	if (TestInfinite.IsValid())
	{
		AbilitySystemComponent->RemoveActiveGameplayEffect(TestInfinite);
	}
}

void ATestCharacter::TestAbility()
{
	if (AbilitySystemComponent && HasteClass)
	{
		// 클래스로 어빌리티 발동시키기
		AbilitySystemComponent->TryActivateAbilityByClass(HasteClass);
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

	if (HasteClass)
	{
		AbilitySystemComponent->GiveAbility(
			FGameplayAbilitySpec(
				HasteClass,		// 어빌리티 클래스
				1,				// 레벨
				static_cast<int32>(EAbilityInputID::Haste),				// 입력 ID
				this			// 소스
			)
		);
	}

	TagEffectDamage = FGameplayTag::RequestGameplayTag(FName("Effect.Damage"));

	if (InitializeEffectClass && AbilitySystemComponent)
	{
		FGameplayEffectContextHandle EffectContext = AbilitySystemComponent->MakeEffectContext();
		FGameplayEffectSpecHandle SpecHandle = AbilitySystemComponent->MakeOutgoingSpec(InitializeEffectClass, 0, EffectContext);
		if (SpecHandle.IsValid())
		{
			AbilitySystemComponent->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
		}
	}
}

// Called every frame
void ATestCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (StatusAttributeSet)
	{
		FString HealthString = FString::Printf(TEXT("%.1f/%.1f"), StatusAttributeSet->GetHealth(), StatusAttributeSet->GetMaxHealth());
		DrawDebugString(GetWorld(), GetActorLocation(), HealthString, nullptr, FColor::White, 0, true);
	}
}

// Called to bind functionality to input
void ATestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	if (EnhancedInput)
	{
		OnAbility1Press();
	}
}

void ATestCharacter::OnHealthChange(const FOnAttributeChangeData& InData)
{
	if (StatusAttributeSet)
	{
		UE_LOG(LogTemp, Log, TEXT("Health가 변경되었다 %.1f -> %.1f"), InData.OldValue, InData.NewValue);
		ITwinResource::Execute_UpdateCurrentHealth(BarWidgetComponent->GetWidget(), StatusAttributeSet->GetHealth());
	}
}

void ATestCharacter::OnMaxHealthChange(const FOnAttributeChangeData& InData)
{
	if (StatusAttributeSet)
	{
		UE_LOG(LogTemp, Log, TEXT("On Health Change : %.1f -> %.1f"), InData.OldValue, InData.NewValue);
		ITwinResource::Execute_UpdateCurrentHealth(BarWidgetComponent->GetWidget(), StatusAttributeSet->GetHealth());
	}
}

void ATestCharacter::OnManaChange(const FOnAttributeChangeData& InData)
{
	if (StatusAttributeSet)
	{
		UE_LOG(LogTemp, Log, TEXT("Mana가 변경되었다 %.1f -> %.1f"), InData.OldValue, InData.NewValue);
		ITwinResource::Execute_UpdateCurrentMana(BarWidgetComponent->GetWidget(), StatusAttributeSet->GetMana());

	}
}

void ATestCharacter::OnMaxManaChange(const FOnAttributeChangeData& InData)
{
	if (StatusAttributeSet)
	{
		UE_LOG(LogTemp, Log, TEXT("MaxMana가 변경되었다 %.1f -> %.1f"), InData.OldValue, InData.NewValue);
		ITwinResource::Execute_UpdateMaxMana(BarWidgetComponent->GetWidget(), StatusAttributeSet->GetMaxMana());
	}
}

void ATestCharacter::OnAbility1Press()
{
	UE_LOG(LogTemp, Log, TEXT("OnAbility1Press"));
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->AbilityLocalInputPressed(static_cast<int32>(EAbilityInputID::Haste));
	}
}

