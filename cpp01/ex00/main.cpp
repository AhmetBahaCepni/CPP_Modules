#include "Zombie.hpp"

//new: allocates the memory and calls the constructors
//delete: deallocates the memory and calls the destructor
int main()
{
    Zombie *zomb;
    randomChump( "mertcan" );

    zomb = newZombie( "omer" );
    zomb->announce();
    delete zomb;
    return (0);
}