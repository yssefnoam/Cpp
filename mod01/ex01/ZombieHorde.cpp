#include <iostream>
#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return nullptr;

    Zombie **zombie;
    zombie = new Zombie *[N];

    for (int i = 0; i < N; i++)
    {
        std::string *String = new std::string(name);
        zombie[i] = new Zombie(*String);
    }
    return zombie[0];
}