#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
    public:
        FragTrap();
        FragTrap(const FragTrap &rhs);
        FragTrap(const std::string name);
        ~FragTrap();
        FragTrap &operator=(const FragTrap &rhs);

        void highFivesGuys(void);
};

#endif