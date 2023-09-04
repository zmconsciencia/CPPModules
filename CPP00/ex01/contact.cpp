#include "contact.hpp"

contact	contact::add(){
	contact nCon;

	std::cout << "First name: ";
	std::cin >> nCon.fName;
	std::cout << "Last name: ";
	std::cin >> nCon.lName;
	std::cout << "Nickname: ";
	std::cin >> nCon.nName;
	std::cout << "Phone number: ";
	std::cin >> nCon.pNum;
	std::cout << "Darkest secret: ";
	std::cin >> nCon.dSec;

	return nCon;
}

contact::contact(void){
	return ;
}
contact::~contact(void){
	return ;
}