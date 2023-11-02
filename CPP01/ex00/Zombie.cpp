#include "Zombie.hpp"

Zombie::Zombie () {}
Zombie::Zombie (std::string name) {this->name = name;}
Zombie::~Zombie() { std::cout << "Destructor for " << this->name << " was called." << std::endl; }

void Zombie::announce(void){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}