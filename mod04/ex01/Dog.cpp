#include "Dog.hpp"

Dog::Dog(void) {
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog class created." << std::endl;
}

Dog::Dog(const Dog &other) {
    operator=(other);
}

Dog& Dog::operator=(const Dog &other) {
    this->brain = other.brain;
    return *this;
}

Dog::~Dog() {
    delete this->brain;
    std::cout << "Dog class died." << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Hoaw." << std::endl;
}
