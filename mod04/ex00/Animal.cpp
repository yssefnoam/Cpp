#include "Animal.hpp"

Animal::Animal(void)
{
    std::cout << "Animal class created." << std::endl;
}
Animal::~Animal(void)
{
    std::cout << "Animal class died." << std::endl;
}

void Animal::makeSound(){ }

std::string Animal::getType(void)const{
    return this->type;
}