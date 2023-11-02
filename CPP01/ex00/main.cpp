#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump( std::string name );

int main(){
    Zombie *zombie = newZombie("Renato");
    zombie->announce();
    randomChump("José");
    delete zombie;
}