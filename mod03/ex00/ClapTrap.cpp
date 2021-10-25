#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy) {
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap& copy) {
    operator=(copy);
}
