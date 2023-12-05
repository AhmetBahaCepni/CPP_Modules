#include "Animal.hpp"

Animal::Animal() : type("Animal"){
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type){
    std::cout << "Animal type constructor called" << std::endl;
}

Animal::Animal(const Animal &animal){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = animal;
}

Animal &Animal::operator=(const Animal &animal){
    if(this != &animal)
        this->type = animal.type;
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const{
    return this->type;
}

void Animal::setType(std::string type){
    this->type = type;
}

void Animal::makeSound() const{
    std::cout << "Animal sound" << std::endl;
}