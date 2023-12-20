/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 13:16:08 by roberto           #+#    #+#             */
/*   Updated: 2023/12/16 12:13:03 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::~HumanB()
{
}

HumanB::HumanB(std::string name) : _name(name)
{
}

void HumanB::setWeapon(Weapon &new_weapon)
{
	this->_weapon = &new_weapon;
}

void HumanB::attack( void )
{
	if (this->_weapon != NULL)
	{
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	}
	else
		std::cout << this->_name << " you don't have a weapon" << std::endl;
}
