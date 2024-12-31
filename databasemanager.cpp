#include "databasemanager.h"
#include <iostream>

DatabaseManager::DatabaseManager(const std::string& host, const std::string& user, const std::string& password, const std::string& db) {
    try {
        // Charger le driver MySQL
        driver = sql::mysql::get_mysql_driver_instance();

        // Créer une connexion
        connection.reset(driver->connect(host, user, password));

        // Sélectionner la base de données
        connection->setSchema(db);

        std::cout << "Connexion réussie à la base de données " << db << std::endl;
    } catch (sql::SQLException& e) {
        std::cerr << "Erreur lors de la connexion à la base de données : " << e.what() << std::endl;
        throw;
    }
}

DatabaseManager::~DatabaseManager() {
    // La connexion sera automatiquement fermée par le destructeur de `std::unique_ptr`
    std::cout << "Connexion fermée." << std::endl;
}

void DatabaseManager::executeQuery(const std::string& query) {
    try {
        // Créer une déclaration
        std::unique_ptr<sql::Statement> stmt(connection->createStatement());

        // Exécuter une requête
        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(query));

        // Vérifier si des résultats sont renvoyés
        if (!res->next()) {
            std::cout << "Aucun résultat trouvé." << std::endl;
            return;
        }

        // Obtenir le nombre de colonnes dans le résultat
        int numColumns = res->getMetaData()->getColumnCount();

        // Afficher les résultats (toutes les colonnes)
        do {
            for (int i = 1; i <= numColumns; ++i) {
                std::cout << "Colonne " << i << " : " << res->getString(i) << " | ";
            }
            std::cout << std::endl;
        } while (res->next());

    } catch (sql::SQLException& e) {
        std::cerr << "Erreur lors de l'exécution de la requête : " << e.what() << std::endl;
    }
}


std::vector<std::map<std::string, std::string>> DatabaseManager::queryWithres(const std::string& query) {
    std::vector<std::map<std::string, std::string>> results;

    try {
        // Créer une déclaration
        std::unique_ptr<sql::Statement> stmt(connection->createStatement());

        // Exécuter une requête
        std::unique_ptr<sql::ResultSet> res(stmt->executeQuery(query));

        // Obtenir le méta-données pour récupérer les noms des colonnes
        sql::ResultSetMetaData* metaData = res->getMetaData();
        int columnCount = metaData->getColumnCount();

        // Parcourir les résultats
        while (res->next()) {
            std::map<std::string, std::string> row;
            for (int i = 1; i <= columnCount; ++i) {
                // Ajouter la colonne et sa valeur dans la ligne
                row[metaData->getColumnLabel(i)] = res->getString(i);
            }
            results.push_back(row);
        }
    } catch (sql::SQLException& e) {
        std::cerr << "Erreur lors de l'exécution de la requête : " << e.what() << std::endl;
    }
    return results;
}


void DatabaseManager::showResult(std::vector<std::map<std::string, std::string>> result){
    std::cout << "Contenu de results : " << std::endl;
    for (const auto& row : result) {
        for (const auto& pair : row) {
            std::cout << pair.first << " : " << pair.second << " | ";
        }
        std::cout << std::endl;
    }
}

void DatabaseManager::insertQuery(const std::string& query) {
    try {
        // Créer une déclaration
        std::unique_ptr<sql::Statement> stmt(connection->createStatement());

        // Exécuter une requête de mise à jour (INSERT, UPDATE, DELETE)
        int rowsAffected = stmt->executeUpdate(query);  // Utilisez executeUpdate pour les requêtes qui modifient la base de données

        std::cout << "Nombre de lignes affectées : " << rowsAffected << std::endl;

    } catch (sql::SQLException& e) {
        std::cerr << "Erreur lors de l'exécution de la requête : " << e.what() << std::endl;
    }
}
