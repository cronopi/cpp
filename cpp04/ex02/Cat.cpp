/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 14:44:07 by roberto           #+#    #+#             */
/*   Updated: 2024/09/16 18:29:34 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "meooooow" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	brain = new Brain(*copy.getBrain());
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &assign)
{
	this->type = assign.type;
	brain = new Brain(*assign.getBrain());
	std::cout << "Cat assignation operator called" << std::endl;
	return (*this);
}

Brain *Cat::getBrain() const
{
	return (this->brain);
}
