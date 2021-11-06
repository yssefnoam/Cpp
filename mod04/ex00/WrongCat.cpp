#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
    this->type = "WrongCat";
    std::cout << "WrongCat class default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) {
    this->type = other.type;
    std::cout << "WrongCat class copy constructor called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
    if (this != &other)
        this->type = other.type;
    return *this;
}

WrongCat::~WrongCat(void) {
    std::cout << "WrongCat class died." << std::endl;
}

void WrongCat::makeSound()const{
    std::cout << "Miaow." << std::endl;
}