#include "Dog.hpp"

Dog::Dog() {
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog() {
    delete this->brain;
}

void Dog::makeSound() const{
    std::cout << "Hoaw." << std::endl;
}
