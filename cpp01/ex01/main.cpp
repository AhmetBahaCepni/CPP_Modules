#include "Zombie.hpp"

void test(Zombie *horde, int N)
{
    for (int i = 0; i < N; i++)
    {
        horde[i].announce();
    }
}

int main()
{
    Zombie *horde;

    horde = zombieHorde(4, "omer");
    test(horde, 4);
    delete[] horde;
}