#include "Cat.hpp"

Cat::Cat(void) {
    this->type = "Cat";
    std::cout << "Cat class default constructor called." << std::endl;
}

Cat::Cat(const Cat &other) {
    this->type = other.type;
    std::cout << "Cat class copy constructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
    this->type = other.type;
    return *this;
}

Cat::~Cat(void) {
    std::cout << "Cat class died." << std::endl;
}

void Cat::makeSound()const{
    std::cout << "Miaow." << std::endl;
}