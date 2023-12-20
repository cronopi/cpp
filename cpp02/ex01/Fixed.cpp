/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:28:10 by roberto           #+#    #+#             */
/*   Updated: 2023/12/19 14:05:38 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_fixed_point_number = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->_fixed_point_number = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->_fixed_point_number = other.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->_fixed_point_number);
}

void Fixed::setRawBits(int const number)
{
	this->_fixed_point_number = number;
}

Fixed::Fixed(int const nbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixed_point_number = nbr << this->_fractional_bits;
}

Fixed::Fixed(float const nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixed_point_number = roundf(nbr * (1 << this->_fractional_bits));
}

float Fixed::toFloat(void) const
{
	return ((float)this->_fixed_point_number / (1 << this->_fractional_bits));
}

int Fixed::toInt(void) const
{
	return (this->_fixed_point_number >> this->_fractional_bits);
}

std::ostream & operator<<(std::ostream & fd, Fixed const & rhs)
{
	fd << rhs.toFloat();
	return (fd);
}


