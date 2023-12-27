/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 16:13:31 by miguel            #+#    #+#             */
/*   Updated: 2021/09/09 17:55:48 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {

	std::cout << this->_type << " is wagging its tail" << std::endl;
	return  ;
}

Dog::Dog(const Dog &dog) : Animal("Dog") {

	this->_type = dog.getType();
	std::cout << this->_type << " is wagging its tail" << std::endl;
	return ;
}

Dog::~Dog(void) {

	std::cout << this->_type << " left in search of one of its toys" << std::endl;
	return ;
}

Dog	&Dog::operator=(const Dog &dog) {

	this->_type = dog.getType();
	return (*this);
}

void	Dog::makeSound(void) const {

	std::cout << "Woof" << std::endl;
}

