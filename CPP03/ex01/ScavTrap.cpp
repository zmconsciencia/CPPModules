#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
    this->name = "default";
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
    std::cout << "ScavTrap default constructor was called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
    this->name = name;
    this->attackDamage = 20;
    this->energyPoints = 50;
    this->hitPoints = 100;
    std::cout << "ScavTrap constructor with parameters was called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &object) :ClapTrap(){
    std::cout << "ScavTrap copy constructor was called." << std::endl;
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
    std::cout << "ScavTrap destructor was called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
     if ( this->energyPoints && this->hitPoints )
    {
        std::cout << "ScavTrap "<< this->name <<" attacks "<< target 
            << " causing " << this->getDamage() << " points of damage." << std::endl;
        this->energyPoints--;
    }
    else
        this->handleStatus();
}

void ScavTrap::guardGate(void) {
    if (this->hitPoints)
        std::cout << "ScavTrap " << this->name << " is now in gatekeeper mode." << std::endl;
    else
        this->handleStatus();
}