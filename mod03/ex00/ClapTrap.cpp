#include "ClapTrap.hpp"

ClapTrap::~ClapTrap(void) {
    std::cout << this->_name << " died." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &copy)
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

ClapTrap::ClapTrap(const std::string &name)
{
    this->_name = name;
    this->_hitPoints = 10;
    this->_energyPoints = 10;
    this->_attackDamage = 0;
    std::cout << this->_name << " is live now." << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << "ClapTrap " << this->_name << " take damage by " << amount << "." << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount){
    std::cout << "ClapTrap " << this->_name << " repaired by " << amount << "." << std::endl;
}