// NN_Cpp_SQLite_Manager.cpp

#include "SQLite/NN_Cpp_SQLite_Manager.h"

UNN_Cpp_SQLite_Manager::UNN_Cpp_SQLite_Manager()
{
    SQLiteDb = MakeUnique<FSQLiteDatabase>();
}

bool UNN_Cpp_SQLite_Manager::OpenDatabase(FString DatabasePath)
{
    if (!FPaths::FileExists(DatabasePath))
    {
        UE_LOG(LogTemp, Error, TEXT("Die SQLite-Datenbankdatei %s wurde nicht gefunden."), *DatabasePath);
        return false;
    }

    if (SQLiteDb->Open(*DatabasePath, ESQLiteDatabaseOpenMode::ReadWrite))
    {
        UE_LOG(LogTemp, Log, TEXT("Die SQLite-Datenbank %s wurde erfolgreich geöffnet."), *DatabasePath);
        return true;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("Fehler beim Öffnen der SQLite-Datenbank %s."), *DatabasePath);
        return false;
    }
}

void UNN_Cpp_SQLite_Manager::CloseDatabase()
{
    if (SQLiteDb->IsValid())
    {
        SQLiteDb->Close();
        UE_LOG(LogTemp, Log, TEXT("Die SQLite-Datenbank wurde geschlossen."));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Die SQLite-Datenbank war nicht geöffnet."));
    }
}

bool UNN_Cpp_SQLite_Manager::ExecuteQuery(FString Query)
{
    if (SQLiteDb->IsValid())
    {
        FSQLitePreparedStatement PreparedStatement(*SQLiteDb, *Query, ESQLitePreparedStatementFlags::Persistent);

        if (PreparedStatement.IsValid())
        {
            if (PreparedStatement.Execute())
            {
                UE_LOG(LogTemp, Log, TEXT("SQL-Abfrage erfolgreich ausgeführt: %s"), *Query);
                return true;
            }
        }
        UE_LOG(LogTemp, Error, TEXT("Fehler beim Vorbereiten der SQL-Abfrage: %s"), *Query);
        return false;
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("SQLite-Datenbank ist nicht geöffnet."));
        return false;
    }
}



















//#include "NN_Cpp_SQLite_Manager.h"
//#include "Misc/Paths.h"
//
//// Konstruktor
//NN_Cpp_SQLite_Manager::NN_Cpp_SQLite_Manager()
//{
//}
//
//// Destruktor
//NN_Cpp_SQLite_Manager::~NN_Cpp_SQLite_Manager()
//{
//    CloseDatabase(); // Datenbank schließen, falls noch offen
//}
//
//// Datenbank öffnen
//bool NN_Cpp_SQLite_Manager::OpenDatabase(const FString& DBPath)
//{
//    // Standardmäßig erstellen, falls die Datei nicht existiert
//    if (!Database.Open(*DBPath, ESQLiteDatabaseOpenMode::ReadWriteCreate))
//    {
//        UE_LOG(LogTemp, Error, TEXT("Datenbank konnte nicht geöffnet werden: %s"), *DBPath);
//        return false;
//    }
//
//    // Beispiel für das Erstellen einer NPC-Tabelle, falls sie nicht existiert
//    FString CreateTableQuery = TEXT("CREATE TABLE IF NOT EXISTS NPCs (ID INTEGER PRIMARY KEY AUTOINCREMENT, Name TEXT, Race TEXT, Class TEXT, Age INTEGER);");
//    if (!Database.Execute(*CreateTableQuery))
//    {
//        UE_LOG(LogTemp, Error, TEXT("NPC-Tabelle konnte nicht erstellt werden."));
//        return false;
//    }
//
//    UE_LOG(LogTemp, Log, TEXT("Datenbank erfolgreich geöffnet: %s"), *DBPath);
//    return true;
//}
//
//// Datenbank schließen
//bool NN_Cpp_SQLite_Manager::CloseDatabase()
//{
//    if (Database.IsValid())
//    {
//        return Database.Close();
//    }
//    return false;
//}
//
//// Daten einfügen
//bool NN_Cpp_SQLite_Manager::InsertNPC(const FString& Name, const FString& Race, const FString& Class, int32 Age)
//{
//    FString InsertQuery = TEXT("INSERT INTO NPCs (Name, Race, Class, Age) VALUES (?1, ?2, ?3, ?4);");
//    FSQLitePreparedStatement Statement(Database, *InsertQuery);
//
//    if (!Statement.IsValid())
//    {
//        UE_LOG(LogTemp, Error, TEXT("Fehler beim Vorbereiten des Insert-Statements."));
//        return false;
//    }
//
//    Statement.SetBindingValueByName(TEXT("?1"), Name);
//    Statement.SetBindingValueByName(TEXT("?2"), Race);
//    Statement.SetBindingValueByName(TEXT("?3"), Class);
//    Statement.SetBindingValueByName(TEXT("?4"), Age);
//
//    if (!Statement.Execute())
//    {
//        UE_LOG(LogTemp, Error, TEXT("Fehler beim Einfügen des NPC."));
//        return false;
//    }
//
//    return true;
//}
//
//// Daten aktualisieren
//bool NN_Cpp_SQLite_Manager::UpdateNPC(int32 NPCID, const FString& Name, const FString& Race, const FString& Class, int32 Age)
//{
//    FString UpdateQuery = TEXT("UPDATE NPCs SET Name = ?1, Race = ?2, Class = ?3, Age = ?4 WHERE ID = ?5;");
//    FSQLitePreparedStatement Statement(Database, *UpdateQuery);
//
//    if (!Statement.IsValid())
//    {
//        UE_LOG(LogTemp, Error, TEXT("Fehler beim Vorbereiten des Update-Statements."));
//        return false;
//    }
//
//    Statement.SetBindingValueByName(TEXT("?1"), Name);
//    Statement.SetBindingValueByName(TEXT("?2"), Race);
//    Statement.SetBindingValueByName(TEXT("?3"), Class);
//    Statement.SetBindingValueByName(TEXT("?4"), Age);
//    Statement.SetBindingValueByName(TEXT("?5"), NPCID);
//
//    if (!Statement.Execute())
//    {
//        UE_LOG(LogTemp, Error, TEXT("Fehler beim Aktualisieren des NPC."));
//        return false;
//    }
//
//    return true;
//}
//
//// Daten abrufen
//bool NN_Cpp_SQLite_Manager::GetNPCByName(const FString& Name, TArray<FString>& OutResults)
//{
//    FString SelectQuery = TEXT("SELECT Name, Race, Class, Age FROM NPCs WHERE Name = ?1;");
//    FSQLitePreparedStatement Statement(Database, *SelectQuery);
//
//    if (!Statement.IsValid())
//    {
//        UE_LOG(LogTemp, Error, TEXT("Fehler beim Vorbereiten des Select-Statements."));
//        return false;
//    }
//
//    Statement.SetBindingValueByName(TEXT("?1"), Name);
//
//    if (Statement.Execute([&](const FSQLitePreparedStatement& Statement)
//        {
//            FString NPCName, Race, Class;
//            int32 Age = 0;
//
//            Statement.GetColumnValueByIndex(0, NPCName);
//            Statement.GetColumnValueByIndex(1, Race);
//            Statement.GetColumnValueByIndex(2, Class);
//            Statement.GetColumnValueByIndex(3, Age);
//
//            FString Result = FString::Printf(TEXT("Name: %s, Race: %s, Class: %s, Age: %d"), *NPCName, *Race, *Class, Age);
//            OutResults.Add(Result);
//
//            return ESQLitePreparedStatementExecuteRowResult::Continue;
//        }) == INDEX_NONE)
//    {
//        UE_LOG(LogTemp, Error, TEXT("Fehler beim Abrufen der NPC-Daten."));
//        return false;
//    }
//
//    return true;
//}
//
//// Daten löschen
//bool NN_Cpp_SQLite_Manager::DeleteNPC(int32 NPCID)
//{
//    FString DeleteQuery = TEXT("DELETE FROM NPCs WHERE ID = ?1;");
//    FSQLitePreparedStatement Statement(Database, *DeleteQuery);
//
//    if (!Statement.IsValid())
//    {
//        UE_LOG(LogTemp, Error, TEXT("Fehler beim Vorbereiten des Delete-Statements."));
//        return false;
//    }
//
//    Statement.SetBindingValueByName(TEXT("?1"), NPCID);
//
//    if (!Statement.Execute())
//    {
//        UE_LOG(LogTemp, Error, TEXT("Fehler beim Löschen des NPC."));
//        return false;
//    }
//
//    return true;
//}
