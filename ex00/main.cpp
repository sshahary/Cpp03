/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 20:10:11 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/19 20:10:33 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

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

	// Testing copy constructor and assignment operator
	ClapTrap claptrap3(claptrap1);
	ClapTrap claptrap4 = claptrap2;

	return (0);
}
