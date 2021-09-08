/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-jao <isel-jao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 23:32:18 by iseljao           #+#    #+#             */
/*   Updated: 2021/09/07 15:11:06 by isel-jao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// canonical functions

ClapTrap::ClapTrap(std::string const &name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap \"" << _name << "\" created" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	*this = obj;
	std::cout << "a ClapTrap clone of  \"" << _name << "\" created" << std::endl;
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
	std::cout << "ClapTrap \"" << _name << "\" destroyed" << std::endl;
}

// getters / setters

void ClapTrap::setName(const std::string &name) { _name = name; }

std::string const &ClapTrap::getName(void) const { return _name; }

// member functions

void ClapTrap::attack(std::string const &target) const
{
	std::cout << "ClapTrap \"" << _name << "\" attacks \"" << target << "\", causing " << _attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) const
{
	std::cout << "Oof! ClapTrap \"" << _name << "\" just took " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) const
{
	std::cout << "Yay! ClapTrap \"" << _name << "\" healed for " << amount << " energy points." << std::endl;
}