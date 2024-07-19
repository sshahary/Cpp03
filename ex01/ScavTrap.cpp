/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Svartrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshahary <sshahary@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 20:47:37 by sshahary          #+#    #+#             */
/*   Updated: 2024/07/19 20:51:23 by sshahary         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Constructor with name parameter
ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " constructed." << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "ScavTrap " << _name << " copy constructed." << std::endl;
}

// Copy assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "ScavTrap " << _name << " assigned." << std::endl;
    return *this;
}

// Destructor
ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap " << _name << " destructed." << std::endl;
}

// Attack function
void ScavTrap::attack(const std::string& target) {
    if (_hitPoints > 0 && _energyPoints > 0) {
        _energyPoints--;
        std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "ScavTrap " << _name << " cannot attack, insufficient hit points or energy points." << std::endl;
    }
}

// Guard gate function
void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode." << std::endl;
}
