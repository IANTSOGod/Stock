#include "signform.h"

SignForm::SignForm() {}

SignForm::~SignForm (){}

void SignForm::setUsername(std::string newUsername){
    this->username=newUsername;
}
void SignForm::setPassword(std::string newPassword){
    this->password=newPassword;
}
void SignForm::setRole(std::string newRole){
    this->role=newRole;
}
void SignForm::setAge(int newAge){
    this->age=newAge;
}
std::string SignForm::getUsername(){
    return this->username;
}
std::string SignForm::getPassword(){
    return this->password;
}
std::string SignForm::getRole(){
    return this->role;
}
int SignForm::getAge(){
    return this->age;
}
