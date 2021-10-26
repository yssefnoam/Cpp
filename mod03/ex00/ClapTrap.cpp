#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
    this->_name = "";
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
}
ClapTrap::~ClapTrap(void) {}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    this->_attackDamage = copy._attackDamage;
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    operator=(copy);
}

ClapTrap::ClapTrap(std::string &name) : _name(name) {}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " <<  this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}