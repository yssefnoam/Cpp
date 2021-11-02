#include "Dog.hpp"

Dog::Dog() {
    this->type = "Dog";
    std::cout << "Dog class created." << std::endl;
}

Dog::Dog(const Dog &other) {
    operator=(other);
}

Dog& Dog::operator=(Dog &other) {
    this->brain = other.brain;
    return *this;
}

Dog::~Dog() {
    std::cout << "Dog class died." << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Hoaw." << std::endl;
}
