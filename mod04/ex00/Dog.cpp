#include "Dog.hpp"

Dog::Dog() {
    this->type = "Dog";
    std::cout << "Dog class created." << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog class died." << std::endl;
}

void Dog::makeSound() {
    std::cout << "Hoaw." << std::endl;
}
