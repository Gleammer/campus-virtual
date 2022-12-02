#include <iostream>
#include "Student.hpp"

Student::Student():Account(), gpa(0), graduation_year(0){}

Student::Student(double gpa, int graduation_year):Account(), gpa(gpa), graduation_year(graduation_year){}

void Student::print(){
    Account::print();
    std::cout << "Student details: gpa = " << gpa << " , graduation year = " << graduation_year << "\n";
}

Student& Student::operator=(const Student& rhs){
    if(this != &rhs){
        name = rhs.name;
        username = rhs.username;
        email = rhs.email;
        age = rhs.age;
        gpa = rhs.gpa;
        graduation_year = rhs.graduation_year;
    }
    return *this;
}

Student::~Student(){
    std::cout << "Student destructor for: " << this->getName() << "\n";
}