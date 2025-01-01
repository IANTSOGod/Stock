#include "user.h"

User::User() {
}

User::~User (){
}

//Getters
std::string User::getRole(){
    return this->role;
}
std::string User::getUsername(){
    return this->username;
}
std::string User::getMdp(){
    return this->mdp;
}
int User::getAge(){
    return this->age;
}

//Setters
void User::setRole(std::string newRole){
    this->role=newRole;
}
void User::setUsername(std::string newUsername){
    this->username=newUsername;
}
void User::setMdp(std::string newMdp){
    this->mdp=newMdp;
}
void User::setAge(int newAge){
    this->age=newAge;
}

//Db operations
int User::authenticate (std::string name,std::string mdp){
    std::vector<std::map<std::string, std::string>> result=this->managerdb.queryWithres ("select * from user");
    for (const auto& row : result) {
        for (const auto& pair : row) {
            if (pair.first=="mdp"){
                this->setMdp(pair.second);
            }
            else if(pair.first=="username"){
                this->setUsername (pair.second);
            }
            else if(pair.first=="age"){
                this->setAge (std::stoi(pair.second));
            }
            else{
                this->setRole (pair.second);
            }
            std::string currentUsername=this->getUsername ();
            std::string currentPassword=this->getMdp();
            if(name=="" && mdp==""){
                return 6;
            }else {
                if(name==""){
                    return 4;
                }
                else{
                    if(mdp==""){
                        return 5;
                    }else{
                        if(currentUsername==name && currentPassword==mdp && currentUsername!="" && currentPassword!=""){
                            return 1;
                        }
                        else{
                            if(currentUsername==name && currentPassword!=mdp && currentUsername!="" && currentPassword!=""){
                                return 2;
                            }
                            if(currentUsername!=name && currentUsername!=""){
                                return 3;
                            }
                        }
                    }
                }
            }
        }
    }
    this->setAge (0);
    this->setMdp ("");
    this->setUsername ("");
    this->setRole ("");
    return 0;
}

void User::create(std::string name, std::string mdp, int age, std::string role) {
    // Créer la requête SQL d'insertion
    std::string query = "INSERT INTO user (username, mdp, age, role) VALUES ('"
                        + name + "', '"
                        + mdp + "', "
                        + std::to_string(age) + ", '"
                        + role + "');";
    std::cout<<query;
    this->managerdb.insertQuery (query);
}


