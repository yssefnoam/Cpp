#include "Dog.hpp"

Dog::Dog(void)
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog class default constructor called." << std::endl;
}

Dog::Dog(const Dog &other)
{
    this->type = other.type;
    std::cout << "Dog class copy constructor called." << std::endl;
    this->brain = new Brain(*(other.brain));
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog class assign operator called." << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain(*(other.brain));
    }
    return *this;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog class destructor called." << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Hoaw." << std::endl;
}

Brain *Dog::getBrainAddress()
{
    return this->brain;
}
