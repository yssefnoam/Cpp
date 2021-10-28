#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) {
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << "ScavTrap " << this->_name << " is live now." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->_name << " is died." << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    return *this;
}
ScavTrap::ScavTrap(const ScavTrap &other){
    this->operator=(other);
}

void ScavTrap::attack(std::string const &target){
    std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;

}
void ScavTrap::guardGate() {
    std::cout << this->_name << " have enterred in Gate keeper mode." << std::endl;
}