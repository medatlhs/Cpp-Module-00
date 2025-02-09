#include "../includes/contact.hpp"

void    Contact::insertContact() {
    std::cout << "Enter first name: ";
    std::getline(std::cin, firstName);
    std::cout << "Enter last name: ";
    std::getline(std::cin, lastName);
    std::cout << "Enter nick name: ";
    std::getline(std::cin, nickName);
    std::cout << "Enter phone number: ";
    std::getline(std::cin, phoneNumber);
    std::cout << "Enter darkest secret: ";
    std::getline(std::cin, darkestSecret);
}

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

void    Contact::displayContact() {
    std::cout << "First Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "Nickname: " << nickName << std::endl;
    std::cout << "Phone Number: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}
