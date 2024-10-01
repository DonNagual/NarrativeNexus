// NN_Cpp_SQLite_Manager.h

#pragma once

#include "CoreMinimal.h"
#include "SQLiteDatabase.h"
#include "UObject/NoExportTypes.h"
#include "NN_Cpp_SQLite_Manager.generated.h"

UCLASS()
class NARRATIVENEXUS_API UNN_Cpp_SQLite_Manager : public UObject
{
    GENERATED_BODY()

public:

    UNN_Cpp_SQLite_Manager();

    UFUNCTION()
    bool OpenDatabase(FString DatabasePath);

    UFUNCTION()
    void CloseDatabase();

    UFUNCTION()
    bool ExecuteQuery(FString Query);

private:
    
    TUniquePtr<FSQLiteDatabase> SQLiteDb;
};

























//#pragma once
//
//#include "CoreMinimal.h"
//#include "SQLiteDatabase.h"
//#include "SQLitePreparedStatement.h"
//
//class NN_Cpp_SQLite_Manager
//{
//public:
//    // Konstruktor und Destruktor
//    NN_Cpp_SQLite_Manager();
//    ~NN_Cpp_SQLite_Manager();
//
//    // Datenbank öffnen
//    bool OpenDatabase(const FString& DBPath);
//
//    // Datenbank schließen
//    bool CloseDatabase();
//
//    // Daten einfügen (Beispiel für eine NPC-Tabelle)
//    bool InsertNPC(const FString& Name, const FString& Race, const FString& Class, int32 Age);
//
//    // Daten aktualisieren
//    bool UpdateNPC(int32 NPCID, const FString& Name, const FString& Race, const FString& Class, int32 Age);
//
//    // Daten abrufen (Beispiel für eine Abfrage von NPCs nach Name)
//    bool GetNPCByName(const FString& Name, TArray<FString>& OutResults);
//
//    // Daten löschen
//    bool DeleteNPC(int32 NPCID);
//
//private:
//    FSQLiteDatabase Database; // SQLite-Datenbank-Instanz
//};
