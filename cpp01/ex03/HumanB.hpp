#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    Weapon* wep; // pointer olarak tanımlayınca; Weapon classının constructorı calısmadan HumanB objesi olusturabiliyoruz.
    std::string name;
    public:
        void attack( void );
        void setWeapon( Weapon &wep);
        HumanB( std::string name );
};

#endif