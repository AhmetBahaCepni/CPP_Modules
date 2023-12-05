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
    int levelNum = -1;

    myFunction[0] = &Harl::debug;
    myFunction[1] = &Harl::info;
    myFunction[2] = &Harl::warning;
    myFunction[3] = &Harl::error;

    for (int i = 0; i < 4; i++)
    {
        if (level.compare(levels[i]) == 0)
            levelNum = i;
    }

    switch (levelNum) // in c++ 11 we can omit the breaks so cases fall through but 98 doesn't allow us to delete breaks
    {
        case 0:
            (this->*myFunction[0])();
            (this->*myFunction[1])();
            (this->*myFunction[2])();
            (this->*myFunction[3])();
            break;
        case 1:
            (this->*myFunction[1])();
            (this->*myFunction[2])();
            (this->*myFunction[3])();
            break;
        case 2:
            (this->*myFunction[2])();
            (this->*myFunction[3])();
            break;
        case 3:
            (this->*myFunction[3])();
            break;
        default:
            std::cout << "Invalid level, valids are {DEBUG, INFO, WARNING, ERROR}" << std::endl;
            break;
    }
}