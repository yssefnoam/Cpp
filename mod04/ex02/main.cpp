#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // Animal animal;

    //----------------------------------------
    Dog dog;
    Cat cat;
    std::cout << dog.getType() << std::endl;
    std::cout << cat.getType() << std::endl;

    std::cout << "------------------" << std::endl;

    Cat cat1;
    Cat cat2(cat1);
    std::cout << cat1.getBrainAddress() << std::endl;
    std::cout << cat2.getBrainAddress() << std::endl;

    std::cout << "------------------" << std::endl;
    return 0;
}
