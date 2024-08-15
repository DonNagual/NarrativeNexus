// NN_Cpp_APIKeyLoader.cpp

#include "GPT/NN_Cpp_APIKeyLoader.h"

FString UNN_Cpp_APIKeyLoader::LoadAPIKey(const FString& FilePath) const
{
	FString ApiKey;
	if (FFileHelper::LoadFileToString(ApiKey, *FilePath))
	{
		return ApiKey.TrimStartAndEnd();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load API key from file: %s"), *FilePath);
		return FString();
	}
}
