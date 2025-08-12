/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 10:14:00 by roberto           #+#    #+#             */
/*   Updated: 2025/08/12 14:02:15 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	_lenght = 0;
	_i = 0;
}

Span::~Span()
{
}

Span::Span(const Span &copy)
{
	std::cout << " Span copy constructor called" << std::endl;
	_i = copy._i;
	_lenght = copy._lenght;
	*this = copy;
}

Span &Span::operator=(const Span &copy)
{
	if (this != &copy)
	{
		*this = copy;
	}
	return (*this);
}

Span::Span(unsigned int numbers_lenght)
{
	_lenght = numbers_lenght + 1;
	_i = 0;
	this->_Container.reserve(_lenght);
}

const char * Span::SpanException::what() const throw()
{
	return ("por favor, introduzca numeros validos");
}

void Span::addNumber(int nbr)
{
	if (_i >= _lenght)
	{
		std::cout <<"Has introducido mas numeros de los que puedes almacenar " << std::endl;
		throw Span::SpanException();
	}
	this->_Container.push_back(nbr);
	this->_i++;
}

void Span::fill(unsigned int size)
{
	srand(time(NULL));
	for (unsigned int i = 0; i < size; i++)
        {
            addNumber(rand() % 70);
        }
}

int	Span::shortestSpan() //se compara el numero consigo mismo, tambien en longest
{
	int shortest = 2147483647;
	int tmp;
	unsigned int i = 0;
	unsigned int j = 0;

	if (_i < 2)
	{
		std::cout << "cantidad de numeros introducidos: " << _i<<  std::endl;
		std::cout << "Al menos debes introducir dos numeros"<< std::endl;
		throw Span::SpanException();
	}
	for (i = 0; i < _Container.size(); i++)
	{
		for (j = 0; j < _Container.size(); j++)
		{
			if (i != j)
				tmp = std::abs(_Container[i] - _Container[j]);
			//std::cout << _Container[i] << " - " << _Container[j] << " = "<<  (_Container[i] - _Container[j]) << std::endl;
			if (tmp < shortest)
				shortest = tmp;
		}
		//std::cout << "______________________"  << std::endl;
	}
	return (shortest);
}

int Span::longestSpan()
{
	int longest = 0;
	int tmp;
	unsigned int i = 0;
	unsigned int j = 0;

	tmp = 0;
	if (_i < 2)
	{
        throw Span::SpanException();
	}

	for (i = 0; i < _Container.size(); i++)
	{
		for (j = 0; j < _Container.size(); j++)
		{
			if (i != j)
				tmp = std::abs(_Container[i] - _Container[j]);
			std::cout << _Container[i] << " - " << _Container[j] << " = "<<  (_Container[i] - _Container[j]) << std::endl;
			if (tmp > longest)
			{
				//std::cout << "longest: " << tmp << std::endl;
				longest = tmp;
			}
		}
		//std::cout << "______________________"  << std::endl;
	}
	return (longest);
}
