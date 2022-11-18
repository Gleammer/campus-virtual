#include <iostream>
// #include "Student.cpp"
#include "Student.cpp"

int main() {
    Student s1;
    s1.print();

    Student s2(3.4, 2023);
    s2.print();

    Student s3 = s2;
    s3.print();

    Account a1, a2("Name", "Username", "E-mail", 22), a3;
    a1.print();
    a2.print();

    // a3 = a2;
    // a3.print();

    return 0;
}
