#include "ScavTrap.hpp"

/*
**  canonical functions
*/

ScavTrap::ScavTrap(string const &name) : ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;

	cout << "ScavTrap \"" << _name << "\" created" << endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj)
{
	*this = obj;
	std::cout << "a ScavTrap clone of  \"" << _name << "\" created" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &obj)
{
	ClapTrap::operator=(obj);
	return *this;
}

ScavTrap::~ScavTrap()
{
	cout << "ScavTrap \"" << _name << "\" destroyed" << endl;
}

/*
**  member functions
*/

void ScavTrap::attack(const std::string &target) const
{
	cout << "Wooooooww! ScavTrap \"" << _name << "\" punched \"" << target << "\" and dealt " << _attack_damage << " damage points to it!" << endl;
}

void ScavTrap::guardGate() const
{
	cout << "\"" << _name << "\" has activated _GATE KEEPER_ mode!" << endl;
}
