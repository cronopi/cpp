/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:28:10 by roberto           #+#    #+#             */
/*   Updated: 2023/12/19 03:18:40 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	this->_fixed_point_number = 0;
}

Fixed::Fixed(const Fixed &other)
{
	//std::cout << "Copy constructor called" << std::endl;
	this->_fixed_point_number = other.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &other)
{
	//std::cout << "Copy assignment operator called" << std::endl;
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
	//std::cout << "Int constructor called" << std::endl;
	this->_fixed_point_number = nbr << this->_fractional_bits;
}

Fixed::Fixed(float const nbr)
{
	//std::cout << "Float constructor called" << std::endl;
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

std::ostream & operator<<( std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return (o);
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed & Fixed::operator++(void)
{
	this->_fixed_point_number++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->_fixed_point_number++;
	return (tmp);
}

Fixed & Fixed::operator--(void)
{
	this->_fixed_point_number--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->_fixed_point_number--;
	return (tmp);
}

bool Fixed::operator>(Fixed const & rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const & rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const & rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const & rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const & rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

const Fixed & Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed & Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return (a);
	return (b);
}
