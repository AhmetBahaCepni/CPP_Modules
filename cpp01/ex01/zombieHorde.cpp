#include "Zombie.hpp"

Zombie* zombieHorde ( int N, std::string name )
{
    Zombie *newhorde;

    newhorde = new Zombie[N];
    for (int i = 0; i < N; i++)
    {
        newhorde[i].setZombieName(name);
    }
    return (newhorde);
}