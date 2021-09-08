#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class ClapTrap;

class ClapTrap
{
private:
	string _name;
	unsigned _hit_points, _energy_points, _attack_damage;

public:
	// canonical functions
	ClapTrap(string const &name = "0x00");
	ClapTrap(ClapTrap const &obj);
	ClapTrap &operator=(ClapTrap const &obj);
	~ClapTrap();

	// getters / setters
	string const &getName(void) const;
	void setName(string const &name);

	// member functions
	void attack(string const &target) const;
	void takeDamage(unsigned int amount) const;
	void beRepaired(unsigned int amount) const;
};

#endif