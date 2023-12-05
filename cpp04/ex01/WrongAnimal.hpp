#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal &animal);
        WrongAnimal &operator=(const WrongAnimal &animal);
        ~WrongAnimal();
        std::string getType() const;
        void setType(std::string type);
        void makeSound() const;
};

#endif // WRONGANIMAL_HPP