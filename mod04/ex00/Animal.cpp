#include "Animal.hpp"

Animal::Animal(void) {
    std::cout << "Animal class created." << std::endl;
}

Animal::Animal(const Animal &) {
    std::cout << "Animal class copy constructor created." << std::endl;
}

Animal& Animal::operator=(const Animal &other){
    std::cout << "Animal class assign operator called." << std::endl;
    this->type = other.type;
    return *this;
}

Animal::~Animal(void) {
    std::cout << "Animal class died." << std::endl;
}

void Animal::makeSound()const { }

std::string Animal::getType(void)const{
    return this->type;
}