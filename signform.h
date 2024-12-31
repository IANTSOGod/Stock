#ifndef SIGNFORM_H
#define SIGNFORM_H
#include <iostream>

class SignForm
{
public:
    SignForm();
    ~SignForm();
    void setUsername(std::string newUsername);
    void setPassword(std::string newPassword);
    void setRole(std::string newRole);
    void setAge(int newAge);
    std::string getUsername();
    std::string getPassword();
    std::string getRole();
    int getAge();
private:
    std::string username;
    std::string password;
    std::string role;
    int age;
};

#endif // SIGNFORM_H
