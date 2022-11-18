#include "Account.hpp"

// typedef struct Subject
// {
//     std::string name;
//     std::vector<int> grades;
// };

typedef std::vector<std::string> BaseSubjectNode;

class Student: private Account {
    double gpa;
    int graduation_year;
    public:
    Student();
    Student(double gpa, int graduation_year);
    Student& operator=(const Student& rhs);
    // Student(double gpa, int graduation_year, std::string name, std::string username, std::string email, int age);
    void print();
};