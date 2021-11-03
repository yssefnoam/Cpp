#include "Animal.hpp"

Animal::Animal(void) {
    std::cout << "Animal class default constructor called." << std::endl;
}
Animal::Animal(const Animal &) {
    std::cout << "Animal class copy constructor called." << std::endl;
}

Animal& Animal::operator=(const Animal &other) {
    std::cout << "Animal class assign operator called." << std::endl;
    this->type = other.type;
    return *this;
}

Animal::~Animal(void) {
    std::cout << "Animal class destructor called." << std::endl;
}

void Animal::makeSound()const { }

std::string Animal::getType(void)const{
    return this->type;
}