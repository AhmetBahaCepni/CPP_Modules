#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "Harl is Debugging" << std::endl;
}

void Harl::info(void)
{
    std::cout << "Harl is Informing" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "Harl is Warning" << std::endl;
}

void Harl::error(void)
{
    std::cout << "Harl is Erroring" << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*myFunction[4])(void);
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    myFunction[0] = &Harl::debug;
    myFunction[1] = &Harl::info;
    myFunction[2] = &Harl::warning;
    myFunction[3] = &Harl::error;
    for (int i = 0; i < 4; i++)
    {
        if (level.compare(levels[i]) == 0)
            (this->*myFunction[i])();
    }
}