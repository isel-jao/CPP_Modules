#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

using std::cout; using std::endl;

int main(void)
{

	DiamondTrap diamond, diamond2("Rare");

	diamond.attack(diamond2.getName());
	diamond.highFiveGuys();
	diamond.guardGate();
	diamond.whoAmI();

	DiamondTrap tmp(diamond2);
	diamond2 = diamond;
	diamond2.whoAmI();

	diamond2 = tmp;
	diamond2.whoAmI();

	return 0;
}
