#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    ClapTrap clapTrap("Wall-E");
    FragTrap fragtrap("Wall-F");

    clapTrap.attack("target");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(5);

    fragtrap.attack("target");
    fragtrap.takeDamage(5);
    fragtrap.beRepaired(5);
    fragtrap.highFivesGuys();

    fragtrap.takeDamage(100);

    return (0);
}