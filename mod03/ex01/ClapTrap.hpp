#ifndef _CLAP_TRAP_
#define _CLAP_TRAP_
#include <iostream>

class ClapTrap
{
private:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;

public:
    ClapTrap();
    ClapTrap(const ClapTrap&);
    ~ClapTrap();
    ClapTrap& operator=(const ClapTrap&);
    ClapTrap(const std::string&);
    void attack(std::string const &);
    void takeDamage(unsigned int);
    void beRepaired(unsigned int);
};

#endif