#include <iostream>
#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return nullptr;

    Zombie *zombie = new Zombie[N];

    for (int i = 0; i < N; i++)
    {
        zombie[i].setName(name);
    }
    return zombie;
}

int *newInt(void)
{
    int a;
     a =6;
     return &a;
}