#include <iostream>
#include "FragTrap.hpp"

using std::cout;
using std::endl;
using std::string;

FragTrap::FragTrap(string const &name) : ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;

	cout << "FragTrap \"" << _name << "\" created" << endl;
}

FragTrap::FragTrap(FragTrap const &obj)
{
	*this = obj;
	cout << "a FragTrap clone of \"" << _name << "\" created" << endl;
}

FragTrap &FragTrap::operator=(FragTrap const &obj)
{
	ClapTrap::operator=(obj);
	return *this;
}

FragTrap::~FragTrap(void)
{
	cout << "FragTrap \"" << _name << "\" destroyed" << endl;
}

void FragTrap::highFiveGuys(void) const
{
	cout << "\"" << _name << "\" shouts: GIVE ME FIVE GUYS!!" << endl;
}
