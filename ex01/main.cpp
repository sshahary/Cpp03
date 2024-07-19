/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 20:51:31 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/19 20:52:13 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap claptrap1("ClapTrap1");
	ClapTrap claptrap2("ClapTrap2");

	claptrap1.attack("ClapTrap2");
	claptrap2.takeDamage(3);
	claptrap2.beRepaired(5);

	claptrap2.attack("ClapTrap1");
	claptrap1.takeDamage(4);
	claptrap1.beRepaired(2);

	// Testing ScavTrap
	ScavTrap scavtrap1("ScavTrap1");
	ScavTrap scavtrap2("ScavTrap2");

	scavtrap1.attack("ScavTrap2");
	scavtrap2.takeDamage(20);
	scavtrap2.beRepaired(15);
	scavtrap2.guardGate();

	// Testing copy constructor and assignment operator
	ScavTrap scavtrap3(scavtrap1);
	ScavTrap scavtrap4 = scavtrap2;

	return 0;
}
