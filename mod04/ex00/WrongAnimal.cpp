#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
    std::cout << "WrongAnimal class created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &) {
    std::cout << "WrongAnimal class copy constructor created." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other){
    std::cout << "WrongAnimal class assign operator called." << std::endl;
    if (this != &other)
        this->type = other.type;
    return *this;
}

WrongAnimal::~WrongAnimal(void) {
    std::cout << "WrongAnimal class died." << std::endl;
}

void WrongAnimal::makeSound()const { }

std::string WrongAnimal::getType(void)const{
    return this->type;
}