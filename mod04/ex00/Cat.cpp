#include "Cat.hpp"

Cat::Cat(void) {
    this->type = "Cat";
    std::cout << "Cat class created." << std::endl;
}

Cat::~Cat(void) {
    std::cout << "Cat class died." << std::endl;
}

void Cat::makeSound(){
    std::cout << "Miaow." << std::endl;
}