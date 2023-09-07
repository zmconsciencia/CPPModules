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
	int n;
	displayContacts();
	while (1)
	{
		std::cout << "INDEX: ";
		std::getline(std::cin, i);
		n = std::atoi(i.c_str());
		if (n > contactCount || i.empty() || n <= 0)
			std::cout << "Invalid input." << std::endl;
		else {
			contacts[contactCount - n].Print();
			break;
		}
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