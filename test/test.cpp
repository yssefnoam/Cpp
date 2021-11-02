#include <iostream>

class Test
{
private:
    int *x;

public:
    Test(void)
    {
        std::cout << "Test()." << std::endl;
        this->x = new int;
    }
    Test& operator=(Test& other)
    {
        std::cout << "Test=(Test&)." << std::endl;
        *(this->x) = *(other.x);
        return *this;
    }
    Test(const Test &other)
    {
        std::cout << "Test(Test&)." << std::endl;
        this->x = new int;
        *(this->x) = *(other.x);
        // operator=(other);
    }
    ~Test(void)
    {
        std::cout << "~Test()." << std::endl;
        delete this->x;
    }
};
int main(void)
{
    Test basic;
    {
        std::cout << "----------" << std::endl;
        Test tmp;
        std::cout << "----------" << std::endl;
        tmp = basic;
        std::cout << "----------" << std::endl;
    }
    std::cout << "----------" << std::endl;
    return (0);
}