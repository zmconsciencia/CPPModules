#include "phonebook.hpp"

bool	phonebook::addContact(contact contact){
	if (contactCount < maxContact) {
		contacts[contactCount++] = contact;
	}
	return false; // Classroom is full
}

void	phonebook::displayContacts(){
	for (int i = 0; i < contactCount; i++)
		contacts[i].display();
}

phonebook::phonebook() : contactCount(0)
{
	return ;
}

phonebook::~phonebook()
{
	return ;
}