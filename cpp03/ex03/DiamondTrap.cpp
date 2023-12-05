#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap default constructor called" << std::endl;
    _name = "default";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name + "_kayn"), FragTrap(name + "_lol")
{
    std::cout << "DiamondTrap name constructor called" << std::endl;
    _name = name;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 30;
    this->_hitPoints = FragTrap::_hitPoints;
    this->_energyPoints = ScavTrap::_energyPoints;
    this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs) : ScavTrap(rhs._name + "_kayn"), FragTrap(rhs._name + "_lol")
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = rhs;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
    std::cout << "DiamondTrap assignation operator called" << std::endl;
    if (this != &rhs)
    {
        _name = rhs._name;
        _hitPoints = rhs._hitPoints;
        _energyPoints = rhs._energyPoints;
        _attackDamage = rhs._attackDamage;
    }
    return (*this);
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name: " << _name << " and ClapTrap name: " << ClapTrap::_name << std::endl;
}