#include "Cat.hpp"

Cat::Cat(void) {
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::~Cat(void) {
    delete this->brain;
}

void Cat::makeSound()const{
    std::cout << "Miaow." << std::endl;
}