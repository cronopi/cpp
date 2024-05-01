/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:20:39 by rcastano          #+#    #+#             */
/*   Updated: 2024/05/01 16:45:47 by rcastano         ###   ########.fr       */
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

void	PrintChar(std::string literal)
{
    int numero;
	
	numero = std::stoi(literal); 
	char valor_ascii = static_cast<char>(numero);
    
    std::cout << "El valor ASCII correspondiente al número " << literal << " es: " << valor_ascii << std::endl;
    
	std::cout << "Char: ";
	if ( literal[0] >= 32 && literal[0] <= 126)
		std::cout << literal << std::endl;
	else
		std::cout << "non displayable" << std::endl;
}

/*
    int numero = 65; // El número que deseas convertir a su valor ASCII
    char valor_ascii = static_cast<char>(numero);
    
    std::cout << "El valor ASCII correspondiente al número " << numero << " es: " << valor_ascii << std::endl;
    
    return 0;
*/

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

void ScalarConverter::convert(std::string literal)
{
	int i;

	i = 0;
	if (IsChar(literal) == 0)
	{
		PrintChar(literal);
	}
	else if( IsInt(literal) == 0)
	{
		PrintChar(literal);
		PrintInt(literal);
		PrintFloat(literal, 2);
		PrintDouble(literal, 1);
	}
	else if (IsFloat(literal) == 0)
	{
		//PrintChar(literal);
		PrintInt(literal);
		PrintFloat(literal, 0);
		PrintDouble(literal, 0);
	}
	else if (IsDouble(literal) == 0)
	{
		//PrintChar(literal);
		PrintInt(literal);
		PrintFloat(literal, 1);
		PrintDouble(literal, 0);
	}
}
