/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 10:14:00 by roberto           #+#    #+#             */
/*   Updated: 2025/08/20 16:06:19 by roberto          ###   ########.fr       */
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
    srand48(time(NULL));
    for (unsigned int i = 0; i < size; i++)
    {
        addNumber(lrand48() % 100);
    }
}

int	Span::shortestSpan()
{
	int shortest = 2147483647;
	int tmp = 0;
	if (_i < 2)
	{
		std::cout << "Has introducido menos de dos numeros" << std::endl;
		throw Span::SpanException();
	}
	std::sort(_Container.begin(),_Container.end());

	std::vector<int>::iterator it = _Container.begin() + 1;
	std::vector<int>::iterator end = _Container.end();
	for (; it != end; it++)
	{
		tmp = std::abs(*it - *(it - 1));
		std::cout << *(it - 1) << " - " << *it << " = " << tmp << std::endl;
		if (tmp < shortest)
			shortest = tmp;
	}
	std::cout << "______________________"  << std::endl;
	return (shortest);
}


int Span::longestSpan()
{
	if (_i < 2)
	{
		std::cout << "Has introducido menos de dos numeros" << std::endl;
		throw Span::SpanException();
	}
	std::sort(_Container.begin(), _Container.end());

	std::cout << "Numeros ordenados: ";
	for (std::vector<int>::iterator it = _Container.begin(); it != _Container.end(); ++it)
	{
	std::cout << *it << " ";
	}
	std::cout << std::endl;

	int longest = _Container.back() - _Container.front();
	std::cout << "Longest span: " << longest << std::endl;
	std::cout << "______________________"  << std::endl;
	return (longest);
}
