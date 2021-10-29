#ifndef _FRAG_TRAP_
#define _FRAG_TRAP_
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : ClapTrap{
public:
    FragTrap(const std::string &);
    ~FragTrap();
    FragTrap(const FragTrap &);
    FragTrap &operator=(const FragTrap &);
    void highFivesGuys(void);
    void attack(std::string const &target);
};

#endif