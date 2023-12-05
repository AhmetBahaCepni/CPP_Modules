#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = rhs;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
    std::cout << "ClapTrap assignment operator called" << std::endl;
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_hitPoints = rhs._hitPoints;
        this->_energyPoints = rhs._energyPoints;
        this->_attackDamage = rhs._attackDamage;
    }
    return (*this);
}

void ClapTrap::attack(std::string const & target)
{
    if(_energyPoints == 0 || _hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is not able to attack due to low energy or hp" << std::endl;
        return;
    }    
    std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(_hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is already dead bro stop" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage!" << std::endl;
    if(amount > _hitPoints)
        _hitPoints = 0;
    else
        _hitPoints -= amount;

    if(_hitPoints == 0)
        std::cout << "ClapTrap " << this->_name << " is now a dead trap "<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(_energyPoints == 0 || _hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->_name << " is not able to recover due to low energy or hp" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->_name << " is repaired for " << amount << " points!" << std::endl;
    _hitPoints += amount;
}
