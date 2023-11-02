#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
    this->name = name;
    this->arma = 0;
    std::cout << this->name << " was born." << std::endl;
}
HumanB::~HumanB() {std::cout <<this->name << " has been destroyed." << std::endl;}

void HumanB::attack() {
     if (!this->arma)
        std::cout << this->name << " is peaceful.\n";
    else
        std::cout << this->name << " attacks with " << this->arma->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->arma = &weapon;
}