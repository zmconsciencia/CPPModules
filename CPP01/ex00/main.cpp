#include "Zombie.hpp"

Zombie *newZombie(std::string name);
void randomChump( std::string name );

int main(){
    Zombie *Renato = newZombie("Renato");
    Renato->announce();
    randomChump("José");
    delete Renato;
}