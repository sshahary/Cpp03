/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 21:18:23 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/19 21:18:25 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
	// Constructor with name parameter
	ScavTrap(const std::string& name);

	// Copy constructor
	ScavTrap(const ScavTrap& other);

	// Copy assignment operator
	ScavTrap& operator=(const ScavTrap& other);

	// Destructor
	~ScavTrap();

	// Member functions
	void attack(const std::string& target);
	void guardGate();
};

#endif
