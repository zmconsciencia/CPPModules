#include "Harl.hpp"

Harl::Harl(){
    f[0] = &Harl::debug;
    f[1] = &Harl::info;
    f[2] = &Harl::warning;
    f[3] = &Harl::error;

    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";
};
Harl::~Harl(){std::cout << "Destructor has been called" << std::endl;}

void Harl::debug(){
    std::cout << "[DEBUG]" << std::endl << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(){
    std::cout << "[INFO]" << std::endl << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(){
    std::cout << "[WARNING]" << std::endl << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(){
    std::cout << "[ERROR]" << std::endl << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    for (int i = 0; i < 4; i++)
    {
        if (this->levels[i] == level) {
            (this->*f[i])();
        }
    }
}