#include <iostream>
#include "../mod04/ex01/Animal.hpp"
#include "../mod04/ex01/Dog.hpp"

class Test: public Dog
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
    Animal *pAnimal = new Test();
    delete pAnimal;
    return (0);
}