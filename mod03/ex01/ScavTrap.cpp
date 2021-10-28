#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) {
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    std::cout << "ScavTrap " << this->_name << " is live now." << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << this->_name << " is died." << std::endl;
}
