/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 13:37:24 by roberto           #+#    #+#             */
/*   Updated: 2024/09/11 21:34:42 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Woof Woof" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->type = copy.type;
}

WrongCat &WrongCat::operator=(const WrongCat &assign)
{
	this->type = assign.type;
	std::cout << "WrongCat assignation operator called" << std::endl;
	return (*this);
}
