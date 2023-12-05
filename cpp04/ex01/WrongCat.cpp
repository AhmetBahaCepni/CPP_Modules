#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &wCat) : WrongAnimal(wCat){
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = wCat;
}

WrongCat &WrongCat::operator=(const WrongCat &wCat){
    if(this != &wCat)
        this->type = wCat.type;
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const{
    std::cout << "wMeow!" << std::endl;
}

// Path: ex00/main.cpp
