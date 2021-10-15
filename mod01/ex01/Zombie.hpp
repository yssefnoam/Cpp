#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{

private:
    std::string name;

public:
    Zombie(void);
    Zombie(std::string);
    ~Zombie(void);
    void    announce(void);
    void    setName(std::string);
};
Zombie  *zombieHorde(int N, std::string name);

#endif