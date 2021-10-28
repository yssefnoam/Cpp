#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap ynoam("ynoam");
    SlaveTrap ynoam2("ynoam");

    ynoam.attack("bamghoug");
    ynoam.takeDamage(3);
    ynoam.beRepaired(2);
    return 0;
}