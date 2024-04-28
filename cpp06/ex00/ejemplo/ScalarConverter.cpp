/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastano <rcastano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:20:39 by rcastano          #+#    #+#             */
/*   Updated: 2024/04/17 13:21:26 by rcastano         ###   ########.fr       */
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

void ScalarConverter::SetType( void )
{
	if ( IsChar())
	_type = CHAR;
	else if ( Isint())
	_type = INT;
	else if (IsFloat())
	_type = FLOAT;
	else if (IsDouble())
	_type = DOUBLE;
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

void	ScalarConverter::Printchar(void) const
{
	if ( !(isprint(_n)) )
	{
		std::cout << "caracter no imprimible" << std::endl;
	}
	else
	{
		std::cout << GetChar() << std::endl;
	}
}

void	ScalarConverter::Printint(void) const
{
	if ( !(std::isprint(_i)) )
	{
		std::cout << "caracter no imprimible" << std::endl;
	}
	else
	{
		std::cout << GetInt() << std::endl;
	}
}

void	ScalarConverter::PrintFloat(void) const
{
	if ( !(std::isprint(_f)) )
	{
		std::cout << "caracter no imprimible" << std::endl;
	}
	else
		std::cout << GetFloat() << std::endl;
}

void	ScalarConverter::PrintDouble(void) const
{
	if ( !(std::isprint(_d)) )
	{
		std::cout << "caracter no imprimible" << std::endl;
	}
	else
		std::cout << GetDouble() << std::endl;
}

bool    Converter::isImpossible( void ) {
    try
    {
        if ( _type == INT ) {
            _n = std::stoi( _str );
        } else if ( _type == FLOAT ) {
            _f = std::stof( _str );
        } else if ( _type == DOUBLE ) {
            _d = std::stod( _str );
        }
    }
    catch ( std::exception& e )
    {
        _impossible = true;
        return true;
    }
    return false;
}

void    Converter::convert( void ) {
    if ( isImpossible() )
        return;
    switch ( _type ) {
    case CHAR:
        _c = _str[0];
        _n = static_cast< int >( _c );
        _f = static_cast< float >( _c );
        _d = static_cast< double >( _c );
        break;
    case INT:
        _n = std::stoi( _str );
        _f = static_cast< float >( _n );
        _d = static_cast< double >( _n );
        _c = static_cast< char >( _n );
        break;
    case FLOAT:
        _f = std::stof( _str );
        _n = static_cast< int >( _f );
        _d = static_cast< double >( _f );
        _c = static_cast< char >( _f );
        break;
    case DOUBLE:
        _d = std::stod( _str );
        _n = static_cast< int >( _d );
        _f = static_cast< float >( _d );
        _c = static_cast< char >( _d );
        break;
    default:
        break;
    }
}



