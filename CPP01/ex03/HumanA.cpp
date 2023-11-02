#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): arma(weapon) {
    this->name = name;
    std::cout << this->name << " was born." << std::endl;
}
HumanA::~HumanA() {std::cout <<this->name << " has been destroyed." << std::endl;}

void HumanA::attack() {
    std::cout << this->name << " attacks with " << this->arma.getType() << std::endl;
}

void HumanA::setWeapon(Weapon &weapon) {
    this->arma = weapon;
}