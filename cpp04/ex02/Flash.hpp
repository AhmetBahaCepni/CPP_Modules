#ifndef FLASH_HPP
# define FLASH_HPP

# include "AMateria.hpp"

class Flash : public AMateria
{
    public:
        Flash();
        Flash(const Flash& src);
        virtual ~Flash();

        Flash& operator=(const Flash& rhs);

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
}; // Flash class with AMateria as parent

#endif // FLASH_HPP