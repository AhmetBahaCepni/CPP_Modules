#include "Weapon.hpp"

std::string Weapon::getType( void )
{
    std::string ret = this->type;
    return (ret);
}

void Weapon::setType( std::string type )
{
    this->type = type;
}

Weapon::Weapon( std::string type )
{
    this->type = type;
}