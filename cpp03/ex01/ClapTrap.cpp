/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:57:26 by roberto           #+#    #+#             */
/*   Updated: 2023/12/22 13:33:58 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructor and destructor

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap( std::string name )
{
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	this->_max_hit_points = 10;

	std::cout << "ClapTrap " << this->_name << " created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::string		name;

	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	this->_max_hit_points =src._max_hit_points;

	std::cout << "ClapTrap " << " copy "  << this->_name << "created!\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->getName() << " destroyed\n";
}
//getters
std::string ClapTrap::getName(void)
{
	return (this->_name);
}

int ClapTrap::getHitPoints(void)
{
	return (this->_hit_points);
}

int ClapTrap::getEnergyPoints(void)
{
	return (this->_energy_points);
}

int ClapTrap::getAttackDamage(void)
{
	return (this->_attack_damage);
}
//setters
void ClapTrap::setAttackDamage(unsigned int amount)
{
	this->_attack_damage = amount;
}
//methods
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is already dead!" << std::endl;
		return ;
	}
	if (amount >= this->_hit_points)
	{
		this->_hit_points = 0;
		std::cout << "ClapTrap " << this->_name << " died!" << std::endl;
		return ;
	}
	else
	{
		this->_hit_points -= amount;
		std::cout << "ClapTrap " << this->_name << " takes" << amount << "points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::string class_name = this->getName();
	std::string name = this->_name;
	unsigned int new_health;

	if (this->_hit_points == 0)
	{
		std::cout << "ClapTrap " << name << " is dead!" << std::endl;
		return ;
	}
	if (this->_energy_points == 0)
	{
		std::cout << "ClapTrap " << name << " has no energy points!" << std::endl;
		return ;
	}
	new_health = this->_hit_points + amount;
	if (new_health >= this->_max_hit_points)
	{
		this->_hit_points = this->_max_hit_points;
		this->_energy_points -= 1;
		std::cout << "ClapTrap " << name << "is fully healed!" << std::endl;
		return ;
	}
	else if (new_health <= this->_max_hit_points)
	{
		this->_hit_points = new_health;
		this->_energy_points -= 1;
		std::cout << "ClapTrap " << name << " healed!" << std::endl;
		std::cout << "ClapTrap " << name << "has " << this->_hit_points << " points of health! " << std::endl;
		return ;
	}
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hit_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " can't attack because he is dead!" << std::endl;
		return ;
	}
	if (this->_energy_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << "can't attack because he has no energy points!" << std::endl;
		return ;
	}

	this->_energy_points -= 1;
	if (this->_attack_damage == 0)
	{
		std::cout << "ClapTrap " << this->_name << "attack but deals no damage!" << std::endl;
		return ;
	}
	if(this->_attack_damage > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << "ClapTrap " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	}
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
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
