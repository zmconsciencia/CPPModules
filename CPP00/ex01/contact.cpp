#include "contact.hpp"

contact	contact::add(){
	contact nCon;

	while (nCon.fName.empty()) {
		std::cout << "First name: ";
		std::getline(std::cin, nCon.fName);
	}
	while (nCon.lName.empty()) {
		std::cout << "Last name: ";
		std::getline(std::cin, nCon.lName);
	}
	while (nCon.nName.empty()) {
		std::cout << "Nickname: ";
		std::getline(std::cin, nCon.nName);
	}
	while (nCon.pNum.empty()) {
		std::cout << "Phone number: ";
		std::getline(std::cin, nCon.pNum);
	}
	while (nCon.dSec.empty()) {
		std::cout << "Darkest secret: ";
		std::getline(std::cin, nCon.dSec);
	}

	return nCon;
}

contact::contact(void){
	return ;
}
contact::~contact(void){
	return ;
}