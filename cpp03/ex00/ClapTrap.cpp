/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 16:57:26 by roberto           #+#    #+#             */
/*   Updated: 2023/12/20 18:02:01 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

const std::string	ClapTrap::_class_name = "ClapTrap";
const unsigned int	ClapTrap::_class_hp = 10;
const unsigned int	ClapTrap::_class_energy_points = 10;
const unsigned int	ClapTrap::_class_action_energy_cost = 1;
const unsigned int	ClapTrap::_class_repair_points = 0;
const unsigned int	ClapTrap::_class_attack_damage = 0;

// Constructor and destructor

ClapTrap::ClapTrap( std::string name)
{
	this->_name = name;

	std::string class_name = this->get_class_name();

	this->_hit_points = ClapTrap::_class_hp;
	this->_energy_points = ClapTrap::_class_energy_points;
	this->_attack_damage = ClapTrap::_class_attack_damage;

	std::cout << "ClapTrap " << this->_name << " created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
{
	std::string		name;
	std::string		class_name;

	class_name = this->get_class_name();
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_damage = src._attack_damage;
	std::cout << class_name << " copy "  << this->_name << "created\n";
}

ClapTrap::~ClapTrap()
{
	std::string class_name;

	class_name = this->get_class_name();
	std::cout << class_name << " " << this->_name << "destroyed\n";
	std::cout << class_name << " " << this->get_class_name() << "destroyed\n";

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

//static getters

std::string		ClapTrap::get_class_name( void )
{
	return (ClapTrap::_class_name);
}

unsigned int	ClapTrap::get_class_hp( void )
{
	return (ClapTrap::_class_hp);
}

unsigned int	ClapTrap::get_class_energy_points( void )
{
	return (ClapTrap::_class_energy_points);
}

unsigned int	ClapTrap::get_class_attack_damage( void )
{
	return (ClapTrap::_class_attack_damage);
}

unsigned int	ClapTrap::get_class_repair_points( void )
{
	return (ClapTrap::_class_repair_points);
}

unsigned int	ClapTrap::get_class_action_energy_cost( void )
{
	return (ClapTrap::_class_action_energy_cost);
}
//setters

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::setHitPoints(int hit_points)
{
	this->_hit_points = hit_points;
}

void ClapTrap::setEnergyPoints(int energy_points)
{
	this->_energy_points = energy_points;
}

void ClapTrap::setAttackDamage(int attack_damage)
{
	this->_attack_damage = attack_damage;
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
	std::string class_name = this->get_class_name();
	std::string name = this->_name;
	unsigned int hp = this->get_class_hp();
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
	if (new_health >= hp)
	{
		this->_hit_points = hp;
		this->_energy_points -= 1;
		std::cout << "ClapTrap " << name << "is fully healed!" << std::endl;
		return ;
	}
	else if (new_health <= hp)
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
