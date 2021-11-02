#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    int maxAnimals = 10;
    Animal animals[maxAnimals];

    for (int i = 0; i < maxAnimals; i++)
    {
        if (i < maxAnimals / 2)
        {
            animals[i] = Dog();
        }
        else
        {
            animals[i] = Cat();
        }
    }
    for (int i = 0; i < maxAnimals; i++)
    {
        animals[i];
    }
    return 0;
}

// int main()
// {
//     const Animal *j = new Dog();
//     const Animal *i = new Cat();
//     std::cout << "---------------------------" << std::endl;
//     delete j; //should not create a leak
//     delete i;
// }