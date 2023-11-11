#include "ScavTrap.hpp"

int main() {
    ScavTrap Ze("Jose Consciencia");
    ScavTrap Migas("Miguel Leao");
    ScavTrap Oscar(Migas);

    Oscar.setName("Oscar");

    std::cout << std::endl;

    Migas.attack(Ze.getName());
    Ze.takeDamage(Migas.getDamage());

    std::cout << std::endl;

    Ze.setDamage(2);
    Ze.attack("Miguel Leao");
    Migas.takeDamage(Ze.getDamage());

    std::cout << std::endl;

    Migas.beRepaired(100);
    Migas.setDamage(1000000);
    Migas.attack("Jose Consciencia");
    Ze.takeDamage(Migas.getDamage());

    std::cout << std::endl;

    Oscar.guardGate();
    Ze.guardGate();

    std::cout << std::endl;

    return 0;
}