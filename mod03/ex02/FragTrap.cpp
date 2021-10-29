#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) {
    this->_name = name;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << this->_name << " is live now." << std::endl;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << this->_name << " is died." << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    this->_name = copy._name;
    this->_hitPoints = copy._hitPoints;
    this->_energyPoints = copy._energyPoints;
    return *this;
}
FragTrap::FragTrap(const FragTrap &other){
    this->operator=(other);
}

void FragTrap::attack(std::string const &target){
    std::cout << "FragTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void    FragTrap::highFivesGuys()
{
    std::cout << "High Fives Guys."  << std::endl;
}