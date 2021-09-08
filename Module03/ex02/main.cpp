#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{
	FragTrap ft;
	ft.highFiveGuys();
	FragTrap f1("FG-1"), f2 = FragTrap(f1);
	f2.setName("FG-2");
	f1.attack(f2.getName());
	f1 = f2;
	return 0;
}
