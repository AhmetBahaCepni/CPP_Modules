#include <iostream>
#include <iomanip>
#include <string>
#include "class.hpp"

void Contact::setFirstName(std::string firstName)
{
    _firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
    _lastName = lastName;
}

void Contact::setNickName(std::string nickname)
{
    _nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
    _phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
    _darkestSecret = darkestSecret;
}

std::string Contact::getFirstName(void)
{
    return _firstName;
}

std::string Contact::getLastName(void)
{
    return _lastName;
}

std::string Contact::getNickName(void)
{
    return _nickname;
}

std::string Contact::getPhoneNumber(void)
{
    return _phoneNumber;
}

std::string Contact::getDarkestSecret(void)
{
    return _darkestSecret;
}


void PhoneBook::add(void)
{
    std::string firstName;
    std::string lastName;
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
    int putIndex;

    if(_size == 8)
    {
        putIndex = _oldestIndex;
        _oldestIndex = (_oldestIndex + 1) % 8;
    }
    else
    {
        putIndex = _size;
        _size++;
    }

    // clear cin buffer
    std::cout << "Enter contact \"firstname\" >> ";
    getline(std::cin, firstName);
    std::cout << "Enter contact \"lastname\" >> ";
    getline(std::cin, lastName);
    std::cout << "Enter contact \"nickname\" >> ";
    getline(std::cin, nickName);
    std::cout << "Enter contact \"phone number\" >> ";
    getline(std::cin, phoneNumber);
    std::cout << "Enter contact \"darkest secret\" >> ";
    getline(std::cin, darkestSecret);

    if(firstName == "" || lastName == "" || nickName == "" || phoneNumber == "" || darkestSecret == "")
    {
        std::cout << "Contact cant have empy field" << std::endl;
        return;
    }

    _contacts[putIndex].setFirstName(firstName);
    _contacts[putIndex].setLastName(lastName);
    _contacts[putIndex].setNickName(nickName);
    _contacts[putIndex].setPhoneNumber(phoneNumber);
    _contacts[putIndex].setDarkestSecret(darkestSecret);
    std::cout << "Enter contact \"firstname\" >> ";

}

void printToField(std::string str)
{
    if (str.length() > 10)
        std::cout << str.substr(0, 9) << ".";
    else
        std::cout << std::setw(10) << str;
    
    std::cout << "|";
}

void PhoneBook::search(void)
{
    int selectedIndex;

    std::cout << std::string(44, '-') << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << std::string(44, '-') << std::endl;
    for (int i = 0; i < _size; i++)
    {
        std::cout << "|" << std::setw(10) << i << "|";
        printToField(_contacts[i].getFirstName());
        printToField(_contacts[i].getLastName());
        printToField(_contacts[i].getNickName());
        std::cout << std::endl;
    }
    std::cout << std::string(44, '-') << std::endl;

    std::cout << "Enter index: --> ";
    std::cin >> selectedIndex;

    if (selectedIndex < 0 || selectedIndex >= _size)
    {
        std::cout << "Invalid index" << std::endl;
        return;
    }

    std::cout << std::string(25, '-') << std::endl;
    std::cout << "|First Name: |";
    printToField(_contacts[selectedIndex].getFirstName());
    std::cout << std::endl <<"|Last Name:  |";
    printToField(_contacts[selectedIndex].getLastName());
    std::cout << std::endl << "|Nickname:   |";
    printToField(_contacts[selectedIndex].getNickName());
    std::cout << std::endl << "|Phone Number|";
    printToField(_contacts[selectedIndex].getPhoneNumber());
    std::cout << std::endl << "|Darkest Sec.|";
    printToField(_contacts[selectedIndex].getDarkestSecret());
    std::cout << std::endl << std::string(25, '-') << std::endl;
}

void PhoneBook::phonebookExit(void)
{
    std::cout << "Program Terminating..." << std::endl;
    exit(0);
}