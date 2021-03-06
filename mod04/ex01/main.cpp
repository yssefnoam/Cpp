#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    int maxAnimals = 2;
    Animal *animals[maxAnimals];
    for (int i = 0; i < maxAnimals; i++)
    {
        if (i < maxAnimals / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    std::cout << "-----------" << std::endl;
    for (int i = 0; i < maxAnimals; i++)
        delete animals[i];

    std::cout << "-----------" << std::endl;
    Dog dog1;
    Dog dog2 = dog1;
    std::cout << dog1.getBrainAddress() << std::endl;
    std::cout << dog2.getBrainAddress() << std::endl;

    std::cout << "-----------" << std::endl;
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    delete j;
    delete i;
    std::cout << "-----------" << std::endl;



    return 0;
}
