
# include <string>
# include "contact.hpp"

# define MAXCONTACTS 8

class PhoneBook {
    private:
        Contact contacts[MAXCONTACTS];
        int     index;
        int     totalContacts;

    public:
        void init();
        void addContact();
        void searchContact();
        PhoneBook() {
            index = 0;
            totalContacts = 0;
        }
};

