#include "contact.hpp"

contact	contact::add(){
	contact nCon;

	std::cout << "First name: ";
	std::getline(std::cin, nCon.fName);
	std::cout << "Last name: ";
	std::getline(std::cin, nCon.lName);
	std::cout << "Nickname: ";
	std::getline(std::cin, nCon.nName);
	std::cout << "Phone number: ";
	std::getline(std::cin, nCon.pNum);
	std::cout << "Darkest secret: ";
	std::getline(std::cin, nCon.dSec);

	return nCon;
}

contact::contact(void){
	return ;
}
contact::~contact(void){
	return ;
}