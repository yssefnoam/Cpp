#ifndef _CLAP_TRAP_
#define _CLAP_TRAP_
#include <iostream>

class ClapTrap
{
private:
    std::string _name;
    int _hitPoints = 10;
    int _energyPoints = 10;
    int _attackDamage = 0;

public:
    ClapTrap();
    ClapTrap(ClapTrap&);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap&);
    ClapTrap(std::string&);
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif