/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 17:09:55 by miguel            #+#    #+#             */
/*   Updated: 2021/09/09 17:09:55 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {

	std::cout << this->_type << " calmly stares at you" << std::endl;
	return  ;
}

WrongCat::WrongCat(const WrongCat &WrongCat) {

	this->_type = WrongCat.getType();
	std::cout << this->_type << " calmly stares at you" << std::endl;
	return ;
}

WrongCat::~WrongCat(void) {

	std::cout << this->_type << " got tired of you" << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(const WrongCat &WrongCat) {

	this->_type = WrongCat.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const {

	std::cout << "Meow" << std::endl;
}
