#ifndef CONTACT_H
# define CONTACT_H

#include <iomanip>
#include <string>
#include <stdlib.h>
#include <iostream>

class contact
{
private:
	std::string fName;
	std::string lName;
	std::string nName;
	std::string pNum;
	std::string dSec;
public:
	int	id;
	contact();
	~contact();
	contact	add(void);
    std::string formatField(const std::string& field) {
        std::string formattedField = field;
        if (formattedField.length() < 10) {
            formattedField += std::string(10 - formattedField.length(), ' ');
        } else if (formattedField.length() > 10) {
            formattedField = formattedField.substr(0, 9) + ".";
        }
        return formattedField;
    }
	void display() {
        std::cout  << "|" << id << "         |" << formatField(fName) << "|" << formatField(lName) << "|" << formatField(nName) << "|" << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
    }
	void Print()
	{
		std::cout << fName << std::endl;
	}
};

#endif