/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roberto <roberto@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 10:14:00 by roberto           #+#    #+#             */
/*   Updated: 2024/07/04 10:51:58 by roberto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::~Span()
{
}

Span::Span(const Span &copy)
{
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
	_numbers_lenght = numbers_lenght;
	_numbers = new unsigned int[numbers_lenght];
	_i = 0;
}
const char * Span::SpanException::what() const throw()
{
	return ("Span is already full");
}

void Span::addNumber(int nbr)
{
	if (_i >= _numbers_lenght)
	{
		throw Span::SpanException();
	}
	_numbers[_i] = nbr;
	_i++;
}

int	Span::shortestSpan() // _numbers[5] = {9, 2, 7, 1, 5}
{
	int shortest = 2147483647;
	int tmp;
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < _numbers_lenght)
	{
		while (j < _numbers_lenght)
		{
			if (i == j)
				j++;
			else
			{
				tmp = _numbers[i] - _numbers[j];
				if (tmp < 0)
					tmp = tmp * -1;
				std::cout << _numbers[i] << " - " << _numbers[j] << " = " << tmp << std::endl;
				if (tmp < shortest)
					shortest = tmp;
				j++;
			}
		}
		std::cout << "____________________________" << std::endl;
		j = 0;
		i++;
	}
	return (shortest);
}

int Span::longestSpan()
{
	int longest = 0;
	int tmp;
	unsigned int i = 0;
	unsigned int j = 0;

	while (i < _numbers_lenght)
	{
		while (j < _numbers_lenght)
		{
			if (i == j)
				j++;
			else
			{
				tmp = _numbers[i] - _numbers[j];
				if (tmp < 0)
					tmp = tmp * -1;
				std::cout << _numbers[i] << " - " << _numbers[j] << " = " << tmp << std::endl;
				if (tmp > longest)
					longest = tmp;
				j++;
			}
		}
		std::cout << "____________________________" << std::endl;
		j = 0;
		i++;
	}
	return (longest);
}
