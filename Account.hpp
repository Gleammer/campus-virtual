#include <string>

class NonCopyable
{
    // NonCopyable(const NonCopyable &);
    NonCopyable& operator=(const NonCopyable &);

    protected:
    NonCopyable() {}
    ~NonCopyable() {}
};

class Account : private NonCopyable {
    std::string name, username, email;
    int age;

    public:
    Account();
    Account(std::string name, std::string username, std::string email, int age);
    std::string getName();
    void print();
};