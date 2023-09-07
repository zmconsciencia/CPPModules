#include "phonebook.hpp"

void	phonebook::addContact(contact contact){
	if (contactCount < maxContact) {
		contacts[contactCount++] = contact;
	}
	else
	{
		for (int i = 0; i < maxContact - 1; i++) {
			contacts[i] = contacts[i + 1];
		}
		contacts[maxContact - 1] = contact;
	}
}

void	phonebook::displayContacts(){
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|INDEX     |FIRST NAME|LAST NAME |NICKNAME  |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = contactCount - 1; i >= 0; i--)
	{
		contacts[i].id = contactCount - i;
		contacts[i].display();
	}
}

void	phonebook::Search(){
	std::string i;
	displayContacts();
	while (1)
	{
		std::cout << "INDEX: ";
		std::getline(std::cin, i);
		contacts[contactCount - std::atoi(i.c_str())].Print();
		// break;
	}
}

phonebook::phonebook() : contactCount(0)
{
	return ;
}

phonebook::~phonebook()
{
	return ;
}