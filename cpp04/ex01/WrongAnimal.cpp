#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal"){
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type){
    std::cout << "WrongAnimal type constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &wAnimal){
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = wAnimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &wAnimal){
    if(this != &wAnimal)
        this->type = wAnimal.type;
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const{
    return this->type;
}

void WrongAnimal::setType(std::string type){
    this->type = type;
}

void WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal sound!" << std::endl;
}