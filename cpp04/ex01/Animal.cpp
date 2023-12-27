/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:48:14 by roberto           #+#    #+#             */
/*   Updated: 2023/12/25 13:49:20 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal:: Animal()
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal:: Animal(std::string type)
{
	std::cout << "Animal constructor called" << std::endl;
	this->type = type;
}

Animal:: Animal(const Animal &copy)
{
	this->type = copy.type;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal:: operator=(const Animal &assign)
{
	this->type = assign.type;
	std::cout << "Animal assignation operator called" << std::endl;
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}

void Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}
