#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type) {std::cout << "Weapon Created." << std::endl;}
Weapon::~Weapon() {std::cout << "Weapon Destroyed." << std::endl;}

std::string &Weapon::getType(){
    std::string &typeREF = this->type;
    return (typeREF);
}

void Weapon::setType(std::string type){
    this->type = type;
}