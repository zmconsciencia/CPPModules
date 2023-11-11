#include "FragTrap.hpp"

FragTrap::FragTrap() {
    this->name = "default";
    this->attackDamage = 30;
    this->energyPoints = 100;
    this->hitPoints = 100;
    std::cout << "FragTrap default constructor was called." << std::endl;
}

FragTrap::FragTrap(std::string name) {
    this->name = name;
    this->attackDamage = 30;
    this->energyPoints = 100;
    this->hitPoints = 100;
    std::cout << "FragTrap constructor with parameters was called." << std::endl;
}

FragTrap::FragTrap(const FragTrap &object) :ClapTrap(){
    std::cout << "FragTrap copy constructor was called." << std::endl;
    *this = object;
}

FragTrap &FragTrap::operator=(const FragTrap &object) {
    std::cout << "FragTrap copy assignment operator was called." << std::endl;
    if (this != &object) {
        this->name = object.name;
        this->hitPoints = object.hitPoints;
        this->energyPoints = object.energyPoints;
        this->attackDamage = object.attackDamage;
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor was called" << std::endl;
}

void FragTrap::attack(const std::string &target) {
     if ( this->energyPoints && this->hitPoints )
    {
        std::cout << "FragTrap "<< this->name <<" attacks "<< target 
            << " causing " << this->getDamage() << " points of damage." << std::endl;
        this->energyPoints--;
    }
    else
        this->handleStatus();
}

void FragTrap::highFivesGuys(void) {
    if (this->hitPoints)
        std::cout << "FragTrap " << this->name << " high fives you!" << std::endl;
    else
        this->handleStatus();
}