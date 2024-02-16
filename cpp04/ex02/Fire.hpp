#ifndef FIRE_HPP
# define FIRE_HPP

# include "AMateria.hpp"

class Fire : public AMateria
{
    public:
        Fire();
        Fire(const Fire& src);
        virtual ~Fire();

        Fire& operator=(const Fire& rhs);

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
}; // Fire class with AMateria as parent

#endif // FIRE_HPP