/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 21:18:48 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/19 21:24:07 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	// Constructor with name parameter
	FragTrap(const std::string& name);

	// Copy constructor
	FragTrap(const FragTrap& other);

	// Copy assignment operator
	FragTrap& operator=(const FragTrap& other);

	// Destructor
	~FragTrap();

	// Member functions
	void attack(const std::string& target);
	void highFivesGuys();
};

#endif
