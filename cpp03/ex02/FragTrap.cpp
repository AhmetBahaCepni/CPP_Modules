#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "Fragtrap default constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Fragtrap name constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &rhs) : ClapTrap(rhs._name)
{
    std::cout << "Fragtrap copy constructor called" << std::endl;
    *this = rhs;
}

FragTrap::~FragTrap()
{
    std::cout << "Fragtrap destructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
    std::cout << "FragTrap assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return (*this);
}

void FragTrap::highFivesGuys()
{
    if(_energyPoints == 0 || _hitPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << " is not able to highfive due to low energy or hp" << std::endl;
        return;
    }    
    std::cout << "FragTrap " << this->_name << " requests a highFive !" << std::endl;
}