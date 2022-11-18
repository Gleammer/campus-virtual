#include <string>

class NonCopyable
{
    protected:
    NonCopyable() {}
    ~NonCopyable() {}
    private: 
    NonCopyable(const NonCopyable &);
    NonCopyable& operator=(const NonCopyable &);
};

class Account : private NonCopyable {
    private:
    std::string name, username, email;
    int age;
    public:
    Account();
    void print();
};