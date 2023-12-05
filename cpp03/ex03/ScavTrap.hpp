#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(const ScavTrap &rhs);
        ScavTrap(const std::string name);
        ~ScavTrap();
        ScavTrap &operator=(const ScavTrap &rhs);

        void attack(std::string const & target);
        void guardGate();
};

#endif