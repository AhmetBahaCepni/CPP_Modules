#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;
    public:
        ClapTrap();
        ClapTrap(const ClapTrap &rhs);
        ClapTrap(const std::string name);
        ~ClapTrap();
        ClapTrap &operator=(const ClapTrap &rhs);

        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif //CLAPTRAP_HPP