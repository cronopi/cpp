/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguel <miguel@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 16:07:12 by miguel            #+#    #+#             */
/*   Updated: 2021/09/13 12:09:16 by miguel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {

	std::cout << this->_type << " calmly stares at you" << std::endl;
	this->_brain = new Brain;
	return  ;
}

Cat::Cat(const Cat &cat) {

	this->_type = cat.getType();
	this->_brain = new Brain(*cat.getBrain());
	std::cout << this->_type << " calmly stares at you" << std::endl;
	return ;
}

Cat::~Cat(void) {

	delete this->_brain;
	std::cout << this->_type << " got tired of you" << std::endl;
	return ;
}

Cat	&Cat::operator=(const Cat &cat) {

	this->_type = cat.getType();
	this->_brain = new Brain(*cat.getBrain());
	return (*this);
}

Brain	*Cat::getBrain(void) const {

	return (this->_brain);
}

void	Cat::makeSound(void) const {

	std::cout << "Meow" << std::endl;
}
