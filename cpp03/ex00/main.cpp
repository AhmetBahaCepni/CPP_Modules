#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap clapTrap("Wall-E");
    ClapTrap clapTrapCopy(clapTrap);
    ClapTrap clapTrapAssign;

    clapTrapAssign = clapTrap;

    clapTrap.attack("target");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(5);


    clapTrap.takeDamage(10); // Hp is 0 here
    clapTrap.attack("taget");

    clapTrap.takeDamage(3);

    clapTrapAssign.attack("dummy");
    clapTrapAssign.attack("dummy");
    clapTrapAssign.attack("dummy");
    clapTrapAssign.attack("dummy");
    clapTrapAssign.attack("dummy");
    clapTrapAssign.attack("dummy");
    clapTrapAssign.attack("dummy");
    clapTrapAssign.attack("dummy");
    clapTrapAssign.attack("dummy");
    clapTrapAssign.attack("dummy"); // Energy point is 0 here
    clapTrapAssign.attack("dummy");

    return (0);
}