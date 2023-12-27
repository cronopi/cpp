/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:07:41 by miguel            #+#    #+#             */
/*   Updated: 2021/09/09 17:07:43 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {

	std::cout << "An WrongAnimal woke up" << std::endl;
	return  ;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {

	std::cout << type << " woke up" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal) {

	this->_type = WrongAnimal.getType();
	return ;
}

WrongAnimal::~WrongAnimal(void) {

	if (this->_type.empty())
		std::cout << "An WrongAnimal";
	else
		std::cout << this->_type;
	std::cout << " went to sleep" << std::endl;
	return;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &WrongAnimal) {

	this->_type = WrongAnimal.getType();
	return (*this);
}

const std::string	&WrongAnimal::getType(void) const {

	return (this->_type);
}

void	WrongAnimal::makeSound(void) const {

}
