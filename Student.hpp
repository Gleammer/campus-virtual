#include "Account.cpp"

typedef std::vector<std::string> BaseSubjectNode;

class Student: private Account {
    double gpa;
    int graduation_year;

    public:
    Student();
    Student(double gpa, int graduation_year);
    Student& operator=(const Student& rhs);
    ~Student();
    void print();
};