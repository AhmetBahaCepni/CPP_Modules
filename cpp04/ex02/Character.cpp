#include "Character.hpp"

Character::Character() : _name("default")
{
    for (int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
    materiaCount = 0;
}

Character::Character(std::string const & name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        this->_materia[i] = NULL;
    materiaCount = 0;
}

Character::Character(Character const & src)
{
    *this = src;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->_materia[i])
            delete this->_materia[i];
    }
}

Character & Character::operator=(Character const & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->materiaCount = rhs.materiaCount;
        for (int i = 0; i < 4; i++)
        {
            if (this->_materia[i])
                delete this->_materia[i];
            this->_materia[i] = rhs._materia[i]->clone();
        }
    }
    return *this;
}

std::string const & Character::getName() const
{
    return this->_name;
}

void Character::equip(AMateria* m)
{
    if (this->materiaCount < 4)
    {
        this->_materia[this->materiaCount] = m;
        this->materiaCount++;
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        this->_materia[idx] = NULL;
        this->materiaCount--;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && this->_materia[idx])
        this->_materia[idx]->use(target);
}
