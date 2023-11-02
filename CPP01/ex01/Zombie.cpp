#include "Zombie.hpp"

Zombie::Zombie(): name("Zombie"){};

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie(){
    std::cout << "Destructor was called." << std::endl;
}

void Zombie::announce(void){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
} 

void Zombie::setName(std::string name) {
    this->name = name;
}