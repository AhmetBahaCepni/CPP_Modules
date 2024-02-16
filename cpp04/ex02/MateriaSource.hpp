#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    public:
        MateriaSource();
        MateriaSource(MateriaSource const & src);
        virtual ~MateriaSource();
        MateriaSource & operator=(MateriaSource const & rhs);
        void learnMateria(AMateria* m);
        AMateria* createMateria(std::string const & type);
        
        void testFunc();
    private:
        AMateria* _materia[4];
}; // MateriaSource class

#endif //MATERIASOURCE_HPP