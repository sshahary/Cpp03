/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 20:07:26 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/19 20:09:28 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
	std::string _name;
	int _hitPoints;
	int _energyPoints;
	int _attackDamage;
	public:
	// Constructor with name parameter
	ClapTrap(const std::string& name);

	// Copy constructor
	ClapTrap(const ClapTrap& other);

	// Copy assignment operator
	ClapTrap& operator= (const ClapTrap& other);

	// Destructor
	~ClapTrap();

	// Member functions
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

};

#endif
