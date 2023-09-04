#include "contact.hpp"
#include "phonebook.hpp"


int main() {
	std::string option;
	contact contact;
	phonebook phonebook;

	while (1)
	{
		std::cout << "Input: ";
		std::cin >> option;
		if (option == "EXIT")
			break ;
		else if (option == "ADD") {
			contact = contact.add();
			phonebook.addContact(contact);
		}
		else if (option == "SEARCH")
			phonebook.displayContacts();
	}
}