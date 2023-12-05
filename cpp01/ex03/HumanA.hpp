#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
    //weapon constructorı calısmadan HumanA objesi olusturabilmek
    //için ya pointer ya da reference kullanmak gerekiyor.
    //constructor içinde initialize ettiğimiz için burda reference
    Weapon& wep;
    std::string name;
    public:
        void attack( void );
        HumanA( std::string name, Weapon& wep );
};

#endif