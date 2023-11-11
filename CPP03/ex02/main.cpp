#include "FragTrap.hpp"

int main() {
    FragTrap Ze("Jose Consciencia");
    FragTrap Migas("Miguel Leao");
    FragTrap Oscar(Migas);

    Oscar.setName("Oscar");

    std::cout << std::endl;

    Migas.attack("Jose Consciencia");
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

    Oscar.highFivesGuys();
    Ze.highFivesGuys();

    Migas.setDamage(1);
    for (int i = 0; i < 100; i++)
    {
        Migas.attack(Oscar.getName());
        if (Migas.getEnergy() > 0)
            Oscar.takeDamage(Migas.getDamage());
    }

    std::cout << std::endl;

    return 0;
}