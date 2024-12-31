#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <mysql-cppconn/jdbc/mysql_driver.h>
#include <mysql-cppconn/jdbc/mysql_connection.h>
#include <mysql-cppconn/jdbc/cppconn/statement.h>
#include <mysql-cppconn/jdbc/cppconn/resultset.h>
#include <string>

class DatabaseManager {
public:
    DatabaseManager(const std::string& host, const std::string& user, const std::string& password, const std::string& db);
    ~DatabaseManager();
    std::vector<std::map<std::string, std::string>> queryWithres(const std::string& query);
    void insertQuery(const std::string& query);
    void executeQuery(const std::string& query);
    void showResult(std::vector<std::map<std::string, std::string>> result);

private:
    sql::mysql::MySQL_Driver* driver;
    std::unique_ptr<sql::Connection> connection;
};

#endif // DATABASEMANAGER_H
