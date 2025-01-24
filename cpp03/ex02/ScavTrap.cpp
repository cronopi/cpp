/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 12:37:18 by roberto           #+#    #+#             */
/*   Updated: 2023/12/22 13:33:10 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_max_hit_points = 100;

	std::cout << "ScavTrap " << this->_name << " created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src): ClapTrap(src)
{
	std::cout << "ScavTrap " << this->_name << " copy created!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other)
	{
		this->_name = other._name;
		this->_hit_points = other._hit_points;
		this->_energy_points = other._energy_points;
		this->_attack_damage = other._attack_damage;
		this->_max_hit_points = other._max_hit_points;
	}
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
		if (this->_hit_points == 0)
	{
		std::cout << "ScavTrap " << this->_name << " can't attack because he is dead!" << std::endl;
		return ;
	}
	if (this->_energy_points == 0)
	{
		std::cout << "ScavTrap " << this->_name << "can't attack because he has no energy points!" << std::endl;
		return ;
	}

	this->_energy_points -= 1;
	if (this->_attack_damage == 0)
	{
		std::cout << "ScavTrap " << this->_name << "attack but deals no damage!" << std::endl;
		return ;
	}
	if(this->_attack_damage > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
}
