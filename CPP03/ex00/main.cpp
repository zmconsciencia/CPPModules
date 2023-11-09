#include "ClapTrap.hpp"

int main( void ) {

	ClapTrap x = ClapTrap("Miguel");
	ClapTrap y = ClapTrap("Afonso");

	x.attack(y.getName());
	y.takeDamage(x.getDamage());
	y.repairDamage(1);
	y.attack(x.getName());
	x.takeDamage(y.getDamage());

	std::cout << std::endl << "loop para acabar com energypoints" << std::endl;
	for (int i = 0; i < 10; i++)
		x.repairDamage(1);

	std::cout << std::endl << "loop para acabar com hitpoints" << std::endl;
	for (int i = 0; i < 4; i++)
		y.takeDamage(5);

	return 0;
}