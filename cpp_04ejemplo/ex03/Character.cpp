/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 12:49:15 by miguel            #+#    #+#             */
/*   Updated: 2021/09/12 11:55:53 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(const std::string &name) : ICharacter(), _name(name), _inventory() {

	return ;
}

Character::Character(const Character &character) : ICharacter() {

	*this = character;
	return ;
}

Character::~Character(void) {

	for (int i = 0; i < CHARACTER_INVENTORY_CAP; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	return ;
}

Character &Character::operator=(const Character &character) {

	AMateria	*tmp;

	for (int i = 0; i < CHARACTER_INVENTORY_CAP; i++) {
		tmp = character.getNMateria(i);
		if (tmp)
			this->_inventory[i] = tmp->clone();
	}
	this->_name = character.getName();
	return (*this);
}

const std::string	&Character::getName(void) const {

	return (this->_name);
}

AMateria	*Character::getNMateria(const int n) const {

	return (this->_inventory[n]);
}

void	Character::equip(AMateria *m) {

	for (int i = 0; i < CHARACTER_INVENTORY_CAP; i++) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
			break ;
		}
	}
}

void	Character::unequip(int idx) {

	if (idx >= CHARACTER_INVENTORY_CAP)
		return ;
	this->_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target) {

	if (idx >= CHARACTER_INVENTORY_CAP || !this->_inventory[idx])
		return ;
	//std::cout << "<" << this->_name << "> ";
	this->_inventory[idx]->use(target);
}
