#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap ynoam("ynoam");

    ynoam.attack("bamghoug");
    ynoam.guardGate();
    return 0;
}