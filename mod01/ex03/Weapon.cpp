#include <iostream>
#include "Weapon.hpp"

std::string const &Weapon::getType()
{
    return this->type;
}

void Weapon::setType(std::string String)
{
    this->type = String;
}