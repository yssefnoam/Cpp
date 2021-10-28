#ifndef _SCAV_TRAP_HPP
#define _SCAV_TRAP_HPP
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
    ~ScavTrap();
    ScavTrap(const ScavTrap &);
    ScavTrap &operator=(const ScavTrap &);
    void attack(std::string const &);
    void guardGate();
};
#endif