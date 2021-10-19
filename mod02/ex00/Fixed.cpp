#include <iostream>
#include "Fixed.hpp"

void    Fixed::operator=( Fixed &other)
{
    _int_fixed = other._int_fixed;
}

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_int_fixed = 0;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
}
