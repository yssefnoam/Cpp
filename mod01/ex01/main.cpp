#include <iostream>
#include "Zombie.hpp"

int main (void)
{
    Zombie *zombie = zombieHorde(3, "zombie");
    // zombie[0].announce();
    // zombie[1].announce();
    zombie[2].announce();
    return 0;
}