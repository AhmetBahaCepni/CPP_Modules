#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setZombieName( std::string name )
{
    this->name = name;
}

std::string Zombie::getZombieName ( void )
{
    return (this->name);
}

Zombie *newZombie( std::string name )
{
    Zombie *newzomb;

    newzomb = new Zombie;
    newzomb->setZombieName ( name );
    return (newzomb);
}

void randomChump( std::string name )
{
    Zombie newzomb;

    newzomb.setZombieName ( name );
    newzomb.announce();
}

Zombie::~Zombie()
{
    std::cout << getZombieName() << " is dead (its already dead anyway)" << std::endl;
}