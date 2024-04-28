/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:20:39 by rcastano          #+#    #+#             */
/*   Updated: 2024/04/26 11:24:56 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	this->_c = '\0';
	this->_i = 0;
	this->_f = 0.0f;
	this->_d = 0.0;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter &src)
{
	*this = src;
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter &src)
{
	if (this != &src)
	{
		this->_c = src.GetChar();
		this->_i = src.GetInt();
		this->_f = src.GetFloat();
		this->_d = src.GetDouble();
	}

	return (*this);
}


char ScalarConverter::GetChar(void) const
{
	return (this->_c);
}

int ScalarConverter::GetInt(void) const
{
	return (this->_i);
}

float ScalarConverter::GetFloat(void) const
{
	return (this->_f);
}

double ScalarConverter::GetDouble(void) const
{
	return (this->_d);
}


bool IsChar(std::string literal)
{
/* 	if ((int)literal < 0 || (int)literal > 127)
	{
		std::cout << "char: Non displayable" << std::endl;
		return false;
	}
	if else((literal > 0 && literal < 32) || literal == 127)
	{
		std::cout << "char: impossible" << std::endl;
		return false;
	} */
	if (literal.length() == 1)
	{
		std::cout << "es char" << std::endl;
		return true;
	}
	else
		return false;
}

bool Isint(std::string literal)
{
	size_t i;

	i = 0;

	if (literal[i] == '+' || literal[i] == '-')
		i++;
	while (i < literal.length())
	{
		if ( !(std::isdigit(literal[i])) )
			return false;
		i++;
	}
	std::cout << "es int" << std::endl;
	return true;
}

bool IsFloat(std::string literal)
{
	int i;
	int dots;
	int f;

	i = 0;
	dots = 0;
	f = 0;
	if (literal[i] == '+' || literal[i] == '-')
		i++;
	while (literal[i] != '\0')
	{
		if ( !(std::isdigit(literal[i])) )
		{
			if (literal[i] == '.')
				dots++;
			else if (literal[i] == 'f' && literal[i + 1] == '\0')
				f++;
			else
			{
				std::cout << "no float" << std::endl;
				return false;
			}
		}
		i++;
	}
	if ((dots == 1 || dots == 0) && f == 1)
	{
		std::cout << "es float" << std::endl;
		return true;
	}
	return false;
}

bool IsDouble(std::string literal)
{
	size_t i;
	int dots;

	i = 0;
	dots = 0;
	if (literal[i] == '+' || literal[i] == '-')
		i++;
	while (i < literal.length() )
	{
		if ( !(std::isdigit(literal[i])) )
		{
			if (literal[i] == '.')
				dots++;
			else
				return false;
		}
		i++;
	}
	if (dots == 1)
	{
		std::cout << "es double" << std::endl;
		return true;
	}
	return false;
}

void ScalarConverter::convert(std::string literal)
{

	if (IsChar(literal) == 0)
	{

	}
	if( Isint(literal) == 0)
	{

	}
	if (IsFloat(literal) == 0)
	{

	}
	if (IsDouble(literal) == 0)
	{

	}
}
