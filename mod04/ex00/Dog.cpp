#include "Dog.hpp"

Dog::Dog() {
    this->type = "Dog";
    std::cout << "Dog class created." << std::endl;
}

Dog::Dog(const Dog &other) {
    this->type = other.type;
    std::cout << "Dog class copy constructor called." << std::endl;
}

Dog& Dog::operator=(const Dog &other) {
    this->type = other.type;
    std::cout << "Dog class copy constructor called." << std::endl;
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog class died." << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Hoaw." << std::endl;
}
