/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-jao <isel-jao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:00:45 by isel-jao          #+#    #+#             */
/*   Updated: 2021/09/07 20:14:55 by isel-jao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

using std::cout;
using std::endl;

int main(void)
{

	ScavTrap defaultScavTrap;
	ScavTrap namedScavTrap("Smart ScavTrap");

	namedScavTrap.attack(defaultScavTrap.getName());
	namedScavTrap.guardGate();

	cout << "Testing copy constructor and assignment operator" << endl;

	ScavTrap dumbScavTrap("Dumb ScavTrap");
	ScavTrap copiedScavTrap = ScavTrap(dumbScavTrap);
	copiedScavTrap.attack("Random scavtrap");

	return 0;
}
