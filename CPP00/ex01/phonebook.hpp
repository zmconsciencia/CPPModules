#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "contact.hpp"

class phonebook
{
private:
	static const int maxContact = 8;
    contact contacts[maxContact];
    int contactCount;
public:
	phonebook();
	~phonebook();
	void addContact(contact contact);
	void displayContacts();
	void Search();
};

#endif