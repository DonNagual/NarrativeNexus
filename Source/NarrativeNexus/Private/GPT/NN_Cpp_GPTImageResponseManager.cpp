// NN_Cpp_GPTImageResponseManager.cpp

#include "GPT/NN_Cpp_GPTImageResponseManager.h"

void UNN_Cpp_GPTImageResponseManager::ProcessImageResponse(
	const FString& ResponseString,
	UNN_Cpp_JSONHandler* JSONHandlerInstance,
	TFunction<void(UTexture2D*)> OnImageGenerated
)
{
	TSharedPtr<FJsonObject> JsonObject = JSONHandlerInstance->DeserializeJSON(ResponseString);

	if (JsonObject.IsValid())
	{
		const TArray<TSharedPtr<FJsonValue>>* DataArray;
		if (JsonObject->TryGetArrayField(TEXT("data"), DataArray) && DataArray != nullptr && DataArray->Num() > 0)
		{
			FString Base64Image = (*DataArray)[0]->AsObject()->GetStringField(TEXT("b64_json"));
			UTexture2D* GeneratedTexture = ConvertBase64ToTexture(Base64Image);
			OnImageGenerated(GeneratedTexture);
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Data array is empty or missing in the image response."));
			OnImageGenerated(nullptr);
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to deserialize JSON image response."));
		OnImageGenerated(nullptr);
	}
}

UTexture2D* UNN_Cpp_GPTImageResponseManager::ConvertBase64ToTexture(const FString& Base64String)
{
	TArray<uint8> ImageData;
	FBase64::Decode(Base64String, ImageData);

	return FImageUtils::ImportBufferAsTexture2D(ImageData);
}
