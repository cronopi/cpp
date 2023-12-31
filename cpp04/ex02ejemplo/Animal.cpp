/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 13:41:54 by miguel            #+#    #+#             */
/*   Updated: 2021/09/09 19:57:23 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal(void) : _brain(NULL) {

	std::cout << "An animal woke up" << std::endl;
	return  ;
}

Animal::Animal(std::string type) : _type(type), _brain(NULL) {

	std::cout << type << " woke up" << std::endl;
	return ;
}

Animal::Animal(const Animal &animal) {

	this->_type = animal.getType();
	this->_brain = new Brain(*animal.getBrain());
	return ;
}

Animal::~Animal(void) {

	if (this->_brain)
		delete this->_brain;
	if (this->_type.empty())
		std::cout << "An animal";
	else
		std::cout << this->_type;
	std::cout << " went to sleep" << std::endl;
	return;
}

Animal	&Animal::operator=(const Animal &animal) {

	this->_type = animal.getType();
	this->_brain = new Brain(*animal.getBrain());
	return (*this);
}

const std::string	Animal::getType(void) const {

	return (this->_type);
}

Brain	*Animal::getBrain(void) const {

	return (this->_brain);
}
