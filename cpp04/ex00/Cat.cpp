#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat){
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cat;
}

Cat &Cat::operator=(const Cat &cat){
    if(this != &cat)
        this->Animal::operator=(cat);
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Meow!" << std::endl;
}
