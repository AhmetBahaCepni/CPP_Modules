#include "Cat.hpp"

Cat::Cat() : Animal("Cat"){
    std::cout << "Cat default constructor called" << std::endl;

    this->brain = new Brain();
}

Cat::Cat(const Cat &cat) : Animal(cat){
    std::cout << "Cat copy constructor called" << std::endl;
    *this = cat;
}

Cat &Cat::operator=(const Cat &cat){
    if(this != &cat)
    {
        this->Animal::operator=(cat);
        if(this->brain)
            delete this->brain;
        this->brain = new Brain();
        for(int i = 0; i < 100; i++)
            this->brain->setIdea(i, cat.brain->getIdea(i));
    }
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

void Cat::makeSound() const{
    std::cout << "Meow!" << std::endl;
}

Brain *Cat::getBrain() const{
    return this->brain;
}