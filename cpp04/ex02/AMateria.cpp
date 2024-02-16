#include "AMateria.hpp"

AMateria::AMateria() : _type("default"){}

AMateria::AMateria(std::string const & type) : _type(type){}

AMateria::~AMateria(){}

std::string const & AMateria::getType() const
{
    return this->_type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* uses " << this->_type << " on " << target.getName() << " *" << std::endl;
}

