/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:20:39 by rcastano          #+#    #+#             */
/*   Updated: 2024/04/16 15:34:30 by rcastano         ###   ########.fr       */
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

ScalarConverter::ScalarConverter &operator=(const ScalarConverter &src)
{
}

void ScalarConverter::GetChar(void) const
{
	return (this->_c);
}

void ScalarConverter::GetInt(void) const
{
	return (this->_i);
}

void ScalarConverter::GetFloat(void) const
{
	return (this->_f);
}

void ScalarConverter::GetDouble(void) const
{
	return (this->_d);
}

void ScalarConverter::GetString(void) const
{
	return (this->_str);
}

void ScalarConverter::GetType(void) const
{
	return (this->_type);
}

char	ScalarConverter::SetChar(char c)
{
	this->_c = c;
}

int ScalarConverter::SetInt(int i)
{
	this->_i = i;
}

float ScalarConverter::SetFloat(float f)
{
	this->_f = f;
}

double ScalarConverter::SetDouble(double d);
{
	this->_d = d;
}

std::string ScalarConverter::SetString(std::string str)
{
	this->_str = str;
}

bool ScalarConverter::IsChar(void) const
{
	if ((_str >= 0 && _str <= 127) && _str.lengh() == 1 && std::isprint(str[0]))
		return True;
	else
		return False;
}

bool ScalarConverter::Isint(void) const
{
	int i;

	i = 0;

	if (_str[i] == '+' || _str[i] == '-')
		i++;
	while (i < (int) _str.lengh())
	{
		if ( !(std::isdigit(str[0])) )
			return False;
		i++;
	}
	return True;
}

bool ScalarConverter::IsFloat(void) const
{
	int i;
	int dots;

	i = 0;
	dots = 0;
	if (_str[i] == '+' || _str[i] == '-')
		i++;
	while (_str[i] != '\0')
	{
		if ( !(std::isdigit(str[i])) )
		{
			if (_str[i] == '.')
				dots++;
			else
				return False;
		}
		i++;
	}
	if (dots == 1 && str[i] == 'f') //quizá sea i - 1
		return True;
	return False;
}

bool ScalarConverter::IsDouble(void) const
{
	int i;
	int dots;

	i = 0;
	dots = 0;
	if (_str[i] == '+' || _str[i] == '-')
		i++;
	while (i < (int)_str.lengh() )
	{
		if ( !(std::isdigit(str[i])) )
		{
			if (_str[i] == '.')
				dots++;
			else
				return False;
		}

		i++;
	}
	if (dots == 1)
			return True;
	return False;
}

