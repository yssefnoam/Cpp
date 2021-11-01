#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    int maxAnimals = 10;
    Animal animals[maxAnimals];

    for (int i = 0; i < maxAnimals; i++) {
        if (i < maxAnimals/ 2){
            animals[i] = Dog();
        }
        else {
            animals[i] = Cat();
        }
    }
    for (int i = 0; i < maxAnimals; i++) {
            ~animals[i];
    }
    return 0;
}