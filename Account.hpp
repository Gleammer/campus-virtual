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
    static int account_count;
    int id;

    protected:
    std::string name, username, email;
    int age;

    public:
    Account();
    Account(std::string name, std::string username, std::string email, int age);
    Account& operator=(const Account& rhs);
    int getId();
    std::string getName();
    void print();
};