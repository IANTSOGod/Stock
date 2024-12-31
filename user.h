#ifndef USER_H
#define USER_H
#include <iostream>
#include "databasemanager.h"

class User
{
public:
    User();
    ~User();
    std::string getRole();
    std::string getUsername();
    std::string getMdp();
    int getAge();
    void setRole(std::string newRole);
    void setUsername(std::string newUsername);
    void setMdp(std::string newMdp);
    void setAge(int newAge);
    int authenticate(std::string name,std::string mdp);
    void create(std::string name,std::string mdp,int age,std::string role);

private:
    DatabaseManager managerdb=DatabaseManager("localhost","iantsogod","nahida","Stock");
    std::string username;
    std::string mdp;
    int age;
    std::string role;
};

#endif // USER_H
