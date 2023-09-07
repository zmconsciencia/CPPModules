#include "Account.hpp"
#include "iostream"

Account::Account(int initial_deposit){
	std::cout << "constructor called" << std::endl;
	std::cout << initial_deposit << std::endl;
	return;
}

Account::~Account(){
	std::cout << "destructor called" << std::endl;
	return;
}

