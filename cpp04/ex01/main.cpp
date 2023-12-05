#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal *animals[10];
    Animal *tempAnimal;

    for(int i = 0; i < 5; i++)
        animals[i] = new Dog();
    for(int i = 5; i < 10; i++)
        animals[i] = new Cat();
    
    std::cout << std::endl;
    // setting ideas
    for(int i = 0; i < 10; i++)
    {
        tempAnimal = animals[i];
        std::cout << "index: " << i;
        if(tempAnimal->getType() == "Dog"){
            tempAnimal->makeSound();
            Dog *tempDog = dynamic_cast<Dog *>(tempAnimal);
            tempDog->getBrain()->setIdea(0, "Dog idea 0");
            tempDog->getBrain()->setIdea(1, "Dog idea 1");
            tempDog->getBrain()->setIdea(2, "Dog idea 2");
            tempDog->getBrain()->setIdea(3, "Dog idea 3");
            tempDog->getBrain()->setIdea(4, "Dog idea 4");
            tempDog->getBrain()->setIdea(5, "Dog idea 5");
        }
        else if(tempAnimal->getType() == "Cat"){
            tempAnimal->makeSound();
            Cat *tempCat = dynamic_cast<Cat *>(tempAnimal);
            tempCat->getBrain()->setIdea(5, "Cat idea 0");
            tempCat->getBrain()->setIdea(4, "Cat idea 1");
            tempCat->getBrain()->setIdea(3, "Cat idea 2");
            tempCat->getBrain()->setIdea(2, "Cat idea 3");
            tempCat->getBrain()->setIdea(1, "Cat idea 4");
            tempCat->getBrain()->setIdea(0, "Cat idea 5");
        }
    }
    std::cout << std::endl;

    // reading ideas
    for(int i = 0; i < 10; i++)
    {
        tempAnimal = animals[i];
        if(tempAnimal->getType() == "Dog"){
            Dog *tempDog = dynamic_cast<Dog *>(tempAnimal);
            std::cout << "Dog idea: " << tempDog->getBrain()->getIdea(i) << std::endl;
        }
        else if(tempAnimal->getType() == "Cat"){
            Cat *tempCat = dynamic_cast<Cat *>(tempAnimal);
            std::cout << "Cat idea: " << tempCat->getBrain()->getIdea(i - 5) << std::endl;
        }
    }

    std::cout << std::endl;
    for(int i = 0; i < 10; i++)
        delete animals[i];
    return 0;
}