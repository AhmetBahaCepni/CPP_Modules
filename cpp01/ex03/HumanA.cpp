#include "HumanA.hpp"
#include <iostream>

void HumanA::attack()
{
    std::string type = this->wep.getType();
    std::cout << this->name << " attack with their ";
    std::cout << type << std::endl; 
}

HumanA::HumanA( std::string name, Weapon& wep ): wep(wep)
{
    this->name = name;
}