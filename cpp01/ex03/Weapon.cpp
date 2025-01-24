/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 12:34:58 by roberto           #+#    #+#             */
/*   Updated: 2024/07/26 11:16:31 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Weapon created" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Weapon destroyed" << std::endl;
}

Weapon::Weapon(std::string type) : _type(type)
{
}

const std::string Weapon::getType() const
{
	return (this->_type);
}

void Weapon::setType(std::string new_type)
{
	this->_type = new_type;
}
