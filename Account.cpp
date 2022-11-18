#include <iostream>
#include "Account.hpp"

Account::Account():name(""), username(""), email(""), age(0){}

Account::Account(std::string name, std::string username, std::string email, int age):name(name), username(username), email(email), age(age){}

std::string Account::getName(){
    return(name);
}

void Account::print(){
    std::cout << "Account details: name = " << name << " , username = " << username << ", email: " << email << ", age = " << age << "\n";
}