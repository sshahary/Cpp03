/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 21:19:45 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/19 21:26:10 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

	// Testing copy constructor and assignment operator for ScavTrap
	ScavTrap scavtrap3(scavtrap1);
	ScavTrap scavtrap4 = scavtrap2;

	// Testing FragTrap
	FragTrap fragtrap1("FragTrap1");
	FragTrap fragtrap2("FragTrap2");

	fragtrap1.attack("FragTrap2");
	fragtrap2.takeDamage(30);
	fragtrap2.beRepaired(20);
	fragtrap2.highFivesGuys();

	// Testing copy constructor and assignment operator for FragTrap
	FragTrap fragtrap3(fragtrap1);
	FragTrap fragtrap4 = fragtrap2;

	return 0;
}
