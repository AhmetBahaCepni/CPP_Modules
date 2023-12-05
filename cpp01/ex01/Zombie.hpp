#include <iostream>
#include <string>
#include <iomanip>
#include <new>

class Zombie
{
    private:
        std::string name;
    public:
        void setZombieName( std::string );
        std::string getZombieName ( void );
        void announce( void );
        ~Zombie();
};


void randomChump( std::string name );
Zombie *newZombie( std::string name );
Zombie* zombieHorde ( int N, std::string name );