#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	const std::string name;
	const Weapon *weapon;

public:
	HumanB(const std::string &name);

	void attack(void) const;
	void setWeapon(const Weapon &weapon);
};

#endif