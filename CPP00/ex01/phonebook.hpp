#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.hpp"

class phonebook
{
private:
	static const int maxContact = 8; // Maximum number of contacts
    contact contacts[maxContact];    // Array of Student objects
    int contactCount;                 // Current number of contacts
public:
	phonebook();
	~phonebook();
	bool addContact(contact contact);
	void displayContacts();
};

#endif