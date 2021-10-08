#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{

private:
    std::string name;

public:
    void    announce(void);
    Zombie(void);
    Zombie(std::string);
    ~Zombie(void);
};
Zombie  *zombieHorde(int N, std::string name);

#endif