#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    this->name = "default";
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
}

ScavTrap::ScavTrap(std::string name) {
    this->name = name;
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
    std::cout << "ScavTrap constructor with parameters was called with name " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &object) :ClapTrap(){
    std::cout << "ScavTrap copy constructor was called with name " << object.name << std::endl;
    *this = object;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &object) {
    std::cout << "ScavTrap copy assignment operator was called." << std::endl;
    if (this != &object) {
        this->name = object.name;
        this->hitPoints = object.hitPoints;
        this->energyPoints = object.energyPoints;
        this->attackDamage = object.attackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << this->name << " ScavTrap destructor was called" << std::endl;
}

void ScavTrap::guardGate(void) {
    std::cout << this->name << " ScavTrap is now in gatekeeper mode." << std::endl;
}