#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap clapTrap("Wall-E");
    ScavTrap scavTrap("Wall-S");
    ScavTrap scav2(scavTrap);

    clapTrap.attack("target");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(5);

    scavTrap.attack("target");
    scavTrap.takeDamage(5);
    scavTrap.beRepaired(5);
    scavTrap.guardGate();

    scavTrap.takeDamage(100);

    return (0);
}
