#include <iostream>
#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap ynoam("ynoam");

    ynoam.attack("bamghoug");
    ynoam.takeDamage(3);
    ynoam.beRepaired(2);
    return 0;
}