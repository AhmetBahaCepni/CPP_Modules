#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog"){
    std::cout << "Dog default constructor called" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(const Dog &dog) : Animal(dog){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}

Dog &Dog::operator=(const Dog &dog){
    if(this != &dog)
    {
        this->Animal::operator=(dog);
        if(this->brain)
            delete this->brain;
        this->brain = new Brain();
        for(int i = 0; i < 100; i++)
            this->brain->setIdea(i, dog.brain->getIdea(i));
    }
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}

void Dog::makeSound() const{
    std::cout << "Bark!" << std::endl;
}

Brain *Dog::getBrain() const{
    return this->brain;
}
