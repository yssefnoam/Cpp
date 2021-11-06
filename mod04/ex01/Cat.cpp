#include "Cat.hpp"

Cat::Cat(void)
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat class default constructor called." << std::endl;
}
Cat::Cat(const Cat &other)
{
    this->type = other.type;
    std::cout << "Cat class copy constructor called." << std::endl;
    this->brain = new Brain(*(other.brain));
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat class assign operator called." << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain(*(other.brain));
    }
    return *this;
}

Cat::~Cat(void)
{
    delete this->brain;
    std::cout << "Cat class destructor called." << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miaow." << std::endl;
}

Brain *Cat::getBrainAddress()
{
    return this->brain;
}
