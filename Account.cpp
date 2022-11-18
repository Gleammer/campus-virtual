#include <iostream>
#include "Account.hpp"

Account::Account():name(""), username(""), email(""), age(0){}

void Account::print(){
    std::cout << "Account details: name = " << name << " , username = " << username << ", email: " << email << ", age = " << age << "\n";
}