/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:20:39 by rcastano          #+#    #+#             */
/*   Updated: 2024/05/02 11:15:59 by roberto          ###   ########.fr       */
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
	(void)src;
	return (*this);
}

int IsChar(std::string literal)
{
	if (literal.length() == 1)
	{
		std::cout << "es char" << std::endl;
		return 0;
	}
	else
		return 1;
}

int IsInt(std::string literal)
{
	size_t i;

	i = 0;

	if (literal[i] == '+' || literal[i] == '-')
		i++;
	while (i < literal.length())
	{
		if ( !(std::isdigit(literal[i])) )
			return 1;
		i++;
	}
	return 0;
}

int IsFloat(std::string literal)
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
				return 1;
			}
		}
		i++;
	}
	if ((dots == 1 || dots == 0) && f == 1)
	{
		return 0;
	}
	return 1;
}

int IsDouble(std::string literal)
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
				return 1;
		}
		i++;
	}
	if (dots == 1)
	{
		std::cout << "es double" << std::endl;
		return 0;
	}
	return 1;
}

void	PrintChar(char c)
{
	std::cout << "Char: ";
	if ( c >= 32 && c <= 126)
		std::cout << c << std::endl;
	else
		std::cout << "non displayable" << std::endl;
}

void	PrintInt(std::string literal)
{
	int i;

	i = 0;
	std::cout << "Int: ";
	while (literal[i] != '\0')
	{
		if (literal[i] == '.' || literal[i] == 'f')
			break;
		std::cout << literal[i];
		i++;
	}
	std::cout << std::endl;
}

void	PrintFloat(std::string literal, int number)
{
	std::cout << "Float: ";
	std::cout << literal;
	if (number == 1)
		std::cout << "f" << std::endl;
	else if (number == 2)
		std::cout << ".0f" << std::endl;
	else
		std::cout << std::endl;
}

void	PrintDouble(std::string literal, int number)
{
		int i;

	i = 0;
	std::cout << "Double: ";

	while (literal[i] != '\0')
	{
		if (literal[i] == 'f')
			break;
		std::cout << literal[i];
		i++;
	}
	if (number == 1)
		std::cout << ".0";
	std::cout << std::endl;
}

char	ConvertToChar(std::string literal)
{
		int i;
		char number;

		i = 0;
		while (literal[i] >= '0' && literal[i] <= '9')
		{
			i++;
		}
		if (literal[i] == '\0' || literal[i] == '.' || literal[i] == 'f')
		{
			number = std::atof(literal.c_str());
			if (number >= 32 || number <= 126)
			{
				return (number);
			}
		}
		return (number);
}
void ScalarConverter::convert(std::string literal)
{
	if( IsInt(literal) == 0)
	{
		char c;
		c = ConvertToChar(literal);
		PrintChar(c);
		PrintInt(literal);
		PrintFloat(literal, 2);
		PrintDouble(literal, 1);
	}
	else if (IsFloat(literal) == 0)
	{
		char c;
		c = ConvertToChar(literal);
		PrintChar(c);
		PrintInt(literal);
		PrintFloat(literal, 0);
		PrintDouble(literal, 0);
	}
	else if (IsDouble(literal) == 0)
	{
		char c;
		c = ConvertToChar(literal);
		PrintChar(c);
		PrintInt(literal);
		PrintFloat(literal, 1);
		PrintDouble(literal, 0);
	}
	else if (IsChar(literal) == 0)
	{
		PrintChar(literal[0]);
		std::cout << "Int: " << static_cast<int>(literal[0]) << std::endl;
		std::cout << "Float: " << static_cast<float>(literal[0]) << ".0f" << std::endl;
		std::cout << "Double: " << static_cast<double>(literal[0]) << ".0" << std::endl;
	}
}

