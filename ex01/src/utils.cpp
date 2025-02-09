#include "../includes/phonebook.hpp"

bool    ft_isdigit(std::string input) {
    if (input.empty())
        return false;
    for (int i = 0; i < (int)input.length(); i++) {
        if (!isdigit(input[i]) && !isblank(input[i]))
            return false;
    }
    return true;
}

bool    ft_isValid(std::string input) {
    if (input.empty())
        return (false);
    int i = -1;
    while (input[++i] == ' ' || input[i] == '\t');
    if (!input[i])
        return (false);
    int total = 0;
    while (isdigit(input[i]))
    {
        int number = input[i] - '0';
        total = (total*10) + number;
        i++;
        if (number > 8)
            return false;
    }
    while (isblank(input[i]))
            i++;
    if (!input[i])
        return true;
    return (false);
}

void printSpaces(int n) {
    if (n <= 0)
        return ;
    for (int i = 0; i < n; i++) {
        std::cout << " ";
    }
}

void    printTable() {
    std::cout << " ___________________________________________ " << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
}
