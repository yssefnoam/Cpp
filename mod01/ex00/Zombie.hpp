#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie
{

private:
    std::string name;

public:
    void    announce(void);
    Zombie(std::string);
    ~Zombie(void);
};
void randomChump(std::string name);
Zombie* newZombie( std::string name );

#endif