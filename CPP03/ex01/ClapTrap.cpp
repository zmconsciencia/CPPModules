#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :name("default") {
    std::cout << "ClapTrap default constructor was called with name "<< this->name << "." << std::endl;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &object) {
    std::cout << "ClapTrap copy constructor was called with name "<< object.name << "." << std::endl;
    *this = object;
}

ClapTrap::ClapTrap(std::string name) {
    std::cout << "ClapTrap Constructor with parameter was called with name "<< name << "." << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &object) {
    std::cout << "Copy assignment constructor was called." << std::endl;
    if (this != &object) {
        this->name = object.name;
        this->hitPoints = object.hitPoints;
        this->energyPoints = object.energyPoints;
        this->attackDamage = object.attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap Destructor for " << this->name << " was called." << std::endl;
}

void ClapTrap::attack(const std::string &target) {
    if ( this->energyPoints && this->hitPoints )
    {
        std::cout << "ClapTrap "<< this->name <<" attacks "<< target 
            << " causing " << this->getDamage() << " points of damage." << std::endl;
        this->energyPoints--;
    }
    else
        this->handleStatus();
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->hitPoints) {
        if (amount > 0) {
            if (amount >= this->hitPoints) {
                std::cout << this->name << " has lost " << this->hitPoints << " hit points and died." << std::endl;
                this->hitPoints = 0;
            }
            else {
                this->hitPoints -= amount;
                std::cout << this->name << " has lost " << amount << " hit points." << std::endl;
            }
        }
        else
            std::cout << this->name << " takes no damage." << std::endl;
    }
    else
        this->handleStatus();
}

void ClapTrap::repairDamage(unsigned int amount) {
    if (this->hitPoints && this->energyPoints) {
        if (amount > 0) {
            this->hitPoints += amount;
            this->energyPoints--;
            std::cout << this->name << " has repaired " << amount << " hit points." << std::endl;
        }
        else
            std::cout << this->name << " repairs no damage." << std::endl;
    }
    else
        this->handleStatus();
}

void ClapTrap::setDamage(unsigned int amount) {
    this->attackDamage = amount;
}

int ClapTrap::getDamage(void) {
    return this->attackDamage;
}

std::string ClapTrap::getName(void) {
    return this->name;
}

void ClapTrap::handleStatus(void) {
    if (this->hitPoints == 0)
        std::cout << this->name << " is dead." << std::endl;
    else
        std::cout << this->name << " has no energy." << std::endl;
}