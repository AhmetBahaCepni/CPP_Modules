#include <iostream>
#include "class.hpp"

int main(void)
{
    int selection = 0;
    PhoneBook myBook;

    std::cout << "Welcome to the PhoneBook" << std::endl;
    while (1)
    {
        while(selection < 1 || selection > 3)
        {
            std::cout << "Please select an option:" << std::endl;
            std::cout << "1. Add a contact" << std::endl;
            std::cout << "2. Search for a contact" << std::endl;
            std::cout << "3. Exit" << std::endl;
            std::cin >> selection;
        }
        switch (selection)
        {
            case 1:
                std::cout << "! Add a contact Selected !" << std::endl;
                myBook.add();
                break;
            case 2:
                std::cout << "! Search for a contact Selected !" << std::endl;
                myBook.search();
                break;
            case 3:
                std::cout << "! Exit Selected !" << std::endl;
                std::cout << "Program terminating..." << std::endl;
                return 0;
        }
        selection = 0;
    }
}