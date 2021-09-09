#include <iostream>
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

using std::cout;
using std::endl;
using std::string;

DiamondTrap::DiamondTrap(string const &name) : ClapTrap(name + "_clap_name")
{
	_hit_points = 100 /* FragTrap */;
	_energy_points = 50; /* DiamondTrap */
	_attack_damage = 30 /* FragTrap */;
	cout << "DiamondTrap \"" << _name << "\" created" << endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &obj)
{
	*this = obj;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	if (this != &rhs)
	{
		this->ClapTrap::operator=(rhs);
		_name = rhs._name;
	}

	return *this;
}

void DiamondTrap::whoAmI(void) const
{
	cout << _name << " (" << ClapTrap::_name << ")" << endl;
}

DiamondTrap::~DiamondTrap()
{
	cout << "DiamondTrap \"" << _name << "\" destroyed" << endl;
}