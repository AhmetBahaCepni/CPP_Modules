#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _materia()
{
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    for (int i = 0; i < 4; i++)
        _materia[i] = src._materia[i];
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i])
            delete _materia[i];
    }
}

MateriaSource & MateriaSource::operator=(MateriaSource const & rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
        {
            if (_materia[i])
                delete _materia[i];
            _materia[i] = rhs._materia[i];
        }
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!_materia[i])
        {
            _materia[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i] && _materia[i]->getType() == type)
            return _materia[i]->clone();
    }
    return NULL;
}

void MateriaSource::testFunc()
{
    std::cout << "this function is not in the interface" << std::endl;
}