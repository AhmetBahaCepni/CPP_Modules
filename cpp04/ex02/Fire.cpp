#include "Fire.hpp"

Fire::Fire() : AMateria("fire"){}

Fire::Fire(Fire const & src) : AMateria(src){}

Fire::~Fire(){}

Fire & Fire::operator=(Fire const & rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

AMateria* Fire::clone() const
{
    return new Fire(*this);
}

void Fire::use(ICharacter& target)
{
    std::cout << "* shoots an fireball to " << target.getName() << " *" << std::endl;
}