
#include "../includes/phonebook.hpp"
#include <iostream>

void printSpaces(int n) {
    if (n <= 0)
        return ;
    for (int i = 0; i < n; i++) {
        std::cout << " ";
    }
}

void    PhoneBook::addContact() {
    if (totalContacts >= MAXCONTACTS)
        std::cout << "Max Contacts Reaced. Replacing Contact " << index << "." << std::endl;
    contacts[index].insertContact();
    index = (index + 1) % MAXCONTACTS;
    totalContacts += 1;
    std::cout << "Contact addded successfully." << std::endl;
}


void    PhoneBook::searchContact() {
    if (totalContacts == 0) {
        std::cout << "PhoneBook is empty!" << std::endl;
        return;
    }
    std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
    for (int i = 0; i < MAXCONTACTS && i < totalContacts; i++) {
        contacts[i].displayOnTable(i + 1);
    }
    std::cout << " ___________________________________________ " << std::endl;
    std::string input;
    std::cout << "Enter index: ";
    std::getline(std::cin, input);
    int index = std::stoi(input);
    if ((index > totalContacts || index > MAXCONTACTS) || index <= 0) {
        std::cout << "index is not valid!" << std::endl; 
        return ;
    }
    contacts[index - 1].displayContact();
}
