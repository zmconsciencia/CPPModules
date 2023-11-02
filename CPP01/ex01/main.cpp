#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name);

int main() {
    Zombie *ola = zombieHorde(5, "Afonso");
    for (int i = 0; i < 5; i++)
        ola[i].announce();
    delete [] ola;
    return (0);
}