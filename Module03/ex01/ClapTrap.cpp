#include "ClapTrap.hpp"

// canonical functions

ClapTrap::ClapTrap(string const &name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	cout << "ClapTrap \"" << _name << "\" created" << endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	*this = obj;
	cout << "a ClapTrap clone of  \"" << _name << "\" created" << endl;
};

ClapTrap &ClapTrap::operator=(ClapTrap const &obj)
{
	if (this != &obj)
	{
		_name = obj._name;
		_hit_points = obj._hit_points;
		_energy_points = obj._energy_points;
		_attack_damage = obj._attack_damage;
	}
	return *this;
}

ClapTrap::~ClapTrap(void)
{
	cout << "ClapTrap \"" << _name << "\" destroyed" << endl;
}

// getters / setters

void ClapTrap::setName(const string &name) { _name = name; }

string const &ClapTrap::getName(void) const { return _name; }

// member functions

void ClapTrap::attack(string const &target) const
{
	cout << "ClapTrap \"" << _name << "\" attacks \"" << target << "\", causing " << _attack_damage << " points of damage!" << endl;
}

void ClapTrap::takeDamage(unsigned int amount) const
{
	cout << "Oof! ClapTrap \"" << _name << "\" just took " << amount << " points of damage!" << endl;
}

void ClapTrap::beRepaired(unsigned int amount) const
{
	cout << "Yay! ClapTrap \"" << _name << "\" healed for " << amount << " energy points." << endl;
}