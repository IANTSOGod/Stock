#include "logform.h"

LogForm::LogForm() {}

LogForm::~LogForm (){
}

void LogForm::setUsername (std::string newUsername){
    this->Username=newUsername;
}

void LogForm::setPassword (std::string newPassword){
    this->Password=newPassword;
}

std::string LogForm::getUsername (){
    return this->Username;
}

std::string LogForm::getPassword (){
    return this->Password;
}
