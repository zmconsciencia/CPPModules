#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>

class contact
{
private:
public:
	std::string fName;
	std::string lName;
	std::string nName;
	std::string pNum;
	std::string dSec;
	contact();
	~contact();
	contact	add(void);
	void display() {
        std::cout << "Name: " << fName << ", Last name: " << lName << std::endl;
    }
};

#endif