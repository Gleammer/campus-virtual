#include <iostream>
#include "Account.hpp"

Account::Account():name(""), username(""), email(""), age(0), id(account_count++){}

Account::Account(std::string name, std::string username, std::string email, int age):name(name), username(username), email(email), age(age), id(account_count++){}

Account& Account::operator=(const Account& rhs){
    if (this != &rhs){
        id = account_count++;

        name = rhs.name;
        username = rhs.username;
        email = rhs.email;
        age = rhs.age;
    }
    return *this;
}

int Account::getId(){
    return(id);
}

std::string Account::getName(){
    return(name);
}

void Account::print(){
    std::cout << "Account details: name = " << name << " , username = " << username << ", email: " << email << ", age = " << age << "\n";
}