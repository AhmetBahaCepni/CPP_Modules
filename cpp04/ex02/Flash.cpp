#include "Flash.hpp"

Flash::Flash() : AMateria("flash"){}

Flash::Flash(Flash const & src) : AMateria(src){}

Flash::~Flash(){}

Flash & Flash::operator=(Flash const & rhs)
{
    if (this != &rhs)
    {
        this->_type = rhs._type;
    }
    return *this;
}

AMateria* Flash::clone() const
{
    return new Flash(*this);
}

void Flash::use(ICharacter& target)
{
    std::cout << "* flashes " << target.getName() << " so cant see *" << std::endl;
}