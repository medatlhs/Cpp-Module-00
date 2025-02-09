#include "../includes/phonebook.hpp"
#include <iostream>

int main() {
    PhoneBook   myPhoneBook;
    std::string command;

    while(true)
    {
        std::cout << "Enter a command: ";
        std::getline(std::cin, command);
        if (command == "ADD")
            myPhoneBook.addContact();
        else if (command == "SEARCH")
            myPhoneBook.searchContact();
        else if (command == "EXIT")
            return 0;
    }
    return 0;
}
