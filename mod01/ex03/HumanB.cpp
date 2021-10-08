#include <iostream>
#include "HumanB.hpp"

void HumanB::attack()
{
    std::cout << this->name << " attacks with his " << this->weapon.getType << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon)
{
    this->weapon = Weapon;
}