#include <iostream>
#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie = newZombie("ynoam");
    zombie->announce();
    randomChump("zombie1");
    randomChump("zombie2");
    randomChump("zombie3");
    randomChump("zombie4");
    randomChump("zombie5");
    randomChump("zombie6");
    delete zombie;

    return 0;
}