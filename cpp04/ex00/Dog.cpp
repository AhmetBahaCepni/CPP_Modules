#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = dog;
}

Dog &Dog::operator=(const Dog &dog){
    if(this != &dog)
        this->Animal::operator=(dog);
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "Bark!" << std::endl;
}
