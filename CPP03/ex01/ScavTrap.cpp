#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) {
    this->name = name;
    std::cout << "ScavTrap constructor was called with name " << name << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << this->name << "ScavTrap destructor was called" << std::endl;
}