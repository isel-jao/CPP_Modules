#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>
#include <iostream>

class ClapTrap;

class ClapTrap
{
protected:
	std::string _name;
	unsigned _hit_points, _energy_points, _attack_damage;

public:
	// canonical functions
	ClapTrap(std::string const &name = "0x00");
	ClapTrap(ClapTrap const &obj);
	ClapTrap &operator=(ClapTrap const &obj);
	virtual ~ClapTrap();

	// getters / setters
	std::string const &getName(void) const;
	void setName(std::string const &name);

	// member functions
	virtual void attack(std::string const &target) const;
	void takeDamage(unsigned int amount) const;
	void beRepaired(unsigned int amount) const;
};

#endif