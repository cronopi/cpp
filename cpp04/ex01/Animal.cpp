/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 13:48:14 by roberto           #+#    #+#             */
/*   Updated: 2024/09/12 18:06:29 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal:: Animal()
{
	brain = new Brain();
	std::cout << "Animal constructor called" << std::endl;
}

Animal:: Animal(std::string type)
{
	std::cout << "Animal constructor called" << std::endl;
	this->type = type;
	brain = new Brain();
}

Animal:: Animal(const Animal &copy)
{
	this->type = copy.type;
	brain = new Brain(*copy.getBrain());
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
	delete brain;
}

Animal &Animal:: operator=(const Animal &assign)
{
	this->type = assign.type;
	brain = new Brain(*assign.getBrain());
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

Brain *Animal::getBrain() const
{
	return (this->brain);
}
