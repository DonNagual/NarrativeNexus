// NN_Cpp_JSONHandler.cpp

#include "GPT/NN_Cpp_JSONHandler.h"

FString UNN_Cpp_JSONHandler::SerializeJSON(TSharedPtr<FJsonObject> JsonObject) const
{
	FString JsonString;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&JsonString);
	FJsonSerializer::Serialize(JsonObject.ToSharedRef(), Writer);
	return JsonString;
}

TSharedPtr<FJsonObject> UNN_Cpp_JSONHandler::DeserializeJSON(const FString& JsonString) const
{
	TSharedPtr<FJsonObject> JsonObject = MakeShareable(new FJsonObject());
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(JsonString);
	if (FJsonSerializer::Deserialize(Reader, JsonObject) && JsonObject.IsValid())
	{
		return JsonObject;
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to deserialize JSON: %s"), *JsonString);
		return nullptr;
	}
}
