#include <iostream>
#include "Zombie.hpp"

int *newInt(void);
int main (void)
{
    int N = 3;
    Zombie *zombie = zombieHorde(N, "zombie");

    for (int i = 0; i < N; i++)
        zombie[i].announce();

    delete [] zombie;
    return 0;
}