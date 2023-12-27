/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 16:13:31 by miguel            #+#    #+#             */
/*   Updated: 2021/09/13 12:09:50 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {

	std::cout << this->_type << " is wagging its tail" << std::endl;
	this->_brain = new Brain;
	return  ;
}

Dog::Dog(const Dog &dog) : Animal("Dog") {

	this->_type = dog.getType();
	this->_brain = new Brain(*dog.getBrain());
	std::cout << this->_type << " is wagging its tail" << std::endl;
	return ;
}

Dog::~Dog(void) {

	delete this->_brain;
	std::cout << this->_type << " left in search of one of its toys" << std::endl;
	return ;
}

Dog	&Dog::operator=(const Dog &dog) {

	this->_type = dog.getType();
	this->_brain = new Brain(*dog.getBrain());
	return (*this);
}

Brain	*Dog::getBrain(void) const {

	return (this->_brain);
}

void	Dog::makeSound(void) const {

	std::cout << "Woof" << std::endl;
}

