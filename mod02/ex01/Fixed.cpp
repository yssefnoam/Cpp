#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->_fixed = 0;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_fixed = other._fixed;
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

Fixed&    Fixed::operator=(Fixed &other)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_fixed = other._fixed;
    return *this;
}

Fixed::Fixed(const int num)
{
    this->_fixed =  num << this->_fractBits;
}

int   Fixed::toInt(void) const{
    return this->_fixed >> 8;
}

Fixed::Fixed(const float num)
{
    this->_fixed = (int)roundf(num * pow(2, this->_fractBits));
}

float   Fixed::toFloat(void) const{
    return (float)this->_fixed * (1 / pow(2, this->_fractBits));
}

void Fixed::setRawBits(int const raw){
    _fixed = raw;
    (void)raw;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixed;
}
