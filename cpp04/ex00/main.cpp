#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << std::endl;
    std::cout << "Types: " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl << std::endl;

    std::cout << "Sounds: " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    std::cout << std::endl;
    
    std::cout << "Destructor: " << std::endl;
    delete meta;
    delete j;
    delete i;
    std::cout << std::endl;

    const WrongAnimal* wmeta = new WrongAnimal();
    const WrongAnimal* wi = new WrongCat();

    std::cout << std::endl;
    std::cout << "Types: " << std::endl;
    std::cout << wi->getType() << " " << std::endl;
    std::cout << wmeta->getType() << " " << std::endl << std::endl;
    
    std::cout << "Sounds: " << std::endl;
    wi->makeSound();
    wmeta->makeSound();
    std::cout << std::endl;

    std::cout << "Destructor: " << std::endl;
    delete wmeta;
    delete wi;

    return 0;
}