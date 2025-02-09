
# include <string>

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;

    public:
        void insertContact();
        void displayContact();
        void displayOnTable(int index);
};

void printSpaces(int n);
