#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap name constructor called" << std::endl;
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) : ClapTrap(rhs._name)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = rhs;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
    std::cout << "ScavTrap assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return (*this);
}

void ScavTrap::attack(std::string const & target)
{
    if(_energyPoints == 0 || _hitPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << " is not able to attack due to low energy or hp" << std::endl;
        return;
    }    
    std::cout << "ScavTrap " << this->_name << " slaps " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ScavTrap::guardGate()
{
    if(_energyPoints == 0 || _hitPoints == 0)
    {
        std::cout << "ScavTrap " << this->_name << " is not able to open GuardMode due to low energy or hp" << std::endl;
        return;
    }    
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}
