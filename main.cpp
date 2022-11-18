#include <iostream>

#include "Student.cpp"

int main() {
    Student s1;
    s1.print();

    Student s2(3.4, 2023);
    s2.print();

    return 0;
}
