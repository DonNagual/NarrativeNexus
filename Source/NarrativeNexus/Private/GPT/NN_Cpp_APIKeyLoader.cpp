// NN_Cpp_APIKeyLoader.cpp

#include "GPT/NN_Cpp_APIKeyLoader.h"

FString UNN_Cpp_APIKeyLoader::LoadAPIKey() const
{
	FString DefaultFilePath = FPaths::ProjectDir() + TEXT("config/keys.txt");
	return LoadAPIKeyFromFile(DefaultFilePath);
}

FString UNN_Cpp_APIKeyLoader::LoadAPIKeyFromFile(const FString& FilePath) const
{
	FString ApiKey;
	if (FFileHelper::LoadFileToString(ApiKey, *FilePath))
	{
		// Trim the API key to remove any newline characters
		return ApiKey.TrimStartAndEnd();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to load API key from file: %s"), *FilePath);
		return FString();
	}
}
