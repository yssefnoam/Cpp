#include <iostream>
#include "Zombie.hpp"

int main (void)
{
    Zombie *zombie = zombieHorde(3, "zombie");
    // std::cout << "help" << std::endl;
    zombie->announce();
    zombie++;
    zombie->announce();
    zombie++;
    zombie->announce();
    return 0;
}