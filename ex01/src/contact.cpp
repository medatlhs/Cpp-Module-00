#include "../includes/contact.hpp"
#include "../includes/phonebook.hpp"

void    Contact::displayOnTable(int index) {
    std::cout << "|";
    printSpaces(9);
    std::cout << index; std::cout << "|";
    printSpaces(10 - firstName.length());
    std::cout << (firstName.length() > 10 ? firstName.substr(0, 9) + "." : firstName);
    std::cout << "|";
    printSpaces(10 - lastName.length());
    std::cout << (lastName.length() > 10 ? lastName.substr(0, 9) + "." : lastName);
    std::cout << "|";
    printSpaces(10 - nickName.length());
    std::cout << (nickName.length() > 10 ? lastName.substr(0, 9) + "." : nickName);
    std::cout << "|" << std::endl;
}

void    Contact::displayFullContact() {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickName << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

void    Contact::insertContact() {
    while (1) {
        std::cout << "Enter first name: ";
        if (!std::getline(std::cin, firstName)) { std::cout << std::endl; exit(0); }
        if (firstName.empty()) { std::cout << "Can't be empty!\n"; continue;}
        break ;
    }
    
    std::cout << "Enter last name: ";
    if (!std::getline(std::cin, lastName)) { std::cout << std::endl; exit(0); }
    std::cout << "Enter nick name: ";
    if (!std::getline(std::cin, nickName)) { std::cout << std::endl; exit(0); }
    while (1) {
        std::cout << "Enter phone number: ";
        if (!std::getline(std::cin, phoneNumber)) { std::cout << std::endl; exit(0); }
        if (phoneNumber.empty()) { std::cout << "can't be empty!\n"; continue; }
        if (!ft_isdigit(phoneNumber)) { std::cout << "Invlaid phone number!\n"; continue; }
        break ;
    }
    std::cout << "Enter darkest secret: ";
    if (!std::getline(std::cin, darkestSecret)) { std::cout << std::endl; exit(0); }
}

