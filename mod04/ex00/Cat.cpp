#include "Cat.hpp"

Cat::Cat(void) {
    this->type = "Cat";
    std::cout << "Cat class created." << std::endl;
}

Cat::Cat(const Cat &other) {
    operator=(other);
}

Cat &Cat::operator=(Cat &other) {
    this->brain = other.brain;
    return *this;
}

Cat::~Cat(void) {
    std::cout << "Cat class died." << std::endl;
}

void Cat::makeSound()const{
    std::cout << "Miaow." << std::endl;
}