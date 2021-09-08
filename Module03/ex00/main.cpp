/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isel-jao <isel-jao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 13:04:54 by isel-jao          #+#    #+#             */
/*   Updated: 2021/09/07 14:05:00 by isel-jao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main(void)
{
	ClapTrap anonymous;
	ClapTrap named("i am you");
	ClapTrap clone(named);
	clone.setName("clone");

	anonymous.attack(named.getName());
	named.takeDamage(10);
	clone.beRepaired(10);
	return 0;
}
