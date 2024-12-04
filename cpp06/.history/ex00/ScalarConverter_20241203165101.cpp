/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:20:39 by rcastano          #+#    #+#             */
/*   Updated: 2024/12/03 16:51:01 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
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
	if (literal == "nanf" || literal == "+inff" || literal == "-inff")
	{
		return 0;
	}
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
	if (literal == "nan" || literal == "+inf" || literal == "-inf")
		return 0;
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
		return 0;
	}
	return 1;
}

void	PrintChar(char c)
{
	std::cout << "Char: ";
	if (c == '?')
		std::cout << " impossible" << std::endl;
	else if ( c >= 32 && c <= 126)
		std::cout << c << std::endl;
	else
		std::cout << "non displayable" << std::endl;
}

void	PrintInt(int literal)
{
	if (literal == INT_MIN)
		std::cout << "Int: impossible" << std::endl;
	else
		std::cout << "Int: "<< literal << std::endl;
}

void	PrintFloat(float literal)
{
	if (literal == INT_MIN)
		std::cout << "Float: impossible" << std::endl;
	else if (std::isnan(literal))
		std::cout << "Float: " << literal << std::endl;
	else if (std::isinf(literal))
		std::cout << "Float: " << literal << std::endl;
	else if (literal != std::floor(literal))
		std::cout << "Float: " << literal  << "f" << std::endl;
	else
		std::cout << "Float: " << std::fixed << std::setprecision(1) << literal << "f"<< std::endl;
}

void	PrintDouble(double literal)
{
	if (literal == INT_MIN)
		std::cout << "Double: impossible" << std::endl;
	else if (std::isnan(literal))
		std::cout << "Double: " << literal << std::endl;
	else if (std::isinf(literal))
		std::cout << "Double: " << literal  << std::endl;
	else if (literal != std::floor(literal))
        std::cout << "Double: " << literal << std::endl;
	else
		std::cout << "Double: " << std::fixed << std::setprecision(1) << literal << std::endl;
}

char	ConvertToChar(std::string literal)
{
		int i;
		char number;
		int num;

		num = 0;
		i = 0;
		number = '\0';
		if (INT_MAX < std::atof(literal.c_str()) || INT_MIN > std::atof(literal.c_str()))
			return ('?');
		if (literal == "nan" || literal == "+inf" || literal == "-inf")
		{
			return ('?');
		}
		else if (literal == "nanf" || literal == "+inff" || literal == "-inff")
		{
			return ('?');
		}
		while (literal[i] >= '0' && literal[i] <= '9')
		{
			i++;
		}
		if (literal[i] == '\0' || literal[i] == '.' || literal[i] == 'f')
		{
			number = std::atof(literal.c_str());
			num = std::atof(literal.c_str());
			if (num < 0 || num > 127)
				return ('?');
		}
		return (number);
}

int ConvertToInt(std::string literal)
{
	if (INT_MAX < std::atof(literal.c_str()) || INT_MIN > std::atof(literal.c_str()))
	{
		return (INT_MIN);
	}
	if (literal == "nan" || literal == "+inf" || literal == "-inf")
	{
		return (INT_MIN);
	}
	if (literal == "nanf" || literal == "+inff" || literal == "-inff")
	{
		return (INT_MIN);
	}
	return (std::atoi(literal.c_str()));
}

float ConvertToFloat(std::string literal)
{
	if (INT_MAX < std::atof(literal.c_str()) || INT_MIN > std::atof(literal.c_str()))
	{
		return (INT_MIN);
	}
	else if (literal == "nanf" || literal == "nan")
	{
		return (float(NAN));
	}
	else if (literal == "+inff" || literal == "+inf")
	{
		std::cout << literal << std::endl;
		return (INFINITY);
	}
	else if (literal == "-inff" || literal == "-inf")
	{
		std::cout << literal << std::endl;
		return (-INFINITY);
	}
	return (std::atof(literal.c_str()));
}

double ConvertToDouble(std::string literal)
{
	if (INT_MAX < std::atof(literal.c_str()) || INT_MIN > std::atof(literal.c_str()))
	{
		return (INT_MIN);
	}
	else if (literal == "nanf" || literal == "nan")
	{
		return (float(NAN));
	}
	else if (literal == "+inff" || literal == "+inf")
	{
		std::cout << literal << std::endl;
		return (INFINITY);
	}
	else if (literal == "-inff" || literal == "-inf")
	{
		std::cout << literal << std::endl;
		return (-INFINITY);
	}
	return (std::atof(literal.c_str()));
}

void ScalarConverter::convert(std::string literal)
{
	if( IsInt(literal) == 0)
	{
		char c;
		int	i;
		float f;
		double d;
		c = ConvertToChar(literal);
		i = ConvertToInt(literal);
		f = ConvertToFloat(literal);
		d = ConvertToDouble(literal);
		PrintChar(c);
		PrintInt(i);
		PrintFloat(f);
		PrintDouble(d);

		std::cout << "Float: " << static_cast<float>(i)  << std::endl;
		std::cout << "Double: " << static_cast<double>(i)  << std::endl;
	}
	else if (IsChar(literal) == 0)
	{
		PrintChar(literal[0]);
		std::cout << "Int: " << static_cast<int>(literal[0]) << std::endl;
		std::cout << "Float: " << static_cast<float>(literal[0]) << ".0f" << std::endl;
		std::cout << "Double: " << static_cast<double>(literal[0]) << ".0" << std::endl;
	}
	else if (IsFloat(literal) == 0)
	{
		char c;
		int	i;
		float f;
		double d;
		c = ConvertToChar(literal);
		i = ConvertToInt(literal);
		f = ConvertToFloat(literal);
		d = ConvertToDouble(literal);
		PrintChar(c);
		PrintInt(i);
		PrintFloat(f);
		PrintDouble(d);
	}
	else if (IsDouble(literal) == 0)
	{
		char c;
		int	i;
		float f;
		double d;
		c = ConvertToChar(literal);
		i = ConvertToInt(literal);
		f = ConvertToFloat(literal);
		d = ConvertToDouble(literal);
		PrintChar(c);
		PrintInt(i);
		PrintFloat(f);
		PrintDouble(d);
	}
	else
	{
		std::cout << "conversion does not make any sense" << std::endl;
	}
}
