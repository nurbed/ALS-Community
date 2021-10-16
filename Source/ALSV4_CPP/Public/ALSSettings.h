// Copyright (C) Pakyman Prod. 2020. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "ALSSettings.generated.h"

/**
 * 
 */
UCLASS(config=Game, defaultconfig, meta=(DisplayName="ALS Settings"))
class ALSV4_CPP_API UALSSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	//TODO: @ALS TODO: @CAG Unify Inputs on the same window in the Project settings  
	UPROPERTY(EditDefaultsOnly, config, BlueprintReadWrite, Category="Inputs")
	FName InputForwardAxis{ "MoveForward" };
	UPROPERTY(EditDefaultsOnly, config, BlueprintReadWrite, Category="Inputs")
	FName InputRightAxis{ "MoveRight" };
	UPROPERTY(EditAnywhere, config, BlueprintReadOnly, Category = "Inputs")
	FName SprintInput{ "Sprint" };
	
	static const UALSSettings* Get();
};
