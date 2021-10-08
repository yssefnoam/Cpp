#include <iostream>
#include "Zombie.hpp"

int main (void)
{
    Zombie *zombie = zombieHorde(3, "zombie");
    zombie->announce();
    zombie++;
    zombie->announce();
    return 0;
}