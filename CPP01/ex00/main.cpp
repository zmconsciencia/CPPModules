#include "Zombie.hpp"

void randomChump(std::string name);
Zombie* newZombie(std::string name);

int main(){
    randomChump("randomChump");
    Zombie *zombie = newZombie("newZombie");
    zombie->announce();
    delete zombie;
}