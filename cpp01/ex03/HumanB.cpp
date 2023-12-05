#include "HumanB.hpp"
#include <iostream>


void HumanB::setWeapon( Weapon &wep )
{
    this->wep = &wep;
}

HumanB::HumanB( std::string name )
{
    this->name = name;
}

void HumanB::attack()
{
    std::string const type = wep->getType();
    std::cout << this->name << " attack with their " << type << std::endl; 
}
