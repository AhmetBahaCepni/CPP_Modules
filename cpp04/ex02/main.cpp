#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Fire.hpp"
#include "Flash.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main() {
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
    src->learnMateria(new Fire());
    src->learnMateria(new Flash());

    // interface test
    // src->testFunc();
    // MateriaSource* src2 = dynamic_cast<MateriaSource*>(src);
    // src2->testFunc();

	ICharacter* acepni = new Character("acepni");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	acepni->equip(tmp);
	tmp = src->createMateria("cure");
	acepni->equip(tmp);
    tmp = src->createMateria("fire");
    acepni->equip(tmp);
    tmp = src->createMateria("flash");
    acepni->equip(tmp);
	
	ICharacter* oolkay = new Character("oolkay");
	acepni->use(0, *oolkay);
	acepni->use(1, *oolkay);
    acepni->use(2, *oolkay);
    acepni->use(3, *oolkay);
	
	delete oolkay;
	delete acepni;
	delete src;
	
	return 0;
}