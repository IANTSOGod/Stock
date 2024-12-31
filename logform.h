#ifndef LOGFORM_H
#define LOGFORM_H

#include <iostream>

class LogForm
{
public:
    LogForm();
    ~LogForm();
    void setUsername(std::string newUsername);
    void setPassword(std::string newPassword);
    std::string getUsername();
    std::string getPassword();

private:
    std::string Username;
    std::string Password;
};

#endif // LOGFORM_H
